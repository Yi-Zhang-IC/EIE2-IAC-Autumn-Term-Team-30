module instrmem #(
    parameter   A_WIDTH = 32,
                D_WIDTH = 8        
) (
    input [A_WIDTH-1:0] address,
    output [31:0] dout
);
    logic [D_WIDTH-1:0] rom_array [2000:0];
    
    initial begin 
        $display("Loading rom.");
        $readmemh("program.hex", rom_array);
        $display("Program written to ROM successfully");
    end;

    assign dout = {{rom_array[address]}, {rom_array[address+1]}, {rom_array[address+2]}, {rom_array[address+3]}}; 

endmodule

