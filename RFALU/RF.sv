module RF #(
input logic [4:0] ad1, ad2, ad3,
input logic regwrite, clk, rst, 
input logic [31:0] wd3,
output logic [31:0] a0, regop1, regop2
);

logic [31:0] rf [31:0];
//for(j = 0; j < 32; j++)
  //  rf[j] = 0;  
always_ff @(posedge clk)
    if(rst) begin
        for(int j = 0; j < 32; j++)
            rf[j] <= 0;  
    end else if (regwrite) begin
        rf[ad3] <= wd3;
    end

assign regop1 = rf[ad1];
assign regop2 = rf[ad2];
assign a0 = rf[16];

endmodule
