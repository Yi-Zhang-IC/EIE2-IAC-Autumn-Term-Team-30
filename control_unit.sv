module control_unit #(
    input logic    eq,        // the EQ input gate
    input logic [31:0]     instr,  // instruction into control unit
    output logic  regwrite, // write enable for reg file      write is for storing
    output logic [2:0] aluctrl,  // to chose which instruction alu execute
    output logic  alusrc,   // to chose whether it is RD2 or Imm sign extension
    output logic  immsrc,   // to choose if it is normal extention or branch extension
    output logic  pcsrc     // to choose if it is branch jump or increment of 4 address
);

 assign regwrite = instr[6];
 assign aluctrl = instr{2:0};
 assign alusrc = instr[5];
 assign immsrc = instr[6];
 assign pcsrc = instr[6];
endmodule

