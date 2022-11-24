module rf #(
    parameter  A_WIDTH = 5,
                D_WIDTH = 32
) (
    input logic clk,
    input logic we3,
    input logic [A_WIDTH-1:0] ad1,
    input logic [A_WIDTH-1:0] ad2,
    input logic [A_WIDTH-1:0] ad3,
    input logic [D_WIDTH-1:0] wd3,
    output logic [D_WIDTH-1:0] a0,
    output logic [D_WIDTH-1:0] rd1,
    output logic [D_WIDTH-1:0] rd2
);

    logic [D_WIDTH-1:0] rf_array [2**A_WIDTH-1:0];

    always_comb begin
        rd1 = rf_array[ad1];
        rd2 = rf_array[ad2];
    end

    initial begin
        for (int i = 0; i < $size(rf_array); i++) begin
            rf_array[i] = 32'b0;
        end
    end

    always_ff @(posedge clk) begin
        if(we3) rf_array[ad3] <= wd3; 
    end
    
    assign a0 = rf_array[10];
endmodule
