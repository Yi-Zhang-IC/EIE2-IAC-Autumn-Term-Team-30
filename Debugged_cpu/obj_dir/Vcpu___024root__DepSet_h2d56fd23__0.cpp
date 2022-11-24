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
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__registerfile__DOT__rf_array__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__registerfile__DOT__rf_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__registerfile__DOT__rf_array__v0;
    // Body
    __Vdlyvset__cpu__DOT__registerfile__DOT__rf_array__v0 = 0U;
    vlSelf->prog_addr = ((IData)(vlSelf->rst) ? 0U : vlSelf->cpu__DOT__programcounter__DOT__next_pc);
    if (vlSelf->cpu__DOT__write_en) {
        __Vdlyvval__cpu__DOT__registerfile__DOT__rf_array__v0 
            = ((4U & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                ? ((2U & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                    ? ((1U & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                        ? 0U : 0U) : 0U) : ((2U & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                                              ? 0U : 
                                             (vlSelf->rf_dout1 
                                              + vlSelf->aluop2_test))));
        __Vdlyvset__cpu__DOT__registerfile__DOT__rf_array__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__registerfile__DOT__rf_array__v0 
            = (0x1fU & (vlSelf->interm_ins >> 7U));
    }
    if (__Vdlyvset__cpu__DOT__registerfile__DOT__rf_array__v0) {
        vlSelf->cpu__DOT__registerfile__DOT__rf_array[__Vdlyvdim0__cpu__DOT__registerfile__DOT__rf_array__v0] 
            = __Vdlyvval__cpu__DOT__registerfile__DOT__rf_array__v0;
    }
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
    vlSelf->a0_output = vlSelf->cpu__DOT__registerfile__DOT__rf_array
        [0xaU];
    vlSelf->rd_add = (0x1fU & (vlSelf->interm_ins >> 0xfU));
    vlSelf->rf_dout2 = vlSelf->cpu__DOT__registerfile__DOT__rf_array
        [(0x1fU & (vlSelf->interm_ins >> 0x14U))];
    vlSelf->rf_dout1 = vlSelf->cpu__DOT__registerfile__DOT__rf_array
        [(0x1fU & (vlSelf->interm_ins >> 0xfU))];
}

VL_INLINE_OPT void Vcpu___024root___combo__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___combo__TOP__0\n"); );
    // Body
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
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    __req |= ((vlSelf->aluop2_test ^ vlSelf->__Vchglast__TOP__aluop2_test));
    VL_DEBUG_IF( if(__req && ((vlSelf->aluop2_test ^ vlSelf->__Vchglast__TOP__aluop2_test))) VL_DBG_MSGF("        CHANGE: cpu.sv:13: aluop2_test\n"); );
    // Final
    vlSelf->__Vchglast__TOP__aluop2_test = vlSelf->aluop2_test;
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
