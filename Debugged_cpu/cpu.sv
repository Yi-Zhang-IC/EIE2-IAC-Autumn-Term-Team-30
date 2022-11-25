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
    logic [WIDTH-1:0] interm_ins
    
);

logic [WIDTH-1:0] rf_din;
logic [2:0] interm_aluctrl;
logic [2:0] interm_immsrc;
logic interm_alusrc;
logic interm_eq;
logic interm_pcsrc;
logic write_en;

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

pcountunit programcounter(
    .clk(clk), //in
    .rst(rst), //in
    .pcsrc(interm_pcsrc), //in
    .immop(interm_immop), //in
    .pc(prog_addr) //out
);

instrmem programmem(
    .address(prog_addr),
    .dout(interm_ins)
);

signextender sgnextend(
    .instruction(interm_ins),
    .immsrc(interm_immsrc),
    .immop(interm_immop)
);


alu alu(
    .alusrc(interm_alusrc),
    .aluctrl(interm_aluctrl),
    .aluop1(rf_dout1),
    .immop(interm_immop),
    .regop2(rf_dout2),
    .aluout(rf_din),
    .eq(interm_eq)
);

rf registerfile(
    .clk(clk), //in
    .we3(write_en), //in
    .ad1(interm_ins[19:15]), //in
    .ad2(interm_ins[24:20]), //in
    .ad3(interm_ins[11:7]), //in
    .wd3(rf_din), //in
    .a0(a0_output), //out
    .rd1(rf_dout1), //out
    .rd2(rf_dout2) //out
);



endmodule
