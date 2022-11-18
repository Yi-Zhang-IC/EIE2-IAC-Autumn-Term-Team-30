module ALU #
(
    input logic [31:0] ALUop1, ALUop2, 
    input logic [2:0] ALUcntrl,
    output logic [31:0] ALUout,
    output logic EQ
);
    
    always_comb begin
        EQ = 0;
        ALUout = 0;
        case (ALUcntrl)
            3'b000: ALUout = ALUop1 + ALUop2;
            3'b001: ALUout = ALUop1 - ALUop2;
            3'b010: ALUout = ALUop1 & ALUop2;
            3'b011: ALUout = ALUop1 | ALUop2;
            3'b101: EQ = ALUop1 == ALUop2;
            default: begin
                EQ = 0;
                ALUout = 0;
            end
        endcase 
    end

endmodule
