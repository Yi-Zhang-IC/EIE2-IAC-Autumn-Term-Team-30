// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu__Syms.h"
#include "Vcpu___024root.h"

void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf);

Vcpu___024root::Vcpu___024root(Vcpu__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcpu___024root___ctor_var_reset(this);
}

void Vcpu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcpu___024root::~Vcpu___024root() {
}
