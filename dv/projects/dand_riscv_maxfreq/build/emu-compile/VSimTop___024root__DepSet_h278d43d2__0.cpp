// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop__Syms.h"
#include "VSimTop___024root.h"

void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ fpr_0, QData/*63:0*/ fpr_1, QData/*63:0*/ fpr_2, QData/*63:0*/ fpr_3, QData/*63:0*/ fpr_4, QData/*63:0*/ fpr_5, QData/*63:0*/ fpr_6, QData/*63:0*/ fpr_7, QData/*63:0*/ fpr_8, QData/*63:0*/ fpr_9, QData/*63:0*/ fpr_10, QData/*63:0*/ fpr_11, QData/*63:0*/ fpr_12, QData/*63:0*/ fpr_13, QData/*63:0*/ fpr_14, QData/*63:0*/ fpr_15, QData/*63:0*/ fpr_16, QData/*63:0*/ fpr_17, QData/*63:0*/ fpr_18, QData/*63:0*/ fpr_19, QData/*63:0*/ fpr_20, QData/*63:0*/ fpr_21, QData/*63:0*/ fpr_22, QData/*63:0*/ fpr_23, QData/*63:0*/ fpr_24, QData/*63:0*/ fpr_25, QData/*63:0*/ fpr_26, QData/*63:0*/ fpr_27, QData/*63:0*/ fpr_28, QData/*63:0*/ fpr_29, QData/*63:0*/ fpr_30, QData/*63:0*/ fpr_31);
void VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(QData/*63:0*/ wIdx, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ priviledgeMode, QData/*63:0*/ mstatus, QData/*63:0*/ sstatus, QData/*63:0*/ mepc, QData/*63:0*/ sepc, QData/*63:0*/ mtval, QData/*63:0*/ stval, QData/*63:0*/ mtvec, QData/*63:0*/ stvec, QData/*63:0*/ mcause, QData/*63:0*/ scause, QData/*63:0*/ satp, QData/*63:0*/ mip, QData/*63:0*/ mie, QData/*63:0*/ mscratch, QData/*63:0*/ sscratch, QData/*63:0*/ mideleg, QData/*63:0*/ medeleg);
void VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt);
void VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ isRVC, CData/*0:0*/ scFailed, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata);
void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);
extern const VlUnpacked<CData/*3:0*/, 128> VSimTop__ConstPool__TABLE_hd4462e8d_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSimTop__ConstPool__TABLE_h129eb3e1_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSimTop__ConstPool__TABLE_h36a76887_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSimTop__ConstPool__TABLE_hb596eee0_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSimTop__ConstPool__TABLE_h8d083a25_0;

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__2(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    CData/*0:0*/ __Vdly__SimTop__DOT__trap;
    QData/*63:0*/ __Vdly__SimTop__DOT__cycleCnt;
    QData/*63:0*/ __Vdly__SimTop__DOT__instrCnt;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__regs_diff__v0;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v1;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__regs_diff__v1;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v2;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v3;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v4;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v5;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v6;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v7;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v8;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v9;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v10;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v11;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v12;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v13;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v14;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v15;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v16;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v17;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v18;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v19;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v20;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v21;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v22;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v23;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v24;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v25;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v26;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v27;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v28;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v29;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v30;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__regs_diff__v31;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol1__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol1__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol1__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol0__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol0__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol0__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol2__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol2__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol2__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol3__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol3__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol3__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol1__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol1__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol1__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol0__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol0__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol0__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol2__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol2__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol2__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol3__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol3__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol3__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol1__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol1__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol1__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol0__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol0__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol0__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol2__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol2__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol2__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol3__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol3__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol3__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol1__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol1__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol1__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol0__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol0__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol0__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol2__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol2__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol2__v0;
    SData/*9:0*/ __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol3__v0;
    CData/*7:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol3__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol3__v0;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v0;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v0;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v1;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v1;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v2;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v2;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v3;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v3;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v4;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v4;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v5;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v5;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v6;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v6;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v7;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v7;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v8;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v8;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v9;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v9;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v10;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v10;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v11;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v11;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v12;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v12;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v13;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v13;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v14;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v14;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v15;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v15;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v16;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v16;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v17;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v17;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v18;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v18;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v19;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v19;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v20;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v20;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v21;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v21;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v22;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v22;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v23;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v23;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v24;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v24;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v25;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v25;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v26;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v26;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v27;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v27;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v28;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v28;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v29;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v29;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v30;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v30;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v31;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v31;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v32;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v32;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v33;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v33;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v34;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v34;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v35;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v35;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v36;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v36;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v37;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v37;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v38;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v38;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v39;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v39;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v40;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v40;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v41;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v41;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v42;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v42;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v43;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v43;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v44;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v44;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v45;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v45;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v46;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v46;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v47;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v47;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v48;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v48;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v49;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v49;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v50;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v50;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v51;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v51;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v52;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v52;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v53;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v53;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v54;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v54;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v55;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v55;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v56;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v56;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v57;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v57;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v58;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v58;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v59;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v59;
    CData/*0:0*/ __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag;
    IData/*31:0*/ __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr;
    CData/*7:0*/ __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__ar_len_cntr;
    CData/*0:0*/ __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_last;
    CData/*0:0*/ __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_valid;
    CData/*0:0*/ __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag;
    IData/*31:0*/ __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr;
    CData/*7:0*/ __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__aw_len_cntr;
    CData/*0:0*/ __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid;
    CData/*0:0*/ __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag;
    IData/*31:0*/ __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr;
    CData/*7:0*/ __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__ar_len_cntr;
    CData/*0:0*/ __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_last;
    CData/*0:0*/ __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_valid;
    VlWide<4>/*127:0*/ __Vtemp_h76ab6252__0;
    VlWide<4>/*127:0*/ __Vtemp_h2d0d9224__0;
    VlWide<4>/*127:0*/ __Vtemp_h0e1452ff__0;
    // Body
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol3__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol2__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol0__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol1__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol3__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol2__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol0__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol1__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol3__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol2__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol0__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol1__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol3__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol2__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol0__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol1__v0 = 0U;
    __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_valid 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_valid;
    __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag;
    vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready;
    __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid;
    vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready;
    vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready;
    __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag;
    __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_last 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_last;
    __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__ar_len_cntr 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__ar_len_cntr;
    __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr;
    vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready;
    __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag;
    __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__aw_len_cntr 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__aw_len_cntr;
    __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr;
    __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_valid 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_valid;
    __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_last 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_last;
    __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__ar_len_cntr 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__ar_len_cntr;
    __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr 
        = vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v0 = 0U;
    __Vdly__SimTop__DOT__instrCnt = vlSelf->SimTop__DOT__instrCnt;
    __Vdly__SimTop__DOT__cycleCnt = vlSelf->SimTop__DOT__cycleCnt;
    __Vdly__SimTop__DOT__trap = vlSelf->SimTop__DOT__trap;
    __Vdlyvset__SimTop__DOT__regs_diff__v0 = 0U;
    __Vdlyvset__SimTop__DOT__regs_diff__v1 = 0U;
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(0U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit((QData)((IData)(
                                                                                (0x3fffffU 
                                                                                & (vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr 
                                                                                >> 3U)))), 0ULL, 0ULL, 0U);
    VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit((QData)((IData)(
                                                                                (0xfffffffU 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag)
                                                                                 ? 
                                                                                (0x3fffffU 
                                                                                & (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr 
                                                                                >> 3U))
                                                                                 : 
                                                                                (0x3fffffU 
                                                                                & (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr 
                                                                                >> 3U)))))), vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_payload_data, 
                                                                    (((QData)((IData)(
                                                                                (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_payload_strb) 
                                                                                >> 7U)))) 
                                                                                << 0x18U) 
                                                                                | ((0xff0000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_payload_strb) 
                                                                                >> 6U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_payload_strb) 
                                                                                >> 5U)))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_payload_strb) 
                                                                                >> 4U)))))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_payload_strb) 
                                                                                >> 3U)))) 
                                                                                << 0x18U) 
                                                                                | ((0xff0000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_payload_strb) 
                                                                                >> 2U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_payload_strb) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_payload_strb))))))))))), 
                                                                    (((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready) 
                                                                      & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_valid)) 
                                                                     & ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag) 
                                                                        | ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready) 
                                                                           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_valid)))));
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(0U, 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [1U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [2U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [3U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [4U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [5U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [6U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [7U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [8U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [9U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0xaU], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0xbU], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0xcU], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0xdU], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0xeU], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0xfU], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x10U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x11U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x12U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x13U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x14U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x15U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x16U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x17U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x18U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x19U], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x1aU], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x1bU], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x1cU], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x1dU], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x1eU], 
                                                                              vlSelf->SimTop__DOT__cpu_regs
                                                                              [0x1fU]);
    VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(0U, 3U, vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus, 0ULL, vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mepc, 0ULL, 0ULL, 0ULL, vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mtvec, 0ULL, vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mcause, 0ULL, 0ULL, vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mip, vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mie, vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mscratch, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(0U, (IData)(vlSelf->SimTop__DOT__trap), 
                                                                        (7U 
                                                                         & (IData)(vlSelf->SimTop__DOT__trap_code)), (QData)((IData)(vlSelf->SimTop__DOT__cmt_pc)), vlSelf->SimTop__DOT__cycleCnt, vlSelf->SimTop__DOT__instrCnt);
    if (vlSelf->SimTop__DOT__cmt_valid) {
        VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, (IData)(vlSelf->SimTop__DOT__cmt_valid), (QData)((IData)(vlSelf->SimTop__DOT__cmt_pc)), vlSelf->SimTop__DOT__cmt_inst, (IData)(vlSelf->SimTop__DOT__skip), 0U, 0U, (IData)(vlSelf->SimTop__DOT__cmt_wen), vlSelf->SimTop__DOT__cmt_wdest, vlSelf->SimTop__DOT__cmt_wdata);
    }
    if (VL_UNLIKELY(vlSelf->SimTop__DOT__cmt_valid)) {
        VL_WRITEF("pc:%x, inst:%x, cmt_wen:%b rd_addr:%x, rd_data:%x, mstatus:%x\n",
                  32,vlSelf->SimTop__DOT__cmt_pc,32,
                  vlSelf->SimTop__DOT__cmt_inst,1,(IData)(vlSelf->SimTop__DOT__cmt_wen),
                  8,vlSelf->SimTop__DOT__cmt_wdest,
                  64,vlSelf->SimTop__DOT__cmt_wdata,
                  64,vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus);
    }
    vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_aw_ready = 0U;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rob_ptr = 0U;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_src2_is_imm = 0U;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_src2_is_imm 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__src2_is_imm;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__bypass_rsp_data_d1 
        = vlSelf->SimTop__DOT__ram_d_mem_rsp_rdata;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_user = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_b_user = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_b_resp = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_b_valid = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_w_ready = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_aw_len = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_aw_burst = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__aw_len_cntr = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_aw_addr = 0U;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_src2_is_imm 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__src2_is_imm;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__writeback_b_ready = 0U;
        vlSelf->SimTop__DOT__writeback_a_ready = 1U;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_src2_data 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src2;
    }
    if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wstrb) 
          >> 3U) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol3__v0 
            = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wdata 
               >> 0x18U);
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol3__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol3__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_addr;
    }
    if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wstrb) 
          >> 2U) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol2__v0 
            = (0xffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wdata 
                        >> 0x10U));
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol2__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol2__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_addr;
    }
    if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wstrb) 
         & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol0__v0 
            = (0xffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wdata);
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol0__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol0__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_addr;
    }
    if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wstrb) 
          >> 1U) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol1__v0 
            = (0xffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wdata 
                        >> 8U));
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol1__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol1__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_addr;
    }
    if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wstrb) 
          >> 3U) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol3__v0 
            = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wdata 
               >> 0x18U);
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol3__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol3__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_addr;
    }
    if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wstrb) 
          >> 2U) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol2__v0 
            = (0xffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wdata 
                        >> 0x10U));
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol2__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol2__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_addr;
    }
    if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wstrb) 
         & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol0__v0 
            = (0xffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wdata);
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol0__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol0__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_addr;
    }
    if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wstrb) 
          >> 1U) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol1__v0 
            = (0xffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wdata 
                        >> 8U));
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol1__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol1__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_addr;
    }
    if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wstrb) 
          >> 3U) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol3__v0 
            = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wdata 
               >> 0x18U);
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol3__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol3__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_addr;
    }
    if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wstrb) 
          >> 2U) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol2__v0 
            = (0xffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wdata 
                        >> 0x10U));
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol2__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol2__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_addr;
    }
    if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wstrb) 
         & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol0__v0 
            = (0xffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wdata);
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol0__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol0__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_addr;
    }
    if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wstrb) 
          >> 1U) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol1__v0 
            = (0xffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wdata 
                        >> 8U));
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol1__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol1__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_addr;
    }
    if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wstrb) 
          >> 3U) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol3__v0 
            = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wdata 
               >> 0x18U);
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol3__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol3__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_addr;
    }
    if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wstrb) 
          >> 2U) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol2__v0 
            = (0xffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wdata 
                        >> 0x10U));
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol2__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol2__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_addr;
    }
    if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wstrb) 
         & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol0__v0 
            = (0xffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wdata);
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol0__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol0__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_addr;
    }
    if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wstrb) 
          >> 1U) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__tmp_mem_port))) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol1__v0 
            = (0xffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wdata 
                        >> 8U));
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol1__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol1__v0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_addr;
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_valid = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_resp = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag) 
                & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_valid)))) {
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_valid = 1U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_resp = 0U;
    } else if (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_valid) {
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_valid = 0U;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_imm 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1_imm;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_src1_data 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src1;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_user = 0U;
        vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_resp = 0U;
        vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_user = 0U;
        vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag = 0U;
    } else {
        if ((((~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready)) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_valid)) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag)))) {
            vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_user = 0U;
        }
        if (((((~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready)) 
               & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_aw_valid)) 
              & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag))) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag)))) {
            vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready = 1U;
            __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag = 1U;
        } else if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_payload_last) 
                    & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready))) {
            __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag = 0U;
        } else {
            vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready = 0U;
        }
        if ((((((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag) 
                & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready)) 
               & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_valid)) 
              & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid))) 
             & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_payload_last))) {
            __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid = 1U;
            vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_resp = 0U;
        } else if (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid) {
            __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid = 0U;
        }
        if ((((~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready)) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_valid)) 
             & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag))) {
            vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready = 1U;
        } else if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_payload_last) 
                    & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready))) {
            vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready = 0U;
        }
        if ((((~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready)) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_valid)) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag)))) {
            vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_user = 0U;
        }
        if (((((~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready)) 
               & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_valid)) 
              & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag))) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag)))) {
            vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready = 1U;
            __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag = 1U;
        } else if (((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_valid) 
                    & ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__ar_len_cntr) 
                       == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_len)))) {
            __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag = 0U;
        } else {
            vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready = 0U;
        }
    }
    if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rValid) 
         & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__cpu_cmd_ready_1))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr_offset_reg 
            = (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr));
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__ar_len_cntr = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_last = 0U;
    } else if ((((~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready)) 
                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_valid)) 
                & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag)))) {
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_payload_addr;
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__ar_len_cntr = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_last = 0U;
    } else if ((((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready) 
                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_valid)) 
                & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag)))) {
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_payload_addr;
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__ar_len_cntr = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_last = 0U;
    } else if ((((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__ar_len_cntr) 
                 <= (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_len)) 
                & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_valid))) {
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__ar_len_cntr 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__ar_len_cntr)));
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr 
            = ((0U == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_burst))
                ? vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr
                : ((1U == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_burst))
                    ? (((IData)(1U) + (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr 
                                       >> 3U)) << 3U)
                    : ((2U == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_burst))
                        ? ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__ar_wrap_en)
                            ? (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr 
                               - ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_payload_len) 
                                  << 3U)) : (((IData)(1U) 
                                              + (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr 
                                                 >> 3U)) 
                                             << 3U))
                        : ((IData)(1U) + (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr 
                                          >> 3U)))));
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_last = 0U;
    } else {
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_last 
            = ((((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__ar_len_cntr) 
                 == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_len)) 
                & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_last))) 
               & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag));
    }
    if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rValid) 
         & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__src_stream_ready))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_op_is_signed_reg 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_op_is_signed;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__aw_len_cntr = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_valid = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_resp = 0U;
    } else {
        if (((((~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready)) 
               & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_valid)) 
              & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__axi_awv_awr_flag))) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag)))) {
            vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready = 1U;
            __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag = 1U;
        } else if (((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_valid) 
                    & ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__ar_len_cntr) 
                       == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_len)))) {
            __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag = 0U;
        } else {
            vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready = 0U;
        }
        if ((((~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready)) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_aw_valid)) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag)))) {
            __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_aw_payload_addr;
            __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__aw_len_cntr = 0U;
        } else if (((((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__aw_len_cntr) 
                      <= (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_len)) 
                     & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready)) 
                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_valid))) {
            __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__aw_len_cntr 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__aw_len_cntr)));
            __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr 
                = ((0U == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_burst))
                    ? vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr
                    : ((1U == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_burst))
                        ? (0xfffffff8U & vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr)
                        : ((2U == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_burst))
                            ? ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__aw_wrap_en)
                                ? (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr 
                                   - ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_aw_payload_len) 
                                      << 3U)) : (((IData)(1U) 
                                                  + 
                                                  (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr 
                                                   >> 3U)) 
                                                 << 3U))
                            : ((IData)(1U) + (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr 
                                              >> 3U)))));
        }
        if (((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_valid)))) {
            __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_valid = 1U;
            vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_resp = 0U;
        } else if (vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_valid) {
            __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_valid = 0U;
        }
    }
    if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rValid) 
         & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__src_stream_ready))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_src1_reg 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_src2_reg 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data;
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__ar_len_cntr = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_last = 0U;
    } else if ((((~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready)) 
                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_valid)) 
                & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag)))) {
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_payload_addr;
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__ar_len_cntr = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_last = 0U;
    } else if ((((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready) 
                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_valid)) 
                & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag)))) {
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_payload_addr;
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__ar_len_cntr = 0U;
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_last = 0U;
    } else if ((((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__ar_len_cntr) 
                 <= (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_len)) 
                & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_valid))) {
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__ar_len_cntr 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__ar_len_cntr)));
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr 
            = ((0U == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_burst))
                ? vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr
                : ((1U == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_burst))
                    ? (((IData)(1U) + (vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr 
                                       >> 3U)) << 3U)
                    : ((2U == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_burst))
                        ? ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__ar_wrap_en)
                            ? (vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr 
                               - ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_payload_len) 
                                  << 3U)) : (((IData)(1U) 
                                              + (vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr 
                                                 >> 3U)) 
                                             << 3U))
                        : ((IData)(1U) + (vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr 
                                          >> 3U)))));
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_last = 0U;
    } else {
        __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_last 
            = ((((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__ar_len_cntr) 
                 == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_len)) 
                & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_last))) 
               & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag));
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rData_rd_rob_ptr 
            = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_done_valid)
                ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__rd_rob_ptr_reg)
                : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_rd_rob_ptr));
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__out_valid 
        = ((0xffffffffffffffeULL & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__out_valid 
                                    << 1U)) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_start)));
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v2 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [1U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v3 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [2U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v4 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [3U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v5 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [4U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v6 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [5U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v7 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [6U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v8 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [7U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v9 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [8U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v10 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [9U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v11 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0xaU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v12 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0xbU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v13 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0xcU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v14 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0xdU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v15 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0xeU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v16 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0xfU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v17 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x10U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v18 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x11U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v19 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x12U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v20 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x13U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v21 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x14U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v22 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x15U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v23 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x16U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v24 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x17U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v25 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x18U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v26 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x19U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v27 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x1aU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v28 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x1bU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v29 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x1cU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v30 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x1dU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v31 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x1eU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v32 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x1fU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v33 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x20U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v34 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x21U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v35 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x22U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v36 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x23U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v37 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x24U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v38 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x25U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v39 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x26U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v40 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x27U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v41 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x28U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v42 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x29U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v43 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x2aU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v44 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x2bU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v45 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x2cU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v46 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x2dU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v47 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x2eU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v48 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x2fU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v49 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x30U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v50 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x31U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v51 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x32U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v52 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x33U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v53 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x34U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v54 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x35U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v55 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x36U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v56 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x37U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v57 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x38U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v58 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x39U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v59 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
        [0x3aU];
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_start) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v0 
            = ((0ULL == vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_abs)
                ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_abs
                : VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_abs, vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_abs));
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v0 = 1U;
    }
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v2 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [1U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v3 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [2U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v4 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [3U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v5 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [4U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v6 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [5U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v7 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [6U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v8 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [7U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v9 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [8U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v10 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [9U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v11 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0xaU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v12 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0xbU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v13 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0xcU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v14 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0xdU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v15 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0xeU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v16 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0xfU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v17 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x10U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v18 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x11U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v19 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x12U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v20 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x13U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v21 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x14U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v22 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x15U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v23 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x16U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v24 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x17U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v25 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x18U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v26 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x19U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v27 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x1aU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v28 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x1bU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v29 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x1cU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v30 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x1dU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v31 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x1eU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v32 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x1fU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v33 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x20U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v34 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x21U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v35 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x22U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v36 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x23U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v37 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x24U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v38 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x25U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v39 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x26U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v40 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x27U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v41 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x28U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v42 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x29U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v43 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x2aU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v44 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x2bU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v45 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x2cU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v46 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x2dU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v47 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x2eU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v48 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x2fU];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v49 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x30U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v50 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x31U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v51 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x32U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v52 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x33U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v53 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x34U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v54 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x35U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v55 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x36U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v56 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x37U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v57 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x38U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v58 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x39U];
    __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v59 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
        [0x3aU];
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_start) {
        __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v0 
            = ((0ULL == vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_abs)
                ? 0xffffffffffffffffULL : VL_DIV_QQQ(64, vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_abs, vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_abs));
        __Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v0 = 1U;
    }
    if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid) 
         & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_regNextWhen 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit_d1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__hit_id_d1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_1;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_rd_eq_rs1 
            = ((0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                         >> 7U)) == (0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                              >> 0xfU)));
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_rs1_is_link 
            = ((0U == (0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                >> 0xfU))) | (5U == 
                                              (0x1fU 
                                               & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                  >> 0xfU))));
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_rd_is_link 
            = ((0U == (0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                >> 7U))) | (5U == (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                      >> 7U))));
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_is_load 
            = (3U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction));
    }
    if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rValid) 
         & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__src_stream_ready))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_op_is_word_reg 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_is_word;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_valid) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__tmp_memsymbol_read_2 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol2
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_addr];
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__tmp_memsymbol_read_3 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol3
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_addr];
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__tmp_memsymbol_read_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol1
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_addr];
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__tmp_memsymbol_read 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol0
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_addr];
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_valid) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__tmp_memsymbol_read_2 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol2
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_addr];
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__tmp_memsymbol_read_3 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol3
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_addr];
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__tmp_memsymbol_read_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol1
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_addr];
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__tmp_memsymbol_read 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol0
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_addr];
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_valid) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__tmp_memsymbol_read_2 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol2
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_addr];
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__tmp_memsymbol_read_3 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol3
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_addr];
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__tmp_memsymbol_read_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol1
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_addr];
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__tmp_memsymbol_read 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol0
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_addr];
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_valid) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__tmp_memsymbol_read_2 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol2
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_addr];
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__tmp_memsymbol_read_3 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol3
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_addr];
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__tmp_memsymbol_read_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol1
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_addr];
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__tmp_memsymbol_read 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol0
            [vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_addr];
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_pc_next 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_pc_next;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_bpu_pred_taken 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_bpu_pred_taken;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rData_rd_rob_ptr 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_rd_rob_ptr;
    }
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid 
        = __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_last 
        = __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_last;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__ar_len_cntr 
        = __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__ar_len_cntr;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_valid 
        = __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_valid;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr 
        = __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__aw_len_cntr 
        = __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__aw_len_cntr;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr 
        = __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr;
    vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_last 
        = __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_last;
    vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__ar_len_cntr 
        = __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__ar_len_cntr;
    vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr 
        = __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr;
    vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_valid 
        = __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_valid;
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0U] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v0;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[1U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v1;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[2U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v2;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[3U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v3;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[4U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v4;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[5U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v5;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[6U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v6;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[7U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v7;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[8U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v8;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[9U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v9;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0xaU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v10;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0xbU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v11;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0xcU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v12;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0xdU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v13;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0xeU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v14;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0xfU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v15;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x10U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v16;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x11U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v17;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x12U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v18;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x13U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v19;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x14U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v20;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x15U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v21;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x16U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v22;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x17U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v23;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x18U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v24;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x19U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v25;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x1aU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v26;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x1bU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v27;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x1cU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v28;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x1dU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v29;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x1eU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v30;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x1fU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v31;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x20U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v32;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x21U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v33;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x22U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v34;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x23U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v35;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x24U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v36;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x25U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v37;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x26U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v38;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x27U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v39;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x28U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v40;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x29U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v41;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x2aU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v42;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x2bU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v43;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x2cU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v44;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x2dU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v45;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x2eU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v46;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x2fU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v47;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x30U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v48;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x31U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v49;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x32U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v50;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x33U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v51;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x34U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v52;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x35U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v53;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x36U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v54;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x37U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v55;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x38U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v56;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x39U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v57;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x3aU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v58;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder[0x3bU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder__v59;
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0U] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v0;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[1U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v1;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[2U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v2;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[3U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v3;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[4U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v4;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[5U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v5;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[6U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v6;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[7U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v7;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[8U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v8;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[9U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v9;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0xaU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v10;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0xbU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v11;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0xcU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v12;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0xdU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v13;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0xeU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v14;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0xfU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v15;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x10U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v16;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x11U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v17;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x12U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v18;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x13U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v19;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x14U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v20;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x15U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v21;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x16U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v22;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x17U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v23;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x18U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v24;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x19U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v25;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x1aU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v26;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x1bU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v27;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x1cU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v28;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x1dU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v29;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x1eU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v30;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x1fU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v31;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x20U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v32;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x21U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v33;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x22U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v34;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x23U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v35;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x24U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v36;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x25U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v37;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x26U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v38;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x27U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v39;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x28U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v40;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x29U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v41;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x2aU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v42;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x2bU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v43;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x2cU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v44;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x2dU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v45;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x2eU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v46;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x2fU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v47;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x30U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v48;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x31U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v49;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x32U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v50;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x33U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v51;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x34U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v52;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x35U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v53;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x36U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v54;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x37U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v55;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x38U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v56;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x39U] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v57;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x3aU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v58;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient[0x3bU] 
        = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient__v59;
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol2__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol2[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol2__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol2__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol3__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol3[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol3__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol3__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol1__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol1[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol1__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol1__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol0__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol0[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol0__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__mem_symbol0__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol2__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol2[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol2__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol2__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol3__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol3[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol3__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol3__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol1__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol1[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol1__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol1__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol0__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol0[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol0__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__mem_symbol0__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol2__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol2[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol2__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol2__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol3__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol3[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol3__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol3__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol1__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol1[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol1__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol1__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol0__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol0[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol0__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__mem_symbol0__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol2__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol2[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol2__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol2__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol3__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol3[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol3__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol3__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol1__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol1[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol1__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol1__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol0__v0) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol0[__Vdlyvdim0__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol0__v0] 
            = __Vdlyvval__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__mem_symbol0__v0;
    }
    vlSelf->SimTop__DOT__skip = ((~ (IData)(vlSelf->reset)) 
                                 & (0x7bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_instruction));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__cmt_wen = 0U;
        vlSelf->SimTop__DOT__cmt_wdest = 0U;
        vlSelf->SimTop__DOT__cmt_wdata = 0ULL;
        vlSelf->SimTop__DOT__cmt_pc = 0U;
        vlSelf->SimTop__DOT__cmt_inst = 0U;
        vlSelf->SimTop__DOT__cmt_valid = 0U;
        __Vdly__SimTop__DOT__trap = 0U;
        vlSelf->SimTop__DOT__trap_code = 0U;
        __Vdly__SimTop__DOT__cycleCnt = 0ULL;
        __Vdly__SimTop__DOT__instrCnt = 0ULL;
        vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_len = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_burst = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__axi_awv_awr_flag = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_burst = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_len = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->SimTop__DOT__trap)))) {
            __Vdly__SimTop__DOT__cycleCnt = (1ULL + vlSelf->SimTop__DOT__cycleCnt);
            __Vdly__SimTop__DOT__instrCnt = (vlSelf->SimTop__DOT__instrCnt 
                                             + (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rValid)));
            vlSelf->SimTop__DOT__cmt_wen = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_wen;
            vlSelf->SimTop__DOT__cmt_wdest = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr;
            vlSelf->SimTop__DOT__cmt_wdata = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
            vlSelf->SimTop__DOT__cmt_pc = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_pc;
            vlSelf->SimTop__DOT__cmt_inst = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_instruction;
            vlSelf->SimTop__DOT__cmt_valid = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rValid;
            __Vdlyvval__SimTop__DOT__regs_diff__v0 
                = vlSelf->SimTop__DOT__cpu_regs[0U];
            __Vdlyvset__SimTop__DOT__regs_diff__v0 = 1U;
            __Vdly__SimTop__DOT__trap = ((0x6bU == 
                                          (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_instruction)) 
                                         & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rValid));
            vlSelf->SimTop__DOT__trap_code = (0xffU 
                                              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_10));
            __Vdlyvval__SimTop__DOT__regs_diff__v1 
                = vlSelf->SimTop__DOT__cpu_regs[1U];
            __Vdlyvset__SimTop__DOT__regs_diff__v1 = 1U;
            __Vdlyvval__SimTop__DOT__regs_diff__v2 
                = vlSelf->SimTop__DOT__cpu_regs[2U];
            __Vdlyvval__SimTop__DOT__regs_diff__v3 
                = vlSelf->SimTop__DOT__cpu_regs[3U];
            __Vdlyvval__SimTop__DOT__regs_diff__v4 
                = vlSelf->SimTop__DOT__cpu_regs[4U];
            __Vdlyvval__SimTop__DOT__regs_diff__v5 
                = vlSelf->SimTop__DOT__cpu_regs[5U];
            __Vdlyvval__SimTop__DOT__regs_diff__v6 
                = vlSelf->SimTop__DOT__cpu_regs[6U];
            __Vdlyvval__SimTop__DOT__regs_diff__v7 
                = vlSelf->SimTop__DOT__cpu_regs[7U];
            __Vdlyvval__SimTop__DOT__regs_diff__v8 
                = vlSelf->SimTop__DOT__cpu_regs[8U];
            __Vdlyvval__SimTop__DOT__regs_diff__v9 
                = vlSelf->SimTop__DOT__cpu_regs[9U];
            __Vdlyvval__SimTop__DOT__regs_diff__v10 
                = vlSelf->SimTop__DOT__cpu_regs[0xaU];
            __Vdlyvval__SimTop__DOT__regs_diff__v11 
                = vlSelf->SimTop__DOT__cpu_regs[0xbU];
            __Vdlyvval__SimTop__DOT__regs_diff__v12 
                = vlSelf->SimTop__DOT__cpu_regs[0xcU];
            __Vdlyvval__SimTop__DOT__regs_diff__v13 
                = vlSelf->SimTop__DOT__cpu_regs[0xdU];
            __Vdlyvval__SimTop__DOT__regs_diff__v14 
                = vlSelf->SimTop__DOT__cpu_regs[0xeU];
            __Vdlyvval__SimTop__DOT__regs_diff__v15 
                = vlSelf->SimTop__DOT__cpu_regs[0xfU];
            __Vdlyvval__SimTop__DOT__regs_diff__v16 
                = vlSelf->SimTop__DOT__cpu_regs[0x10U];
            __Vdlyvval__SimTop__DOT__regs_diff__v17 
                = vlSelf->SimTop__DOT__cpu_regs[0x11U];
            __Vdlyvval__SimTop__DOT__regs_diff__v18 
                = vlSelf->SimTop__DOT__cpu_regs[0x12U];
            __Vdlyvval__SimTop__DOT__regs_diff__v19 
                = vlSelf->SimTop__DOT__cpu_regs[0x13U];
            __Vdlyvval__SimTop__DOT__regs_diff__v20 
                = vlSelf->SimTop__DOT__cpu_regs[0x14U];
            __Vdlyvval__SimTop__DOT__regs_diff__v21 
                = vlSelf->SimTop__DOT__cpu_regs[0x15U];
            __Vdlyvval__SimTop__DOT__regs_diff__v22 
                = vlSelf->SimTop__DOT__cpu_regs[0x16U];
            __Vdlyvval__SimTop__DOT__regs_diff__v23 
                = vlSelf->SimTop__DOT__cpu_regs[0x17U];
            __Vdlyvval__SimTop__DOT__regs_diff__v24 
                = vlSelf->SimTop__DOT__cpu_regs[0x18U];
            __Vdlyvval__SimTop__DOT__regs_diff__v25 
                = vlSelf->SimTop__DOT__cpu_regs[0x19U];
            __Vdlyvval__SimTop__DOT__regs_diff__v26 
                = vlSelf->SimTop__DOT__cpu_regs[0x1aU];
            __Vdlyvval__SimTop__DOT__regs_diff__v27 
                = vlSelf->SimTop__DOT__cpu_regs[0x1bU];
            __Vdlyvval__SimTop__DOT__regs_diff__v28 
                = vlSelf->SimTop__DOT__cpu_regs[0x1cU];
            __Vdlyvval__SimTop__DOT__regs_diff__v29 
                = vlSelf->SimTop__DOT__cpu_regs[0x1dU];
            __Vdlyvval__SimTop__DOT__regs_diff__v30 
                = vlSelf->SimTop__DOT__cpu_regs[0x1eU];
            __Vdlyvval__SimTop__DOT__regs_diff__v31 
                = vlSelf->SimTop__DOT__cpu_regs[0x1fU];
        }
        if ((((~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready)) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_valid)) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag)))) {
            vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_len 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_payload_len;
            vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_burst 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_payload_burst;
        } else if ((((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready) 
                     & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_valid)) 
                    & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag)))) {
            vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_len 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_payload_len;
            vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_burst 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_payload_burst;
        }
        if ((((~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready)) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_aw_valid)) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag)))) {
            vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_burst 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_aw_payload_burst;
            vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_len 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_aw_payload_len;
        }
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src1;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data 
            = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__src2_is_imm)
                ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1_imm
                : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src2);
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_len = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_burst = 0U;
    } else if ((((~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready)) 
                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_valid)) 
                & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag)))) {
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_len 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_payload_len;
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_burst 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_payload_burst;
    } else if ((((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready) 
                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_valid)) 
                & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag)))) {
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_len 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_payload_len;
        vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_burst 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_payload_burst;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_is_word 
            = ((0x3bU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
               | (0x1bU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_pc_next 
            = ((0U == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr)))
                ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_0
                : ((1U == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr)))
                    ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_1
                    : ((2U == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr)))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_2
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_3)));
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_bpu_pred_taken 
            = ((0U == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__read_ptr)))
                ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_ram_0)
                : ((1U == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__read_ptr)))
                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_ram_1)
                    : ((2U == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__read_ptr)))
                        ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_ram_2)
                        : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_ram_3))));
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_rd_rob_ptr = 0U;
    }
    vlSelf->SimTop__DOT__trap = __Vdly__SimTop__DOT__trap;
    vlSelf->SimTop__DOT__cycleCnt = __Vdly__SimTop__DOT__cycleCnt;
    vlSelf->SimTop__DOT__instrCnt = __Vdly__SimTop__DOT__instrCnt;
    if (__Vdlyvset__SimTop__DOT__regs_diff__v0) {
        vlSelf->SimTop__DOT__regs_diff[0U] = __Vdlyvval__SimTop__DOT__regs_diff__v0;
    }
    if (__Vdlyvset__SimTop__DOT__regs_diff__v1) {
        vlSelf->SimTop__DOT__regs_diff[1U] = __Vdlyvval__SimTop__DOT__regs_diff__v1;
        vlSelf->SimTop__DOT__regs_diff[2U] = __Vdlyvval__SimTop__DOT__regs_diff__v2;
        vlSelf->SimTop__DOT__regs_diff[3U] = __Vdlyvval__SimTop__DOT__regs_diff__v3;
        vlSelf->SimTop__DOT__regs_diff[4U] = __Vdlyvval__SimTop__DOT__regs_diff__v4;
        vlSelf->SimTop__DOT__regs_diff[5U] = __Vdlyvval__SimTop__DOT__regs_diff__v5;
        vlSelf->SimTop__DOT__regs_diff[6U] = __Vdlyvval__SimTop__DOT__regs_diff__v6;
        vlSelf->SimTop__DOT__regs_diff[7U] = __Vdlyvval__SimTop__DOT__regs_diff__v7;
        vlSelf->SimTop__DOT__regs_diff[8U] = __Vdlyvval__SimTop__DOT__regs_diff__v8;
        vlSelf->SimTop__DOT__regs_diff[9U] = __Vdlyvval__SimTop__DOT__regs_diff__v9;
        vlSelf->SimTop__DOT__regs_diff[0xaU] = __Vdlyvval__SimTop__DOT__regs_diff__v10;
        vlSelf->SimTop__DOT__regs_diff[0xbU] = __Vdlyvval__SimTop__DOT__regs_diff__v11;
        vlSelf->SimTop__DOT__regs_diff[0xcU] = __Vdlyvval__SimTop__DOT__regs_diff__v12;
        vlSelf->SimTop__DOT__regs_diff[0xdU] = __Vdlyvval__SimTop__DOT__regs_diff__v13;
        vlSelf->SimTop__DOT__regs_diff[0xeU] = __Vdlyvval__SimTop__DOT__regs_diff__v14;
        vlSelf->SimTop__DOT__regs_diff[0xfU] = __Vdlyvval__SimTop__DOT__regs_diff__v15;
        vlSelf->SimTop__DOT__regs_diff[0x10U] = __Vdlyvval__SimTop__DOT__regs_diff__v16;
        vlSelf->SimTop__DOT__regs_diff[0x11U] = __Vdlyvval__SimTop__DOT__regs_diff__v17;
        vlSelf->SimTop__DOT__regs_diff[0x12U] = __Vdlyvval__SimTop__DOT__regs_diff__v18;
        vlSelf->SimTop__DOT__regs_diff[0x13U] = __Vdlyvval__SimTop__DOT__regs_diff__v19;
        vlSelf->SimTop__DOT__regs_diff[0x14U] = __Vdlyvval__SimTop__DOT__regs_diff__v20;
        vlSelf->SimTop__DOT__regs_diff[0x15U] = __Vdlyvval__SimTop__DOT__regs_diff__v21;
        vlSelf->SimTop__DOT__regs_diff[0x16U] = __Vdlyvval__SimTop__DOT__regs_diff__v22;
        vlSelf->SimTop__DOT__regs_diff[0x17U] = __Vdlyvval__SimTop__DOT__regs_diff__v23;
        vlSelf->SimTop__DOT__regs_diff[0x18U] = __Vdlyvval__SimTop__DOT__regs_diff__v24;
        vlSelf->SimTop__DOT__regs_diff[0x19U] = __Vdlyvval__SimTop__DOT__regs_diff__v25;
        vlSelf->SimTop__DOT__regs_diff[0x1aU] = __Vdlyvval__SimTop__DOT__regs_diff__v26;
        vlSelf->SimTop__DOT__regs_diff[0x1bU] = __Vdlyvval__SimTop__DOT__regs_diff__v27;
        vlSelf->SimTop__DOT__regs_diff[0x1cU] = __Vdlyvval__SimTop__DOT__regs_diff__v28;
        vlSelf->SimTop__DOT__regs_diff[0x1dU] = __Vdlyvval__SimTop__DOT__regs_diff__v29;
        vlSelf->SimTop__DOT__regs_diff[0x1eU] = __Vdlyvval__SimTop__DOT__regs_diff__v30;
        vlSelf->SimTop__DOT__regs_diff[0x1fU] = __Vdlyvval__SimTop__DOT__regs_diff__v31;
    }
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag 
        = __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag 
        = __Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag;
    vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag 
        = __Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_ready) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__alu_busy) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_wen 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rData_rd_wen;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_instruction 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rData_instruction;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_pc 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rData_pc;
        } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__bju_busy) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_wen 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rData_rd_wen;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_instruction 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rData_instruction;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_pc 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rData_pc;
        } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__lsu_busy) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_wen 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__rd_wen_reg;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_instruction 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__tmp_dst_stream_payload_instruction;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_pc 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__tmp_dst_stream_payload_pc;
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_wen = 0U;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_instruction 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_pc 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_pc;
        }
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__add_result 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data 
           + vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__sub_result 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data 
           - vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__sllw_temp 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data) 
           << (0x1fU & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__srlw_temp 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data) 
           >> (0x1fU & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__sraw_temp 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data), 
                         (0x1fU & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data)));
    VL_EXTEND_WQ(128,64, __Vtemp_h76ab6252__0, vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data);
    VL_EXTEND_WQ(128,64, __Vtemp_h2d0d9224__0, vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data);
    VL_MUL_W(4, __Vtemp_h0e1452ff__0, __Vtemp_h76ab6252__0, __Vtemp_h2d0d9224__0);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[0U] 
        = __Vtemp_h0e1452ff__0[0U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[1U] 
        = __Vtemp_h0e1452ff__0[1U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[2U] 
        = __Vtemp_h0e1452ff__0[2U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[3U] 
        = __Vtemp_h0e1452ff__0[3U];
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__axi_arv_arr_flag, (QData)((IData)(
                                                                                (0x3fffffU 
                                                                                & (vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr 
                                                                                >> 3U)))), vlSelf->__Vfunc_ram_read_helper__8__Vfuncout);
    vlSelf->SimTop__DOT__ram_i_mem_rsp_rdata = vlSelf->__Vfunc_ram_read_helper__8__Vfuncout;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow)))) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__ports_s_ports_fire) {
            if ((1U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc;
            }
            if ((2U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc;
            }
            if ((4U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_2 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc;
            }
            if ((8U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_3 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc;
            }
        }
    }
    __Vtableidx2 = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_predict_taken) 
                     << 6U) | ((0x3cU & (((IData)(1U) 
                                          << (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__write_ptr))) 
                                         << 2U)) | 
                               (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__ports_s_ports_fire) 
                                 << 1U) | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow))));
    if ((1U & VSimTop__ConstPool__TABLE_hd4462e8d_0
         [__Vtableidx2])) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_ram_0 
            = VSimTop__ConstPool__TABLE_h129eb3e1_0
            [__Vtableidx2];
    }
    if ((2U & VSimTop__ConstPool__TABLE_hd4462e8d_0
         [__Vtableidx2])) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_ram_1 
            = VSimTop__ConstPool__TABLE_h36a76887_0
            [__Vtableidx2];
    }
    if ((4U & VSimTop__ConstPool__TABLE_hd4462e8d_0
         [__Vtableidx2])) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_ram_2 
            = VSimTop__ConstPool__TABLE_hb596eee0_0
            [__Vtableidx2];
    }
    if ((8U & VSimTop__ConstPool__TABLE_hd4462e8d_0
         [__Vtableidx2])) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_ram_3 
            = VSimTop__ConstPool__TABLE_h8d083a25_0
            [__Vtableidx2];
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rData_rd_wen 
            = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_done_valid)
                ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__rd_wen_reg)
                : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_rd_wen));
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rData_rd_wen 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_rd_wen;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rData_instruction 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_instruction;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rData_instruction 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_instruction;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rData_pc 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_pc;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rData_pc 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_pc;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_rd_wen 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__rd_wen;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_instruction 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_instruction 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_pc 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_pc;
    }
}

extern const VlUnpacked<QData/*47:0*/, 8> VSimTop__ConstPool__TABLE_hcaf4ada9_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSimTop__ConstPool__TABLE_h8bf20b66_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSimTop__ConstPool__TABLE_hfe7a4498_0;
extern const VlUnpacked<CData/*1:0*/, 64> VSimTop__ConstPool__TABLE_he0435f8d_0;

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__8(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__8\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx34;
    CData/*2:0*/ __Vtableidx35;
    CData/*2:0*/ __Vtableidx36;
    CData/*2:0*/ __Vtableidx37;
    CData/*2:0*/ __Vtableidx38;
    // Body
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__dcache_ar_fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__dcache_ar_fire_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__dcache_w_fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready));
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                   ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag) 
                                                                    | ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready) 
                                                                       & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_valid))), (QData)((IData)(
                                                                                (0xfffffffU 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag)
                                                                                 ? 
                                                                                (0x3fffffU 
                                                                                & (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr 
                                                                                >> 3U))
                                                                                 : 
                                                                                (0x3fffffU 
                                                                                & (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr 
                                                                                >> 3U)))))), vlSelf->__Vfunc_ram_read_helper__10__Vfuncout);
    vlSelf->SimTop__DOT__ram_d_mem_rsp_rdata = vlSelf->__Vfunc_ram_read_helper__10__Vfuncout;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__dcache_aw_fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_aw_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_ar_fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_ar_fire_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_cmd_fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_cmd_valid_1) 
           & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready));
    if ((0x1000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
        if ((0x800U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_127_vld;
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_127_mru;
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_127_vld;
                            } else {
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_126_vld;
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_126_mru;
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_126_vld;
                            }
                        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_125_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_125_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_125_vld;
                        } else {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_124_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_124_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_124_vld;
                        }
                    } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_123_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_123_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_123_vld;
                        } else {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_122_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_122_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_122_vld;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_121_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_121_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_121_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_120_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_120_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_120_vld;
                    }
                } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_119_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_119_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_119_vld;
                        } else {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_118_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_118_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_118_vld;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_117_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_117_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_117_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_116_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_116_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_116_vld;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_115_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_115_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_115_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_114_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_114_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_114_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_113_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_113_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_113_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_112_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_112_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_112_vld;
                }
            } else if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_111_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_111_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_111_vld;
                        } else {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_110_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_110_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_110_vld;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_109_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_109_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_109_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_108_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_108_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_108_vld;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_107_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_107_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_107_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_106_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_106_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_106_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_105_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_105_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_105_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_104_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_104_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_104_vld;
                }
            } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_103_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_103_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_103_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_102_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_102_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_102_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_101_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_101_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_101_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_100_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_100_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_100_vld;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_99_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_99_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_99_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_98_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_98_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_98_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_97_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_97_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_97_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_96_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_96_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_96_vld;
            }
        } else if ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_95_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_95_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_95_vld;
                        } else {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_94_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_94_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_94_vld;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_93_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_93_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_93_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_92_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_92_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_92_vld;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_91_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_91_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_91_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_90_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_90_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_90_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_89_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_89_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_89_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_88_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_88_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_88_vld;
                }
            } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_87_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_87_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_87_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_86_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_86_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_86_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_85_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_85_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_85_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_84_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_84_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_84_vld;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_83_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_83_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_83_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_82_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_82_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_82_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_81_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_81_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_81_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_80_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_80_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_80_vld;
            }
        } else if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_79_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_79_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_79_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_78_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_78_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_78_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_77_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_77_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_77_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_76_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_76_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_76_vld;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_75_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_75_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_75_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_74_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_74_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_74_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_73_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_73_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_73_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_72_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_72_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_72_vld;
            }
        } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_71_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_71_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_71_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_70_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_70_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_70_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_69_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_69_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_69_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_68_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_68_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_68_vld;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_67_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_67_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_67_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_66_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_66_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_66_vld;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_65_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_65_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_65_vld;
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_64_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_64_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_64_vld;
        }
    } else if ((0x800U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
        if ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_63_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_63_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_63_vld;
                        } else {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_62_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_62_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_62_vld;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_61_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_61_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_61_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_60_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_60_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_60_vld;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_59_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_59_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_59_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_58_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_58_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_58_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_57_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_57_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_57_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_56_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_56_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_56_vld;
                }
            } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_55_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_55_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_55_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_54_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_54_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_54_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_53_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_53_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_53_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_52_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_52_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_52_vld;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_51_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_51_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_51_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_50_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_50_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_50_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_49_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_49_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_49_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_48_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_48_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_48_vld;
            }
        } else if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_47_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_47_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_47_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_46_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_46_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_46_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_45_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_45_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_45_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_44_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_44_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_44_vld;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_43_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_43_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_43_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_42_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_42_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_42_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_41_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_41_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_41_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_40_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_40_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_40_vld;
            }
        } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_39_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_39_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_39_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_38_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_38_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_38_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_37_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_37_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_37_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_36_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_36_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_36_vld;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_35_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_35_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_35_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_34_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_34_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_34_vld;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_33_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_33_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_33_vld;
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_32_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_32_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_32_vld;
        }
    } else if ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
        if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_31_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_31_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_31_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_30_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_30_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_30_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_29_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_29_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_29_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_28_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_28_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_28_vld;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_27_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_27_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_27_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_26_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_26_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_26_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_25_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_25_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_25_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_24_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_24_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_24_vld;
            }
        } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_23_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_23_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_23_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_22_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_22_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_22_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_21_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_21_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_21_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_20_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_20_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_20_vld;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_19_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_19_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_19_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_18_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_18_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_18_vld;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_17_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_17_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_17_vld;
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_16_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_16_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_16_vld;
        }
    } else if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
        if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_15_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_15_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_15_vld;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_14_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_14_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_14_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_13_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_13_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_13_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_12_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_12_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_12_vld;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_11_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_11_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_11_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_10_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_10_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_10_vld;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_9_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_9_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_9_vld;
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_8_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_8_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_8_vld;
        }
    } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
        if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_7_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_7_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_7_vld;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_6_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_6_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_6_vld;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_5_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_5_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_5_vld;
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_4_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_4_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_4_vld;
        }
    } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_3_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_3_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_3_vld;
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_2_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_2_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_2_vld;
        }
    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_1_vld;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_1_mru;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_1_vld;
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_0_vld;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_0_mru;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_0_vld;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_ready = 1U;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rValid)))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_ready = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__alu_busy 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__alu_busy;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__bju_busy 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__bju_busy;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__lsu_busy 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__lsu_busy;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_next_level_rsp_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_valid) 
           & (0U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_payload_id)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit_d1)
            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__hit_id_d1)
                ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__rsp_valid)
                : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__rsp_valid))
            : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss)
                ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__rsp_valid)
                : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__rsp_valid)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cpu_rsp_payload_data_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss)
            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__sram_banks_data_1
            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__sram_banks_data_0);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_done_valid 
        = ((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__out_valid 
                    >> 0x3bU)) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__busy_reg));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_ready = 1U;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rValid)))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_ready = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_ready = 1U;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rValid)))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_ready = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile_cpu_ports_rdata 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wen_regNext) 
            & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr) 
               == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext)))
            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext
            : (((((((((0x300U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr)) 
                      | (0x304U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr))) 
                     | (0x305U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr))) 
                    | (0x341U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr))) 
                   | (0x342U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr))) 
                  | (0x343U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr))) 
                 | (0x344U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr))) 
                | (0xb00U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr)))
                ? ((0x300U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr))
                    ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus
                    : ((0x304U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mie
                        : ((0x305U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr))
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mtvec
                            : ((0x341U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr))
                                ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mepc
                                : ((0x342U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr))
                                    ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mcause
                                    : ((0x343U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr))
                                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mtval
                                        : ((0x344U 
                                            == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr))
                                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mip
                                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mcycle)))))))
                : ((0xf14U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr))
                    ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mhartid
                    : 0ULL)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__tmp_read_ports_rs1_data 
        = ((0x80000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
            ? ((0x40000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                ? ((0x20000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                    ? ((0x10000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_31
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_30)
                        : ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_29
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_28))
                    : ((0x10000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_27
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_26)
                        : ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_25
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_24)))
                : ((0x20000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                    ? ((0x10000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_23
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_22)
                        : ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_21
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_20))
                    : ((0x10000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_19
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_18)
                        : ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_17
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_16))))
            : ((0x40000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                ? ((0x20000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                    ? ((0x10000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_15
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_14)
                        : ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_13
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_12))
                    : ((0x10000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_11
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_10)
                        : ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_9
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_8)))
                : ((0x20000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                    ? ((0x10000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_7
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_6)
                        : ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_5
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_4))
                    : ((0x10000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_3
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_2)
                        : ((0x8000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_1
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_0)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__tmp_read_ports_rs2_data 
        = ((0x1000000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
            ? ((0x800000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                ? ((0x400000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                    ? ((0x200000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_31
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_30)
                        : ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_29
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_28))
                    : ((0x200000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_27
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_26)
                        : ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_25
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_24)))
                : ((0x400000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                    ? ((0x200000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_23
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_22)
                        : ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_21
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_20))
                    : ((0x200000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_19
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_18)
                        : ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_17
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_16))))
            : ((0x800000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                ? ((0x400000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                    ? ((0x200000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_15
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_14)
                        : ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_13
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_12))
                    : ((0x200000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_11
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_10)
                        : ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_9
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_8)))
                : ((0x400000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                    ? ((0x200000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_7
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_6)
                        : ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_5
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_4))
                    : ((0x200000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                        ? ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_3
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_2)
                        : ((0x100000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)
                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_1
                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_0)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_victim_1 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1)) 
                 & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_1))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_value 
        = ((IData)(vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn)
            ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_valueNext)
            : 0U);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_3 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_next_level_rsp_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_6 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_next_level_rsp_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_9 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_next_level_rsp_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_12 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_next_level_rsp_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit_d1)
            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cpu_rsp_payload_data
            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cpu_rsp_payload_data_1);
    if (vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_ready) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rValid 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_valid;
        }
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__bypass) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__cpu_cmd_ready_1 = 0U;
        } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__bypass_rsp_valid_d1) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__cpu_cmd_ready_1 = 1U;
        }
        if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rValid) 
             & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__src_stream_ready))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_is_quo_reg 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_is_quo;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_is_rem_reg 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_is_rem;
        }
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rValid = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__cpu_cmd_ready_1 = 1U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_is_quo_reg = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_is_rem_reg = 0U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__src_stream_fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rValid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_ready 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_ready;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rValid)))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_ready = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src1 
        = ((0U == (0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                            >> 0xfU))) ? 0ULL : (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                         >> 0xfU))))
                                                  ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data
                                                  : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__tmp_read_ports_rs1_data));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src2 
        = ((0U == (0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                            >> 0x14U))) ? 0ULL : (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
                                                   & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                          >> 0x14U))))
                                                   ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data
                                                   : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__tmp_read_ports_rs2_data));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full 
        = (((3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr)) 
            == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))) 
           & ((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr) 
                     >> 2U)) != (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr) 
                                       >> 2U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr) 
           == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_full 
        = (((3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr)) 
            == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr))) 
           & ((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr) 
                     >> 2U)) != (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr) 
                                       >> 2U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr) 
           == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr));
    if ((0x1000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
        if ((0x800U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_127_mru;
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_127_mru;
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_127_vld;
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_127_tag;
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_127_vld;
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_127_tag;
                            } else {
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_126_mru;
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_126_mru;
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_126_vld;
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_126_tag;
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_126_vld;
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_126_tag;
                            }
                        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_125_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_125_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_125_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_125_tag;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_125_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_125_tag;
                        } else {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_124_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_124_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_124_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_124_tag;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_124_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_124_tag;
                        }
                    } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_123_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_123_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_123_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_123_tag;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_123_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_123_tag;
                        } else {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_122_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_122_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_122_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_122_tag;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_122_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_122_tag;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_121_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_121_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_121_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_121_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_121_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_121_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_120_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_120_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_120_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_120_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_120_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_120_tag;
                    }
                } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_119_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_119_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_119_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_119_tag;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_119_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_119_tag;
                        } else {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_118_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_118_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_118_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_118_tag;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_118_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_118_tag;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_117_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_117_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_117_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_117_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_117_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_117_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_116_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_116_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_116_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_116_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_116_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_116_tag;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_115_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_115_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_115_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_115_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_115_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_115_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_114_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_114_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_114_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_114_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_114_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_114_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_113_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_113_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_113_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_113_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_113_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_113_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_112_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_112_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_112_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_112_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_112_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_112_tag;
                }
            } else if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_111_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_111_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_111_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_111_tag;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_111_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_111_tag;
                        } else {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_110_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_110_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_110_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_110_tag;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_110_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_110_tag;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_109_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_109_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_109_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_109_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_109_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_109_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_108_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_108_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_108_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_108_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_108_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_108_tag;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_107_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_107_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_107_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_107_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_107_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_107_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_106_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_106_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_106_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_106_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_106_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_106_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_105_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_105_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_105_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_105_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_105_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_105_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_104_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_104_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_104_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_104_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_104_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_104_tag;
                }
            } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_103_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_103_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_103_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_103_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_103_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_103_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_102_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_102_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_102_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_102_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_102_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_102_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_101_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_101_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_101_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_101_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_101_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_101_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_100_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_100_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_100_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_100_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_100_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_100_tag;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_99_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_99_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_99_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_99_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_99_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_99_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_98_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_98_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_98_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_98_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_98_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_98_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_97_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_97_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_97_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_97_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_97_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_97_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_96_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_96_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_96_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_96_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_96_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_96_tag;
            }
        } else if ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_95_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_95_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_95_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_95_tag;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_95_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_95_tag;
                        } else {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_94_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_94_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_94_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_94_tag;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_94_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_94_tag;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_93_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_93_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_93_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_93_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_93_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_93_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_92_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_92_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_92_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_92_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_92_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_92_tag;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_91_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_91_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_91_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_91_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_91_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_91_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_90_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_90_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_90_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_90_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_90_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_90_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_89_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_89_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_89_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_89_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_89_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_89_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_88_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_88_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_88_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_88_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_88_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_88_tag;
                }
            } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_87_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_87_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_87_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_87_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_87_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_87_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_86_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_86_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_86_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_86_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_86_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_86_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_85_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_85_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_85_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_85_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_85_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_85_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_84_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_84_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_84_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_84_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_84_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_84_tag;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_83_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_83_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_83_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_83_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_83_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_83_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_82_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_82_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_82_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_82_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_82_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_82_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_81_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_81_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_81_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_81_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_81_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_81_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_80_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_80_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_80_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_80_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_80_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_80_tag;
            }
        } else if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_79_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_79_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_79_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_79_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_79_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_79_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_78_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_78_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_78_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_78_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_78_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_78_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_77_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_77_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_77_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_77_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_77_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_77_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_76_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_76_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_76_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_76_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_76_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_76_tag;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_75_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_75_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_75_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_75_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_75_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_75_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_74_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_74_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_74_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_74_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_74_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_74_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_73_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_73_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_73_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_73_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_73_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_73_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_72_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_72_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_72_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_72_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_72_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_72_tag;
            }
        } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_71_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_71_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_71_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_71_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_71_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_71_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_70_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_70_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_70_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_70_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_70_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_70_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_69_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_69_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_69_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_69_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_69_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_69_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_68_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_68_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_68_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_68_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_68_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_68_tag;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_67_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_67_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_67_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_67_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_67_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_67_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_66_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_66_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_66_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_66_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_66_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_66_tag;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_65_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_65_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_65_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_65_tag;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_65_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_65_tag;
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_64_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_64_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_64_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_64_tag;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_64_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_64_tag;
        }
    } else if ((0x800U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
        if ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_63_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_63_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_63_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_63_tag;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_63_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_63_tag;
                        } else {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_62_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_62_mru;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_62_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_62_tag;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_62_vld;
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_62_tag;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_61_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_61_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_61_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_61_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_61_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_61_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_60_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_60_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_60_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_60_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_60_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_60_tag;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_59_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_59_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_59_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_59_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_59_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_59_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_58_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_58_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_58_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_58_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_58_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_58_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_57_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_57_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_57_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_57_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_57_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_57_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_56_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_56_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_56_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_56_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_56_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_56_tag;
                }
            } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_55_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_55_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_55_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_55_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_55_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_55_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_54_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_54_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_54_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_54_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_54_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_54_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_53_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_53_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_53_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_53_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_53_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_53_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_52_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_52_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_52_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_52_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_52_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_52_tag;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_51_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_51_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_51_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_51_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_51_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_51_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_50_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_50_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_50_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_50_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_50_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_50_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_49_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_49_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_49_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_49_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_49_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_49_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_48_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_48_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_48_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_48_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_48_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_48_tag;
            }
        } else if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_47_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_47_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_47_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_47_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_47_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_47_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_46_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_46_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_46_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_46_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_46_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_46_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_45_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_45_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_45_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_45_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_45_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_45_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_44_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_44_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_44_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_44_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_44_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_44_tag;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_43_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_43_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_43_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_43_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_43_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_43_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_42_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_42_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_42_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_42_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_42_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_42_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_41_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_41_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_41_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_41_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_41_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_41_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_40_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_40_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_40_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_40_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_40_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_40_tag;
            }
        } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_39_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_39_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_39_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_39_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_39_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_39_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_38_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_38_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_38_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_38_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_38_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_38_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_37_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_37_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_37_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_37_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_37_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_37_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_36_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_36_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_36_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_36_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_36_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_36_tag;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_35_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_35_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_35_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_35_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_35_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_35_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_34_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_34_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_34_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_34_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_34_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_34_tag;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_33_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_33_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_33_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_33_tag;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_33_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_33_tag;
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_32_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_32_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_32_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_32_tag;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_32_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_32_tag;
        }
    } else if ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
        if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_31_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_31_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_31_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_31_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_31_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_31_tag;
                    } else {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_30_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_30_mru;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_30_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_30_tag;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_30_vld;
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_30_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_29_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_29_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_29_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_29_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_29_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_29_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_28_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_28_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_28_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_28_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_28_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_28_tag;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_27_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_27_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_27_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_27_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_27_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_27_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_26_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_26_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_26_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_26_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_26_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_26_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_25_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_25_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_25_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_25_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_25_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_25_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_24_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_24_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_24_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_24_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_24_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_24_tag;
            }
        } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_23_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_23_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_23_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_23_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_23_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_23_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_22_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_22_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_22_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_22_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_22_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_22_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_21_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_21_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_21_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_21_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_21_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_21_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_20_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_20_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_20_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_20_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_20_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_20_tag;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_19_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_19_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_19_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_19_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_19_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_19_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_18_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_18_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_18_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_18_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_18_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_18_tag;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_17_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_17_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_17_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_17_tag;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_17_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_17_tag;
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_16_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_16_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_16_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_16_tag;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_16_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_16_tag;
        }
    } else if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
        if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_15_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_15_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_15_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_15_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_15_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_15_tag;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_14_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_14_mru;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_14_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_14_tag;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_14_vld;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_14_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_13_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_13_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_13_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_13_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_13_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_13_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_12_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_12_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_12_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_12_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_12_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_12_tag;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_11_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_11_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_11_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_11_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_11_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_11_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_10_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_10_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_10_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_10_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_10_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_10_tag;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_9_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_9_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_9_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_9_tag;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_9_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_9_tag;
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_8_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_8_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_8_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_8_tag;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_8_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_8_tag;
        }
    } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
        if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_7_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_7_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_7_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_7_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_7_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_7_tag;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_6_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_6_mru;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_6_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_6_tag;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_6_vld;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_6_tag;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_5_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_5_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_5_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_5_tag;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_5_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_5_tag;
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_4_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_4_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_4_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_4_tag;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_4_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_4_tag;
        }
    } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_3_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_3_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_3_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_3_tag;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_3_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_3_tag;
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_2_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_2_mru;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_2_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_2_tag;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_2_vld;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_2_tag;
        }
    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_1_mru;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_1_mru;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_1_vld;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_1_tag;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_1_vld;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_1_tag;
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_0_mru;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_0_mru;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_0_vld;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_0_tag;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_0_vld;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_0_tag;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm 
        = ((0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data))
            ? (((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data 
                                    >> 0x1fU)))) << 0x15U) 
               | (QData)((IData)(((0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data) 
                                     | ((0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data 
                                            >> 0x14U))))))))
            : ((0x63U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data))
                ? (((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data 
                                                            >> 7U))))))))
                : 0ULL));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__src_stream_ready 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_ready) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__busy_reg)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__src_stream_fire) 
            & (1U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op)))
            ? 1U : (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__src_stream_fire) 
                     & (2U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op)))
                     ? 2U : ((((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus 
                                        >> 3U)) & (IData)(
                                                          (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mie 
                                                           >> 7U))) 
                              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__timer_1_timer_int))
                              ? 4U : (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__src_stream_fire) 
                                       & (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op)))
                                       ? 3U : 0U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1_redirect_valid = 0U;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__branch_or_jump) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__branch_taken) {
            if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__tmp_when) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1_redirect_valid 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__src_stream_fire;
            }
        } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_bpu_pred_taken) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1_redirect_valid 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__src_stream_fire;
        }
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__mru_full 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_0 
        = ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
            == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc 
                >> 0xdU)) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_1 
        = ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
            == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc 
                >> 0xdU)) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_ready 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__cpu_cmd_ready_1;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rValid)))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_ready = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__src_stream_fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rValid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__cpu_cmd_ready_1));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__src_stream_fire_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rValid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__cpu_cmd_ready_1));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__bypass 
        = ((((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr_is_timer)) 
             & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_cen)) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rValid)) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__cpu_cmd_ready_1));
    if (vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_ready) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rValid 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_valid;
        }
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rValid = 0U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__mcause_wdata 
        = ((1U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
            ? 0xbULL : ((2U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                         ? 3ULL : ((4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                                    ? 0x8000000000000007ULL
                                    : 0ULL)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1_csr_ports_mstatus_wdata 
        = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
            ? ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                ? 0ULL : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                           ? 0ULL : ((0xffffffffffffff00ULL 
                                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus) 
                                     | (QData)((IData)(
                                                       ((0x80U 
                                                         & ((IData)(
                                                                    (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus 
                                                                     >> 3U)) 
                                                            << 7U)) 
                                                        | ((0x70U 
                                                            & ((IData)(
                                                                       (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus 
                                                                        >> 4U)) 
                                                               << 4U)) 
                                                           | (7U 
                                                              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus)))))))))
            : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                    ? ((0xffffffffffffff00ULL & vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus) 
                       | (QData)((IData)((0x80U | (
                                                   (0x70U 
                                                    & ((IData)(
                                                               (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus 
                                                                >> 4U)) 
                                                       << 4U)) 
                                                   | ((8U 
                                                       & ((IData)(
                                                                  (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus 
                                                                   >> 7U)) 
                                                          << 3U)) 
                                                      | (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus))))))))
                    : ((0xffffffffffffff00ULL & vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus) 
                       | (QData)((IData)(((0x80U & 
                                           ((IData)(
                                                    (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus 
                                                     >> 3U)) 
                                            << 7U)) 
                                          | ((0x70U 
                                              & ((IData)(
                                                         (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus 
                                                          >> 4U)) 
                                                 << 4U)) 
                                             | (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus))))))))
                : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                    ? ((0xffffffffffffff00ULL & vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus) 
                       | (QData)((IData)(((0x80U & 
                                           ((IData)(
                                                    (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus 
                                                     >> 3U)) 
                                            << 7U)) 
                                          | ((0x70U 
                                              & ((IData)(
                                                         (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus 
                                                          >> 4U)) 
                                                 << 4U)) 
                                             | (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus)))))))
                    : 0ULL)));
    __Vtableidx34 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state_string 
        = VSimTop__ConstPool__TABLE_hcaf4ada9_0[__Vtableidx34];
    __Vtableidx36 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1_csr_ports_mepc_wen 
        = VSimTop__ConstPool__TABLE_h8bf20b66_0[__Vtableidx36];
    __Vtableidx37 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1_csr_ports_mcause_wen 
        = VSimTop__ConstPool__TABLE_h8bf20b66_0[__Vtableidx37];
    __Vtableidx38 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1_csr_ports_mstatus_wen 
        = VSimTop__ConstPool__TABLE_hfe7a4498_0[__Vtableidx38];
    __Vtableidx35 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1_int_en 
        = VSimTop__ConstPool__TABLE_hfe7a4498_0[__Vtableidx35];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__mepc_wdata 
        = ((4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
            ? (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1_redirect_pc))
            : (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_pc)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__bypass_read 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__bypass) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_is_store)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__bypass_write 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__bypass) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_is_store));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1_int_en) 
           | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1_redirect_valid));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_ready 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__src_stream_ready;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rValid)))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_ready = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_start 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rValid) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__src_stream_ready)) 
           & ((((((((0x10U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op)) 
                    | (0x11U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
                   | (0x12U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
                  | (0x13U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
                 | (0x15U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
                | (0x16U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
               | (0x17U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
              | (0x18U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src_stream_valid 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rValid;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src_stream_valid = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1_src_ports_ready 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__ready;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1_src_ports_ready = 1U;
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1_src_ports_ready 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__ready;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_valid) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__rsp_flush))) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid 
        = (1U & ((((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_empty)) 
                   & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty))) 
                  & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty))) 
                 & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow))));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_start) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_word 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_is_word;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_op_is_signed;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data;
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_word 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_op_is_word_reg;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_op_is_signed_reg;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_src1_reg;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_src2_reg;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src_stream_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1_src_ports_ready;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rValid)))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__ports_s_ports_fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__ports_s_ports_fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_full)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__ports_s_ports_fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
           & (0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
           & (0x63U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_valid 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_valid = 0U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_word_extd 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_word_extd 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__fire) 
           & (1U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1_rob_micro_op)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__fire) 
           & (2U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1_rob_micro_op)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__fire) 
           & (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1_rob_micro_op)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when)
            ? (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_regNextWhen 
               + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm))
            : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when_1)
                ? (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_regNextWhen 
                   + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm))
                : 0U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_predict_taken 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when) 
           | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when_1) 
              & (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm 
                         >> 0x1fU))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_positive 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed)) 
                 | (~ (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_word_extd 
                               >> 0x3fU)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_abs 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_word)
            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed)
                ? (((1U & (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_word_extd 
                                   >> 0x3fU))) ? (~ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_word_extd)
                     : vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_word_extd) 
                   + (QData)((IData)((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_word_extd 
                                                    >> 0x3fU))))))
                : (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend)))
            : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed)
                ? (((1U & (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend 
                                   >> 0x3fU))) ? (~ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend)
                     : vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend) 
                   + (QData)((IData)((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend 
                                                    >> 0x3fU))))))
                : vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_positive 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed)) 
                 | (~ (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_word_extd 
                               >> 0x3fU)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_abs 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_word)
            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed)
                ? (((1U & (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_word_extd 
                                   >> 0x3fU))) ? (~ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_word_extd)
                     : vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_word_extd) 
                   + (QData)((IData)((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_word_extd 
                                                    >> 0x3fU))))))
                : (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor)))
            : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed)
                ? (((1U & (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor 
                                   >> 0x3fU))) ? (~ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor)
                     : vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor) 
                   + (QData)((IData)((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor 
                                                    >> 0x3fU))))))
                : vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_2 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_3 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetch_valid) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow))) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_predict_taken)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt_next 
        = (7U & ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
                   & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full))) 
                  & (~ ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty)) 
                        & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1))))
                  ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt) 
                     - (IData)(1U)) : (((~ ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
                                            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full)))) 
                                        & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty)) 
                                           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1)))
                                        ? ((IData)(1U) 
                                           + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt))
                                        : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt_next 
        = (7U & ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
                   & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_full))) 
                  & (~ ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_empty)) 
                        & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_2))))
                  ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt) 
                     - (IData)(1U)) : (((~ ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
                                            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_full)))) 
                                        & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_empty)) 
                                           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_2)))
                                        ? ((IData)(1U) 
                                           + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt))
                                        : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt_next 
        = (7U & ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
                   & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full))) 
                  & (~ ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty)) 
                        & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_3))))
                  ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt) 
                     - (IData)(1U)) : (((~ ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
                                            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full)))) 
                                        & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty)) 
                                           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_3)))
                                        ? ((IData)(1U) 
                                           + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt))
                                        : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_miss 
        = ((~ ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_1) 
               | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_0))) 
           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__icache_ports_cmd_fire_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_1) 
            | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_0)) 
           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willClear = 0U;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_miss) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willClear = 1U;
    } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_done) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willClear = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willIncrement = 0U;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_miss)))) {
        if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_done)))) {
            if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_next_level_rsp_valid) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willIncrement = 1U;
            }
        }
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__ports_s_ports_fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__icache_ports_cmd_fire_1) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_full)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt_next 
        = (7U & ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__icache_ports_cmd_fire_1) 
                   & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_full))) 
                  & (~ ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_empty)) 
                        & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire))))
                  ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt) 
                     - (IData)(1U)) : (((~ ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__icache_ports_cmd_fire_1) 
                                            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_full)))) 
                                        & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_empty)) 
                                           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire)))
                                        ? ((IData)(1U) 
                                           + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt))
                                        : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_1)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_4 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_1)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_7 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_1));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_10 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_1));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_valueNext 
        = (7U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_value) 
                 + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willIncrement)));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willClear) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_valueNext = 0U;
    }
    __Vtableidx1 = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1) 
                     << 5U) | (((((1U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt_next)) 
                                  & (1U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt_next))) 
                                 & (1U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt_next))) 
                                << 4U) | ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid) 
                                            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1))) 
                                           << 3U) | 
                                          ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid) 
                                             & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready))) 
                                            << 2U) 
                                           | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetchFSM_state_curr)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetchFSM_state_next 
        = VSimTop__ConstPool__TABLE_he0435f8d_0[__Vtableidx1];
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_1) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wstrb = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wdata = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_addr 
            = (0x3ffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc 
                         >> 3U));
    } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_2) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wstrb = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wdata = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_addr 
            = (0x3ffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1 
                         >> 3U));
    } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_3) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wstrb = 0xfU;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wdata 
            = (IData)(vlSelf->SimTop__DOT__ram_i_mem_rsp_rdata);
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_addr 
            = (0x3ffU & ((0x3f8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1 
                                    >> 3U)) + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_value)));
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wstrb = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wdata = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_addr 
            = (0x3ffU & 0U);
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_1) 
           | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_2) 
              | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_3)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wen 
        = ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_1)) 
           & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_2)) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_3)));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_4) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wstrb = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wdata = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_addr 
            = (0x3ffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc 
                         >> 3U));
    } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_5) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wstrb = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wdata = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_addr 
            = (0x3ffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1 
                         >> 3U));
    } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_6) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wstrb = 0xfU;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wdata 
            = (IData)((vlSelf->SimTop__DOT__ram_i_mem_rsp_rdata 
                       >> 0x20U));
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_addr 
            = (0x3ffU & ((0x3f8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1 
                                    >> 3U)) + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_value)));
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wstrb = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wdata = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_addr 
            = (0x3ffU & 0U);
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_4) 
           | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_5) 
              | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_6)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wen 
        = ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_4)) 
           & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_5)) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_6)));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_7) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wstrb = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wdata = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_addr 
            = (0x3ffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc 
                         >> 3U));
    } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_8) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wstrb = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wdata = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_addr 
            = (0x3ffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1 
                         >> 3U));
    } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_9) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wstrb = 0xfU;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wdata 
            = (IData)(vlSelf->SimTop__DOT__ram_i_mem_rsp_rdata);
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_addr 
            = (0x3ffU & ((0x3f8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1 
                                    >> 3U)) + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_value)));
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wstrb = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wdata = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_addr 
            = (0x3ffU & 0U);
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_7) 
           | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_8) 
              | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_9)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wen 
        = ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_7)) 
           & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_8)) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_9)));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_10) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wstrb = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wdata = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_addr 
            = (0x3ffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc 
                         >> 3U));
    } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_11) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wstrb = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wdata = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_addr 
            = (0x3ffU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1 
                         >> 3U));
    } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_12) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wstrb = 0xfU;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wdata 
            = (IData)((vlSelf->SimTop__DOT__ram_i_mem_rsp_rdata 
                       >> 0x20U));
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_addr 
            = (0x3ffU & ((0x3f8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1 
                                    >> 3U)) + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_value)));
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wstrb = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wdata = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_addr 
            = (0x3ffU & 0U);
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_10) 
           | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_11) 
              | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_12)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wen 
        = ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_10)) 
           & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_11)) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_12)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__tmp_mem_port 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wen));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__tmp_mem_port 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wen));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__tmp_mem_port 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wen));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__tmp_mem_port 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wen));
}
