// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+42,"clk", false,-1);
    tracep->declBit(c+43,"rst", false,-1);
    tracep->declBus(c+44,"a0_output", false,-1, 31,0);
    tracep->declBus(c+45,"rf_dout1", false,-1, 31,0);
    tracep->declBus(c+46,"rf_dout2", false,-1, 31,0);
    tracep->declBus(c+47,"interm_immop", false,-1, 31,0);
    tracep->declBus(c+48,"rd_add", false,-1, 4,0);
    tracep->declBus(c+49,"prog_addr", false,-1, 31,0);
    tracep->declBus(c+50,"interm_ins", false,-1, 31,0);
    tracep->declBus(c+51,"aluop2_test", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+59,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+42,"clk", false,-1);
    tracep->declBit(c+43,"rst", false,-1);
    tracep->declBus(c+44,"a0_output", false,-1, 31,0);
    tracep->declBus(c+45,"rf_dout1", false,-1, 31,0);
    tracep->declBus(c+46,"rf_dout2", false,-1, 31,0);
    tracep->declBus(c+47,"interm_immop", false,-1, 31,0);
    tracep->declBus(c+48,"rd_add", false,-1, 4,0);
    tracep->declBus(c+49,"prog_addr", false,-1, 31,0);
    tracep->declBus(c+50,"interm_ins", false,-1, 31,0);
    tracep->declBus(c+51,"aluop2_test", false,-1, 31,0);
    tracep->declBus(c+52,"rf_din", false,-1, 31,0);
    tracep->declBus(c+34,"interm_aluctrl", false,-1, 2,0);
    tracep->declBus(c+35,"interm_immsrc", false,-1, 2,0);
    tracep->declBit(c+36,"interm_alusrc", false,-1);
    tracep->declBit(c+37,"interm_eq", false,-1);
    tracep->declBit(c+53,"interm_pcsrc", false,-1);
    tracep->declBit(c+38,"write_en", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+59,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+36,"alusrc", false,-1);
    tracep->declBus(c+34,"aluctrl", false,-1, 2,0);
    tracep->declBus(c+45,"aluop1", false,-1, 31,0);
    tracep->declBus(c+47,"immop", false,-1, 31,0);
    tracep->declBus(c+46,"regop2", false,-1, 31,0);
    tracep->declBus(c+52,"aluout", false,-1, 31,0);
    tracep->declBit(c+37,"eq", false,-1);
    tracep->declBus(c+51,"aluop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctrlunit ");
    tracep->declBus(c+50,"instruction", false,-1, 31,0);
    tracep->declBit(c+37,"eq", false,-1);
    tracep->declBit(c+38,"regwrite", false,-1);
    tracep->declBus(c+34,"aluctrl", false,-1, 2,0);
    tracep->declBit(c+36,"alusrc", false,-1);
    tracep->declBit(c+53,"pcsrc", false,-1);
    tracep->declBus(c+35,"immsrc", false,-1, 2,0);
    tracep->declBus(c+54,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("programcounter ");
    tracep->declBus(c+59,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+53,"pcsrc", false,-1);
    tracep->declBit(c+42,"clk", false,-1);
    tracep->declBit(c+43,"rst", false,-1);
    tracep->declBus(c+47,"immop", false,-1, 31,0);
    tracep->declBus(c+49,"pc", false,-1, 31,0);
    tracep->declBus(c+39,"next_pc", false,-1, 31,0);
    tracep->declBus(c+40,"branch_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("programmem ");
    tracep->declBus(c+60,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"address", false,-1, 19,0);
    tracep->declBus(c+50,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("registerfile ");
    tracep->declBus(c+62,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+42,"clk", false,-1);
    tracep->declBit(c+38,"we3", false,-1);
    tracep->declBus(c+56,"ad1", false,-1, 4,0);
    tracep->declBus(c+57,"ad2", false,-1, 4,0);
    tracep->declBus(c+58,"ad3", false,-1, 4,0);
    tracep->declBus(c+52,"wd3", false,-1, 31,0);
    tracep->declBus(c+44,"a0", false,-1, 31,0);
    tracep->declBus(c+45,"rd1", false,-1, 31,0);
    tracep->declBus(c+46,"rd2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,"rf_array", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sgnextend ");
    tracep->declBus(c+50,"instruction", false,-1, 31,0);
    tracep->declBus(c+35,"immsrc", false,-1, 2,0);
    tracep->declBus(c+47,"immop", false,-1, 31,0);
    tracep->declBus(c+41,"uimm", false,-1, 11,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__registerfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[0]),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[1]),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[2]),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[3]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[4]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[5]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[6]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[7]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[8]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[9]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[10]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[11]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[12]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[13]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[14]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[15]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[16]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[17]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[18]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[19]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[20]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[21]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[22]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[23]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[24]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[25]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[26]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[27]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[28]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[29]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[30]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[31]),32);
    bufp->fullCData(oldp+34,(vlSelf->cpu__DOT__interm_aluctrl),3);
    bufp->fullCData(oldp+35,(vlSelf->cpu__DOT__interm_immsrc),3);
    bufp->fullBit(oldp+36,(vlSelf->cpu__DOT__interm_alusrc));
    bufp->fullBit(oldp+37,(vlSelf->cpu__DOT__interm_eq));
    bufp->fullBit(oldp+38,(vlSelf->cpu__DOT__write_en));
    bufp->fullIData(oldp+39,(vlSelf->cpu__DOT__programcounter__DOT__next_pc),32);
    bufp->fullIData(oldp+40,(vlSelf->cpu__DOT__programcounter__DOT__branch_pc),32);
    bufp->fullSData(oldp+41,(vlSelf->cpu__DOT__sgnextend__DOT__uimm),12);
    bufp->fullBit(oldp+42,(vlSelf->clk));
    bufp->fullBit(oldp+43,(vlSelf->rst));
    bufp->fullIData(oldp+44,(vlSelf->a0_output),32);
    bufp->fullIData(oldp+45,(vlSelf->rf_dout1),32);
    bufp->fullIData(oldp+46,(vlSelf->rf_dout2),32);
    bufp->fullIData(oldp+47,(vlSelf->interm_immop),32);
    bufp->fullCData(oldp+48,(vlSelf->rd_add),5);
    bufp->fullIData(oldp+49,(vlSelf->prog_addr),32);
    bufp->fullIData(oldp+50,(vlSelf->interm_ins),32);
    bufp->fullIData(oldp+51,(vlSelf->aluop2_test),32);
    bufp->fullIData(oldp+52,(((4U & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                               ? ((2U & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                                   ? ((1U & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                                       ? 0U : 0U) : 0U)
                               : ((2U & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                                   ? 0U : ((1U & (IData)(vlSelf->cpu__DOT__interm_aluctrl))
                                            ? 0U : 
                                           (vlSelf->rf_dout1 
                                            + vlSelf->aluop2_test))))),32);
    bufp->fullBit(oldp+53,(((0x13U != (0x7fU & vlSelf->interm_ins)) 
                            & ((0x63U != (0x7fU & vlSelf->interm_ins)) 
                               | (~ (IData)(vlSelf->cpu__DOT__interm_eq))))));
    bufp->fullCData(oldp+54,((0x7fU & vlSelf->interm_ins)),7);
    bufp->fullIData(oldp+55,((0xfffffU & vlSelf->prog_addr)),20);
    bufp->fullCData(oldp+56,((0x1fU & (vlSelf->interm_ins 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+57,((0x1fU & (vlSelf->interm_ins 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+58,((0x1fU & (vlSelf->interm_ins 
                                       >> 7U))),5);
    bufp->fullIData(oldp+59,(0x20U),32);
    bufp->fullIData(oldp+60,(0x14U),32);
    bufp->fullIData(oldp+61,(8U),32);
    bufp->fullIData(oldp+62,(5U),32);
}
