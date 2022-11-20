#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vjie.h"

#define MAX_SIM_CYC 100
#define ADDRESS_WIDTH 8
#define ROM_SZ 256

int main(int argc, char **argv, char **env) {
  int cycle;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  auto jie = new Vjie;
  Verilated::traceEverOn(true);
  auto tfp = new VerilatedVcdC;
  jie->trace (tfp, 99);
  tfp->open ("jie.vcd");
 
  // init Vbuddy
  // if (vbdOpen()!=1) return(-1);
  // vbdHeader("L4T1: programcounter");

  // initialize simulation inputs
  jie->eq = 0;
  jie->pc = 0;

  // run simulation for MAX_SIM_CYC clock cycles
  for (cycle=0; cycle<MAX_SIM_CYC; cycle++) {
    if(jie->pc > 13){
      jie->eq = 1
    }
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      yi->clk = !yi->clk;
      yi->eval ();
      tfp->dump (2*cycle+tick);
    }
    jie->pc += 4;
    // vbdCycle(cycle); //display cycle

    // // either simulation finished, or 'q' is pressed
    // if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
    //   exit(0);                // ... exit if finish OR 'q' pressed
  }

  // vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}