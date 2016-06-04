`timescale 1ns / 1ps

module Reg_File(
    input [4:0] ra1,
    input [4:0] ra2,
    input [4:0] wa,
    input [31:0] wd,
    input we,
    input clk,
    output [31:0] rd1,
    output [31:0] rd2
    );

	reg [31:0] registers [0:31];
	
	assign rd1 = registers[ra1];
	assign rd2 = registers[ra2];
	
	always @ (posedge clk)
	begin
	 if(we)
		registers[wa] = wd;
	end

endmodule
