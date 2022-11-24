module control_unit(
    input logic [31:0] instr,
    input logic eq,
    output logic regwrite,
    output logic [2:0] aluctrl,
    output logic alusrc,
    output logic pcsrc,
    output logic immsrc
);
    logic [6:0] opcode;
    assign opcode = instr[6:0];

    always_comb begin
        case (opcode)
            7'd19: begin
                aluctrl = 3'b000;
                alusrc = 1'b1;
                regwrite = 1'b1;
                immsrc = 1'b0;
                pcsrc = 1'b0;
            end
            7'd99:begin
                if(!eq) begin
                    aluctrl = 3'b111;
                    alusrc = 1'b0;
                    regwrite = 1'b0;
                    immsrc = 1'b1;
                    pcsrc = 1'b1;
                end
                else begin
                    pcsrc = 1'b0;
                end
            end
            default: begin
                aluctrl = 3'b0;
                alusrc = 1'b0;
                regwrite = 1'b0;
                immsrc = 1'b0;
                pcsrc = 1'b1;
            end
        endcase
    end
    
    
endmodule
