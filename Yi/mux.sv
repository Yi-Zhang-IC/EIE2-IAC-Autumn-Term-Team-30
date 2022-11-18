module mux#(
    parameter WIDTH = 32
)(
    input logic             sel,   
    input logic [WIDTH-1:0] in_0,      
    input logic [WIDTH-1:0] in_1,        
    output logic [WIDTH-1:0] out

);

always_comb begin

    out = (sel ? in_1 : in_0) ;
    
end

endmodule