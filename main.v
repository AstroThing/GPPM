`timescale 1ns / 1ps

module main(
	 input clk,
    input [2:0] num1,
    input [2:0] num2,
	 input enter1,
	 input enter2,
	 input reset,
    output [7:0] res
    );

	reg [1:0] curr_st = 2'b00;
	wire [1:0] next_st;
	
	initial
	curr_st = 2'b00;
	
	Sumador s(clk, num1, num2, curr_st,enter1, enter2, reset, res, next_st);
	
	always @ (posedge clk)begin
		curr_st = next_st;
		$display("Current State: %b. Next State: %b.", curr_st, next_st);
		end

endmodule
