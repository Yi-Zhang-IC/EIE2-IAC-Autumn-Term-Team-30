module pcounter #(
    parameter WIDTH = 32
)(
    // interface signals
    input  logic clk,
    input  logic rst,
    input  logic pcsrc,
    input  logic [WIDTH-1:0] immext,
    output logic [WIDTH-1:0] pc
);

    logic [WIDTH-1:0] next_pc;
    logic [WIDTH-1:0] branch_pc;
    logic [WIDTH-1:0] target_pc;

always_comb begin
    target_pc = pc + immext;
    next_pc = pcsrc ? target_pc : pc + 4;
end

always_ff @(posedge clk) begin
    if(rst) pc <= {WIDTH{1'b0}};
    else pc <= next_pc;
    
end

endmodule




