`timescale 1ns / 1ps

module GPPM(
    input [63:0] instruction,
	 output[31:0] gppm_out,
    output isZero
    );
	 
	 wire clk              = instruction[0];
	 wire [4:0] ra1        = instruction[5:1];
	 wire [4:0] ra2        = instruction[10:6];
	 wire [4:0] wa         = instruction[15:11];
	 wire [3:0] operation  = instruction[19:16];
	 wire wd_sel           = instruction[20];
	 wire we               = instruction[21];
	 wire [31:0] immediate = instruction[53:22];
	 
	 wire [31:0] result, rd1, rd2, wd;
	 
	 assign wd = wd_sel ? result : immediate;
	 assign gppm_out = result;
	 
	 Reg_File rf(ra1, ra2, wa, wd, we, clk, rd1, rd2);
	 ALU alu(rd1, rd2, operation, result, isZero);
	 
endmodule
