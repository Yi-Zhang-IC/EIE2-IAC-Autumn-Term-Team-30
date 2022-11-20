// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"

class Vcpu__Syms;

class Vcpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(rd_add,4,0);
    VL_OUT8(interm_aluctrl,2,0);
    VL_OUT8(interm_immsrc,2,0);
    VL_OUT8(interm_alusrc,0,0);
    VL_OUT8(interm_eq,0,0);
    VL_OUT8(interm_pcsrc,0,0);
    VL_OUT8(write_en,0,0);
    CData/*0:0*/ cpu__DOT__mem_ctrl_sgnext__DOT__immsrc;
    CData/*0:0*/ cpu__DOT__RF__DOT__rst;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0_output,31,0);
    VL_OUT(rf_dout1,31,0);
    VL_OUT(rf_dout2,31,0);
    VL_OUT(interm_immop,31,0);
    VL_OUT(prog_addr,31,0);
    VL_OUT(interm_ins,31,0);
    VL_OUT(aluop2_test,31,0);
    VL_OUT(rf_din,31,0);
    IData/*31:0*/ cpu__DOT__pc_unit__DOT__next_pc;
    IData/*31:0*/ cpu__DOT__RF__DOT__unnamedblk1__DOT__j;
    IData/*31:0*/ cpu__DOT__ALU__DOT__aluop2;
    IData/*31:0*/ __Vchglast__TOP__cpu__DOT__ALU__DOT__aluop2;
    VlUnpacked<CData/*7:0*/, 1048576> cpu__DOT__mem_ctrl_sgnext__DOT__instr_mem__DOT__rom_array;
    VlUnpacked<IData/*31:0*/, 32> cpu__DOT__RF__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024root(Vcpu__Syms* symsp, const char* name);
    ~Vcpu___024root();
    VL_UNCOPYABLE(Vcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
