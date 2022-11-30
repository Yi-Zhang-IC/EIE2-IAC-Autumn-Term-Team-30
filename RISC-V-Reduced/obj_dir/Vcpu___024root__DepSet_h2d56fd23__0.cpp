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
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v0;
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v1;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v1;
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v2;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v2;
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v3;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v3;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v3;
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v4;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v4;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v4;
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v5;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v5;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v5;
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v6;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v6;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v6;
    IData/*17:0*/ __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v7;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v7;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v7;
    // Body
    __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v0 = 0U;
    __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v1 = 0U;
    __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v2 = 0U;
    __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v3 = 0U;
    __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v4 = 0U;
    __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v5 = 0U;
    __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v6 = 0U;
    __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v7 = 0U;
    __Vdlyvset__cpu__DOT__registerfile__DOT__rf_array__v0 = 0U;
    if (vlSelf->cpu__DOT__interm_memwrite) {
        if ((0U == (IData)(vlSelf->cpu__DOT__inter_addrmode))) {
            vlSelf->cpu__DOT__ram__DOT____Vlvbound_h7f6db442__0 
                = (0xffU & vlSelf->rf_dout2);
            if ((0x30d40U >= (0x3ffffU & vlSelf->cpu__DOT__interm_aluout))) {
                __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v0 
                    = vlSelf->cpu__DOT__ram__DOT____Vlvbound_h7f6db442__0;
                __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v0 = 1U;
                __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v0 
                    = (0x3ffffU & vlSelf->cpu__DOT__interm_aluout);
            }
        } else if ((1U == (IData)(vlSelf->cpu__DOT__inter_addrmode))) {
            vlSelf->cpu__DOT__ram__DOT____Vlvbound_h7f6db442__1 
                = (0xffU & vlSelf->rf_dout2);
            if ((0x30d40U >= (0x3ffffU & vlSelf->cpu__DOT__interm_aluout))) {
                __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v1 
                    = vlSelf->cpu__DOT__ram__DOT____Vlvbound_h7f6db442__1;
                __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v1 = 1U;
                __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v1 
                    = (0x3ffffU & vlSelf->cpu__DOT__interm_aluout);
            }
            vlSelf->cpu__DOT__ram__DOT____Vlvbound_hf92e90a7__0 
                = (0xffU & (vlSelf->rf_dout2 >> 8U));
            if ((0x30d40U >= (0x3ffffU & ((IData)(1U) 
                                          + vlSelf->cpu__DOT__interm_aluout)))) {
                __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v2 
                    = vlSelf->cpu__DOT__ram__DOT____Vlvbound_hf92e90a7__0;
                __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v2 = 1U;
                __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v2 
                    = (0x3ffffU & ((IData)(1U) + vlSelf->cpu__DOT__interm_aluout));
            }
        } else if ((2U == (IData)(vlSelf->cpu__DOT__inter_addrmode))) {
            vlSelf->cpu__DOT__ram__DOT____Vlvbound_h7f6db442__2 
                = (0xffU & vlSelf->rf_dout2);
            if ((0x30d40U >= (0x3ffffU & vlSelf->cpu__DOT__interm_aluout))) {
                __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v3 
                    = vlSelf->cpu__DOT__ram__DOT____Vlvbound_h7f6db442__2;
                __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v3 = 1U;
                __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v3 
                    = (0x3ffffU & vlSelf->cpu__DOT__interm_aluout);
            }
            vlSelf->cpu__DOT__ram__DOT____Vlvbound_hf92e90a7__1 
                = (0xffU & (vlSelf->rf_dout2 >> 8U));
            if ((0x30d40U >= (0x3ffffU & ((IData)(1U) 
                                          + vlSelf->cpu__DOT__interm_aluout)))) {
                __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v4 
                    = vlSelf->cpu__DOT__ram__DOT____Vlvbound_hf92e90a7__1;
                __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v4 = 1U;
                __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v4 
                    = (0x3ffffU & ((IData)(1U) + vlSelf->cpu__DOT__interm_aluout));
            }
            vlSelf->cpu__DOT__ram__DOT____Vlvbound_hf92e7f9c__0 
                = (0xffU & (vlSelf->rf_dout2 >> 0x10U));
            if ((0x30d40U >= (0x3ffffU & ((IData)(2U) 
                                          + vlSelf->cpu__DOT__interm_aluout)))) {
                __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v5 
                    = vlSelf->cpu__DOT__ram__DOT____Vlvbound_hf92e7f9c__0;
                __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v5 = 1U;
                __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v5 
                    = (0x3ffffU & ((IData)(2U) + vlSelf->cpu__DOT__interm_aluout));
            }
            vlSelf->cpu__DOT__ram__DOT____Vlvbound_hf93374c7__0 
                = (vlSelf->rf_dout2 >> 0x18U);
            if ((0x30d40U >= (0x3ffffU & ((IData)(3U) 
                                          + vlSelf->cpu__DOT__interm_aluout)))) {
                __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v6 
                    = vlSelf->cpu__DOT__ram__DOT____Vlvbound_hf93374c7__0;
                __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v6 = 1U;
                __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v6 
                    = (0x3ffffU & ((IData)(3U) + vlSelf->cpu__DOT__interm_aluout));
            }
        } else if ((0x30d40U >= (0x3ffffU & vlSelf->cpu__DOT__interm_aluout))) {
            vlSelf->cpu__DOT__ram__DOT____Vlvbound_h7f6db442__3 
                = vlSelf->cpu__DOT__ram__DOT__ram_array
                [(0x3ffffU & vlSelf->cpu__DOT__interm_aluout)];
            __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v7 
                = vlSelf->cpu__DOT__ram__DOT____Vlvbound_h7f6db442__3;
            __Vdlyvset__cpu__DOT__ram__DOT__ram_array__v7 = 1U;
            __Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v7 
                = (0x3ffffU & vlSelf->cpu__DOT__interm_aluout);
        } else {
            vlSelf->cpu__DOT__ram__DOT____Vlvbound_h7f6db442__3 = 0U;
        }
    }
    vlSelf->prog_addr = ((IData)(vlSelf->rst) ? 0U : vlSelf->cpu__DOT__programcounter__DOT__next_pc);
    if (vlSelf->cpu__DOT__write_en) {
        __Vdlyvval__cpu__DOT__registerfile__DOT__rf_array__v0 
            = ((IData)(vlSelf->cpu__DOT__interm_resultsrc)
                ? vlSelf->rout_test : vlSelf->cpu__DOT__interm_aluout);
        __Vdlyvset__cpu__DOT__registerfile__DOT__rf_array__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__registerfile__DOT__rf_array__v0 
            = (0x1fU & (vlSelf->interm_ins >> 7U));
    }
    if (__Vdlyvset__cpu__DOT__ram__DOT__ram_array__v0) {
        vlSelf->cpu__DOT__ram__DOT__ram_array[__Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v0] 
            = __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v0;
    }
    if (__Vdlyvset__cpu__DOT__ram__DOT__ram_array__v1) {
        vlSelf->cpu__DOT__ram__DOT__ram_array[__Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v1] 
            = __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v1;
    }
    if (__Vdlyvset__cpu__DOT__ram__DOT__ram_array__v2) {
        vlSelf->cpu__DOT__ram__DOT__ram_array[__Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v2] 
            = __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v2;
    }
    if (__Vdlyvset__cpu__DOT__ram__DOT__ram_array__v3) {
        vlSelf->cpu__DOT__ram__DOT__ram_array[__Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v3] 
            = __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v3;
    }
    if (__Vdlyvset__cpu__DOT__ram__DOT__ram_array__v4) {
        vlSelf->cpu__DOT__ram__DOT__ram_array[__Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v4] 
            = __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v4;
    }
    if (__Vdlyvset__cpu__DOT__ram__DOT__ram_array__v5) {
        vlSelf->cpu__DOT__ram__DOT__ram_array[__Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v5] 
            = __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v5;
    }
    if (__Vdlyvset__cpu__DOT__ram__DOT__ram_array__v6) {
        vlSelf->cpu__DOT__ram__DOT__ram_array[__Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v6] 
            = __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v6;
    }
    if (__Vdlyvset__cpu__DOT__ram__DOT__ram_array__v7) {
        vlSelf->cpu__DOT__ram__DOT__ram_array[__Vdlyvdim0__cpu__DOT__ram__DOT__ram_array__v7] 
            = __Vdlyvval__cpu__DOT__ram__DOT__ram_array__v7;
    }
    if (__Vdlyvset__cpu__DOT__registerfile__DOT__rf_array__v0) {
        vlSelf->cpu__DOT__registerfile__DOT__rf_array[__Vdlyvdim0__cpu__DOT__registerfile__DOT__rf_array__v0] 
            = __Vdlyvval__cpu__DOT__registerfile__DOT__rf_array__v0;
    }
    vlSelf->interm_ins = ((((0x7d0U >= (0x7ffU & vlSelf->prog_addr))
                             ? vlSelf->cpu__DOT__programmem__DOT__rom_array
                            [(0x7ffU & vlSelf->prog_addr)]
                             : 0U) << 0x18U) | ((((0x7d0U 
                                                   >= 
                                                   (0x7ffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->prog_addr)))
                                                   ? 
                                                  vlSelf->cpu__DOT__programmem__DOT__rom_array
                                                  [
                                                  (0x7ffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->prog_addr))]
                                                   : 0U) 
                                                 << 0x10U) 
                                                | ((((0x7d0U 
                                                      >= 
                                                      (0x7ffU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->prog_addr)))
                                                      ? 
                                                     vlSelf->cpu__DOT__programmem__DOT__rom_array
                                                     [
                                                     (0x7ffU 
                                                      & ((IData)(2U) 
                                                         + vlSelf->prog_addr))]
                                                      : 0U) 
                                                    << 8U) 
                                                   | ((0x7d0U 
                                                       >= 
                                                       (0x7ffU 
                                                        & ((IData)(3U) 
                                                           + vlSelf->prog_addr)))
                                                       ? 
                                                      vlSelf->cpu__DOT__programmem__DOT__rom_array
                                                      [
                                                      (0x7ffU 
                                                       & ((IData)(3U) 
                                                          + vlSelf->prog_addr))]
                                                       : 0U))));
    vlSelf->a0_output = vlSelf->cpu__DOT__registerfile__DOT__rf_array
        [0xaU];
    vlSelf->rd_add = (0x1fU & (vlSelf->interm_ins >> 0xfU));
    vlSelf->rf_dout2 = vlSelf->cpu__DOT__registerfile__DOT__rf_array
        [(0x1fU & (vlSelf->interm_ins >> 0x14U))];
    vlSelf->rf_dout1 = vlSelf->cpu__DOT__registerfile__DOT__rf_array
        [(0x1fU & (vlSelf->interm_ins >> 0xfU))];
}

extern const VlUnpacked<CData/*2:0*/, 32> Vcpu__ConstPool__TABLE_h501ce20c_0;

VL_INLINE_OPT void Vcpu___024root___combo__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___combo__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    // Body
    vlSelf->cpu__DOT__interm_eq = (vlSelf->rf_dout1 
                                   == vlSelf->cpu__DOT__alu__DOT__aluop2);
    vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = (7U & 
                                               (vlSelf->interm_ins 
                                                >> 0xcU));
    vlSelf->cpu__DOT__ctrlunit__DOT__opcode = (0x7fU 
                                               & vlSelf->interm_ins);
    if ((0x40U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
                vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
                vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
                vlSelf->cpu__DOT__interm_pcsrc = 0U;
                vlSelf->cpu__DOT__write_en = 0U;
                vlSelf->cpu__DOT__interm_alusrc = 1U;
                vlSelf->cpu__DOT__interm_immsrc = 7U;
                vlSelf->cpu__DOT__interm_memwrite = 0U;
            } else if ((8U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
                vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
                vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
                vlSelf->cpu__DOT__interm_pcsrc = 0U;
                vlSelf->cpu__DOT__write_en = 0U;
                vlSelf->cpu__DOT__interm_alusrc = 1U;
                vlSelf->cpu__DOT__interm_immsrc = 7U;
                vlSelf->cpu__DOT__interm_memwrite = 0U;
            } else if ((4U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
                vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
                vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
                vlSelf->cpu__DOT__interm_pcsrc = 0U;
                vlSelf->cpu__DOT__write_en = 0U;
                vlSelf->cpu__DOT__interm_alusrc = 1U;
                vlSelf->cpu__DOT__interm_immsrc = 7U;
                vlSelf->cpu__DOT__interm_memwrite = 0U;
            } else if ((2U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
                    vlSelf->cpu__DOT__ctrlunit__DOT__aluop = 1U;
                    vlSelf->cpu__DOT__write_en = 0U;
                    vlSelf->cpu__DOT__interm_immsrc = 3U;
                    vlSelf->cpu__DOT__interm_alusrc = 0U;
                    vlSelf->cpu__DOT__interm_memwrite = 0U;
                    vlSelf->cpu__DOT__interm_pcsrc 
                        = ((0U == (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__funct3))
                            ? (IData)(vlSelf->cpu__DOT__interm_eq)
                            : ((1U == (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__funct3)) 
                               & (~ (IData)(vlSelf->cpu__DOT__interm_eq))));
                } else {
                    vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
                    vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
                    vlSelf->cpu__DOT__interm_pcsrc = 0U;
                    vlSelf->cpu__DOT__write_en = 0U;
                    vlSelf->cpu__DOT__interm_alusrc = 1U;
                    vlSelf->cpu__DOT__interm_immsrc = 7U;
                    vlSelf->cpu__DOT__interm_memwrite = 0U;
                }
            } else {
                vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
                vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
                vlSelf->cpu__DOT__interm_pcsrc = 0U;
                vlSelf->cpu__DOT__write_en = 0U;
                vlSelf->cpu__DOT__interm_alusrc = 1U;
                vlSelf->cpu__DOT__interm_immsrc = 7U;
                vlSelf->cpu__DOT__interm_memwrite = 0U;
            }
        } else {
            vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
            vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
            vlSelf->cpu__DOT__interm_pcsrc = 0U;
            vlSelf->cpu__DOT__write_en = 0U;
            vlSelf->cpu__DOT__interm_alusrc = 1U;
            vlSelf->cpu__DOT__interm_immsrc = 7U;
            vlSelf->cpu__DOT__interm_memwrite = 0U;
        }
    } else if ((0x20U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
            if ((8U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
                vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
                vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
                vlSelf->cpu__DOT__interm_pcsrc = 0U;
                vlSelf->cpu__DOT__write_en = 0U;
                vlSelf->cpu__DOT__interm_alusrc = 1U;
                vlSelf->cpu__DOT__interm_immsrc = 7U;
                vlSelf->cpu__DOT__interm_memwrite = 0U;
            } else if ((4U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
                vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
                vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
                vlSelf->cpu__DOT__interm_pcsrc = 0U;
                vlSelf->cpu__DOT__write_en = 0U;
                vlSelf->cpu__DOT__interm_alusrc = 1U;
                vlSelf->cpu__DOT__interm_immsrc = 7U;
                vlSelf->cpu__DOT__interm_memwrite = 0U;
            } else if ((2U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
                    vlSelf->cpu__DOT__ctrlunit__DOT__funct7 
                        = (vlSelf->interm_ins >> 0x19U);
                    vlSelf->cpu__DOT__write_en = 1U;
                    vlSelf->cpu__DOT__interm_immsrc = 7U;
                    vlSelf->cpu__DOT__interm_alusrc = 0U;
                    vlSelf->cpu__DOT__interm_memwrite = 0U;
                    vlSelf->cpu__DOT__interm_resultsrc = 0U;
                    vlSelf->cpu__DOT__interm_pcsrc = 0U;
                    vlSelf->cpu__DOT__ctrlunit__DOT__aluop = 2U;
                } else {
                    vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
                    vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
                    vlSelf->cpu__DOT__interm_pcsrc = 0U;
                    vlSelf->cpu__DOT__write_en = 0U;
                    vlSelf->cpu__DOT__interm_alusrc = 1U;
                    vlSelf->cpu__DOT__interm_immsrc = 7U;
                    vlSelf->cpu__DOT__interm_memwrite = 0U;
                }
            } else {
                vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
                vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
                vlSelf->cpu__DOT__interm_pcsrc = 0U;
                vlSelf->cpu__DOT__write_en = 0U;
                vlSelf->cpu__DOT__interm_alusrc = 1U;
                vlSelf->cpu__DOT__interm_immsrc = 7U;
                vlSelf->cpu__DOT__interm_memwrite = 0U;
            }
        } else if ((8U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
            vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
            vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
            vlSelf->cpu__DOT__interm_pcsrc = 0U;
            vlSelf->cpu__DOT__write_en = 0U;
            vlSelf->cpu__DOT__interm_alusrc = 1U;
            vlSelf->cpu__DOT__interm_immsrc = 7U;
            vlSelf->cpu__DOT__interm_memwrite = 0U;
        } else if ((4U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
            vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
            vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
            vlSelf->cpu__DOT__interm_pcsrc = 0U;
            vlSelf->cpu__DOT__write_en = 0U;
            vlSelf->cpu__DOT__interm_alusrc = 1U;
            vlSelf->cpu__DOT__interm_immsrc = 7U;
            vlSelf->cpu__DOT__interm_memwrite = 0U;
        } else if ((2U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
                vlSelf->cpu__DOT__write_en = 0U;
                vlSelf->cpu__DOT__interm_immsrc = 2U;
                vlSelf->cpu__DOT__interm_alusrc = 1U;
                vlSelf->cpu__DOT__interm_memwrite = 1U;
                vlSelf->cpu__DOT__interm_pcsrc = 0U;
                vlSelf->cpu__DOT__ctrlunit__DOT__aluop = 0U;
                vlSelf->cpu__DOT__inter_addrmode = vlSelf->cpu__DOT__ctrlunit__DOT__funct3;
            } else {
                vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
                vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
                vlSelf->cpu__DOT__interm_pcsrc = 0U;
                vlSelf->cpu__DOT__write_en = 0U;
                vlSelf->cpu__DOT__interm_alusrc = 1U;
                vlSelf->cpu__DOT__interm_immsrc = 7U;
                vlSelf->cpu__DOT__interm_memwrite = 0U;
            }
        } else {
            vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
            vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
            vlSelf->cpu__DOT__interm_pcsrc = 0U;
            vlSelf->cpu__DOT__write_en = 0U;
            vlSelf->cpu__DOT__interm_alusrc = 1U;
            vlSelf->cpu__DOT__interm_immsrc = 7U;
            vlSelf->cpu__DOT__interm_memwrite = 0U;
        }
    } else if ((0x10U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
        if ((8U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
            vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
            vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
            vlSelf->cpu__DOT__interm_pcsrc = 0U;
            vlSelf->cpu__DOT__write_en = 0U;
            vlSelf->cpu__DOT__interm_alusrc = 1U;
            vlSelf->cpu__DOT__interm_immsrc = 7U;
            vlSelf->cpu__DOT__interm_memwrite = 0U;
        } else if ((4U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
            vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
            vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
            vlSelf->cpu__DOT__interm_pcsrc = 0U;
            vlSelf->cpu__DOT__write_en = 0U;
            vlSelf->cpu__DOT__interm_alusrc = 1U;
            vlSelf->cpu__DOT__interm_immsrc = 7U;
            vlSelf->cpu__DOT__interm_memwrite = 0U;
        } else if ((2U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
                vlSelf->cpu__DOT__write_en = 1U;
                vlSelf->cpu__DOT__interm_alusrc = 1U;
                vlSelf->cpu__DOT__ctrlunit__DOT__aluop = 3U;
                vlSelf->cpu__DOT__interm_immsrc = 0U;
                vlSelf->cpu__DOT__interm_pcsrc = 0U;
                vlSelf->cpu__DOT__interm_memwrite = 0U;
                vlSelf->cpu__DOT__interm_resultsrc = 0U;
            } else {
                vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
                vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
                vlSelf->cpu__DOT__interm_pcsrc = 0U;
                vlSelf->cpu__DOT__write_en = 0U;
                vlSelf->cpu__DOT__interm_alusrc = 1U;
                vlSelf->cpu__DOT__interm_immsrc = 7U;
                vlSelf->cpu__DOT__interm_memwrite = 0U;
            }
        } else {
            vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
            vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
            vlSelf->cpu__DOT__interm_pcsrc = 0U;
            vlSelf->cpu__DOT__write_en = 0U;
            vlSelf->cpu__DOT__interm_alusrc = 1U;
            vlSelf->cpu__DOT__interm_immsrc = 7U;
            vlSelf->cpu__DOT__interm_memwrite = 0U;
        }
    } else if ((8U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
        vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
        vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
        vlSelf->cpu__DOT__interm_pcsrc = 0U;
        vlSelf->cpu__DOT__write_en = 0U;
        vlSelf->cpu__DOT__interm_alusrc = 1U;
        vlSelf->cpu__DOT__interm_immsrc = 7U;
        vlSelf->cpu__DOT__interm_memwrite = 0U;
    } else if ((4U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
        vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
        vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
        vlSelf->cpu__DOT__interm_pcsrc = 0U;
        vlSelf->cpu__DOT__write_en = 0U;
        vlSelf->cpu__DOT__interm_alusrc = 1U;
        vlSelf->cpu__DOT__interm_immsrc = 7U;
        vlSelf->cpu__DOT__interm_memwrite = 0U;
    } else if ((2U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
        if ((1U & (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__opcode))) {
            vlSelf->cpu__DOT__write_en = 1U;
            vlSelf->cpu__DOT__interm_immsrc = 0U;
            vlSelf->cpu__DOT__interm_alusrc = 1U;
            vlSelf->cpu__DOT__interm_memwrite = 0U;
            vlSelf->cpu__DOT__interm_resultsrc = 1U;
            vlSelf->cpu__DOT__interm_pcsrc = 0U;
            vlSelf->cpu__DOT__ctrlunit__DOT__aluop = 0U;
            vlSelf->cpu__DOT__inter_addrmode = vlSelf->cpu__DOT__ctrlunit__DOT__funct3;
        } else {
            vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
            vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
            vlSelf->cpu__DOT__interm_pcsrc = 0U;
            vlSelf->cpu__DOT__write_en = 0U;
            vlSelf->cpu__DOT__interm_alusrc = 1U;
            vlSelf->cpu__DOT__interm_immsrc = 7U;
            vlSelf->cpu__DOT__interm_memwrite = 0U;
        }
    } else {
        vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = 0U;
        vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = 0U;
        vlSelf->cpu__DOT__interm_pcsrc = 0U;
        vlSelf->cpu__DOT__write_en = 0U;
        vlSelf->cpu__DOT__interm_alusrc = 1U;
        vlSelf->cpu__DOT__interm_immsrc = 7U;
        vlSelf->cpu__DOT__interm_memwrite = 0U;
    }
    vlSelf->interm_immop = ((4U & (IData)(vlSelf->cpu__DOT__interm_immsrc))
                             ? 0U : ((2U & (IData)(vlSelf->cpu__DOT__interm_immsrc))
                                      ? ((1U & (IData)(vlSelf->cpu__DOT__interm_immsrc))
                                          ? (((- (IData)(
                                                         (vlSelf->interm_ins 
                                                          >> 0x1fU))) 
                                              << 0xbU) 
                                             | ((0x400U 
                                                 & (vlSelf->interm_ins 
                                                    << 3U)) 
                                                | ((0x3f0U 
                                                    & (vlSelf->interm_ins 
                                                       >> 0x15U)) 
                                                   | (0xfU 
                                                      & (vlSelf->interm_ins 
                                                         >> 8U)))))
                                          : (((- (IData)(
                                                         (vlSelf->interm_ins 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->interm_ins 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->interm_ins 
                                                      >> 7U)))))
                                      : ((1U & (IData)(vlSelf->cpu__DOT__interm_immsrc))
                                          ? (((- (IData)(
                                                         (vlSelf->interm_ins 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | (vlSelf->interm_ins 
                                                >> 0xcU))
                                          : (((- (IData)(
                                                         (vlSelf->interm_ins 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->interm_ins 
                                                >> 0x14U)))));
    __Vtableidx1 = (((IData)(vlSelf->cpu__DOT__ctrlunit__DOT__funct3) 
                     << 2U) | (IData)(vlSelf->cpu__DOT__ctrlunit__DOT__aluop));
    vlSelf->cpu__DOT__interm_aluctrl = Vcpu__ConstPool__TABLE_h501ce20c_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__alu__DOT__aluop2 = ((IData)(vlSelf->cpu__DOT__interm_alusrc)
                                           ? vlSelf->interm_immop
                                           : vlSelf->rf_dout2);
    vlSelf->cpu__DOT__programcounter__DOT__branch_pc 
        = (vlSelf->prog_addr + vlSelf->interm_immop);
    vlSelf->cpu__DOT__programcounter__DOT__next_pc 
        = ((IData)(vlSelf->cpu__DOT__interm_pcsrc) ? vlSelf->cpu__DOT__programcounter__DOT__branch_pc
            : ((IData)(4U) + vlSelf->prog_addr));
    vlSelf->cpu__DOT__interm_aluout = ((4U & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                                        ? ((2U & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                                             ? 0xffffU
                                             : 0U))
                                        : ((2U & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                                            ? ((1U 
                                                & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                                                ? (vlSelf->rf_dout1 
                                                   | vlSelf->cpu__DOT__alu__DOT__aluop2)
                                                : (vlSelf->rf_dout1 
                                                   & vlSelf->cpu__DOT__alu__DOT__aluop2))
                                            : ((1U 
                                                & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                                                ? (vlSelf->rf_dout1 
                                                   - vlSelf->cpu__DOT__alu__DOT__aluop2)
                                                : (vlSelf->rf_dout1 
                                                   + vlSelf->cpu__DOT__alu__DOT__aluop2))));
    vlSelf->rout_test = ((4U & (IData)(vlSelf->cpu__DOT__inter_addrmode))
                          ? ((2U & (IData)(vlSelf->cpu__DOT__inter_addrmode))
                              ? 0U : ((1U & (IData)(vlSelf->cpu__DOT__inter_addrmode))
                                       ? ((((0x30d40U 
                                             >= (0x3ffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->cpu__DOT__interm_aluout)))
                                             ? vlSelf->cpu__DOT__ram__DOT__ram_array
                                            [(0x3ffffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->cpu__DOT__interm_aluout))]
                                             : 0U) 
                                           << 8U) | 
                                          ((0x30d40U 
                                            >= (0x3ffffU 
                                                & vlSelf->cpu__DOT__interm_aluout))
                                            ? vlSelf->cpu__DOT__ram__DOT__ram_array
                                           [(0x3ffffU 
                                             & vlSelf->cpu__DOT__interm_aluout)]
                                            : 0U)) : 
                                      ((0x30d40U >= 
                                        (0x3ffffU & vlSelf->cpu__DOT__interm_aluout))
                                        ? vlSelf->cpu__DOT__ram__DOT__ram_array
                                       [(0x3ffffU & vlSelf->cpu__DOT__interm_aluout)]
                                        : 0U))) : (
                                                   (2U 
                                                    & (IData)(vlSelf->cpu__DOT__inter_addrmode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__inter_addrmode))
                                                     ? 0U
                                                     : 
                                                    ((((0x30d40U 
                                                        >= 
                                                        (0x3ffffU 
                                                         & ((IData)(3U) 
                                                            + vlSelf->cpu__DOT__interm_aluout)))
                                                        ? 
                                                       vlSelf->cpu__DOT__ram__DOT__ram_array
                                                       [
                                                       (0x3ffffU 
                                                        & ((IData)(3U) 
                                                           + vlSelf->cpu__DOT__interm_aluout))]
                                                        : 0U) 
                                                      << 0x18U) 
                                                     | ((((0x30d40U 
                                                           >= 
                                                           (0x3ffffU 
                                                            & ((IData)(2U) 
                                                               + vlSelf->cpu__DOT__interm_aluout)))
                                                           ? 
                                                          vlSelf->cpu__DOT__ram__DOT__ram_array
                                                          [
                                                          (0x3ffffU 
                                                           & ((IData)(2U) 
                                                              + vlSelf->cpu__DOT__interm_aluout))]
                                                           : 0U) 
                                                         << 0x10U) 
                                                        | ((((0x30d40U 
                                                              >= 
                                                              (0x3ffffU 
                                                               & ((IData)(1U) 
                                                                  + vlSelf->cpu__DOT__interm_aluout)))
                                                              ? 
                                                             vlSelf->cpu__DOT__ram__DOT__ram_array
                                                             [
                                                             (0x3ffffU 
                                                              & ((IData)(1U) 
                                                                 + vlSelf->cpu__DOT__interm_aluout))]
                                                              : 0U) 
                                                            << 8U) 
                                                           | ((0x30d40U 
                                                               >= 
                                                               (0x3ffffU 
                                                                & vlSelf->cpu__DOT__interm_aluout))
                                                               ? 
                                                              vlSelf->cpu__DOT__ram__DOT__ram_array
                                                              [
                                                              (0x3ffffU 
                                                               & vlSelf->cpu__DOT__interm_aluout)]
                                                               : 0U)))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__inter_addrmode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (((0x30d40U 
                                                                       >= 
                                                                       (0x3ffffU 
                                                                        & ((IData)(1U) 
                                                                           + vlSelf->cpu__DOT__interm_aluout)))
                                                                       ? 
                                                                      vlSelf->cpu__DOT__ram__DOT__ram_array
                                                                      [
                                                                      (0x3ffffU 
                                                                       & ((IData)(1U) 
                                                                          + vlSelf->cpu__DOT__interm_aluout))]
                                                                       : 0U) 
                                                                     >> 7U)))) 
                                                      << 0x10U) 
                                                     | ((((0x30d40U 
                                                           >= 
                                                           (0x3ffffU 
                                                            & ((IData)(1U) 
                                                               + vlSelf->cpu__DOT__interm_aluout)))
                                                           ? 
                                                          vlSelf->cpu__DOT__ram__DOT__ram_array
                                                          [
                                                          (0x3ffffU 
                                                           & ((IData)(1U) 
                                                              + vlSelf->cpu__DOT__interm_aluout))]
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((0x30d40U 
                                                            >= 
                                                            (0x3ffffU 
                                                             & vlSelf->cpu__DOT__interm_aluout))
                                                            ? 
                                                           vlSelf->cpu__DOT__ram__DOT__ram_array
                                                           [
                                                           (0x3ffffU 
                                                            & vlSelf->cpu__DOT__interm_aluout)]
                                                            : 0U)))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (((0x30d40U 
                                                                       >= 
                                                                       (0x3ffffU 
                                                                        & vlSelf->cpu__DOT__interm_aluout))
                                                                       ? 
                                                                      vlSelf->cpu__DOT__ram__DOT__ram_array
                                                                      [
                                                                      (0x3ffffU 
                                                                       & vlSelf->cpu__DOT__interm_aluout)]
                                                                       : 0U) 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | ((0x30d40U 
                                                         >= 
                                                         (0x3ffffU 
                                                          & vlSelf->cpu__DOT__interm_aluout))
                                                         ? 
                                                        vlSelf->cpu__DOT__ram__DOT__ram_array
                                                        [
                                                        (0x3ffffU 
                                                         & vlSelf->cpu__DOT__interm_aluout)]
                                                         : 0U)))));
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
    __req |= ((vlSelf->cpu__DOT__alu__DOT__aluop2 ^ vlSelf->__Vchglast__TOP__cpu__DOT__alu__DOT__aluop2));
    VL_DEBUG_IF( if(__req && ((vlSelf->cpu__DOT__alu__DOT__aluop2 ^ vlSelf->__Vchglast__TOP__cpu__DOT__alu__DOT__aluop2))) VL_DBG_MSGF("        CHANGE: alu.sv:13: cpu.alu.aluop2\n"); );
    // Final
    vlSelf->__Vchglast__TOP__cpu__DOT__alu__DOT__aluop2 
        = vlSelf->cpu__DOT__alu__DOT__aluop2;
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
