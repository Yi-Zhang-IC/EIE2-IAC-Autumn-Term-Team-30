// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpcounter__Syms.h"


//======================

void Vpcounter::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vpcounter::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpcounter__Syms* __restrict vlSymsp = static_cast<Vpcounter__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vpcounter::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vpcounter::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vpcounter__Syms* __restrict vlSymsp = static_cast<Vpcounter__Syms*>(userp);
    Vpcounter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vpcounter::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vpcounter__Syms* __restrict vlSymsp = static_cast<Vpcounter__Syms*>(userp);
    Vpcounter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBit(c+3,"pcsrc", false,-1);
        tracep->declBus(c+4,"immop", false,-1, 31,0);
        tracep->declBus(c+5,"pc", false,-1, 31,0);
        tracep->declBus(c+8,"pcounter WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"pcounter clk", false,-1);
        tracep->declBit(c+2,"pcounter rst", false,-1);
        tracep->declBit(c+3,"pcounter pcsrc", false,-1);
        tracep->declBus(c+4,"pcounter immop", false,-1, 31,0);
        tracep->declBus(c+5,"pcounter pc", false,-1, 31,0);
        tracep->declBus(c+6,"pcounter next_pc", false,-1, 31,0);
        tracep->declBus(c+7,"pcounter branch_pc", false,-1, 31,0);
    }
}

void Vpcounter::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vpcounter::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vpcounter__Syms* __restrict vlSymsp = static_cast<Vpcounter__Syms*>(userp);
    Vpcounter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vpcounter::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vpcounter__Syms* __restrict vlSymsp = static_cast<Vpcounter__Syms*>(userp);
    Vpcounter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk));
        tracep->fullBit(oldp+2,(vlTOPp->rst));
        tracep->fullBit(oldp+3,(vlTOPp->pcsrc));
        tracep->fullIData(oldp+4,(vlTOPp->immop),32);
        tracep->fullIData(oldp+5,(vlTOPp->pc),32);
        tracep->fullIData(oldp+6,(vlTOPp->pcounter__DOT__next_pc),32);
        tracep->fullIData(oldp+7,(vlTOPp->pcounter__DOT__branch_pc),32);
        tracep->fullIData(oldp+8,(0x20U),32);
    }
}
