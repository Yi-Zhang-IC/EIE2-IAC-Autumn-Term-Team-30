module controlunit(
    input logic [31:0] instruction,
    input logic eq,
    output logic regwrite,
    output logic [2:0] aluctrl,
    output logic alusrc,
    output logic pcsrc,
    output logic [2:0] immsrc
);
    logic [6:0] opcode;
    assign opcode = instruction[6:0];

    always_comb begin
        case (opcode)
            7'd19: begin
                aluctrl = instruction[14:12];
                alusrc = 1'b1;
                regwrite = 1'b1;
                immsrc = 3'b000;
                pcsrc = 1'b0;
            end
            7'd99:begin
                if(!eq) begin
                    aluctrl = 3'b111;
                    alusrc = 1'b0;
                    regwrite = 1'b0;
                    immsrc = 3'b011;
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
                immsrc = 3'b0;
                pcsrc = 1'b1;
            end
        endcase
    end
    
    
endmodule
