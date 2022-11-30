module ram #(
    parameter   A_WIDTH = 32,
                D_WIDTH = 8
)(
    input logic [A_WIDTH-1:0] address,
    input logic [2:0] bytes,
    input logic clk,
    input logic we,
    input logic [31:0] wd,
    output logic [31:0] dout
);

    logic [D_WIDTH-1:0] ram_array [200000:0];

    initial begin
        for (int i = 0; i < $size(ram_array); i++) begin
            ram_array[i] = 8'b0;
        end
    end 

    //read
    always_comb begin
        case (bytes)
            3'b000: dout = {{5'd24{ram_array[address][7]}}, {ram_array[address]}};//load byte   
            3'b001: dout = {{5'd16{ram_array[address + 1][7]}}, {ram_array[address + 1]}, {ram_array[address]}};//load half
            3'b010: dout = {{ram_array[address + 3]}, {ram_array[address + 2]}, {ram_array[address + 1]}, {ram_array[address]}};//load word
            3'b100: dout = {{24'b0}, {ram_array[7:0]}};//load byte uns
            3'b101: dout = {{16'b0}, {ram_array[address + 1]}, {ram_array[address]}};//load half uns
            default: begin
                dout = 32'b0;
            end
        endcase
    end

    //write
    always_ff @(posedge clk) begin
        // $display("[0]: ", ram_array[0], " [5]: ", ram_array[5], " [4]: ", ram_array[4], " [8]:", ram_array[8], " dout lb: ", dout , "\n");
        if (we) begin
            $display(ram_array[address])
            case (bytes)
                3'b000:ram_array[address] <= wd[7:0] ; //str byte
                
                3'b001: begin
                        ram_array[address] <= wd[7:0]; //str half
                        ram_array[address + 1] <= wd[15:8];
                    end

                3'b010: begin //str word
                        ram_array[address] <= wd[7:0];
                        ram_array[address + 1] <= wd[15:8];
                        ram_array[address + 2] <= wd[23:16];
                        ram_array[address + 3] <= wd[31:24];
                    end 
                default: begin
                    ram_array[address] <= ram_array[address];
                end
            endcase
        end
    end
    
endmodule

