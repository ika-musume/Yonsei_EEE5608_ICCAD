#include <verilated.h>
#include "Vfir.h"
#include <fstream>
#include <cmath>
#include <complex>
#include <vector>
#include <cstdint>
#include <algorithm>

//frequency point to dump all in/out data(normalized omega/pi)
constexpr double TARGET_WNORM     = 0.100;

//sweep parameters
constexpr double WNORM_START      = 0.0;
constexpr double WNORM_END        = 1.000001;
constexpr double WNORM_STEP       = 0.00005;

//sample counts
constexpr int SKIP_SAMPLES        = 4096;
constexpr int MEASURE_SAMPLES     = 32768;
constexpr int TOTAL_SAMPLES       = SKIP_SAMPLES + MEASURE_SAMPLES;

//signal parameters
constexpr double PI              = std::acos(-1.0);
constexpr int16_t AMP12          = static_cast<int16_t>(1.0 * ((1 << 11) - 1)); //total input signal amplitude

//Phase cleanup thresholds
constexpr double MAG_DB_THRESHOLD = -55.0;

/*
    RUN COMMANDS
    COMPILE: verilator --cc fir.v --exe tb_fir.cpp -CFLAGS "-std=c++17"
    BUILD: make -C obj_dir -j -f Vfir.mk Vfir
    RUN: obj_dir/Vfir
*/

int16_t ref_fir(int16_t din) {
    static int16_t coeffs[27] = {
        -1, // 0b11111111'11111111
         4, // 0b00000000'00000100
         0, // 0b00000000'00000000
        -6, // 0b11111111'11111010
         1, // 0b00000000'00000001
         8, // 0b00000000'00001000
        -4, // 0b11111111'11111100
        -9, // 0b11111111'11110111
        10, // 0b00000000'00001010
        11, // 0b00000000'00001011
       -23, // 0b11111111'11101001
       -12, // 0b11111111'11110100
        79, // 0b00000000'01001111
       140, // 0b00000000'10001100
        79, // 0b00000000'01001111
       -12, // 0b11111111'11110100
       -23, // 0b11111111'11101001
        11, // 0b00000000'00001011
        10, // 0b00000000'00001010
        -9, // 0b11111111'11110111
        -4, // 0b11111111'11111100
         8, // 0b00000000'00001000
         1, // 0b00000000'00000001
        -6, // 0b11111111'11111010
         0, // 0b00000000'00000000
         4, // 0b00000000'00000100
        -1  // 0b11111111'11111111
    };
    static int16_t shift_reg[27] = {0};
    
    //mul-acc
    int16_t acc = 0;
    for (int i = 0; i < 27; i++) {
        acc += (shift_reg[i] * coeffs[i]);
    }

    //shift
    for (int i = 26; i > 0; i--) {
        shift_reg[i] = shift_reg[i-1];
    }
    shift_reg[0] = din;

    return static_cast<int16_t>(acc);
}

//read dout_fullrange and convert it to signed 16
inline int16_t read_dout_fullrange_signed(Vfir* top) {
    uint16_t raw = static_cast<uint16_t>(top->dout_fullrange) & 0x1FFF;
    if (raw & (1 << 12)) {
        raw |= 0xE000;
    }
    return static_cast<int16_t>(raw);
}

//Clock tick
inline void tick(Vfir* top) {
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vfir* top = new Vfir;

    //give 2-cycle reset
    top->rst_n = 0;
    tick(top);
    tick(top);
    top->rst_n = 1;

    //calculate number of frequency points
    int num_pts = static_cast<int>((WNORM_END - WNORM_START)/WNORM_STEP) + 1;

    //gain/phase array
    std::vector<double> freq_norm(num_pts), gain_lin(num_pts), gain_db(num_pts), phase_wrapped(num_pts);

    //sweep freq
    for(int idx = 0; idx < num_pts; ++idx) {
        double wnorm = WNORM_START + idx * WNORM_STEP;
        double w = wnorm * PI;
        freq_norm[idx] = wnorm;

        //generate input and capture output
        std::vector<int16_t> x12(TOTAL_SAMPLES);
        std::vector<uint8_t> din4(TOTAL_SAMPLES);
        std::vector<int16_t> y13(TOTAL_SAMPLES);
      
        //apply gain
        for(int n = 0; n < TOTAL_SAMPLES; ++n) {
            double v = AMP12 * std::sin(w * n);
            x12[n] = static_cast<int16_t>(std::round(v));
        }

        //in/out data magnitude conversion
        for(int i = 0; i < TOTAL_SAMPLES; ++i) {
            int16_t raw4 = x12[i] >> 8;
            uint8_t val4 = static_cast<uint8_t>((raw4 ^ 0x8) & 0xF);
            din4[i] = val4;
            top->din = val4;
            tick(top);
            y13[i]   = read_dout_fullrange_signed(top);
        }

        //dump samples if this is the target frequency
        if(std::abs(wnorm - TARGET_WNORM) < 1e-9) {
            std::ofstream sampcsv("fir_samples.csv");
            sampcsv << "sample,orig12,inp4,out13\n";
            for (int i = 0; i < TOTAL_SAMPLES; ++i)
                sampcsv << i << ',' << x12[i] << ',' << static_cast<int>(din4[i]) << ',' << y13[i] << '\n';
        }

        //single-bin DFT over the measured samples
        std::complex<double> Yx(0.0, 0.0), Yy(0.0, 0.0);
        for(int k = 0; k < MEASURE_SAMPLES; ++k) {
            double phase = -w * k;
            auto exp_val = std::exp(std::complex<double>(0.0, phase));
            int idx_s = SKIP_SAMPLES + k;
            Yx += std::complex<double>(x12[idx_s], 0.0) * exp_val;
            Yy += std::complex<double>(y13[idx_s], 0.0) * exp_val;
        }

        double mag_in  = std::abs(Yx);
        double mag_out = std::abs(Yy);
        gain_lin[idx]  = mag_out / mag_in;
        gain_db[idx]   = 20.0 * std::log10(gain_lin[idx]);
        phase_wrapped[idx] = (std::arg(Yy) - std::arg(Yx)) * (180.0/PI);
    }
    
    //gate magnitude, hold phase when gain below threshold
    for(int i = 0; i < num_pts; ++i) {
        if(gain_db[i] < MAG_DB_THRESHOLD && i > 0)
            phase_wrapped[i] = phase_wrapped[i-1];
    }

    //phase accumulation
    std::vector<double> phase_unwrapped(num_pts);
    phase_unwrapped[0] = phase_wrapped[0];
    for(int i = 1; i < num_pts; ++i) {
        double delta = phase_wrapped[i] - phase_wrapped[i-1]; //delta
        if(delta > 180.0)       delta -= 360.0; //unwrap if the phase is wrapped
        else if(delta < -180.0) delta += 360.0;
        phase_unwrapped[i] = phase_unwrapped[i-1] + delta; //accumulate
    }

    //write csv
    std::ofstream respcsv("fir_gain_response.csv");
    respcsv << "freq_norm,gain_mag,gain_mag_db,gain_phase_deg\n";
    for(int i = 0; i < num_pts; ++i) {
        respcsv << freq_norm[i] << ','
            << gain_lin[i]  << ','
            << gain_db[i]   << ','
            << phase_unwrapped[i] << '\n';
    }
    
    respcsv.close();
    
    //record squarewave response
    std::ofstream sqcsv("fir_square_response.csv");
    sqcsv << "cycle,din4,out13,ref\n";
    int16_t out13, ref;
    
    for (int i = 0; i < 128; ++i) {
        top->din = 0; tick(top);
        ref = ref_fir(-8);
        if(i > 63) {
            out13 = read_dout_fullrange_signed(top);
            sqcsv << i << ',' << 0 << ',' << out13 << ',' << ref << '\n';
        }
    }
    
    for (int i = 0; i < 64; ++i) {
        top->din = 15; tick(top);
        ref = ref_fir(7);
        out13 = read_dout_fullrange_signed(top);
        sqcsv << i << ',' << 15 << ',' << out13 << ',' << ref << '\n';
    }
    
    for (int i = 0; i < 64; ++i) {
        top->din = 0; tick(top);
        ref = ref_fir(-8);
        out13 = read_dout_fullrange_signed(top);
        sqcsv << i << ',' << 0 << ',' << out13 << ',' << ref << '\n';
    }
    
    sqcsv.close();

    
    delete top;
    return 0;
}