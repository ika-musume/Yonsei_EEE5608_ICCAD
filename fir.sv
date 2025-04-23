module fir #(
    parameter SATURATION = 1,
    parameter TAPS       = 27
) (
    input   wire                    clk,
    input   wire                    rst_n,
    input   wire        [3:0]       din,
    output  wire        [3:0]       dout
    `ifndef SYNTHESIS
    ,output  wire signed [12:0]      dout_fullrange
    `endif
);


///////////////////////////////////////////////////////////
//////  PARAMETERS
////

localparam SR_STAGES     = TAPS-1;
localparam X_NUM         = TAPS;
localparam SSUM_NUM      = (TAPS+1)/2;


///////////////////////////////////////////////////////////
//////  DEFINE COEFFICIENTS
////

typedef logic signed [8:0] coef_t [0:SSUM_NUM-1];
localparam coef_t coef_arr = '{
    9'b111111111, //-0.00390625 = - 1/(2^8)
    9'b000000100, // 0.01562500 =   1/(2^6)
    9'b000000000, // 0.0
    9'b111111010, //-0.02343750 = -[1/(2^6) + 1/(2^7)]
    9'b000000001, // 0.00390625 =   1/(2^8)
    9'b000001000, // 0.03125000 =   1/(2^5)
    9'b111111100, //-0.01562500 = - 1/(2^6)
    9'b111110111, //-0.03515625 = -[1/(2^5) + 1/(2^8)]
    9'b000001010, // 0.03906250 =   1/(2^5) + 1/(2^7)
    9'b000001011, // 0.04296875 =   1/(2^5) + 1/(2^7) + 1/(2^8)
    9'b111101001, //-0.08984375 = -[1/(2^4) + 1/(2^6) + 1/(2^7) + 1/(2^8)]
    9'b111110100, //-0.04687500 = -[1/(2^5) + 1/(2^6)]
    9'b001001111, // 0.30859375 =   1/(2^2) + 1/(2^5) + 1/(2^6) + 1/(2^7) + 1/(2^8)
    9'b010001100  // 0.54687500 =   1/(2^1) + 1/(2^5) + 1/(2^6)
};


///////////////////////////////////////////////////////////
//////  SHIFT REGISTER
////

int     sr_i;
reg signed  [3:0]   sr [0:SR_STAGES-1]; //0~25
always_ff @(posedge clk or negedge rst_n) begin
    if(!rst_n) for(sr_i=0;sr_i<SR_STAGES;  sr_i=sr_i+1) sr[sr_i]   <= 4'd0;  //async reset
    else begin for(sr_i=0;sr_i<SR_STAGES-1;sr_i=sr_i+1) sr[sr_i+1] <= sr[sr_i]; //shift
                                                        sr[0]      <= {~din[3], din[2:0]}; //the fist stage
    end
end


///////////////////////////////////////////////////////////
//////  ADD-MULTIPLY
////

//make alias signals
int     x_i;
reg signed  [3:0]   x [0:X_NUM-1]; //0~26
always_comb begin
    for(x_i=0;x_i<X_NUM-1;x_i=x_i+1) x[x_i+1] = sr[x_i];
                                     x[0]     = {~din[3], din[2:0]};
end

//sum signals with symmetric coefficient first
int     ssum_i;
reg signed  [4:0]   ssum [0:SSUM_NUM-1]; //0~13, symmetric sums
always_comb begin
    for(ssum_i=0;ssum_i<SSUM_NUM-1;ssum_i=ssum_i+1) ssum[ssum_i]     = x[ssum_i] + x[X_NUM-1-ssum_i]; //0+26, 1+25... 12+14
                                                    ssum[SSUM_NUM-1] = {x[SSUM_NUM-1][3], x[SSUM_NUM-1]}; //middle(13), no adder
end

//multiply signals by coefficients
int     mul_i;
reg signed  [13:0]  mul [0:SSUM_NUM-1]; //0~13, 5-bit*9-bit
always_ff @(posedge clk or negedge rst_n) begin
    if(!rst_n) for(mul_i=0;mul_i<SSUM_NUM;mul_i=mul_i+1) mul[mul_i] <= 14'd0;  //async reset
    else       for(mul_i=0;mul_i<SSUM_NUM;mul_i=mul_i+1) mul[mul_i] <= ssum[mul_i] * coef_arr[mul_i];
end


///////////////////////////////////////////////////////////
//////  PRODUCT ACCUMULATOR
////

//14*14-bit products, 7*15-bit, 3*16-bit+1*15-bit, 2*17-bit, 1*18-bit
int     pacc_i;
reg signed  [17:0] pacc_tmp, pacc;
always_comb begin
    pacc_tmp = 18'd0;
    for(pacc_i=0;pacc_i<SSUM_NUM;pacc_i=pacc_i+1) pacc_tmp = pacc_tmp + {{4{mul[pacc_i][13]}}, mul[pacc_i]};
end
//always_ff @(posedge clk or negedge rst_n) if(!rst_n) pacc <= 18'd0; else pacc <= pacc_tmp;
always_comb pacc = pacc_tmp;

///////////////////////////////////////////////////////////
//////  OUTPUT
////

reg         [3:0]   dout_sat; //saturated
always_comb begin
    if(pacc[12:11] == 2'b01) dout_sat = 4'd15;
    else if(pacc[12:11] == 2'b10) dout_sat = 4'd0;
    else dout_sat = {~pacc[11], pacc[10:8]};
end

assign  dout = SATURATION ? dout_sat : {~pacc[12], pacc[11:9]};

`ifndef SYNTHESIS
assign  dout_fullrange = signed'(pacc[12:0]);


///////////////////////////////////////////////////////////
//////  SIMULATION POD
////

wire signed [8:0] sim_integer = pacc[17:9];
`endif



endmodule
