// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__11(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__11\n"); );
    // Body
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_is_quo 
        = ((((0x10U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op)) 
             | (0x11U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
            | (0x15U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
           | (0x16U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_is_rem 
        = ((((0x12U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op)) 
             | (0x13U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
            | (0x17U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
           | (0x18U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__bypass_rsp_valid_d1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1_cpu_bypass_rsp_valid;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__next_level_rdone 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__next_level_rvalid) 
           & (7U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__next_level_data_cnt_value)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__next_level_wdone 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1_next_level_rsp_valid) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1_next_level_rsp_payload_rvalid))) 
           & (0U == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_resp)));
    if (vlSelf->reset) {
        vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_resp = 0U;
    } else if ((((((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag) 
                   & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready)) 
                  & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1_dcache_w_valid)) 
                 & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid))) 
                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1_dcache_w_payload_last))) {
        vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid = 1U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_resp = 0U;
    } else if (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid) {
        vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid = 0U;
    }
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid;
}

VL_INLINE_OPT void VSimTop___024root___combo__TOP__13(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___combo__TOP__13\n"); );
    // Body
    vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn 
        = (1U & (~ (IData)(vlSelf->reset)));
}

void VSimTop___024root___sequent__TOP__4(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__6(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__7(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__8(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__9(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__10(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__12(VSimTop___024root* vlSelf);

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VSimTop___024root___sequent__TOP__6(vlSelf);
        VSimTop___024root___sequent__TOP__7(vlSelf);
        VSimTop___024root___sequent__TOP__8(vlSelf);
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VSimTop___024root___sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VSimTop___024root___sequent__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    VSimTop___024root___combo__TOP__13(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn 
        = vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn;
    vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn 
        = vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn;
}

QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf);

VL_INLINE_OPT QData VSimTop___024root___change_request(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request\n"); );
    // Body
    return (VSimTop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn ^ vlSelf->__Vchglast__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn));
    VL_DEBUG_IF( if(__req && ((vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn ^ vlSelf->__Vchglast__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn))) VL_DBG_MSGF("        CHANGE: /home/lin/oscpu/projects/dand_riscv_superscalar/build/DandMaxFreq.v:51: SimTop.__Vcellinp__u_SuperScalar__resetn\n"); );
    // Final
    vlSelf->__Vchglast__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn 
        = vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn;
    return __req;
}

#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_clean & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_clean");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_dump & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_dump");}
}
#endif  // VL_DEBUG
