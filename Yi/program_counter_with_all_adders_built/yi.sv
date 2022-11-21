module yi #(
  parameter WIDTH = 32
)(
  // interface signals
  input  logic clk,
  input  logic rst,
  input  logic pcsrc,
  input  logic [WIDTH-1:0] immop,
  output logic [WIDTH-1:0] pc
);

wire [WIDTH-1:0] branch_pc; // interconnect wire
wire [WIDTH-1:0] inc_pc;    // interconnect wire
wire [WIDTH-1:0] next_pc;   // interconnect wire

adder adder (
  .a(pc),
  .b(immop),
  .sum(branch_pc)
);

addconstant addconstant(
  .in(pc),
  .out(inc_pc)
);

mux mux(
  .in_1(branch_pc),
  .in_0(inc_pc),
  .sel(pcsrc),
  .out(next_pc)
);

register pcreg(
  .clk(clk),
  .rst(rst),
  .in(next_pc),
  .out(pc)
);

endmodule
