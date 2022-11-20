module cpu #(
    parameter WIDTH = 32
) (
    input logic clk, 
    input logic rst,
    output logic [WIDTH-1:0] a0_output,
    output logic [WIDTH-1:0] rf_dout1,
    output logic [WIDTH-1:0] rf_dout2,
    output logic [WIDTH-1:0] interm_immop,
    output logic [4:0] rd_add,
    output logic [WIDTH-1:0] prog_addr,
    wire [WIDTH-1:0] interm_ins,
    wire [WIDTH-1:0] aluop2_test,
    wire [WIDTH-1:0] rf_din,
    wire [2:0] interm_aluctrl,
    wire [2:0] interm_immsrc,
    wire interm_alusrc,
    wire interm_eq,
    wire interm_pcsrc,
    wire write_en
);

assign rd_add = interm_ins[19:15];

controlunit ctrlunit(
    .instruction(interm_ins), //in
    .eq(interm_eq), //in
    .regwrite(write_en), //out
    .aluctrl(interm_aluctrl), //out
    .alusrc(interm_alusrc), //out
    .pcsrc(interm_pcsrc), //out
    .immsrc(interm_immsrc) //out
);

jie mem_ctrl_sgnext(
    .eq(interm_eq),
    .pc(prog_addr),
    .instr(interm_ins),
    .immop(interm_immop),
    .regwrite(write_en),
    .aluctrl(interm_aluctrl),
    .alusrc(interm_alusrc),
    .pcsrc(interm_pcsrc)
);

yi pc_unit(
    .clk(clk),
    .rst(rst),
    .pcsrc(interm_pcsrc),
    .immop(interm_immop),
    .pc(prog_addr)
);

RF RF(
    .clk(clk),
    .rst(rst),
    .ad1(interm_ins[19:15]),
    .ad2(interm_ins[24:20]),
    .ad3(interm_ins[11:7]),
    .regwrite(rf_din),
    .wd3(write_en),
    .a0(a0_output),
    .regop1(rf_dout1),
    .regop2(rf_dout2)
);

ALU ALU(
    .aluop1(rf_dout1),
    .immop(interm_immop),
    .regop2(rf_dout2),
    .aluctrl(interm_aluctrl),
    .alusrc(interm_alusrc),
    .aluout(rf_din),
    .eq(interm_eq)
);


endmodule
