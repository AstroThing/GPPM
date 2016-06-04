`timescale 1ns / 1ps

module ALU(
    input [31:0] op1,
    input [31:0] op2,
    input [3:0] operation,
    output reg [31:0] result,
    output reg isZero
    );
	 
	parameter
		ADD                = 4'b0000,
		SUB                = 4'b0001,
		MULT               = 4'b0010,
		DIV                = 4'b0011,
		AND                = 4'b0100,
		NOT                = 4'b0101,
		OR                 = 4'b0110,
		EQUALS             = 4'b0111,
		INCREMENT          = 4'b1000,
		DECREMENT          = 4'b1001,
	   LESS_THAN          = 4'b1010,
		GREATER_THAN       = 4'b1011,
		GREATER_OR_EQUAL   = 4'b1100,
		LESS_THAN_OR_EQUAL = 4'b1101;
		
	always @ (op1 or op2 or operation)
	begin
		case (operation)
			ADD                : result = op1 + op2;
			SUB                : result = op1 - op2;
			MULT               : result = op1 * op2;
			AND                : result = op1 & op2;
			NOT                : result = !op1;
			OR                 : result = op1 | op2;
			EQUALS             : result = op1 == op2;
			INCREMENT          : result = op1 + 1;
			DECREMENT          : result = op1 - 1;
			LESS_THAN          : result = op1 < op2;
			GREATER_THAN       : result = op1 > op2;
			GREATER_OR_EQUAL   : result = op1 >= op2;
			LESS_THAN_OR_EQUAL : result = op1 <= op2;
			
			default: result = 32'b0;           
		endcase
	end
	
	always @ (result)
		isZero <= !(|result);

endmodule
