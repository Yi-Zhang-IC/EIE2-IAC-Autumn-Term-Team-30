module register#(
    parameter WIDTH = 32
)(
    input logic             clk,   
    input logic             rst,   
    input logic [WIDTH-1:0] in,      
    output logic [WIDTH-1:0] out

);

always_ff @(posedge clk) begin
    if(rst) out <= {WIDTH{1'b0}};
    else out <= in;
end

endmodule