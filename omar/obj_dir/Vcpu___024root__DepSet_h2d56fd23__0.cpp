// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__cpu__DOT__RF__DOT__rf__v0;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__RF__DOT__rf__v32;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__RF__DOT__rf__v32;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__RF__DOT__rf__v32;
    // Body
    __Vdlyvset__cpu__DOT__RF__DOT__rf__v0 = 0U;
    __Vdlyvset__cpu__DOT__RF__DOT__rf__v32 = 0U;
    if (vlSelf->cpu__DOT__RF__DOT__rst) {
        vlSelf->cpu__DOT__RF__DOT__unnamedblk1__DOT__j = 0x20U;
        __Vdlyvset__cpu__DOT__RF__DOT__rf__v0 = 1U;
    } else if (vlSelf->write_en) {
        __Vdlyvval__cpu__DOT__RF__DOT__rf__v32 = vlSelf->rf_din;
        __Vdlyvset__cpu__DOT__RF__DOT__rf__v32 = 1U;
        __Vdlyvdim0__cpu__DOT__RF__DOT__rf__v32 = (0x1fU 
                                                   & (vlSelf->interm_ins 
                                                      >> 7U));
    }
    vlSelf->prog_addr = ((IData)(vlSelf->rst) ? 0U : vlSelf->cpu__DOT__pc_unit__DOT__next_pc);
    if (__Vdlyvset__cpu__DOT__RF__DOT__rf__v0) {
        vlSelf->cpu__DOT__RF__DOT__rf[0U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[1U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[2U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[3U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[4U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[5U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[6U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[7U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[8U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[9U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0xaU] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0xbU] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0xcU] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0xdU] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0xeU] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0xfU] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x10U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x11U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x12U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x13U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x14U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x15U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x16U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x17U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x18U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x19U] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x1aU] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x1bU] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x1cU] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x1dU] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x1eU] = 0U;
        vlSelf->cpu__DOT__RF__DOT__rf[0x1fU] = 0U;
    }
    if (__Vdlyvset__cpu__DOT__RF__DOT__rf__v32) {
        vlSelf->cpu__DOT__RF__DOT__rf[__Vdlyvdim0__cpu__DOT__RF__DOT__rf__v32] 
            = __Vdlyvval__cpu__DOT__RF__DOT__rf__v32;
    }
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
    vlSelf->a0_output = vlSelf->cpu__DOT__RF__DOT__rf
        [0xaU];
    vlSelf->rd_add = (0x1fU & (vlSelf->interm_ins >> 0xfU));
    vlSelf->rf_dout2 = vlSelf->cpu__DOT__RF__DOT__rf
        [(0x1fU & (vlSelf->interm_ins >> 0x14U))];
    vlSelf->rf_dout1 = vlSelf->cpu__DOT__RF__DOT__rf
        [(0x1fU & (vlSelf->interm_ins >> 0xfU))];
}

VL_INLINE_OPT void Vcpu___024root___combo__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___combo__TOP__0\n"); );
    // Body
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

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vcpu___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf);

VL_INLINE_OPT QData Vcpu___024root___change_request(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request\n"); );
    // Body
    return (Vcpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->cpu__DOT__ALU__DOT__aluop2 ^ vlSelf->__Vchglast__TOP__cpu__DOT__ALU__DOT__aluop2));
    VL_DEBUG_IF( if(__req && ((vlSelf->cpu__DOT__ALU__DOT__aluop2 ^ vlSelf->__Vchglast__TOP__cpu__DOT__ALU__DOT__aluop2))) VL_DBG_MSGF("        CHANGE: ALU.sv:9: cpu.ALU.aluop2\n"); );
    // Final
    vlSelf->__Vchglast__TOP__cpu__DOT__ALU__DOT__aluop2 
        = vlSelf->cpu__DOT__ALU__DOT__aluop2;
    return __req;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
