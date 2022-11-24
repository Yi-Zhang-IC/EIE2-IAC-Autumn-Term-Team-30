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
    tracep->declBit(c+34,"clk", false,-1);
    tracep->declBit(c+35,"rst", false,-1);
    tracep->declBus(c+36,"a0_output", false,-1, 31,0);
    tracep->declBus(c+37,"rf_dout1", false,-1, 31,0);
    tracep->declBus(c+38,"rf_dout2", false,-1, 31,0);
    tracep->declBus(c+39,"interm_immop", false,-1, 31,0);
    tracep->declBus(c+40,"rd_add", false,-1, 4,0);
    tracep->declBus(c+41,"prog_addr", false,-1, 31,0);
    tracep->declBus(c+42,"interm_ins", false,-1, 31,0);
    tracep->declBus(c+43,"aluop2_test", false,-1, 31,0);
    tracep->declBus(c+44,"rf_din", false,-1, 31,0);
    tracep->declBus(c+45,"interm_aluctrl", false,-1, 2,0);
    tracep->declBus(c+46,"interm_immsrc", false,-1, 2,0);
    tracep->declBit(c+47,"interm_alusrc", false,-1);
    tracep->declBit(c+48,"interm_eq", false,-1);
    tracep->declBit(c+49,"interm_pcsrc", false,-1);
    tracep->declBit(c+50,"write_en", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+62,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+34,"clk", false,-1);
    tracep->declBit(c+35,"rst", false,-1);
    tracep->declBus(c+36,"a0_output", false,-1, 31,0);
    tracep->declBus(c+37,"rf_dout1", false,-1, 31,0);
    tracep->declBus(c+38,"rf_dout2", false,-1, 31,0);
    tracep->declBus(c+39,"interm_immop", false,-1, 31,0);
    tracep->declBus(c+40,"rd_add", false,-1, 4,0);
    tracep->declBus(c+41,"prog_addr", false,-1, 31,0);
    tracep->declBus(c+42,"interm_ins", false,-1, 31,0);
    tracep->declBus(c+43,"aluop2_test", false,-1, 31,0);
    tracep->declBus(c+44,"rf_din", false,-1, 31,0);
    tracep->declBus(c+45,"interm_aluctrl", false,-1, 2,0);
    tracep->declBus(c+46,"interm_immsrc", false,-1, 2,0);
    tracep->declBit(c+47,"interm_alusrc", false,-1);
    tracep->declBit(c+48,"interm_eq", false,-1);
    tracep->declBit(c+49,"interm_pcsrc", false,-1);
    tracep->declBit(c+50,"write_en", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+37,"aluop1", false,-1, 31,0);
    tracep->declBus(c+39,"immop", false,-1, 31,0);
    tracep->declBus(c+38,"regop2", false,-1, 31,0);
    tracep->declBus(c+45,"aluctrl", false,-1, 2,0);
    tracep->declBit(c+47,"alusrc", false,-1);
    tracep->declBus(c+44,"aluout", false,-1, 31,0);
    tracep->declBit(c+48,"eq", false,-1);
    tracep->declBus(c+51,"aluop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RF ");
    tracep->declBus(c+52,"ad1", false,-1, 4,0);
    tracep->declBus(c+53,"ad2", false,-1, 4,0);
    tracep->declBus(c+54,"ad3", false,-1, 4,0);
    tracep->declBit(c+50,"regwrite", false,-1);
    tracep->declBit(c+34,"clk", false,-1);
    tracep->declBit(c+63,"rst", false,-1);
    tracep->declBus(c+44,"wd3", false,-1, 31,0);
    tracep->declBus(c+36,"a0", false,-1, 31,0);
    tracep->declBus(c+37,"regop1", false,-1, 31,0);
    tracep->declBus(c+38,"regop2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+33,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem_ctrl_sgnext ");
    tracep->declBus(c+62,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+64,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+48,"eq", false,-1);
    tracep->declBus(c+41,"pc", false,-1, 31,0);
    tracep->declBus(c+42,"instr", false,-1, 31,0);
    tracep->declBus(c+39,"immop", false,-1, 31,0);
    tracep->declBit(c+50,"regwrite", false,-1);
    tracep->declBus(c+45,"aluctrl", false,-1, 2,0);
    tracep->declBit(c+47,"alusrc", false,-1);
    tracep->declBit(c+55,"pcsrc", false,-1);
    tracep->declBit(c+56,"immsrc", false,-1);
    tracep->pushNamePrefix("control_unit ");
    tracep->declBus(c+42,"instr", false,-1, 31,0);
    tracep->declBit(c+48,"eq", false,-1);
    tracep->declBit(c+50,"regwrite", false,-1);
    tracep->declBus(c+45,"aluctrl", false,-1, 2,0);
    tracep->declBit(c+47,"alusrc", false,-1);
    tracep->declBit(c+55,"pcsrc", false,-1);
    tracep->declBit(c+56,"immsrc", false,-1);
    tracep->declBus(c+57,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_mem ");
    tracep->declBus(c+65,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+64,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"pc", false,-1, 19,0);
    tracep->declBus(c+42,"instr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sign_extend ");
    tracep->declBus(c+42,"instr", false,-1, 31,0);
    tracep->declBit(c+56,"immsrc", false,-1);
    tracep->declBus(c+39,"immop", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_unit ");
    tracep->declBus(c+62,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+34,"clk", false,-1);
    tracep->declBit(c+35,"rst", false,-1);
    tracep->declBit(c+49,"pcsrc", false,-1);
    tracep->declBus(c+39,"immop", false,-1, 31,0);
    tracep->declBus(c+41,"pc", false,-1, 31,0);
    tracep->declBus(c+59,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+60,"inc_pc", false,-1, 31,0);
    tracep->declBus(c+61,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("addconstant ");
    tracep->declBus(c+62,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+66,"constant", false,-1, 31,0);
    tracep->declBus(c+41,"in", false,-1, 31,0);
    tracep->declBus(c+60,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("adder ");
    tracep->declBus(c+62,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+41,"a", false,-1, 31,0);
    tracep->declBus(c+39,"b", false,-1, 31,0);
    tracep->declBus(c+59,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBus(c+62,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+49,"sel", false,-1);
    tracep->declBus(c+60,"in_0", false,-1, 31,0);
    tracep->declBus(c+59,"in_1", false,-1, 31,0);
    tracep->declBus(c+61,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcreg ");
    tracep->declBus(c+62,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+34,"clk", false,-1);
    tracep->declBit(c+35,"rst", false,-1);
    tracep->declBus(c+61,"in", false,-1, 31,0);
    tracep->declBus(c+41,"out", false,-1, 31,0);
    tracep->popNamePrefix(3);
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
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__RF__DOT__rf[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__RF__DOT__rf[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__RF__DOT__rf[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__RF__DOT__rf[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__RF__DOT__rf[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__RF__DOT__rf[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__RF__DOT__rf[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__RF__DOT__rf[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__RF__DOT__rf[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu__DOT__RF__DOT__rf[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu__DOT__RF__DOT__rf[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__RF__DOT__rf[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__RF__DOT__rf[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__RF__DOT__rf[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__RF__DOT__rf[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__RF__DOT__rf[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__RF__DOT__rf[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__RF__DOT__rf[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__RF__DOT__rf[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__RF__DOT__rf[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__RF__DOT__rf[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__RF__DOT__rf[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__RF__DOT__rf[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__RF__DOT__rf[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__RF__DOT__rf[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__RF__DOT__rf[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__RF__DOT__rf[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__RF__DOT__rf[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__RF__DOT__rf[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__RF__DOT__rf[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__RF__DOT__rf[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__RF__DOT__rf[31]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__RF__DOT__unnamedblk1__DOT__j),32);
    bufp->fullBit(oldp+34,(vlSelf->clk));
    bufp->fullBit(oldp+35,(vlSelf->rst));
    bufp->fullIData(oldp+36,(vlSelf->a0_output),32);
    bufp->fullIData(oldp+37,(vlSelf->rf_dout1),32);
    bufp->fullIData(oldp+38,(vlSelf->rf_dout2),32);
    bufp->fullIData(oldp+39,(vlSelf->interm_immop),32);
    bufp->fullCData(oldp+40,(vlSelf->rd_add),5);
    bufp->fullIData(oldp+41,(vlSelf->prog_addr),32);
    bufp->fullIData(oldp+42,(vlSelf->interm_ins),32);
    bufp->fullIData(oldp+43,(vlSelf->aluop2_test),32);
    bufp->fullIData(oldp+44,(vlSelf->rf_din),32);
    bufp->fullCData(oldp+45,(vlSelf->interm_aluctrl),3);
    bufp->fullCData(oldp+46,(vlSelf->interm_immsrc),3);
    bufp->fullBit(oldp+47,(vlSelf->interm_alusrc));
    bufp->fullBit(oldp+48,(vlSelf->interm_eq));
    bufp->fullBit(oldp+49,(vlSelf->interm_pcsrc));
    bufp->fullBit(oldp+50,(vlSelf->write_en));
    bufp->fullIData(oldp+51,(vlSelf->cpu__DOT__ALU__DOT__aluop2),32);
    bufp->fullCData(oldp+52,((0x1fU & (vlSelf->interm_ins 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+53,((0x1fU & (vlSelf->interm_ins 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+54,((0x1fU & (vlSelf->interm_ins 
                                       >> 7U))),5);
    bufp->fullBit(oldp+55,(((0x13U != (0x7fU & vlSelf->interm_ins)) 
                            & ((0x63U != (0x7fU & vlSelf->interm_ins)) 
                               | (~ (IData)(vlSelf->interm_eq))))));
    bufp->fullBit(oldp+56,(vlSelf->cpu__DOT__mem_ctrl_sgnext__DOT__immsrc));
    bufp->fullCData(oldp+57,((0x7fU & vlSelf->interm_ins)),7);
    bufp->fullIData(oldp+58,((0xfffffU & vlSelf->prog_addr)),20);
    bufp->fullIData(oldp+59,((vlSelf->prog_addr + vlSelf->interm_immop)),32);
    bufp->fullIData(oldp+60,(((IData)(4U) + vlSelf->prog_addr)),32);
    bufp->fullIData(oldp+61,(((IData)(vlSelf->interm_pcsrc)
                               ? (vlSelf->prog_addr 
                                  + vlSelf->interm_immop)
                               : ((IData)(4U) + vlSelf->prog_addr))),32);
    bufp->fullIData(oldp+62,(0x20U),32);
    bufp->fullBit(oldp+63,(vlSelf->cpu__DOT__RF__DOT__rst));
    bufp->fullIData(oldp+64,(8U),32);
    bufp->fullIData(oldp+65,(0x14U),32);
    bufp->fullIData(oldp+66,(4U),32);
}
