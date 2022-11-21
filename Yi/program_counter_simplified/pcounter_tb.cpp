#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vpcounter.h"

#define MAX_SIM_CYC 100
#define ADDRESS_WIDTH 8
#define ROM_SZ 256

int main(int argc, char **argv, char **env) {
  int cycle;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  auto pcounter = new Vpcounter;
  Verilated::traceEverOn(true);
  auto tfp = new VerilatedVcdC;
  pcounter->trace (tfp, 99);
  tfp->open ("pcounter.vcd");
 
  // init Vbuddy
  // if (vbdOpen()!=1) return(-1);
  // vbdHeader("L4T1: programcounter");

  // initialize simulation inputs
  pcounter->clk = 0;
  pcounter->rst = 1;
  pcounter->pcsrc = 0;
  pcounter->immop = 0;

  // run simulation for MAX_SIM_CYC clock cycles
  for (cycle=0; cycle<MAX_SIM_CYC; cycle++) {

    pcounter->immop = 5;
    pcounter->pcsrc = (cycle==10||cycle==15);
    pcounter->rst = cycle==0 || (cycle==30);
    
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      pcounter->clk = !pcounter->clk;
      pcounter->eval ();
      tfp->dump (2*cycle+tick);
    }

    // vbdCycle(cycle); //display cycle

    // // either simulation finished, or 'q' is pressed
    // if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
    //   exit(0);                // ... exit if finish OR 'q' pressed
  }

  // vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}