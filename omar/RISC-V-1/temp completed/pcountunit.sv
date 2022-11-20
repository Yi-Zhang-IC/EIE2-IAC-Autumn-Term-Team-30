
module pcountunit #(
    parameter WIDTH = 32
) (
    input logic pcsrc,
    input logic clk,
    input logic rst,
    input logic [WIDTH-1:0] immop,
    output logic [WIDTH-1:0] pc
);

    logic [WIDTH-1:0] next_pc;
    logic [WIDTH-1:0] branch_pc;
    
    always_comb begin
        branch_pc = pc + immop;
        next_pc = pcsrc ? branch_pc : pc + 4;    
    end

    always_ff @(posedge clk) begin
        if(rst) pc <= 32'b0;
        else pc <= next_pc;
    end



endmodule
