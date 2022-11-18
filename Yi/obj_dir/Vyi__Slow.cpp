// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vyi.h for the primary calling header

#include "Vyi.h"
#include "Vyi__Syms.h"

//==========

VL_CTOR_IMP(Vyi) {
    Vyi__Syms* __restrict vlSymsp = __VlSymsp = new Vyi__Syms(this, name());
    Vyi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vyi::__Vconfigure(Vyi__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vyi::~Vyi() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vyi::_eval_initial(Vyi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyi::_eval_initial\n"); );
    Vyi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void Vyi::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyi::final\n"); );
    // Variables
    Vyi__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vyi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vyi::_eval_settle(Vyi__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyi::_eval_settle\n"); );
    Vyi* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vyi::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vyi::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst = VL_RAND_RESET_I(1);
    pcsrc = VL_RAND_RESET_I(1);
    immop = VL_RAND_RESET_I(32);
    pc = VL_RAND_RESET_I(32);
    yi__DOT__next_pc = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
