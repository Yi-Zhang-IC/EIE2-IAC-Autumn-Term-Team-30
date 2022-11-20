module signextender(
    input logic [31:0] instruction,
    input logic [2:0] immsrc,
    output logic [31:0] immop
);
    logic [11:0] uimm;
    
    always_comb begin
        case (immsrc)    
            3'b000: uimm = instruction[31:20]; // immediate
            // 3'b001: uimm = instruction[31:12]; // upper immediate
            // 3'b010: uimm = {instruction[31:25], instruction[11:7]}; // store
            3'b011: uimm = {instruction[31], instruction[7], instruction[30:25], instruction[11:8]}; // branch
            // 3'b100: uimm = {instruction[31], instruction[19:12], instruction[20], instruction[30:21]}; // jump
            default: uimm = 12'b0;
        endcase
    end

    // for now this will work, however for upper immediate and jump a case will be required
    assign immop = {{5'd20{uimm[11]}}, uimm[11:0]};
    
endmodule
