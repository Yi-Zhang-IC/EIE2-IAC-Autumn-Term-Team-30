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
    VlWide<3>/*95:0*/ __Vtemp_hbe60b558__0;
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
    __Vtemp_hbe60b558__0[0U] = 0x2e686578U;
    __Vtemp_hbe60b558__0[1U] = 0x6e746572U;
    __Vtemp_hbe60b558__0[2U] = 0x636f75U;
    VL_READMEM_N(true, 8, 2001, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_hbe60b558__0)
                 ,  &(vlSelf->cpu__DOT__programmem__DOT__rom_array)
                 , 0, ~0ULL);
    VL_WRITEF("Program written to ROM successfully\n");
    vlSelf->cpu__DOT__ram__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x30d41U, vlSelf->cpu__DOT__ram__DOT__unnamedblk1__DOT__i)) {
        vlSelf->cpu__DOT__ram__DOT____Vlvbound_h8a96d373__0 = 0U;
        if (VL_LIKELY((0x30d40U >= (0x3ffffU & vlSelf->cpu__DOT__ram__DOT__unnamedblk1__DOT__i)))) {
            vlSelf->cpu__DOT__ram__DOT__ram_array[(0x3ffffU 
                                                   & vlSelf->cpu__DOT__ram__DOT__unnamedblk1__DOT__i)] 
                = vlSelf->cpu__DOT__ram__DOT____Vlvbound_h8a96d373__0;
        }
        vlSelf->cpu__DOT__ram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->cpu__DOT__ram__DOT__unnamedblk1__DOT__i);
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> Vcpu__ConstPool__TABLE_h501ce20c_0;

VL_ATTR_COLD void Vcpu___024root___settle__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    // Body
    vlSelf->a0_output = vlSelf->cpu__DOT__registerfile__DOT__rf_array
        [0xaU];
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
    vlSelf->rd_add = (0x1fU & (vlSelf->interm_ins >> 0xfU));
    vlSelf->rf_dout2 = vlSelf->cpu__DOT__registerfile__DOT__rf_array
        [(0x1fU & (vlSelf->interm_ins >> 0x14U))];
    vlSelf->rf_dout1 = vlSelf->cpu__DOT__registerfile__DOT__rf_array
        [(0x1fU & (vlSelf->interm_ins >> 0xfU))];
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
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vcpu___024root___settle__TOP__1(vlSelf);
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
    vlSelf->rout_test = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__interm_aluout = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__interm_aluctrl = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__interm_immsrc = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__interm_alusrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__interm_eq = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__interm_pcsrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__inter_addrmode = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__interm_memwrite = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__interm_resultsrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ctrlunit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->cpu__DOT__ctrlunit__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__ctrlunit__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->cpu__DOT__ctrlunit__DOT__aluop = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__programcounter__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__programcounter__DOT__branch_pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2001; ++__Vi0) {
        vlSelf->cpu__DOT__programmem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__alu__DOT__aluop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__registerfile__DOT__rf_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__registerfile__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<200001; ++__Vi0) {
        vlSelf->cpu__DOT__ram__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__ram__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__ram__DOT____Vlvbound_h8a96d373__0 = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__ram__DOT____Vlvbound_h7f6db442__0 = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__ram__DOT____Vlvbound_h7f6db442__1 = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__ram__DOT____Vlvbound_hf92e90a7__0 = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__ram__DOT____Vlvbound_h7f6db442__2 = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__ram__DOT____Vlvbound_hf92e90a7__1 = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__ram__DOT____Vlvbound_hf92e7f9c__0 = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__ram__DOT____Vlvbound_hf93374c7__0 = VL_RAND_RESET_I(8);
    vlSelf->cpu__DOT__ram__DOT____Vlvbound_h7f6db442__3 = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__cpu__DOT__alu__DOT__aluop2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
