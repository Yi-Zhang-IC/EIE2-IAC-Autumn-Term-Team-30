module addconstant#(
    parameter WIDTH = 32,
    parameter constant = 4
)(
    
    input logic [WIDTH-1:0] in,      
    output logic [WIDTH-1:0] out  

);

always_comb begin

    out = in + constant;
    
end

endmodule
