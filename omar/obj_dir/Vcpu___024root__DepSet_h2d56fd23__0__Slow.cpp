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
    VL_WRITEF("Loading rom.\n");
    __Vtemp_h3da635ba__0[0U] = 0x2e686578U;
    __Vtemp_h3da635ba__0[1U] = 0x6772616dU;
    __Vtemp_h3da635ba__0[2U] = 0x70726fU;
    VL_READMEM_N(true, 8, 1048576, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h3da635ba__0)
                 ,  &(vlSelf->cpu__DOT__mem_ctrl_sgnext__DOT__instr_mem__DOT__rom_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcpu___024root___settle__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->a0_output = vlSelf->cpu__DOT__RF__DOT__rf
        [0xaU];
    vlSelf->interm_ins = ((vlSelf->cpu__DOT__mem_ctrl_sgnext__DOT__instr_mem__DOT__rom_array
                           [(0xfffffU & vlSelf->prog_addr)] 
                           << 0x18U) | ((vlSelf->cpu__DOT__mem_ctrl_sgnext__DOT__instr_mem__DOT__rom_array
                                         [(0xfffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->prog_addr))] 
                                         << 0x10U) 
                                        | ((vlSelf->cpu__DOT__mem_ctrl_sgnext__DOT__instr_mem__DOT__rom_array
                                            [(0xfffffU 
                                              & ((IData)(2U) 
                                                 + vlSelf->prog_addr))] 
                                            << 8U) 
                                           | vlSelf->cpu__DOT__mem_ctrl_sgnext__DOT__instr_mem__DOT__rom_array
                                           [(0xfffffU 
                                             & ((IData)(3U) 
                                                + vlSelf->prog_addr))])));
    vlSelf->rd_add = (0x1fU & (vlSelf->interm_ins >> 0xfU));
    vlSelf->rf_dout2 = vlSelf->cpu__DOT__RF__DOT__rf
        [(0x1fU & (vlSelf->interm_ins >> 0x14U))];
    vlSelf->rf_dout1 = vlSelf->cpu__DOT__RF__DOT__rf
        [(0x1fU & (vlSelf->interm_ins >> 0xfU))];
    vlSelf->interm_eq = (vlSelf->rf_dout1 == vlSelf->cpu__DOT__ALU__DOT__aluop2);
    if ((0x13U == (0x7fU & vlSelf->interm_ins))) {
        vlSelf->write_en = 1U;
        vlSelf->interm_alusrc = 1U;
        vlSelf->interm_aluctrl = 0U;
        vlSelf->cpu__DOT__mem_ctrl_sgnext__DOT__immsrc = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->interm_ins))) {
        if ((1U & (~ (IData)(vlSelf->interm_eq)))) {
            vlSelf->write_en = 0U;
            vlSelf->interm_alusrc = 0U;
            vlSelf->interm_aluctrl = 7U;
            vlSelf->cpu__DOT__mem_ctrl_sgnext__DOT__immsrc = 1U;
        }
    } else {
        vlSelf->write_en = 0U;
        vlSelf->interm_alusrc = 0U;
        vlSelf->interm_aluctrl = 0U;
        vlSelf->cpu__DOT__mem_ctrl_sgnext__DOT__immsrc = 0U;
    }
    vlSelf->rf_din = ((4U & (IData)(vlSelf->interm_aluctrl))
                       ? 0U : ((2U & (IData)(vlSelf->interm_aluctrl))
                                ? ((1U & (IData)(vlSelf->interm_aluctrl))
                                    ? (vlSelf->rf_dout1 
                                       | vlSelf->cpu__DOT__ALU__DOT__aluop2)
                                    : (vlSelf->rf_dout1 
                                       & vlSelf->cpu__DOT__ALU__DOT__aluop2))
                                : ((1U & (IData)(vlSelf->interm_aluctrl))
                                    ? (vlSelf->rf_dout1 
                                       - vlSelf->cpu__DOT__ALU__DOT__aluop2)
                                    : (vlSelf->rf_dout1 
                                       + vlSelf->cpu__DOT__ALU__DOT__aluop2))));
    if ((1U & (~ (IData)(vlSelf->cpu__DOT__mem_ctrl_sgnext__DOT__immsrc)))) {
        vlSelf->interm_immop = (((- (IData)((vlSelf->interm_ins 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->interm_ins 
                                             >> 0x14U));
    }
    if (vlSelf->cpu__DOT__mem_ctrl_sgnext__DOT__immsrc) {
        vlSelf->interm_immop = ((0x7ffff800U & ((- (IData)(
                                                           (vlSelf->interm_ins 
                                                            >> 0x1fU))) 
                                                << 0xbU)) 
                                | ((0x400U & (vlSelf->interm_ins 
                                              << 3U)) 
                                   | ((0x3f0U & (vlSelf->interm_ins 
                                                 >> 0x15U)) 
                                      | (0xfU & (vlSelf->interm_ins 
                                                 >> 8U)))));
    }
    vlSelf->cpu__DOT__ALU__DOT__aluop2 = ((IData)(vlSelf->interm_alusrc)
                                           ? vlSelf->interm_immop
                                           : vlSelf->rf_dout2);
    vlSelf->cpu__DOT__pc_unit__DOT__next_pc = ((IData)(vlSelf->interm_pcsrc)
                                                ? (vlSelf->prog_addr 
                                                   + vlSelf->interm_immop)
                                                : ((IData)(4U) 
                                                   + vlSelf->prog_addr));
}

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__0(vlSelf);
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
    vlSelf->rf_din = VL_RAND_RESET_I(32);
    vlSelf->interm_aluctrl = VL_RAND_RESET_I(3);
    vlSelf->interm_immsrc = VL_RAND_RESET_I(3);
    vlSelf->interm_alusrc = VL_RAND_RESET_I(1);
    vlSelf->interm_eq = VL_RAND_RESET_I(1);
    vlSelf->interm_pcsrc = VL_RAND_RESET_I(1);
    vlSelf->write_en = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__mem_ctrl_sgnext__DOT__immsrc = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1048576; ++__Vi0) {
        vlSelf->cpu__DOT__mem_ctrl_sgnext__DOT__instr_mem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__pc_unit__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__RF__DOT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__RF__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__RF__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->cpu__DOT__ALU__DOT__aluop2 = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__cpu__DOT__ALU__DOT__aluop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
