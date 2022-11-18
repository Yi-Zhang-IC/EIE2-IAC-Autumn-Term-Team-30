// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vyi__Syms.h"


//======================

void Vyi::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vyi::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vyi__Syms* __restrict vlSymsp = static_cast<Vyi__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vyi::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vyi::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vyi__Syms* __restrict vlSymsp = static_cast<Vyi__Syms*>(userp);
    Vyi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vyi::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vyi__Syms* __restrict vlSymsp = static_cast<Vyi__Syms*>(userp);
    Vyi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"pcsrc", false,-1);
        tracep->declBus(c+4,"immop", false,-1, 31,0);
        tracep->declBus(c+5,"pc", false,-1, 31,0);
        tracep->declBus(c+9,"yi WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"yi clk", false,-1);
        tracep->declBit(c+2,"yi rst", false,-1);
        tracep->declBit(c+3,"yi pcsrc", false,-1);
        tracep->declBus(c+4,"yi immop", false,-1, 31,0);
        tracep->declBus(c+5,"yi pc", false,-1, 31,0);
        tracep->declBus(c+6,"yi branch_pc", false,-1, 31,0);
        tracep->declBus(c+7,"yi inc_pc", false,-1, 31,0);
        tracep->declBus(c+8,"yi next_pc", false,-1, 31,0);
        tracep->declBus(c+9,"yi adder WIDTH", false,-1, 31,0);
        tracep->declBus(c+5,"yi adder a", false,-1, 31,0);
        tracep->declBus(c+4,"yi adder b", false,-1, 31,0);
        tracep->declBus(c+6,"yi adder sum", false,-1, 31,0);
        tracep->declBus(c+9,"yi addconstant WIDTH", false,-1, 31,0);
        tracep->declBus(c+10,"yi addconstant constant", false,-1, 31,0);
        tracep->declBus(c+5,"yi addconstant in", false,-1, 31,0);
        tracep->declBus(c+7,"yi addconstant out", false,-1, 31,0);
        tracep->declBus(c+9,"yi mux WIDTH", false,-1, 31,0);
        tracep->declBit(c+3,"yi mux sel", false,-1);
        tracep->declBus(c+7,"yi mux in_0", false,-1, 31,0);
        tracep->declBus(c+6,"yi mux in_1", false,-1, 31,0);
        tracep->declBus(c+8,"yi mux out", false,-1, 31,0);
        tracep->declBus(c+9,"yi pcreg WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"yi pcreg clk", false,-1);
        tracep->declBit(c+2,"yi pcreg rst", false,-1);
        tracep->declBus(c+8,"yi pcreg in", false,-1, 31,0);
        tracep->declBus(c+5,"yi pcreg out", false,-1, 31,0);
    }
}

void Vyi::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vyi::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vyi__Syms* __restrict vlSymsp = static_cast<Vyi__Syms*>(userp);
    Vyi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vyi::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vyi__Syms* __restrict vlSymsp = static_cast<Vyi__Syms*>(userp);
    Vyi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->pcsrc));
        tracep->fullIData(oldp+4,(vlTOPp->immop),32);
        tracep->fullIData(oldp+5,(vlTOPp->pc),32);
        tracep->fullIData(oldp+6,((vlTOPp->pc + vlTOPp->immop)),32);
        tracep->fullIData(oldp+7,(((IData)(4U) + vlTOPp->pc)),32);
        tracep->fullIData(oldp+8,(((IData)(vlTOPp->pcsrc)
                                    ? (vlTOPp->pc + vlTOPp->immop)
                                    : ((IData)(4U) 
                                       + vlTOPp->pc))),32);
        tracep->fullIData(oldp+9,(0x20U),32);
        tracep->fullIData(oldp+10,(4U),32);
    }
}
