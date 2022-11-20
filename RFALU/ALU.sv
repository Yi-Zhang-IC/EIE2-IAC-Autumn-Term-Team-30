module ALU
(
    input logic [31:0] aluop1, immop, regop2,
    input logic [2:0] aluctrl,
    input logic alusrc,
    output logic [31:0] aluout,
    output logic eq
);
    wire [31:0] aluop2;
    assign aluop2 = alusrc ? immop : regop2;

    always_comb begin
        case (aluctrl)
            3'b000: aluout = aluop1 + aluop2;
            3'b001: aluout = aluop1 - aluop2;
            3'b010: aluout = aluop1 & aluop2;
            3'b011: aluout = aluop1 | aluop2; 
            default: begin
                aluout = 0;
            end
        endcase 
    end

    assign eq = aluop1 == aluop2;

endmodule
