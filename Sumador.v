`timescale 1ns / 1ps

module Sumador(
    input clk,
    input [2:0] num1,
    input [2:0] num2,
    input [1:0] curr_st,
	 input enter1,
	 input enter2,
	 input reset,
    output [2:0] res,
    output reg [1:0] next_st
    );
	 
	 reg [63:0] instruction;
	 wire [31:0] gppm_out;
	 wire isZero;
	 
	 assign res = gppm_out[2:0];
	 
	 GPPM gppm(instruction, gppm_out, isZero);
	 
	 parameter
		STORE_NUM1 = 2'b00,
		STORE_NUM2 = 2'b01,
		ADD = 2'b10,
		HALT = 2'b11;
	 
	 always @ (posedge clk)
	 begin
		next_st = curr_st;
		
		case (curr_st)
			STORE_NUM1:
			begin
				instruction[15:11] = 5'b00000;
				instruction[20] = 0;
				instruction[21] = 1;
				instruction[24:22] = num1;
				
				if (enter1)
					next_st = STORE_NUM2;
			end
			STORE_NUM2:
			begin
				instruction[15:11] = 5'b00001;
				instruction[20] = 0;
				instruction[21] = 1;
				instruction[24:22] = num2;
				
				if (enter2)
					next_st = ADD;
			end
			ADD:
			begin
				instruction[5:1] = 5'b00000;
				instruction[10:6] = 5'b00001;
				instruction[15:11] = 5'b00010;
				instruction[19:16] = 4'b0000;
				instruction[20] = 1;
				instruction[21] = 1;
				
				next_st = HALT;
			end
			HALT:
			begin
				if (reset)
					next_st = STORE_NUM1;
			end
		endcase
		
	 end

endmodule
