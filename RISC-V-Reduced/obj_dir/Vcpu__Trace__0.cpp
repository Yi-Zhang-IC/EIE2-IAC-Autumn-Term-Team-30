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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__ram__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->cpu__DOT__registerfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+2,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[0]),32);
        bufp->chgIData(oldp+3,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[1]),32);
        bufp->chgIData(oldp+4,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[2]),32);
        bufp->chgIData(oldp+5,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[3]),32);
        bufp->chgIData(oldp+6,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[4]),32);
        bufp->chgIData(oldp+7,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[5]),32);
        bufp->chgIData(oldp+8,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[6]),32);
        bufp->chgIData(oldp+9,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[7]),32);
        bufp->chgIData(oldp+10,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[8]),32);
        bufp->chgIData(oldp+11,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[9]),32);
        bufp->chgIData(oldp+12,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[10]),32);
        bufp->chgIData(oldp+13,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[11]),32);
        bufp->chgIData(oldp+14,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[12]),32);
        bufp->chgIData(oldp+15,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[13]),32);
        bufp->chgIData(oldp+16,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[14]),32);
        bufp->chgIData(oldp+17,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[15]),32);
        bufp->chgIData(oldp+18,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[16]),32);
        bufp->chgIData(oldp+19,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[17]),32);
        bufp->chgIData(oldp+20,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[18]),32);
        bufp->chgIData(oldp+21,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[19]),32);
        bufp->chgIData(oldp+22,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[20]),32);
        bufp->chgIData(oldp+23,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[21]),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[22]),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[23]),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[24]),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[25]),32);
        bufp->chgIData(oldp+28,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[26]),32);
        bufp->chgIData(oldp+29,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[27]),32);
        bufp->chgIData(oldp+30,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[28]),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[29]),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[30]),32);
        bufp->chgIData(oldp+33,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+34,(vlSelf->cpu__DOT__interm_aluout),32);
        bufp->chgCData(oldp+35,(vlSelf->cpu__DOT__interm_aluctrl),3);
        bufp->chgCData(oldp+36,(vlSelf->cpu__DOT__interm_immsrc),3);
        bufp->chgBit(oldp+37,(vlSelf->cpu__DOT__interm_alusrc));
        bufp->chgBit(oldp+38,(vlSelf->cpu__DOT__interm_eq));
        bufp->chgBit(oldp+39,(vlSelf->cpu__DOT__interm_pcsrc));
        bufp->chgBit(oldp+40,(vlSelf->cpu__DOT__write_en));
        bufp->chgCData(oldp+41,(vlSelf->cpu__DOT__inter_addrmode),3);
        bufp->chgBit(oldp+42,(vlSelf->cpu__DOT__interm_memwrite));
        bufp->chgBit(oldp+43,(vlSelf->cpu__DOT__interm_resultsrc));
        bufp->chgIData(oldp+44,(vlSelf->cpu__DOT__alu__DOT__aluop2),32);
        bufp->chgCData(oldp+45,(vlSelf->cpu__DOT__ctrlunit__DOT__opcode),7);
        bufp->chgCData(oldp+46,(vlSelf->cpu__DOT__ctrlunit__DOT__funct3),3);
        bufp->chgCData(oldp+47,(vlSelf->cpu__DOT__ctrlunit__DOT__funct7),7);
        bufp->chgCData(oldp+48,(vlSelf->cpu__DOT__ctrlunit__DOT__aluop),2);
        bufp->chgIData(oldp+49,(vlSelf->cpu__DOT__programcounter__DOT__next_pc),32);
        bufp->chgIData(oldp+50,(vlSelf->cpu__DOT__programcounter__DOT__branch_pc),32);
    }
    bufp->chgBit(oldp+51,(vlSelf->clk));
    bufp->chgBit(oldp+52,(vlSelf->rst));
    bufp->chgIData(oldp+53,(vlSelf->a0_output),32);
    bufp->chgIData(oldp+54,(vlSelf->rf_dout1),32);
    bufp->chgIData(oldp+55,(vlSelf->rf_dout2),32);
    bufp->chgIData(oldp+56,(vlSelf->interm_immop),32);
    bufp->chgCData(oldp+57,(vlSelf->rd_add),5);
    bufp->chgIData(oldp+58,(vlSelf->prog_addr),32);
    bufp->chgIData(oldp+59,(vlSelf->interm_ins),32);
    bufp->chgIData(oldp+60,(vlSelf->rout_test),32);
    bufp->chgIData(oldp+61,(((IData)(vlSelf->cpu__DOT__interm_resultsrc)
                              ? vlSelf->rout_test : vlSelf->cpu__DOT__interm_aluout)),32);
    bufp->chgCData(oldp+62,((0x1fU & (vlSelf->interm_ins 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+63,((0x1fU & (vlSelf->interm_ins 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+64,((0x1fU & (vlSelf->interm_ins 
                                      >> 7U))),5);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
