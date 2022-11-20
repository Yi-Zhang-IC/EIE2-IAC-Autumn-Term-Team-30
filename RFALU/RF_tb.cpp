#include "VRF.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
//#include "vbuddy.cpp" 

int main (int argc , char **argv, char **env){ 

    Verilated::commandArgs(argc, argv);
    VRF* top = new VRF; 

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("rf.vcd");

    top->clk = 1;
    top->rst = 1; 
    top->regwrite = 0;
    top->wd3 = 0;
    top->ad1 = 0;
    top->ad2 = 0;
    top->ad3 = 0;

for(int i = 0; i < 300; i++){
    for(int clk = 0; clk < 2; clk++){
        tfp->dump (2*i+clk);
        top->clk = !top->clk;
        top->eval();
    }
        top->rst = 0;

        top->regwrite = (i == 5);
        top->ad3 = 10;
        top->wd3 = 5;
    
        if (i == 10){
            top->ad2 == 10; // regop2 should equal a0 on gtkwave
        }
        
    if(Verilated::gotFinish())  exit(0);
}
tfp->close();
exit(0);
}