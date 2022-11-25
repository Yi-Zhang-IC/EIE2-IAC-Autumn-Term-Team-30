module alu #(
    parameter D_WIDTH = 32
)(
    input logic alusrc,
    input logic [2:0] aluctrl,
    input logic [D_WIDTH-1:0] aluop1,
    input logic [D_WIDTH-1:0] immop,
    input logic [D_WIDTH-1:0] regop2,
    output logic [D_WIDTH-1:0] aluout,
    output logic eq
);
    
    logic [D_WIDTH-1:0] aluop2;
    assign aluop2 = alusrc ? immop : regop2;
    always_comb begin
        
        case (aluctrl)
            3'b000: aluout = aluop1 + aluop2;
            3'b001: aluout = 32'b0;
            3'b010: aluout = 32'b0;
            3'b011: aluout = 32'b0;
            3'b100: aluout = 32'b0;
            3'b101: aluout = 32'b0;
            3'b110: aluout = 32'b0;
            default: aluout = 0;
        endcase
    end


    assign eq = (aluop1 == aluop2);

    
endmodule


