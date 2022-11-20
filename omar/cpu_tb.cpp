#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
#include <iostream>
#include <iomanip>

// #include "vbuddy.cpp"     // include vbuddy code
// #define MAX_SIM_CYC 100000

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

  // init Vbuddy
  // if (vbdOpen()!=1) return(-1);
  // vbdHeader("L3T2:kos");
  // vbdSetMode(0);


  // initialize simulation inputs
  cpu->clk = 0;
  cpu->rst = 0;


  for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++) {

    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      cpu->clk = !cpu->clk;
      cpu->eval ();
    }

    // vbdCycle(simcyc);

    // vbdHex(1, int(cpu->a0_output) & 0xf);
    // vbdHex(2, int(cpu->a0_output) >> 4 & 0xf);
    // vbdHex(3, int(cpu->a0_output) >> 8 & 0xf);

    // // checks immop, requires vbdsetmode(0)
    //  if (vbdFlag()){
    //   std::stringstream stream;
    //   stream << std::hex << cpu->interm_immop;
    //   std::string result = stream.str();
    //   std::cout << result << std::endl;
    // }
    
    // //checks instruction word, requires vbdsetmode(0)
    
    if (1){
      std::stringstream stream;
      stream << std::hex << cpu->rf_dout1;
      std::string result( stream.str());
      // std::cout << result << std::endl;

      std::stringstream st;
      st << std::hex << cpu->aluop2_test;
      std::string res = st.str();

      std::stringstream s;
      s << std::hex << cpu->interm_ins;
      std::string r = s.str();

      std::cout << "insttr: " << r << "\t rs1: " << result <<  "\t rs/op: " << res << std::endl;

    }

    // //tests program counter
    // vbdHex(2, (int(cpu->prog_addr) >> 4) & 0xF);
    // vbdHex(1, int(cpu->prog_addr) & 0xF);

    

    if (Verilated::gotFinish())  exit(0);

  }
    // vbdClose();
    tfp->close(); 
    exit(0);
}
