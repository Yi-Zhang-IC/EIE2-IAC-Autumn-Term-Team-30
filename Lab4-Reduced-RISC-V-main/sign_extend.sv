module sign_extend #(
    input logic [31:0]   instr,
    input logic          immsrc,
    output logic [31:0]  immop        
);

always_comb
    if (immsrc == 0)
       immop[31:0] = {20'b0, instr[31:20]};
    if (immsrc == 1)
       immop[31:0] = {19'b0, instr{11:8}, instr{30:25}, instr[7], instr[12]};
endmodule
