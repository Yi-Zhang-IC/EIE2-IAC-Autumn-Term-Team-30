module sign_extend (
    input logic [31:0]   instr,
    input logic          immsrc,
    output logic [31:0]  immop       
);

always_comb begin
    if (immsrc == 0)
       immop = {{5'd20{instr[31]}}, instr[31:20]};
    if (immsrc == 1)
       immop = {{5'd20{instr[31]}}, instr[7], instr[30:25], instr[11:8]};
end
endmodule
