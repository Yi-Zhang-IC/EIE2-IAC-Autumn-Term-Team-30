// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___initial__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h3da635ba__0;
    // Body
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[1U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[2U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[3U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[4U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[5U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[6U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[7U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[8U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[9U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0xaU] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0xbU] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0xcU] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0xdU] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0xeU] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0xfU] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x10U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x11U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x12U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x13U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x14U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x15U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x16U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x17U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x18U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x19U] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x1aU] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x1bU] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x1cU] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x1dU] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x1eU] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__rf_array[0x1fU] = 0U;
    vlSelf->cpu__DOT__registerfile__DOT__unnamedblk1__DOT__i = 0x20U;
    VL_WRITEF("Loading rom.\n");
    __Vtemp_h3da635ba__0[0U] = 0x2e686578U;
    __Vtemp_h3da635ba__0[1U] = 0x6772616dU;
    __Vtemp_h3da635ba__0[2U] = 0x70726fU;
    VL_READMEM_N(true, 8, 1048576, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h3da635ba__0)
                 ,  &(vlSelf->cpu__DOT__programmem__DOT__rom_array)
                 , 0, ~0ULL);
    VL_WRITEF("Program written to ROM successfully\n");
}

VL_ATTR_COLD void Vcpu___024root___settle__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0_output = vlSelf->cpu__DOT__registerfile__DOT__rf_array
        [0xaU];
    vlSelf->interm_ins = ((vlSelf->cpu__DOT__programmem__DOT__rom_array
                           [(0xfffffU & vlSelf->prog_addr)] 
                           << 0x18U) | ((vlSelf->cpu__DOT__programmem__DOT__rom_array
                                         [(0xfffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->prog_addr))] 
                                         << 0x10U) 
                                        | ((vlSelf->cpu__DOT__programmem__DOT__rom_array
                                            [(0xfffffU 
                                              & ((IData)(2U) 
                                                 + vlSelf->prog_addr))] 
                                            << 8U) 
                                           | vlSelf->cpu__DOT__programmem__DOT__rom_array
                                           [(0xfffffU 
                                             & ((IData)(3U) 
                                                + vlSelf->prog_addr))])));
    vlSelf->rd_add = (0x1fU & (vlSelf->interm_ins >> 0xfU));
    vlSelf->rf_dout2 = vlSelf->cpu__DOT__registerfile__DOT__rf_array
        [(0x1fU & (vlSelf->interm_ins >> 0x14U))];
    vlSelf->rf_dout1 = vlSelf->cpu__DOT__registerfile__DOT__rf_array
        [(0x1fU & (vlSelf->interm_ins >> 0xfU))];
    vlSelf->cpu__DOT__interm_eq = (vlSelf->rf_dout1 
                                   == vlSelf->aluop2_test);
    if ((0x13U == (0x7fU & vlSelf->interm_ins))) {
        vlSelf->cpu__DOT__interm_aluctrl = (7U & (vlSelf->interm_ins 
                                                  >> 0xcU));
        vlSelf->cpu__DOT__write_en = 1U;
        vlSelf->cpu__DOT__interm_alusrc = 1U;
        vlSelf->cpu__DOT__interm_immsrc = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->interm_ins))) {
        if ((1U & (~ (IData)(vlSelf->cpu__DOT__interm_eq)))) {
            vlSelf->cpu__DOT__interm_aluctrl = 7U;
            vlSelf->cpu__DOT__write_en = 0U;
            vlSelf->cpu__DOT__interm_alusrc = 0U;
            vlSelf->cpu__DOT__interm_immsrc = 3U;
        }
    } else {
        vlSelf->cpu__DOT__interm_aluctrl = 0U;
        vlSelf->cpu__DOT__write_en = 0U;
        vlSelf->cpu__DOT__interm_alusrc = 0U;
        vlSelf->cpu__DOT__interm_immsrc = 0U;
    }
    vlSelf->cpu__DOT__sgnextend__DOT__uimm = (0xfffU 
                                              & ((0U 
                                                  == (IData)(vlSelf->cpu__DOT__interm_immsrc))
                                                  ? 
                                                 (vlSelf->interm_ins 
                                                  >> 0x14U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->cpu__DOT__interm_immsrc))
                                                   ? 
                                                  ((0x800U 
                                                    & (vlSelf->interm_ins 
                                                       >> 0x14U)) 
                                                   | ((0x400U 
                                                       & (vlSelf->interm_ins 
                                                          << 3U)) 
                                                      | ((0x3f0U 
                                                          & (vlSelf->interm_ins 
                                                             >> 0x15U)) 
                                                         | (0xfU 
                                                            & (vlSelf->interm_ins 
                                                               >> 8U)))))
                                                   : 0U)));
    vlSelf->interm_immop = (((- (IData)((1U & ((IData)(vlSelf->cpu__DOT__sgnextend__DOT__uimm) 
                                               >> 0xbU)))) 
                             << 0xcU) | (IData)(vlSelf->cpu__DOT__sgnextend__DOT__uimm));
    vlSelf->aluop2_test = ((IData)(vlSelf->cpu__DOT__interm_alusrc)
                            ? vlSelf->interm_immop : vlSelf->rf_dout2);
    vlSelf->cpu__DOT__programcounter__DOT__branch_pc 
        = (vlSelf->prog_addr + vlSelf->interm_immop);
    vlSelf->cpu__DOT__programcounter__DOT__next_pc 
        = (((0x13U != (0x7fU & vlSelf->interm_ins)) 
            & ((0x63U != (0x7fU & vlSelf->interm_ins)) 
               | (~ (IData)(vlSelf->cpu__DOT__interm_eq))))
            ? vlSelf->cpu__DOT__programcounter__DOT__branch_pc
            : ((IData)(4U) + vlSelf->prog_addr));
}

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcpu___024root___final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___final\n"); );
}

VL_ATTR_COLD void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0_output = VL_RAND_RESET_I(32);
    vlSelf->rf_dout1 = VL_RAND_RESET_I(32);
    vlSelf->rf_dout2 = VL_RAND_RESET_I(32);
    vlSelf->interm_immop = VL_RAND_RESET_I(32);
    vlSelf->rd_add = VL_RAND_RESET_I(5);
    vlSelf->prog_addr = VL_RAND_RESET_I(32);
    vlSelf->interm_ins = VL_RAND_RESET_I(32);
    vlSelf->aluop2_test = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__interm_aluctrl = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__interm_immsrc = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__interm_alusrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__interm_eq = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__programcounter__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__programcounter__DOT__branch_pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1048576; ++__Vi0) {
        vlSelf->cpu__DOT__programmem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__sgnextend__DOT__uimm = VL_RAND_RESET_I(12);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__registerfile__DOT__rf_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__registerfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vchglast__TOP__aluop2_test = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
