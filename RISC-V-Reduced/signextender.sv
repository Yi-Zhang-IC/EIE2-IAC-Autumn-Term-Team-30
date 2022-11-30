module signextender(
    input logic [31:0] instruction,
    input logic [2:0] immsrc,
    output logic [31:0] immop
);
    
    always_comb begin
        case (immsrc)    
            3'b000: immop = {{5'd20{instruction[31]}}, instruction[31:20]}; // immediate
            3'b001: immop = {{5'd12{instruction[31]}}, instruction[31:12]}; // upper immediate
            3'b010: immop = {{5'd20{instruction[31]}}, instruction[31:25], instruction[11:7]}; // store
            3'b011: immop = {{5'd21{instruction[31]}}, instruction[7], instruction[30:25], instruction[11:8]}; // branch
            // 3'b100: immop = {instruction[31], instruction[19:12], instruction[20], instruction[30:21]}; // jump
            default: immop = 32'b0;
        endcase
    end
    
endmodule
