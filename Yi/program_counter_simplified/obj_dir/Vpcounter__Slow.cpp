// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpcounter.h for the primary calling header

#include "Vpcounter.h"
#include "Vpcounter__Syms.h"

//==========

VL_CTOR_IMP(Vpcounter) {
    Vpcounter__Syms* __restrict vlSymsp = __VlSymsp = new Vpcounter__Syms(this, name());
    Vpcounter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vpcounter::__Vconfigure(Vpcounter__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vpcounter::~Vpcounter() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vpcounter::_eval_initial(Vpcounter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcounter::_eval_initial\n"); );
    Vpcounter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vpcounter::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcounter::final\n"); );
    // Variables
    Vpcounter__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vpcounter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpcounter::_eval_settle(Vpcounter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcounter::_eval_settle\n"); );
    Vpcounter* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vpcounter::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcounter::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    pcsrc = VL_RAND_RESET_I(1);
    immop = VL_RAND_RESET_I(32);
    pc = VL_RAND_RESET_I(32);
    pcounter__DOT__next_pc = VL_RAND_RESET_I(32);
    pcounter__DOT__branch_pc = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
