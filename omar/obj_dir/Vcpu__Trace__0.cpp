// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__RF__DOT__rf[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->cpu__DOT__RF__DOT__rf[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->cpu__DOT__RF__DOT__rf[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->cpu__DOT__RF__DOT__rf[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->cpu__DOT__RF__DOT__rf[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->cpu__DOT__RF__DOT__rf[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->cpu__DOT__RF__DOT__rf[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->cpu__DOT__RF__DOT__rf[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->cpu__DOT__RF__DOT__rf[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->cpu__DOT__RF__DOT__rf[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->cpu__DOT__RF__DOT__rf[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->cpu__DOT__RF__DOT__rf[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->cpu__DOT__RF__DOT__rf[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->cpu__DOT__RF__DOT__rf[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->cpu__DOT__RF__DOT__rf[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->cpu__DOT__RF__DOT__rf[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->cpu__DOT__RF__DOT__rf[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->cpu__DOT__RF__DOT__rf[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->cpu__DOT__RF__DOT__rf[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->cpu__DOT__RF__DOT__rf[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->cpu__DOT__RF__DOT__rf[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->cpu__DOT__RF__DOT__rf[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->cpu__DOT__RF__DOT__rf[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->cpu__DOT__RF__DOT__rf[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__RF__DOT__rf[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu__DOT__RF__DOT__rf[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__RF__DOT__rf[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu__DOT__RF__DOT__rf[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->cpu__DOT__RF__DOT__rf[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->cpu__DOT__RF__DOT__rf[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->cpu__DOT__RF__DOT__rf[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__RF__DOT__rf[31]),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__RF__DOT__unnamedblk1__DOT__j),32);
    }
    bufp->chgBit(oldp+33,(vlSelf->clk));
    bufp->chgBit(oldp+34,(vlSelf->rst));
    bufp->chgIData(oldp+35,(vlSelf->a0_output),32);
    bufp->chgIData(oldp+36,(vlSelf->rf_dout1),32);
    bufp->chgIData(oldp+37,(vlSelf->rf_dout2),32);
    bufp->chgIData(oldp+38,(vlSelf->interm_immop),32);
    bufp->chgCData(oldp+39,(vlSelf->rd_add),5);
    bufp->chgIData(oldp+40,(vlSelf->prog_addr),32);
    bufp->chgIData(oldp+41,(vlSelf->interm_ins),32);
    bufp->chgIData(oldp+42,(vlSelf->aluop2_test),32);
    bufp->chgIData(oldp+43,(vlSelf->rf_din),32);
    bufp->chgCData(oldp+44,(vlSelf->interm_aluctrl),3);
    bufp->chgCData(oldp+45,(vlSelf->interm_immsrc),3);
    bufp->chgBit(oldp+46,(vlSelf->interm_alusrc));
    bufp->chgBit(oldp+47,(vlSelf->interm_eq));
    bufp->chgBit(oldp+48,(vlSelf->interm_pcsrc));
    bufp->chgBit(oldp+49,(vlSelf->write_en));
    bufp->chgIData(oldp+50,(vlSelf->cpu__DOT__ALU__DOT__aluop2),32);
    bufp->chgCData(oldp+51,((0x1fU & (vlSelf->interm_ins 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+52,((0x1fU & (vlSelf->interm_ins 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+53,((0x1fU & (vlSelf->interm_ins 
                                      >> 7U))),5);
    bufp->chgBit(oldp+54,(((0x13U != (0x7fU & vlSelf->interm_ins)) 
                           & ((0x63U != (0x7fU & vlSelf->interm_ins)) 
                              | (~ (IData)(vlSelf->interm_eq))))));
    bufp->chgBit(oldp+55,(vlSelf->cpu__DOT__mem_ctrl_sgnext__DOT__immsrc));
    bufp->chgCData(oldp+56,((0x7fU & vlSelf->interm_ins)),7);
    bufp->chgIData(oldp+57,((0xfffffU & vlSelf->prog_addr)),20);
    bufp->chgIData(oldp+58,((vlSelf->prog_addr + vlSelf->interm_immop)),32);
    bufp->chgIData(oldp+59,(((IData)(4U) + vlSelf->prog_addr)),32);
    bufp->chgIData(oldp+60,(((IData)(vlSelf->interm_pcsrc)
                              ? (vlSelf->prog_addr 
                                 + vlSelf->interm_immop)
                              : ((IData)(4U) + vlSelf->prog_addr))),32);
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
