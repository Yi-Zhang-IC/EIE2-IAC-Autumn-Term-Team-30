module instr_mem #(
    parameter  ADDRESS_WIDTH = 32,
               DATA_WIDTH = 8
)(
    input logic [ADDRESS_WIDTH-1:0] pc,
    output logic [DATA_WIDTH-1:0]  instr
);

logic [DATA_WIDTH-1:0] rom_array [2**ADDRESS_WIDTH-1:0];

initial begin
        $display("Loading rom.");
        $readmemh("sinerom.mem", rom_array);
end;


    // ouput is asynchronous
assign instr = {rom_array[pc+3], rom_array[pc+2],rom_array[pc+1],rom_array[pc]};

endmodule
