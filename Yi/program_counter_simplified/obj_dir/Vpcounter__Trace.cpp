// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpcounter__Syms.h"


void Vpcounter::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vpcounter__Syms* __restrict vlSymsp = static_cast<Vpcounter__Syms*>(userp);
    Vpcounter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vpcounter::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vpcounter__Syms* __restrict vlSymsp = static_cast<Vpcounter__Syms*>(userp);
    Vpcounter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk));
        tracep->chgBit(oldp+1,(vlTOPp->rst));
        tracep->chgBit(oldp+2,(vlTOPp->pcsrc));
        tracep->chgIData(oldp+3,(vlTOPp->immop),32);
        tracep->chgIData(oldp+4,(vlTOPp->pc),32);
        tracep->chgIData(oldp+5,(vlTOPp->pcounter__DOT__next_pc),32);
        tracep->chgIData(oldp+6,(vlTOPp->pcounter__DOT__branch_pc),32);
    }
}

void Vpcounter::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vpcounter__Syms* __restrict vlSymsp = static_cast<Vpcounter__Syms*>(userp);
    Vpcounter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
