module  jie #(
    parameter ADDRESS_WIDTH = 32,
               DATA_WIDTH = 8
)(
    //interface signals
    input logic eq,
    input logic [ADDRESS_WIDTH-1:0] pc,
    output logic [ADDRESS_WIDTH-1:0] instr,
    output logic [ADDRESS_WIDTH-1:0] immop,
    output logic regwrite,
    output logic [2:0] aluctrl,
    output logic alusrc,
    output logic pcsrc
);
    logic  immsrc;  // interconnect wire

instr_mem instr_mem(
    .pc(pc),
    .instr(instr)
);

control_unit control_unit(
    .eq(eq),
    .instr(instr),
    .regwrite(regwrite),
    .aluctrl(aluctrl),
    .alusrc(alusrc),
    .immsrc(immsrc),
    .pcsrc(pcsrc)
);

sign_extend sign_extend(
    .instr(instr),
    .immsrc(immsrc),
    .immop(immop)
);

endmodule 
