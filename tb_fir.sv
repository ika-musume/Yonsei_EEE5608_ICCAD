`timescale 10ns/10ns
module tb_fir;

//clock
reg             clk = 1'b0;
always #1 clk = ~clk;

//async reset
reg             rst_n = 1'b0;
initial #5 rst_n <= 1'b1;

//sine table
parameter [3:0] sin_tbl [0:255] = {
  4'd8, 4'd8, 4'd8, 4'd8, 4'd8, 4'd8, 4'd9, 4'd9, 4'd9, 4'd9, 4'd9, 4'd10, 4'd10, 4'd10, 4'd10, 4'd10,
  4'd10,4'd11, 4'd11, 4'd11, 4'd11, 4'd11, 4'd11, 4'd12, 4'd12, 4'd12, 4'd12, 4'd12, 4'd12, 4'd12, 4'd13,
  4'd13,4'd13, 4'd13, 4'd13, 4'd13, 4'd13, 4'd13, 4'd14, 4'd14, 4'd14, 4'd14, 4'd14, 4'd14, 4'd14, 4'd14,
  4'd14,4'd14, 4'd14, 4'd14, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15,
  4'd15,4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15, 4'd15,
  4'd14,4'd14, 4'd14, 4'd14, 4'd14, 4'd14, 4'd14, 4'd14, 4'd14, 4'd14, 4'd14, 4'd14, 4'd13, 4'd13, 4'd13,
  4'd13,4'd13, 4'd13, 4'd13, 4'd13, 4'd12, 4'd12, 4'd12, 4'd12, 4'd12, 4'd12, 4'd12, 4'd11, 4'd11, 4'd11,
  4'd11,4'd11, 4'd11, 4'd10, 4'd10, 4'd10, 4'd10, 4'd10, 4'd10, 4'd9,  4'd9,  4'd9,  4'd9,  4'd9,  4'd8,
  4'd8, 4'd8,  4'd8,  4'd8,  4'd8,  4'd7,  4'd7,  4'd7,  4'd7,  4'd7,  4'd6,  4'd6,  4'd6,  4'd6,  4'd6,
  4'd5, 4'd5,  4'd5,  4'd5,  4'd5,  4'd5,  4'd4,  4'd4,  4'd4,  4'd4,  4'd4,  4'd4,  4'd3,  4'd3,  4'd3,
  4'd3, 4'd3,  4'd3,  4'd3,  4'd2,  4'd2,  4'd2,  4'd2,  4'd2,  4'd2,  4'd2,  4'd2,  4'd1,  4'd1,  4'd1,
  4'd1, 4'd1,  4'd1,  4'd1,  4'd1,  4'd1,  4'd1,  4'd1,  4'd1,  4'd1,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,
  4'd0, 4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,
  4'd0, 4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd0,  4'd1,  4'd1,
  4'd1, 4'd1,  4'd1,  4'd1,  4'd1,  4'd1,  4'd1,  4'd1,  4'd1,  4'd1,  4'd2,  4'd2,  4'd2,  4'd2,  4'd2,
  4'd2, 4'd2,  4'd2,  4'd3,  4'd3,  4'd3,  4'd3,  4'd3,  4'd3,  4'd3,  4'd4,  4'd4,  4'd4,  4'd4,  4'd4,
  4'd4, 4'd5,  4'd5,  4'd5,  4'd5,  4'd5,  4'd5,  4'd6,  4'd6,  4'd6,  4'd6,  4'd6,  4'd7,  4'd7,  4'd7
};

//sqwave table
parameter   [3:0] sq_tbl [0:15] = {
    4'd0 , 4'd0 , 4'd0 , 4'd0 ,
    4'd15, 4'd15, 4'd15, 4'd15,
    4'd0 , 4'd0 , 4'd0 , 4'd0 ,
    4'd15, 4'd15, 4'd15, 4'd15
};

//sawtooth
parameter   [3:0] st_tbl [0:15] = {
    4'd0 , 4'd1 , 4'd2 , 4'd3 ,
    4'd4 , 4'd5 , 4'd6 , 4'd7 ,
    4'd8 , 4'd9 , 4'd10, 4'd11,
    4'd12, 4'd13, 4'd14, 4'd15
};

//divN
parameter   divN = 6000; //000;

//prescaler + phase counter
reg     [7:0]   scaler;
reg     [31:0]  cnt;
reg     [7:0]   phase;
always @(posedge clk) begin
    if(!rst_n) begin
        cnt <= 32'd0;
        phase <= 4'd0;
    end
    else if (cnt >= divN - 1) begin
        cnt   <= 32'd0;
        phase <= phase + 8'd1;
    end 
    else begin
        cnt <= cnt + 1'b1;
    end

    if(!rst_n) scaler <= 8'd0;
    else scaler <= scaler + 8'd1;
end

//instantiate dut
fir u_dut(.clk(scaler[7]), .rst_n(rst_n), .din(sin_tbl[phase]), .dout(), .dout_fullrange());

endmodule