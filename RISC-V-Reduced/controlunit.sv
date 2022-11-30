module controlunit(
    input logic [31:0] instruction,
    input logic eq,
    output logic regwrite,
    output logic [2:0] aluctrl,
    output logic alusrc,
    output logic pcsrc,
    output logic [2:0] immsrc,
    output logic memwrite,
    output logic [2:0] addrmode,
    output logic resultsrc
);
    logic [6:0] opcode;
    logic [2:0] funct3;
    logic [31:25] funct7;
    logic [1:0] aluop;

    always_comb begin
        funct3 = instruction[14:12];
        opcode = instruction[6:0];
        aluctrl = 3'b000;
        case (opcode)
            7'd51: begin //register-register ops
                funct7 = instruction[31:25];            
                regwrite = 1'b1;
                immsrc = 3'b111;
                alusrc = 1'b0;
                memwrite = 1'b0;
                resultsrc = 1'b0;
                pcsrc = 1'b0;
                aluop = 2'b10;
            end

            7'd3: begin //load ops
                regwrite = 1'b1;
                immsrc = 3'b000;
                alusrc = 1'b1;
                memwrite = 1'b0;
                resultsrc = 1'b1;
                pcsrc = 1'b0;
                aluop = 2'b00;
                addrmode = funct3;
            end
            
            7'd19: begin //alu imm ops
                regwrite = 1'b1;
                alusrc = 1'b1;
                aluop = 2'b11;
                immsrc = 3'b000;
                pcsrc = 1'b0;
                memwrite = 1'b0;
                resultsrc = 1'b0;
            end 
            
            7'd35: begin //str ops
                regwrite = 1'b0;
                immsrc = 3'b010;
                alusrc = 1'b1;
                memwrite = 1'b1;
                pcsrc = 1'b0;  
                aluop = 00; 
                addrmode = funct3;      
            end
            
            7'd99: begin //branch ops
                aluop = 01;
                regwrite = 1'b0;
                immsrc = 3'b011;
                alusrc = 1'b0;
                memwrite = 1'b0;
                case(funct3)
                    3'b000: pcsrc = eq;
                    3'b001: pcsrc = !eq;
                    // 3'b010:
                    // 3'b011:
                    // 3'b100:
                    // 3'b101:
                    // 3'b110:
                    // 3'b111:
                    default: pcsrc = 1'b0;
                endcase

            end
            // 7'd23:
            // 7'd55:
            // 7'd103:
            // 7'd111:
            default: begin
                funct3 = 3'b0;
                funct7 = 7'b0;
                pcsrc = 1'b0;
                regwrite = 1'b0;
                alusrc = 1'b1;
                immsrc = 3'b111;
                memwrite = 1'b0;
            end
        endcase
    end

    always_comb begin
        case (aluop)
            
            2'b00: aluctrl = 3'b000; // load/ str
            2'b01: aluctrl = 3'b111; //branch
            2'b10: begin // register - register
                case (funct3)
                    3'b000: aluctrl = opcode[5] & funct7[5] ? 3'b001 : 3'b000; // add or sub  
                    // 3'b001: 
                    3'b010: aluctrl = 3'b101; //slt
                    // 3'b011: 
                    // 3'b100:
                    // 3'b101:
                    3'b110: aluctrl = 3'b011; //or
                    3'b111: aluctrl = 3'b010; //and
                    default aluctrl = 3'b000;
                endcase
            end
            default: begin // will automatically set aluctrl to funct 3 (assuming that any other instruction is immediate), this may need to change when U and J are implemented
                aluctrl = funct3;
            end
        endcase
    end
    
endmodule
