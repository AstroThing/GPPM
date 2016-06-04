`timescale 1ns / 1ps

module test;

	// Inputs
	reg clk;
	reg [2:0] num1;
	reg [2:0] num2;
	reg enter1;
	reg enter2;
	reg reset;

	// Outputs
	wire [7:0] res;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk(clk), 
		.num1(num1), 
		.num2(num2), 
		.enter1(enter1), 
		.enter2(enter2), 
		.reset(reset), 
		.res(res)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		num1 = 0;
		num2 = 0;
		enter1 = 0;
		enter2 = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		clk = 1;
		num1 = 3'b001;
		num2 = 0;
		enter1 = 0;
		enter2 = 0;
		reset = 0;
		
		#100;
		
		clk = 0;
		num1 = 3'b001;
		num2 = 0;
		enter1 = 0;
		enter2 = 0;
		reset = 0;
		
		#100;
		
		clk = 1;
		num1 = 3'b001;
		num2 = 3'b001;
		enter1 = 1;
		enter2 = 0;
		reset = 0;
		
		#100;
		
		clk = 0;
		num1 = 3'b001;
		num2 = 3'b001;
		enter1 = 0;
		enter2 = 0;
		reset = 0;
		
		#100;
		
		clk = 1;
		num1 = 3'b001;
		num2 = 3'b001;
		enter1 = 0;
		enter2 = 1;
		reset = 0;
		
		#100;
		
		clk = 0;
		num1 = 3'b001;
		num2 = 3'b001;
		enter1 = 0;
		enter2 = 0;
		reset = 0;
		
		#100;
		
		clk = 1;
		num1 = 3'b001;
		num2 = 3'b001;
		enter1 = 0;
		enter2 = 0;
		reset = 0;
        
		// Add stimulus here

	end
      
endmodule

