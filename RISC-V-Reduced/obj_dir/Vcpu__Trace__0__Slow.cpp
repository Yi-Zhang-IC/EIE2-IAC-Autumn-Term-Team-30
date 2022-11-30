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
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+53,"rst", false,-1);
    tracep->declBus(c+54,"a0_output", false,-1, 31,0);
    tracep->declBus(c+55,"rf_dout1", false,-1, 31,0);
    tracep->declBus(c+56,"rf_dout2", false,-1, 31,0);
    tracep->declBus(c+57,"interm_immop", false,-1, 31,0);
    tracep->declBus(c+58,"rd_add", false,-1, 4,0);
    tracep->declBus(c+59,"prog_addr", false,-1, 31,0);
    tracep->declBus(c+60,"interm_ins", false,-1, 31,0);
    tracep->declBus(c+61,"rout_test", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+66,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+53,"rst", false,-1);
    tracep->declBus(c+54,"a0_output", false,-1, 31,0);
    tracep->declBus(c+55,"rf_dout1", false,-1, 31,0);
    tracep->declBus(c+56,"rf_dout2", false,-1, 31,0);
    tracep->declBus(c+57,"interm_immop", false,-1, 31,0);
    tracep->declBus(c+58,"rd_add", false,-1, 4,0);
    tracep->declBus(c+59,"prog_addr", false,-1, 31,0);
    tracep->declBus(c+60,"interm_ins", false,-1, 31,0);
    tracep->declBus(c+61,"rout_test", false,-1, 31,0);
    tracep->declBus(c+35,"interm_aluout", false,-1, 31,0);
    tracep->declBus(c+36,"interm_aluctrl", false,-1, 2,0);
    tracep->declBus(c+37,"interm_immsrc", false,-1, 2,0);
    tracep->declBit(c+38,"interm_alusrc", false,-1);
    tracep->declBit(c+39,"interm_eq", false,-1);
    tracep->declBit(c+40,"interm_pcsrc", false,-1);
    tracep->declBit(c+41,"write_en", false,-1);
    tracep->declBus(c+42,"inter_addrmode", false,-1, 2,0);
    tracep->declBit(c+43,"interm_memwrite", false,-1);
    tracep->declBit(c+44,"interm_resultsrc", false,-1);
    tracep->declBus(c+62,"result", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+66,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+38,"alusrc", false,-1);
    tracep->declBus(c+36,"aluctrl", false,-1, 2,0);
    tracep->declBus(c+55,"aluop1", false,-1, 31,0);
    tracep->declBus(c+57,"immop", false,-1, 31,0);
    tracep->declBus(c+56,"regop2", false,-1, 31,0);
    tracep->declBus(c+35,"aluout", false,-1, 31,0);
    tracep->declBit(c+39,"eq", false,-1);
    tracep->declBus(c+45,"aluop2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctrlunit ");
    tracep->declBus(c+60,"instruction", false,-1, 31,0);
    tracep->declBit(c+39,"eq", false,-1);
    tracep->declBit(c+41,"regwrite", false,-1);
    tracep->declBus(c+36,"aluctrl", false,-1, 2,0);
    tracep->declBit(c+38,"alusrc", false,-1);
    tracep->declBit(c+40,"pcsrc", false,-1);
    tracep->declBus(c+37,"immsrc", false,-1, 2,0);
    tracep->declBit(c+43,"memwrite", false,-1);
    tracep->declBus(c+42,"addrmode", false,-1, 2,0);
    tracep->declBit(c+44,"resultsrc", false,-1);
    tracep->declBus(c+46,"opcode", false,-1, 6,0);
    tracep->declBus(c+47,"funct3", false,-1, 2,0);
    tracep->declBus(c+48,"funct7", false,-1, 31,25);
    tracep->declBus(c+49,"aluop", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("programcounter ");
    tracep->declBus(c+66,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+40,"pcsrc", false,-1);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+53,"rst", false,-1);
    tracep->declBus(c+57,"immop", false,-1, 31,0);
    tracep->declBus(c+59,"pc", false,-1, 31,0);
    tracep->declBus(c+50,"next_pc", false,-1, 31,0);
    tracep->declBus(c+51,"branch_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("programmem ");
    tracep->declBus(c+66,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+67,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"address", false,-1, 31,0);
    tracep->declBus(c+60,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ram ");
    tracep->declBus(c+66,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+67,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"address", false,-1, 31,0);
    tracep->declBus(c+42,"bytes", false,-1, 2,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+43,"we", false,-1);
    tracep->declBus(c+56,"wd", false,-1, 31,0);
    tracep->declBus(c+61,"dout", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("registerfile ");
    tracep->declBus(c+68,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+66,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+41,"we3", false,-1);
    tracep->declBus(c+63,"ad1", false,-1, 4,0);
    tracep->declBus(c+64,"ad2", false,-1, 4,0);
    tracep->declBus(c+65,"ad3", false,-1, 4,0);
    tracep->declBus(c+62,"wd3", false,-1, 31,0);
    tracep->declBus(c+54,"a0", false,-1, 31,0);
    tracep->declBus(c+55,"rd1", false,-1, 31,0);
    tracep->declBus(c+56,"rd2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+3+i*1,"rf_array", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sgnextend ");
    tracep->declBus(c+60,"instruction", false,-1, 31,0);
    tracep->declBus(c+37,"immsrc", false,-1, 2,0);
    tracep->declBus(c+57,"immop", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__ram__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__registerfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[0]),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[1]),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[2]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[3]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[4]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[5]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[6]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[7]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[8]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[9]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[10]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[11]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[12]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[13]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[14]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[15]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[16]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[17]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[18]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[19]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[20]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[21]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[22]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[23]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[24]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[25]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[26]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[27]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[28]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[29]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[30]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__registerfile__DOT__rf_array[31]),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu__DOT__interm_aluout),32);
    bufp->fullCData(oldp+36,(vlSelf->cpu__DOT__interm_aluctrl),3);
    bufp->fullCData(oldp+37,(vlSelf->cpu__DOT__interm_immsrc),3);
    bufp->fullBit(oldp+38,(vlSelf->cpu__DOT__interm_alusrc));
    bufp->fullBit(oldp+39,(vlSelf->cpu__DOT__interm_eq));
    bufp->fullBit(oldp+40,(vlSelf->cpu__DOT__interm_pcsrc));
    bufp->fullBit(oldp+41,(vlSelf->cpu__DOT__write_en));
    bufp->fullCData(oldp+42,(vlSelf->cpu__DOT__inter_addrmode),3);
    bufp->fullBit(oldp+43,(vlSelf->cpu__DOT__interm_memwrite));
    bufp->fullBit(oldp+44,(vlSelf->cpu__DOT__interm_resultsrc));
    bufp->fullIData(oldp+45,(vlSelf->cpu__DOT__alu__DOT__aluop2),32);
    bufp->fullCData(oldp+46,(vlSelf->cpu__DOT__ctrlunit__DOT__opcode),7);
    bufp->fullCData(oldp+47,(vlSelf->cpu__DOT__ctrlunit__DOT__funct3),3);
    bufp->fullCData(oldp+48,(vlSelf->cpu__DOT__ctrlunit__DOT__funct7),7);
    bufp->fullCData(oldp+49,(vlSelf->cpu__DOT__ctrlunit__DOT__aluop),2);
    bufp->fullIData(oldp+50,(vlSelf->cpu__DOT__programcounter__DOT__next_pc),32);
    bufp->fullIData(oldp+51,(vlSelf->cpu__DOT__programcounter__DOT__branch_pc),32);
    bufp->fullBit(oldp+52,(vlSelf->clk));
    bufp->fullBit(oldp+53,(vlSelf->rst));
    bufp->fullIData(oldp+54,(vlSelf->a0_output),32);
    bufp->fullIData(oldp+55,(vlSelf->rf_dout1),32);
    bufp->fullIData(oldp+56,(vlSelf->rf_dout2),32);
    bufp->fullIData(oldp+57,(vlSelf->interm_immop),32);
    bufp->fullCData(oldp+58,(vlSelf->rd_add),5);
    bufp->fullIData(oldp+59,(vlSelf->prog_addr),32);
    bufp->fullIData(oldp+60,(vlSelf->interm_ins),32);
    bufp->fullIData(oldp+61,(vlSelf->rout_test),32);
    bufp->fullIData(oldp+62,(((IData)(vlSelf->cpu__DOT__interm_resultsrc)
                               ? vlSelf->rout_test : vlSelf->cpu__DOT__interm_aluout)),32);
    bufp->fullCData(oldp+63,((0x1fU & (vlSelf->interm_ins 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+64,((0x1fU & (vlSelf->interm_ins 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+65,((0x1fU & (vlSelf->interm_ins 
                                       >> 7U))),5);
    bufp->fullIData(oldp+66,(0x20U),32);
    bufp->fullIData(oldp+67,(8U),32);
    bufp->fullIData(oldp+68,(5U),32);
}
