#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
#include <iostream>
#include <iomanip>

// #include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges
  int lights = 0; // state to toggle LED lights

  Verilated::commandArgs(argc, argv);
  
  // init cpu verilog instance
  Vcpu * cpu = new Vcpu;
  
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  cpu->trace (tfp, 99);
  tfp->open ("cpu.vcd");

  cpu->clk = 0;
  cpu->rst = 0;


  for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++) {

    for (tick = 0; tick < 2; tick++) {
      tfp->dump (2*simcyc+tick);
      cpu->clk = !cpu->clk;
      cpu->eval ();
    }

    std::stringstream stream;
    stream << std::hex << cpu->a0_output;
    std::string result(stream.str());

    std::cout << "a0out:  " << result << std::endl;

    if (Verilated::gotFinish())  exit(0);

  }

    tfp->close(); 
    exit(0);
}
