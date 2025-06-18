// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__4(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__4\n"); );
    // Init
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_willIncrement;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_willClear;
    // Body
    if (vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn) {
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0xcU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_12 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0xdU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_13 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0xeU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_14 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x10U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_16 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x11U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_17 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x12U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_18 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x13U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_19 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x14U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_20 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x15U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_21 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x16U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_22 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_valid) 
             & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_ready))) {
            vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__bju_busy = 1U;
        } else if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__bju_busy) 
                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rValid))) {
            vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__bju_busy = 0U;
        }
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1_int_en) {
            vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc 
                = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                    ? ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                        ? 0U : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                                 ? 0U : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mtvec)))
                    : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                        ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                            ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mepc)
                            : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mtvec))
                        : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                            ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mtvec)
                            : 0U)));
        } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1_redirect_valid) {
            vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1_redirect_pc;
        } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_predict_taken) {
            vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc;
        } else if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid) 
                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1))) {
            vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc 
                = ((IData)(4U) + vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc);
        }
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_12 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_13 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_14 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_16 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_17 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_18 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_19 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_20 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_21 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_22 = 0ULL;
        vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__bju_busy = 0U;
        vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc = 0x80000000U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__tmp_mcycle 
        = (1ULL + vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mcycle);
    if (vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_ready) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rValid 
                = (((~ ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_is_quo) 
                        | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_is_rem))) 
                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rValid)) 
                   | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_done_valid));
        }
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rValid = 0U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__timer_1__DOT__tmp_mtime 
        = (1ULL + vlSelf->SimTop__DOT__u_SuperScalar__DOT__timer_1__DOT__mtime);
    if (vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_value 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_valueNext;
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_done) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_busy = 0U;
        }
        if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid) 
             & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
        }
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_ready) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rValid 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rValid;
        }
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_value = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_busy = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1 = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rValid = 0U;
    }
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_busy) 
           & (0x7fU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_value)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_1 
        = ((0x1000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
            ? ((0x800U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                ? ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                    ? ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                        ? ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_127_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_126_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_125_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_124_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_123_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_122_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_121_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_120_mru))))
                        : ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_119_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_118_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_117_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_116_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_115_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_114_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_113_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_112_mru)))))
                    : ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                        ? ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_111_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_110_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_109_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_108_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_107_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_106_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_105_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_104_mru))))
                        : ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_103_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_102_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_101_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_100_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_99_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_98_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_97_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_96_mru))))))
                : ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                    ? ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                        ? ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_95_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_94_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_93_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_92_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_91_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_90_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_89_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_88_mru))))
                        : ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_87_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_86_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_85_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_84_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_83_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_82_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_81_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_80_mru)))))
                    : ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                        ? ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_79_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_78_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_77_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_76_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_75_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_74_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_73_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_72_mru))))
                        : ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_71_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_70_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_69_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_68_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_67_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_66_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_65_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_64_mru)))))))
            : ((0x800U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                ? ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                    ? ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                        ? ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_63_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_62_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_61_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_60_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_59_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_58_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_57_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_56_mru))))
                        : ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_55_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_54_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_53_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_52_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_51_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_50_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_49_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_48_mru)))))
                    : ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                        ? ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_47_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_46_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_45_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_44_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_43_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_42_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_41_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_40_mru))))
                        : ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_39_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_38_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_37_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_36_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_35_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_34_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_33_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_32_mru))))))
                : ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                    ? ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                        ? ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_31_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_30_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_29_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_28_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_27_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_26_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_25_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_24_mru))))
                        : ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_23_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_22_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_21_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_20_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_19_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_18_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_17_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_16_mru)))))
                    : ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                        ? ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_15_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_14_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_13_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_12_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_11_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_10_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_9_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_8_mru))))
                        : ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                            ? ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_7_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_6_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_5_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_4_mru)))
                            : ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                ? ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_3_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_2_mru))
                                : ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)
                                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_1_mru)
                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_0_mru))))))));
    if (vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_ready) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rValid 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_valid;
        }
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rValid = 0U;
    }
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_willClear = 0U;
    if (SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when) {
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_willClear = 1U;
    }
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_willIncrement = 0U;
    if ((1U & (~ (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when)))) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_busy) {
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_willIncrement = 1U;
        }
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_valueNext 
        = (0x7fU & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_value) 
                    + (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_willIncrement)));
    if (SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_willClear) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_valueNext = 0U;
    }
}

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__8(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__8\n"); );
    // Init
    SData/*12:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__tmp_alu_ctrl_sel;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ebreak;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ecall;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__mret;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrwi;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrsi;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrci;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csri;
    VlWide<12>/*383:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data;
    CData/*5:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type;
    IData/*23:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel;
    SData/*9:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel;
    SData/*8:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel;
    SData/*10:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel;
    IData/*31:0*/ SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__pc_next;
    CData/*4:0*/ SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel;
    VlWide<10>/*319:0*/ SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data;
    VlWide<5>/*159:0*/ __Vtemp_h76a96d0b__0;
    VlWide<5>/*159:0*/ __Vtemp_hf3a9639d__0;
    VlWide<3>/*95:0*/ __Vtemp_h2cffc9a2__0;
    VlWide<3>/*95:0*/ __Vtemp_h0cf53ca0__0;
    VlWide<5>/*159:0*/ __Vtemp_h31e66c8d__0;
    VlWide<5>/*159:0*/ __Vtemp_h49cac8a4__0;
    VlWide<5>/*159:0*/ __Vtemp_h2c8a25e5__0;
    VlWide<5>/*159:0*/ __Vtemp_h76a96d0b__1;
    VlWide<5>/*159:0*/ __Vtemp_h04600f86__0;
    VlWide<3>/*95:0*/ __Vtemp_h2cffc9a2__1;
    VlWide<3>/*95:0*/ __Vtemp_h03bb1097__0;
    VlWide<5>/*159:0*/ __Vtemp_h726fc8bf__0;
    VlWide<5>/*159:0*/ __Vtemp_h024a4785__0;
    VlWide<5>/*159:0*/ __Vtemp_h969ac8a3__0;
    // Body
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_src1_data 
           + vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_imm);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wen_regNext 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__src_stream_fire) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_wen));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext 
        = ((8U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op))
            ? ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op))
                ? 0ULL : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op))
                           ? 0ULL : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op))
                                      ? ((~ vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_imm) 
                                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile_cpu_ports_rdata)
                                      : (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_imm 
                                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile_cpu_ports_rdata))))
            : ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op))
                ? ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op))
                    ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_imm
                        : ((~ vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src1_data) 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile_cpu_ports_rdata))
                    : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op))
                        ? (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src1_data 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile_cpu_ports_rdata)
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src1_data))
                : 0ULL));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr_is_timer 
        = ((0x200bff8ULL == vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr) 
           | (0x2004000ULL == vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_done 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_next_level_rsp_valid) 
           & (7U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_value)));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__rd_addr_reg;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data 
            = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__alu_busy)
                ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rData_result
                : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__bju_busy)
                    ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rData_result
                    : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__lsu_busy)
                        ? ((8U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_ctrl_op_reg))
                            ? 0ULL : ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_ctrl_op_reg))
                                       ? ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_ctrl_op_reg))
                                           ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_ctrl_op_reg))
                                               ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__dcache_rdata
                                               : (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__dcache_rdata)))
                                           : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_ctrl_op_reg))
                                               ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__dcache_rdata 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__dcache_rdata)))
                                               : (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__dcache_rdata))))))
                                       : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_ctrl_op_reg))
                                           ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_ctrl_op_reg))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__dcache_rdata 
                                                                                >> 0xfU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__dcache_rdata)))))
                                               : (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__dcache_rdata)))))
                                           : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_ctrl_op_reg))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__dcache_rdata 
                                                                                >> 7U)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__dcache_rdata)))))
                                               : 0ULL))))
                        : 0ULL)));
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_rd_wen 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__rd_wen;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_instruction 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_pc 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_pc;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_rd_wen 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__rd_wen;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1_timer_cen 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr_is_timer) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_cen));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__dcache_rdata 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__bypass_rsp_data_d1 
           >> (0x3fU & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr_offset_reg) 
                        << 3U)));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_addr 
            = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
               >> 0x14U);
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_csr_wen 
            = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrw) 
                | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrs)) 
               | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrc));
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_op;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_imm 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1_imm;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src1_data 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src1;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_2 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_done) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_5 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_done) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_8 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_done) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_11 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_done) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__fire) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__rd_addr_reg 
            = (0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                        >> 7U));
    }
    if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rValid) 
         & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__cpu_cmd_ready_1))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_ctrl_op_reg 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_ctrl_op;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rData_result 
            = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_is_quo_reg) 
                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_done_valid))
                ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_word)
                    ? (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_positive) 
                        == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_positive))
                        ? (((QData)((IData)((- (IData)(
                                                       (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[2U] 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[2U])))
                        : (1ULL + (~ (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[2U]))))))
                    : (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_positive) 
                        == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_positive))
                        ? (((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[2U])))
                        : (1ULL + (~ (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[2U])))))))
                : (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_is_rem_reg) 
                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_done_valid))
                    ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_word)
                        ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_positive)
                            ? (((QData)((IData)((- (IData)(
                                                           (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U] 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))
                            : (1ULL + (~ (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U]))))))
                        : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_positive)
                            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))
                            : (1ULL + (~ (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))))))
                    : ((((((0xcU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op)) 
                           | (0xdU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
                          | (0xeU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
                         | (0xfU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
                        | (0x14U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op)))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_result
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_result)));
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rData_result 
            = ((0xaU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op))
                ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile_cpu_ports_rdata
                : ((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_pc)) 
                   + (((2U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op)) 
                       | (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op)))
                       ? 4ULL : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src2_data)));
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U] 
        = (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
                  [0U]);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[1U] 
        = (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__remainder
                   [0U] >> 0x20U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[2U] 
        = (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
                  [0U]);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div_m_axis_dout_tdata[3U] 
        = (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__u_div__DOT__quotient
                   [0U] >> 0x20U));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
            = ((0U == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr)))
                ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_0
                : ((1U == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr)))
                    ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_1
                    : ((2U == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr)))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_2
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_3)));
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_ctrl_op 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_op;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_op;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src2_data 
            = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__src2_is_imm)
                ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1_imm
                : vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src2);
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_pc 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_pc;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_op;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__src2_is_imm 
        = (((((((0x13U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
                | (0x1bU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
               | (3U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
              | (0x67U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
             | (0x23U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
            | ((0x37U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
               | (0x17U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
           | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel 
        = (((IData)((0x3023U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
            << 0xaU) | (((IData)((0x2023U == (0x707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                         << 9U) | (((IData)((0x1023U 
                                             == (0x707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                    << 8U) | (((IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                               << 7U) 
                                              | (((IData)(
                                                          (0x3003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                  << 6U) 
                                                 | (((IData)(
                                                             (0x6003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                     << 5U) 
                                                    | (((IData)(
                                                                (0x2003U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                        << 4U) 
                                                       | (((IData)(
                                                                   (0x5003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                           << 3U) 
                                                          | (((IData)(
                                                                      (0x1003U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                              << 2U) 
                                                             | (((IData)(
                                                                         (0x4003U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                                 << 1U) 
                                                                | (IData)(
                                                                          (3U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))))))))))));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[0U] 
        = (IData)((QData)((IData)((0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                            >> 0xfU)))));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[1U] 
        = (IData)(((QData)((IData)((0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                             >> 0xfU)))) 
                   >> 0x20U));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[2U] 
        = (IData)((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                >> 0x14U)))));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[3U] 
        = (IData)(((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                 >> 0x14U)))) 
                   >> 0x20U));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[4U] 
        = (IData)((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                      >> 7U)))))));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[5U] 
        = (IData)(((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)(((0xfe0U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                       >> 7U)))))) 
                   >> 0x20U));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[6U] 
        = (IData)((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)((((0x1000U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                        << 4U)) 
                                                    | (0x7e0U 
                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                          >> 0x14U)))) 
                                                | (0x1eU 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                      >> 7U)))))));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[7U] 
        = (IData)(((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                         >> 0x1fU)))) 
                     << 0xdU) | (QData)((IData)((((0x1000U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                      >> 0x13U)) 
                                                  | ((0x800U 
                                                      & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                         << 4U)) 
                                                     | (0x7e0U 
                                                        & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                           >> 0x14U)))) 
                                                 | (0x1eU 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                       >> 7U)))))) 
                   >> 0x20U));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[8U] 
        = (IData)((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                        >> 0x1fU)))) 
                    << 0x15U) | (QData)((IData)(((0x100000U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction) 
                                                    | ((0x800U 
                                                        & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                             >> 0x14U)))))))));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[9U] 
        = (IData)(((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                         >> 0x1fU)))) 
                     << 0x15U) | (QData)((IData)(((0x100000U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                      >> 0xbU)) 
                                                  | ((0xff000U 
                                                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction) 
                                                     | ((0x800U 
                                                         & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                              >> 0x14U)))))))) 
                   >> 0x20U));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[0xaU] 
        = (IData)((((QData)((IData)((- (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[0xbU] 
        = (IData)(((((QData)((IData)((- (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                 >> 0x1fU))))) 
                     << 0x20U) | (QData)((IData)((0xfffff000U 
                                                  & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__trap_or_print 
        = ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction) 
           | (0x7bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__tmp_alu_ctrl_sel 
        = ((((IData)((0x200703bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
             << 0xcU) | ((IData)((0x200603bU == (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                         << 0xbU)) | (((IData)((0x200503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                       << 0xaU) | (
                                                   ((IData)(
                                                            (0x200403bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                    << 9U) 
                                                   | (((IData)(
                                                               (0x200003bU 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                       << 8U) 
                                                      | (((IData)(
                                                                  (0x2007033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                          << 7U) 
                                                         | (((IData)(
                                                                     (0x2006033U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                             << 6U) 
                                                            | (((IData)(
                                                                        (0x2005033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                                << 5U) 
                                                               | (((IData)(
                                                                           (0x2004033U 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                                   << 4U) 
                                                                  | (((IData)(
                                                                              (0x2003033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                                      << 3U) 
                                                                     | (((IData)(
                                                                                (0x2002033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                                         << 2U) 
                                                                        | (((IData)(
                                                                                (0x2001033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                                            << 1U) 
                                                                           | (IData)(
                                                                                (0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))))))))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1_rob_micro_op 
        = (((3U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
            | (0x23U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))
            ? 3U : ((((((0x13U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
                        | (0x33U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                       | (0x37U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                      | (0x3bU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                     | (0x1bU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))
                     ? 1U : ((((((0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                | (0x63U == (0x7fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                               | (0x17U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                              | (0x73U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))
                              ? 2U : 0U)));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ebreak 
        = (IData)((0x100073U == (0xfff0707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ecall 
        = (IData)((0x73U == (0xfff0707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__mret 
        = (IData)((0x30200073U == (0xfff0707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrci 
        = (IData)((0x7073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow)))) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__ports_s_ports_fire) {
            if ((1U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data;
            }
            if ((2U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data;
            }
            if ((4U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_2 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data;
            }
            if ((8U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_3 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data;
            }
        }
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__dcache_wdata 
        = ((8U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_ctrl_op))
            ? ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_ctrl_op))
                ? 0ULL : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_ctrl_op))
                           ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_ctrl_op))
                               ? (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_src2_data 
                                  << (0x38U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr) 
                                               << 3U)))
                               : ((((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_src2_data 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_src2_data))) 
                                  << (0x38U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr) 
                                               << 3U))))
                           : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_ctrl_op))
                               ? ((((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_src2_data 
                                                                   >> 0xfU)))))) 
                                    << 0x10U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_src2_data))))) 
                                  << (0x38U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr) 
                                               << 3U)))
                               : ((((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_src2_data 
                                                                   >> 7U)))))) 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_src2_data))))) 
                                  << (0x38U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr) 
                                               << 3U))))))
            : 0ULL);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_result 
        = ((0x10U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))
            ? 0ULL : ((8U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))
                       ? ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))
                           ? 0ULL : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))
                                      ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))
                                          ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data
                                          : (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data 
                                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data))
                                      : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))
                                          ? (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data)
                                          : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_is_word)
                                              ? (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__sraw_temp 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__sraw_temp)))
                                              : VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data, 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data)))))))
                       : ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))
                           ? ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))
                               ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))
                                   ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_is_word)
                                       ? (((QData)((IData)(
                                                           (- (IData)(
                                                                      (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__srlw_temp 
                                                                       >> 0x1fU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__srlw_temp)))
                                       : (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data 
                                          >> (0x3fU 
                                              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data))))
                                   : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_is_word)
                                       ? (((QData)((IData)(
                                                           (- (IData)(
                                                                      (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__sllw_temp 
                                                                       >> 0x1fU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__sllw_temp)))
                                       : (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data 
                                          << (0x3fU 
                                              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data)))))
                               : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))
                                   ? (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data 
                                      ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data)
                                   : (QData)((IData)(
                                                     (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data 
                                                      < vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data)))))
                           : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))
                               ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))
                                   ? (QData)((IData)(
                                                     VL_LTS_IQQ(64, vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data, vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data)))
                                   : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_is_word)
                                       ? (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__sub_result 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__sub_result)))
                                       : vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__sub_result))
                               : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))
                                   ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_is_word)
                                       ? (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__add_result 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__add_result)))
                                       : vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__add_result)
                                   : 0ULL)))));
    SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel 
        = (((0xcU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op)) 
            << 4U) | (((0xdU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op)) 
                       << 3U) | (((0xeU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op)) 
                                  << 2U) | (((0xfU 
                                              == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op)) 
                                             << 1U) 
                                            | (0x14U 
                                               == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))))));
    VL_EXTENDS_WQ(129,64, __Vtemp_h76a96d0b__0, vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data);
    __Vtemp_hf3a9639d__0[0U] = __Vtemp_h76a96d0b__0[0U];
    __Vtemp_hf3a9639d__0[1U] = __Vtemp_h76a96d0b__0[1U];
    __Vtemp_hf3a9639d__0[2U] = __Vtemp_h76a96d0b__0[2U];
    __Vtemp_hf3a9639d__0[3U] = __Vtemp_h76a96d0b__0[3U];
    __Vtemp_hf3a9639d__0[4U] = (1U & __Vtemp_h76a96d0b__0[4U]);
    VL_EXTEND_WQ(65,64, __Vtemp_h2cffc9a2__0, vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data);
    if ((0xeU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) {
        __Vtemp_h0cf53ca0__0[0U] = __Vtemp_h2cffc9a2__0[0U];
        __Vtemp_h0cf53ca0__0[1U] = __Vtemp_h2cffc9a2__0[1U];
        __Vtemp_h0cf53ca0__0[2U] = __Vtemp_h2cffc9a2__0[2U];
    } else {
        __Vtemp_h0cf53ca0__0[0U] = (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data);
        __Vtemp_h0cf53ca0__0[1U] = (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data 
                                            >> 0x20U));
        __Vtemp_h0cf53ca0__0[2U] = (1U & (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data 
                                                  >> 0x3fU)));
    }
    VL_EXTENDS_WW(129,65, __Vtemp_h31e66c8d__0, __Vtemp_h0cf53ca0__0);
    __Vtemp_h49cac8a4__0[0U] = __Vtemp_h31e66c8d__0[0U];
    __Vtemp_h49cac8a4__0[1U] = __Vtemp_h31e66c8d__0[1U];
    __Vtemp_h49cac8a4__0[2U] = __Vtemp_h31e66c8d__0[2U];
    __Vtemp_h49cac8a4__0[3U] = __Vtemp_h31e66c8d__0[3U];
    __Vtemp_h49cac8a4__0[4U] = (1U & __Vtemp_h31e66c8d__0[4U]);
    VL_MULS_WWW(129, __Vtemp_h2c8a25e5__0, __Vtemp_hf3a9639d__0, __Vtemp_h49cac8a4__0);
    VL_EXTENDS_WQ(129,64, __Vtemp_h76a96d0b__1, vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data);
    __Vtemp_h04600f86__0[0U] = __Vtemp_h76a96d0b__1[0U];
    __Vtemp_h04600f86__0[1U] = __Vtemp_h76a96d0b__1[1U];
    __Vtemp_h04600f86__0[2U] = __Vtemp_h76a96d0b__1[2U];
    __Vtemp_h04600f86__0[3U] = __Vtemp_h76a96d0b__1[3U];
    __Vtemp_h04600f86__0[4U] = (1U & __Vtemp_h76a96d0b__1[4U]);
    VL_EXTEND_WQ(65,64, __Vtemp_h2cffc9a2__1, vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data);
    if ((0xeU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) {
        __Vtemp_h03bb1097__0[0U] = __Vtemp_h2cffc9a2__1[0U];
        __Vtemp_h03bb1097__0[1U] = __Vtemp_h2cffc9a2__1[1U];
        __Vtemp_h03bb1097__0[2U] = __Vtemp_h2cffc9a2__1[2U];
    } else {
        __Vtemp_h03bb1097__0[0U] = (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data);
        __Vtemp_h03bb1097__0[1U] = (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data 
                                            >> 0x20U));
        __Vtemp_h03bb1097__0[2U] = (1U & (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data 
                                                  >> 0x3fU)));
    }
    VL_EXTENDS_WW(129,65, __Vtemp_h726fc8bf__0, __Vtemp_h03bb1097__0);
    __Vtemp_h024a4785__0[0U] = __Vtemp_h726fc8bf__0[0U];
    __Vtemp_h024a4785__0[1U] = __Vtemp_h726fc8bf__0[1U];
    __Vtemp_h024a4785__0[2U] = __Vtemp_h726fc8bf__0[2U];
    __Vtemp_h024a4785__0[3U] = __Vtemp_h726fc8bf__0[3U];
    __Vtemp_h024a4785__0[4U] = (1U & __Vtemp_h726fc8bf__0[4U]);
    VL_MULS_WWW(129, __Vtemp_h969ac8a3__0, __Vtemp_h04600f86__0, __Vtemp_h024a4785__0);
    SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[0U] 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[0U];
    SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[1U] 
        = (- (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[0U] 
                      >> 0x1fU)));
    SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[2U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[0U]))));
    SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[3U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[0U]))) 
                   >> 0x20U));
    SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[4U] 
        = (IData)((((QData)((IData)(__Vtemp_h969ac8a3__0[3U])) 
                    << 0x20U) | (QData)((IData)(__Vtemp_h969ac8a3__0[2U]))));
    SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[5U] 
        = (IData)(((((QData)((IData)(__Vtemp_h969ac8a3__0[3U])) 
                     << 0x20U) | (QData)((IData)(__Vtemp_h969ac8a3__0[2U]))) 
                   >> 0x20U));
    SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[6U] 
        = (IData)((((QData)((IData)(__Vtemp_h2c8a25e5__0[3U])) 
                    << 0x20U) | (QData)((IData)(__Vtemp_h2c8a25e5__0[2U]))));
    SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[7U] 
        = (IData)(((((QData)((IData)(__Vtemp_h2c8a25e5__0[3U])) 
                     << 0x20U) | (QData)((IData)(__Vtemp_h2c8a25e5__0[2U]))) 
                   >> 0x20U));
    SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[8U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[0U]))));
    SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[9U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[0U]))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_op_is_signed 
        = ((((0x10U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op)) 
             | (0x12U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
            | (0x15U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op))) 
           | (0x17U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op)));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_pc 
            = ((0U == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr)))
                ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_0
                : ((1U == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr)))
                    ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_1
                    : ((2U == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr)))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_2
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_3)));
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__branch_or_jump 
        = ((((((((3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op)) 
                 | (4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op))) 
                | (5U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op))) 
               | (6U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op))) 
              | (7U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op))) 
             | (8U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op))) 
            | (9U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op))) 
           | (2U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__branch_taken 
        = (((((((((4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op)) 
                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src1_data 
                     == vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src2_data)) 
                 | ((5U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op)) 
                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src1_data 
                       != vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src2_data))) 
                | ((6U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op)) 
                   & VL_LTS_IQQ(64, vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src1_data, vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src2_data))) 
               | ((7U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op)) 
                  & VL_LTES_IQQ(64, vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src2_data, vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src1_data))) 
              | ((8U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op)) 
                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src1_data 
                    < vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src2_data))) 
             | ((9U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op)) 
                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src2_data 
                   <= vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src1_data))) 
            | (2U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op))) 
           | (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op)));
    SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__pc_next 
        = ((3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op))
            ? (0xfffffffeU & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src1_data) 
                              + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_imm)))
            : (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_pc 
               + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_imm)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_op 
        = (((((((((((1U & (- (IData)((1U & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel))))) 
                    | (2U & (- (IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                              >> 1U)))))) 
                   | (3U & (- (IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                             >> 2U)))))) 
                  | (4U & ((8U & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel)) 
                           | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                     >> 1U)) | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                                 >> 3U))))))))) 
                 | (5U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                 >> 1U)) | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                   >> 2U)) 
                                            | ((2U 
                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                   >> 3U)) 
                                               | (1U 
                                                  & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                     >> 4U))))))) 
                | (6U & (- (IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                          >> 5U)))))) 
               | (7U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                               >> 3U)) | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                 >> 4U)) 
                                          | (3U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                                 >> 6U))))))))) 
              | (8U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                              >> 4U)) | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                >> 5U)) 
                                         | ((2U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                   >> 6U)) 
                                            | (1U & 
                                               ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                >> 7U))))))) 
             | (9U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                             >> 5U)) | (7U & (- (IData)(
                                                        (1U 
                                                         & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                            >> 8U)))))))) 
            | (0xaU & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                              >> 6U)) | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                >> 7U)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                                >> 9U))))))))) 
           | (0xbU & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                             >> 7U)) | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                               >> 8U)) 
                                        | ((2U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                  >> 9U)) 
                                           | (1U & 
                                              ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                               >> 0xaU)))))));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
        = (((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__tmp_alu_ctrl_sel) 
            << 0xbU) | (((0x37U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
                         << 0xaU) | ((((IData)((0x6033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                       | (IData)((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                      << 9U) | ((((IData)(
                                                          (0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                  | (IData)(
                                                            (0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                 << 8U) 
                                                | ((((((IData)(
                                                               (0x40005033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                       | (IData)(
                                                                 (0x40005013U 
                                                                  == 
                                                                  (0xfc00707fU 
                                                                   & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                      | (IData)(
                                                                (0x4000503bU 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                     | (IData)(
                                                               (0x4000501bU 
                                                                == 
                                                                (0xfc00707fU 
                                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                    << 7U) 
                                                   | ((((((IData)(
                                                                  (0x5033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                          | (IData)(
                                                                    (0x5013U 
                                                                     == 
                                                                     (0xfc00707fU 
                                                                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                         | (IData)(
                                                                   (0x503bU 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                        | (IData)(
                                                                  (0x501bU 
                                                                   == 
                                                                   (0xfc00707fU 
                                                                    & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                       << 6U) 
                                                      | ((((((IData)(
                                                                     (0x1033U 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                             | (IData)(
                                                                       (0x1013U 
                                                                        == 
                                                                        (0xfc00707fU 
                                                                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                            | (IData)(
                                                                      (0x103bU 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                           | (IData)(
                                                                     (0x101bU 
                                                                      == 
                                                                      (0xfc00707fU 
                                                                       & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                          << 5U) 
                                                         | ((((IData)(
                                                                      (0x4033U 
                                                                       == 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                              | (IData)(
                                                                        (0x4013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                             << 4U) 
                                                            | ((((IData)(
                                                                         (0x3033U 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                                 | (IData)(
                                                                           (0x3013U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                                << 3U) 
                                                               | ((((IData)(
                                                                            (0x2033U 
                                                                             == 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                                    | (IData)(
                                                                              (0x2013U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                                   << 2U) 
                                                                  | ((((IData)(
                                                                               (0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                                       | (IData)(
                                                                                (0x4000003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                                      << 1U) 
                                                                     | ((((IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                                          | (IData)(
                                                                                (0x13U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                                         | (IData)(
                                                                                (0x3bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                                                        | (IData)(
                                                                                (0x1bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))))))))))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__rd_wen 
        = ((((((0x23U != (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
               & (0x63U != (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
              & (~ (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ebreak))) 
             & (~ (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ecall))) 
            & (~ (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__mret))) 
           & (0xfU != (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel 
        = (((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrci) 
            << 8U) | (((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrsi) 
                       << 7U) | (((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrwi) 
                                  << 6U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrc) 
                                             << 5U) 
                                            | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrs) 
                                                << 4U) 
                                               | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrw) 
                                                   << 3U) 
                                                  | (((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__mret) 
                                                      << 2U) 
                                                     | (((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ebreak) 
                                                         << 1U) 
                                                        | (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ecall)))))))));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csri 
        = (((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrwi) 
            | (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrsi)) 
           | (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrci));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_result 
        = ((((((((QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[1U])) 
                 << 0x20U) | (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[0U]))) 
               & (((QData)((IData)((1U & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                   << 0x3fU) | (((QData)((IData)((1U 
                                                  & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                 << 0x3eU) | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
              | ((((QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[3U])) 
                   << 0x20U) | (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[2U]))) 
                 & (((QData)((IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                            >> 1U)))) 
                     << 0x3fU) | (((QData)((IData)(
                                                   (1U 
                                                    & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                       >> 1U)))) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                     >> 1U)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                        >> 1U)))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                           >> 1U)))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                              >> 1U)))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x18U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x17U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x16U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 4U)) 
                                                                                | (0x1fU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
             | ((((QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[5U])) 
                  << 0x20U) | (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[4U]))) 
                & (((QData)((IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                           >> 2U)))) 
                    << 0x3fU) | (((QData)((IData)((1U 
                                                   & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                      >> 2U)))) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                    >> 2U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                       >> 2U)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                          >> 2U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                             >> 2U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1dU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1cU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1bU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1aU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x19U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x18U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x17U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x16U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x15U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x14U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x13U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x12U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x11U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x10U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xfU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 2U)) 
                                                                                | (0xfU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
            | ((((QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[7U])) 
                 << 0x20U) | (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[6U]))) 
               & (((QData)((IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                          >> 3U)))) 
                   << 0x3fU) | (((QData)((IData)((1U 
                                                  & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                     >> 3U)))) 
                                 << 0x3eU) | (((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                   >> 3U)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                      >> 3U)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                         >> 3U)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                            >> 3U)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                               >> 3U)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1cU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1bU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1aU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x19U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x18U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x17U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x16U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x15U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x14U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x13U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x11U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x10U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 6U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 4U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)) 
                                                                                | (7U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
           | ((((QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[9U])) 
                << 0x20U) | (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[8U]))) 
              & (((QData)((IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                         >> 4U)))) 
                  << 0x3fU) | (((QData)((IData)((1U 
                                                 & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                    >> 4U)))) 
                                << 0x3eU) | (((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                  >> 4U)))) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                     >> 4U)))) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                        >> 4U)))) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                           >> 4U)))) 
                                                       << 0x3aU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                              >> 4U)))) 
                                                          << 0x39U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                << 0x37U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                   << 0x36U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                      << 0x35U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                         << 0x34U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                            << 0x33U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                               << 0x32U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1bU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1aU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x19U)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x18U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x17U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x16U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x15U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x14U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x13U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x12U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x11U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x10U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xeU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xcU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 5U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)) 
                                                                                | ((8U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)) 
                                                                                | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__tmp_when 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_bpu_pred_taken)) 
                 | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_pc_next 
                    != SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__pc_next)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_op 
        = ((((((((((((((((((((((((1U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  << 4U)) 
                                        | ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  << 3U)) 
                                           | (7U & 
                                              (- (IData)(
                                                         (1U 
                                                          & SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel))))))) 
                                 | (2U & ((0x10U & 
                                           (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            << 3U)) 
                                          | ((8U & 
                                              (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               << 2U)) 
                                             | (7U 
                                                & (- (IData)(
                                                             (1U 
                                                              & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                 >> 1U))))))))) 
                                | (3U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   << 2U)) 
                                         | ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   << 1U)) 
                                            | ((4U 
                                                & SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                   >> 2U)))))))))) 
                               | (4U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  << 1U)) 
                                        | ((8U & SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                           | ((4U & 
                                               (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 1U)) 
                                              | ((2U 
                                                  & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 3U)))))))) 
                              | (5U & ((0x10U & SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                       | ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 >> 1U)) 
                                          | (7U & (- (IData)(
                                                             (1U 
                                                              & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                 >> 4U))))))))) 
                             | (6U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 1U)) 
                                      | ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 2U)) 
                                         | ((4U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 3U)) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                              >> 5U)))))))))) 
                            | (7U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 2U)) 
                                     | ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 3U)) 
                                        | ((4U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  >> 4U)) 
                                           | ((2U & 
                                               (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 5U)) 
                                              | (1U 
                                                 & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    >> 6U)))))))) 
                           | (8U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 3U)) 
                                    | ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 4U)) 
                                       | (7U & (- (IData)(
                                                          (1U 
                                                           & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                              >> 7U))))))))) 
                          | (9U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 4U)) 
                                   | ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 5U)) 
                                      | ((4U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 6U)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 8U)))))))))) 
                         | (0xaU & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 5U)) 
                                    | ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 6U)) 
                                       | ((4U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 >> 7U)) 
                                          | ((2U & 
                                              (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 8U)) 
                                             | (1U 
                                                & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 9U)))))))) 
                        | (0xbU & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 6U)) 
                                   | ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 7U)) 
                                      | (7U & (- (IData)(
                                                         (1U 
                                                          & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                             >> 0xaU))))))))) 
                       | (0xcU & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            >> 7U)) 
                                  | ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            >> 8U)) 
                                     | ((4U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 9U)) 
                                        | (3U & (- (IData)(
                                                           (1U 
                                                            & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                               >> 0xbU)))))))))) 
                      | (0xdU & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                           >> 8U)) 
                                 | ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                           >> 9U)) 
                                    | ((4U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 0xaU)) 
                                       | ((2U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 >> 0xbU)) 
                                          | (1U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 0xcU)))))))) 
                     | (0xeU & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 9U)) | 
                                ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                        >> 0xaU)) | 
                                 (7U & (- (IData)((1U 
                                                   & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0xdU))))))))) 
                    | (0xfU & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                         >> 0xaU)) 
                               | ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                         >> 0xbU)) 
                                  | ((4U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            >> 0xcU)) 
                                     | (3U & (- (IData)(
                                                        (1U 
                                                         & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                            >> 0xeU)))))))))) 
                   | (0x10U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                         >> 0xbU)) 
                               | ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                         >> 0xcU)) 
                                  | ((4U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            >> 0xdU)) 
                                     | ((2U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 0xeU)) 
                                        | (1U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 >> 0xfU)))))))) 
                  | (0x11U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                        >> 0xcU)) | 
                              ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                      >> 0xdU)) | (7U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                    >> 0x10U))))))))) 
                 | (0x12U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xdU)) | 
                             ((8U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                     >> 0xeU)) | ((4U 
                                                   & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0xfU)) 
                                                  | (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                      >> 0x11U)))))))))) 
                | (0x13U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                      >> 0xeU)) | (
                                                   (8U 
                                                    & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0xfU)) 
                                                   | ((4U 
                                                       & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                          >> 0x10U)) 
                                                      | ((2U 
                                                          & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                             >> 0x11U)) 
                                                         | (1U 
                                                            & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                               >> 0x12U)))))))) 
               | (0x14U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                     >> 0xfU)) | ((8U 
                                                   & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0x10U)) 
                                                  | (7U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                      >> 0x13U))))))))) 
              | (0x15U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                    >> 0x10U)) | ((8U 
                                                   & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0x11U)) 
                                                  | ((4U 
                                                      & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                         >> 0x12U)) 
                                                     | (3U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                         >> 0x14U)))))))))) 
             | (0x16U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                   >> 0x11U)) | ((8U 
                                                  & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     >> 0x12U)) 
                                                 | ((4U 
                                                     & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                        >> 0x13U)) 
                                                    | ((2U 
                                                        & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                           >> 0x14U)) 
                                                       | (1U 
                                                          & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                             >> 0x15U)))))))) 
            | (0x17U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                  >> 0x12U)) | ((8U 
                                                 & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    >> 0x13U)) 
                                                | (7U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                    >> 0x16U))))))))) 
           | (0x18U & ((0x10U & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                 >> 0x13U)) | ((8U 
                                                & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 0x14U)) 
                                               | ((4U 
                                                   & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0x15U)) 
                                                  | (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                      >> 0x17U))))))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_op 
        = (((((((((1U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                << 3U)) | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                  << 2U)) 
                                           | (3U & 
                                              (- (IData)(
                                                         (1U 
                                                          & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel)))))))) 
                  | (2U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                  << 2U)) | ((4U & 
                                              ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                               << 1U)) 
                                             | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                                 >> 1U))))))))) 
                 | (3U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                 << 1U)) | ((4U & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel)) 
                                            | ((2U 
                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                   >> 1U)) 
                                               | (1U 
                                                  & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                     >> 2U))))))) 
                | (4U & (- (IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                          >> 3U)))))) 
               | (5U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                               >> 1U)) | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                 >> 2U)) 
                                          | (3U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                                 >> 4U))))))))) 
              | (6U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                              >> 2U)) | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                >> 3U)) 
                                         | ((2U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                   >> 4U)) 
                                            | (1U & 
                                               ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                >> 5U))))))) 
             | (7U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                             >> 3U)) | (7U & (- (IData)(
                                                        (1U 
                                                         & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                            >> 6U)))))))) 
            | (8U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                            >> 4U)) | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                              >> 5U)) 
                                       | (3U & (- (IData)(
                                                          (1U 
                                                           & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                              >> 7U))))))))) 
           | (9U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                           >> 5U)) | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                             >> 6U)) 
                                      | ((2U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                >> 7U)) 
                                         | (1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                  >> 8U)))))));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type 
        = ((((0x37U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
             | (0x17U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
            << 5U) | (((0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
                       << 4U) | (((0x63U == (0x7fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
                                  << 3U) | (((0x23U 
                                              == (0x7fU 
                                                  & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
                                             << 2U) 
                                            | ((((((0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
                                                   | (0x1bU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                  | (3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                 | (0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                << 1U) 
                                               | (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csri))))));
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel 
        = ((((((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csri) 
               | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrw)) 
              | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrs)) 
             | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrc)) 
            << 9U) | (((IData)((0x7063U == (0x707fU 
                                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                       << 8U) | (((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                  << 7U) | (((IData)(
                                                     (0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                             << 6U) 
                                            | (((IData)(
                                                        (0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                << 5U) 
                                               | (((IData)(
                                                           (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                   << 4U) 
                                                  | (((IData)(
                                                              (0x63U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                                      << 3U) 
                                                     | (((0x67U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
                                                         << 2U) 
                                                        | (((0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
                                                            << 1U) 
                                                           | (0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))))))))));
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow)))) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__ports_s_ports_fire) {
            if ((1U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
            }
            if ((2U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
            }
            if ((4U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_2 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
            }
            if ((8U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_3 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
            }
        }
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1_redirect_pc = 0U;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__branch_or_jump) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__branch_taken) {
            if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__tmp_when) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1_redirect_pc 
                    = SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__pc_next;
            }
        } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_bpu_pred_taken) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1_redirect_pc 
                = ((IData)(4U) + vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_pc);
        }
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1_imm 
        = (((((((((QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[1U])) 
                  << 0x20U) | (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[0U]))) 
                & (((QData)((IData)((1U & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                    << 0x3fU) | (((QData)((IData)((1U 
                                                   & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
               | ((((QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[3U])) 
                    << 0x20U) | (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[2U]))) 
                  & (((QData)((IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                             >> 1U)))) 
                      << 0x3fU) | (((QData)((IData)(
                                                    (1U 
                                                     & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                        >> 1U)))) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                      >> 1U)))) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                         >> 1U)))) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                            >> 1U)))) 
                                                        << 0x3bU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                               >> 1U)))) 
                                                           << 0x3aU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                              << 0x39U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                 << 0x38U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                    << 0x37U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                       << 0x36U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                          << 0x35U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                             << 0x34U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x33U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | (0x1fU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
              | ((((QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[5U])) 
                   << 0x20U) | (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[4U]))) 
                 & (((QData)((IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                            >> 2U)))) 
                     << 0x3fU) | (((QData)((IData)(
                                                   (1U 
                                                    & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                       >> 2U)))) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                     >> 2U)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                        >> 2U)))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                           >> 2U)))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                              >> 2U)))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1dU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1cU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 2U)) 
                                                                                | (0xfU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
             | ((((QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[7U])) 
                  << 0x20U) | (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[6U]))) 
                & (((QData)((IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                           >> 3U)))) 
                    << 0x3fU) | (((QData)((IData)((1U 
                                                   & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                      >> 3U)))) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                    >> 3U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                       >> 3U)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                          >> 3U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                             >> 3U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1cU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)) 
                                                                                | (7U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
            | ((((QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[9U])) 
                 << 0x20U) | (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[8U]))) 
               & (((QData)((IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                          >> 4U)))) 
                   << 0x3fU) | (((QData)((IData)((1U 
                                                  & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                     >> 4U)))) 
                                 << 0x3eU) | (((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                   >> 4U)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                      >> 4U)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                         >> 4U)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                            >> 4U)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                               >> 4U)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)) 
                                                                                | ((8U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)) 
                                                                                | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
           | ((((QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[0xbU])) 
                << 0x20U) | (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[0xaU]))) 
              & (((QData)((IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                         >> 5U)))) 
                  << 0x3fU) | (((QData)((IData)((1U 
                                                 & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                    >> 5U)))) 
                                << 0x3eU) | (((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                  >> 5U)))) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                     >> 5U)))) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                        >> 5U)))) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                           >> 5U)))) 
                                                       << 0x3aU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                              >> 5U)))) 
                                                          << 0x39U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                << 0x37U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                   << 0x36U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                      << 0x35U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                         << 0x34U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                            << 0x33U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                               << 0x32U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 2U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_op 
        = ((((((((((1U & (- (IData)((1U & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel))))) 
                   | (2U & (- (IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                             >> 1U)))))) 
                  | (3U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                  << 1U)) | ((4U & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel)) 
                                             | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                                 >> 2U))))))))) 
                 | (4U & ((8U & (IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel)) 
                          | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                    >> 1U)) | ((2U 
                                                & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                     >> 3U))))))) 
                | (5U & (- (IData)((1U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                          >> 4U)))))) 
               | (6U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                               >> 2U)) | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                 >> 3U)) 
                                          | (3U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                                 >> 5U))))))))) 
              | (7U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                              >> 3U)) | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                >> 4U)) 
                                         | ((2U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                   >> 5U)) 
                                            | (1U & 
                                               ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                >> 6U))))))) 
             | (8U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                             >> 4U)) | (7U & (- (IData)(
                                                        (1U 
                                                         & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                            >> 7U)))))))) 
            | (9U & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                            >> 5U)) | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                              >> 6U)) 
                                       | (3U & (- (IData)(
                                                          (1U 
                                                           & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                              >> 8U))))))))) 
           | (0xaU & ((8U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                             >> 6U)) | ((4U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                               >> 7U)) 
                                        | ((2U & ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                  >> 8U)) 
                                           | (1U & 
                                              ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                               >> 9U)))))));
}

extern const VlUnpacked<CData/*0:0*/, 8> VSimTop__ConstPool__TABLE_h8bf20b66_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSimTop__ConstPool__TABLE_hfe7a4498_0;
extern const VlUnpacked<CData/*1:0*/, 64> VSimTop__ConstPool__TABLE_he0435f8d_0;

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__9(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__9\n"); );
    // Init
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1_src_ports_ready;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid;
    QData/*63:0*/ SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__icache_ports_cmd_fire_1;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_full;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wen;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wen;
    IData/*18:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_1;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_3;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_4;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_6;
    IData/*18:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_7;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_9;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_10;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_12;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willIncrement;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willClear;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when_1;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src_stream_valid;
    QData/*63:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__tmp_read_ports_rs1_data;
    QData/*63:0*/ SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__tmp_read_ports_rs2_data;
    CData/*0:0*/ SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed;
    QData/*63:0*/ SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend;
    QData/*63:0*/ SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor;
    QData/*63:0*/ SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_word_extd;
    QData/*63:0*/ SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_word_extd;
    CData/*5:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx35;
    CData/*2:0*/ __Vtableidx36;
    CData/*2:0*/ __Vtableidx37;
    CData/*2:0*/ __Vtableidx38;
    // Body
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_next_level_rsp_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_valid) 
           & (0U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_payload_id)));
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
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__tmp_read_ports_rs1_data 
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
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__tmp_read_ports_rs2_data 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit_d1)
            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cpu_rsp_payload_data
            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cpu_rsp_payload_data_1);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_value 
        = ((IData)(vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn)
            ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_valueNext)
            : 0U);
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_3 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_next_level_rsp_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss)));
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_6 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_next_level_rsp_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss)));
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_9 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_next_level_rsp_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss));
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_12 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_next_level_rsp_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss));
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
                                                  : SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__tmp_read_ports_rs1_data));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src2 
        = ((0U == (0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                            >> 0x14U))) ? 0ULL : (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
                                                   & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                          >> 0x14U))))
                                                   ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data
                                                   : SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__tmp_read_ports_rs2_data));
    SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full 
        = (((3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr)) 
            == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))) 
           & ((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr) 
                     >> 2U)) != (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr) 
                                       >> 2U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr) 
           == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr));
    SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm 
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
    SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_full 
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
                                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_127_mru;
                                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_127_mru;
                                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_127_vld;
                                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_127_tag;
                                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_127_vld;
                                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_127_tag;
                            } else {
                                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_126_mru;
                                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_126_mru;
                                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_126_vld;
                                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_126_tag;
                                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_126_vld;
                                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_126_tag;
                            }
                        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_125_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_125_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_125_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_125_tag;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_125_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_125_tag;
                        } else {
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_124_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_124_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_124_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_124_tag;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_124_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_124_tag;
                        }
                    } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_123_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_123_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_123_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_123_tag;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_123_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_123_tag;
                        } else {
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_122_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_122_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_122_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_122_tag;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_122_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_122_tag;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_121_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_121_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_121_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_121_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_121_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_121_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_120_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_120_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_120_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_120_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_120_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_120_tag;
                    }
                } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_119_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_119_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_119_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_119_tag;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_119_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_119_tag;
                        } else {
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_118_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_118_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_118_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_118_tag;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_118_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_118_tag;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_117_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_117_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_117_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_117_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_117_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_117_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_116_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_116_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_116_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_116_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_116_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_116_tag;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_115_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_115_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_115_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_115_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_115_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_115_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_114_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_114_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_114_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_114_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_114_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_114_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_113_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_113_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_113_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_113_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_113_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_113_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_112_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_112_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_112_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_112_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_112_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_112_tag;
                }
            } else if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_111_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_111_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_111_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_111_tag;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_111_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_111_tag;
                        } else {
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_110_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_110_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_110_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_110_tag;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_110_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_110_tag;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_109_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_109_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_109_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_109_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_109_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_109_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_108_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_108_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_108_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_108_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_108_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_108_tag;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_107_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_107_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_107_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_107_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_107_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_107_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_106_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_106_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_106_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_106_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_106_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_106_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_105_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_105_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_105_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_105_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_105_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_105_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_104_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_104_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_104_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_104_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_104_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_104_tag;
                }
            } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_103_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_103_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_103_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_103_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_103_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_103_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_102_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_102_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_102_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_102_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_102_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_102_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_101_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_101_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_101_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_101_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_101_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_101_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_100_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_100_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_100_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_100_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_100_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_100_tag;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_99_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_99_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_99_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_99_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_99_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_99_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_98_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_98_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_98_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_98_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_98_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_98_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_97_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_97_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_97_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_97_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_97_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_97_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_96_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_96_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_96_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_96_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_96_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_96_tag;
            }
        } else if ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_95_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_95_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_95_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_95_tag;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_95_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_95_tag;
                        } else {
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_94_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_94_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_94_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_94_tag;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_94_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_94_tag;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_93_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_93_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_93_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_93_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_93_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_93_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_92_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_92_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_92_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_92_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_92_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_92_tag;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_91_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_91_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_91_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_91_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_91_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_91_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_90_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_90_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_90_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_90_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_90_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_90_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_89_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_89_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_89_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_89_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_89_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_89_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_88_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_88_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_88_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_88_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_88_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_88_tag;
                }
            } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_87_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_87_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_87_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_87_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_87_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_87_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_86_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_86_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_86_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_86_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_86_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_86_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_85_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_85_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_85_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_85_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_85_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_85_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_84_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_84_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_84_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_84_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_84_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_84_tag;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_83_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_83_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_83_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_83_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_83_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_83_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_82_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_82_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_82_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_82_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_82_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_82_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_81_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_81_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_81_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_81_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_81_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_81_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_80_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_80_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_80_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_80_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_80_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_80_tag;
            }
        } else if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_79_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_79_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_79_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_79_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_79_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_79_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_78_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_78_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_78_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_78_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_78_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_78_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_77_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_77_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_77_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_77_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_77_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_77_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_76_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_76_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_76_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_76_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_76_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_76_tag;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_75_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_75_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_75_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_75_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_75_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_75_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_74_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_74_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_74_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_74_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_74_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_74_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_73_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_73_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_73_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_73_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_73_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_73_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_72_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_72_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_72_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_72_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_72_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_72_tag;
            }
        } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_71_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_71_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_71_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_71_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_71_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_71_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_70_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_70_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_70_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_70_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_70_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_70_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_69_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_69_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_69_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_69_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_69_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_69_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_68_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_68_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_68_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_68_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_68_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_68_tag;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_67_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_67_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_67_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_67_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_67_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_67_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_66_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_66_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_66_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_66_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_66_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_66_tag;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_65_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_65_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_65_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_65_tag;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_65_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_65_tag;
        } else {
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_64_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_64_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_64_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_64_tag;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_64_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_64_tag;
        }
    } else if ((0x800U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
        if ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_63_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_63_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_63_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_63_tag;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_63_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_63_tag;
                        } else {
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_62_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_62_mru;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_62_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_62_tag;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_62_vld;
                            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_62_tag;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_61_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_61_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_61_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_61_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_61_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_61_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_60_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_60_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_60_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_60_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_60_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_60_tag;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_59_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_59_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_59_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_59_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_59_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_59_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_58_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_58_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_58_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_58_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_58_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_58_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_57_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_57_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_57_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_57_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_57_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_57_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_56_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_56_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_56_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_56_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_56_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_56_tag;
                }
            } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_55_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_55_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_55_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_55_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_55_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_55_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_54_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_54_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_54_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_54_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_54_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_54_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_53_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_53_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_53_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_53_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_53_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_53_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_52_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_52_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_52_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_52_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_52_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_52_tag;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_51_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_51_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_51_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_51_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_51_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_51_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_50_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_50_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_50_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_50_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_50_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_50_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_49_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_49_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_49_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_49_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_49_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_49_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_48_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_48_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_48_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_48_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_48_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_48_tag;
            }
        } else if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_47_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_47_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_47_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_47_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_47_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_47_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_46_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_46_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_46_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_46_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_46_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_46_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_45_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_45_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_45_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_45_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_45_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_45_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_44_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_44_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_44_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_44_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_44_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_44_tag;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_43_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_43_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_43_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_43_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_43_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_43_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_42_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_42_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_42_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_42_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_42_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_42_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_41_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_41_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_41_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_41_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_41_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_41_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_40_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_40_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_40_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_40_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_40_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_40_tag;
            }
        } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_39_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_39_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_39_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_39_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_39_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_39_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_38_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_38_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_38_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_38_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_38_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_38_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_37_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_37_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_37_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_37_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_37_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_37_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_36_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_36_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_36_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_36_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_36_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_36_tag;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_35_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_35_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_35_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_35_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_35_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_35_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_34_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_34_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_34_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_34_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_34_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_34_tag;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_33_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_33_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_33_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_33_tag;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_33_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_33_tag;
        } else {
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_32_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_32_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_32_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_32_tag;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_32_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_32_tag;
        }
    } else if ((0x400U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
        if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_31_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_31_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_31_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_31_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_31_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_31_tag;
                    } else {
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_30_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_30_mru;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_30_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_30_tag;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_30_vld;
                        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_30_tag;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_29_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_29_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_29_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_29_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_29_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_29_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_28_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_28_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_28_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_28_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_28_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_28_tag;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_27_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_27_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_27_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_27_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_27_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_27_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_26_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_26_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_26_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_26_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_26_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_26_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_25_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_25_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_25_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_25_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_25_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_25_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_24_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_24_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_24_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_24_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_24_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_24_tag;
            }
        } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_23_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_23_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_23_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_23_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_23_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_23_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_22_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_22_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_22_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_22_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_22_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_22_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_21_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_21_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_21_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_21_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_21_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_21_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_20_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_20_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_20_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_20_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_20_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_20_tag;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_19_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_19_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_19_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_19_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_19_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_19_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_18_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_18_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_18_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_18_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_18_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_18_tag;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_17_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_17_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_17_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_17_tag;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_17_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_17_tag;
        } else {
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_16_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_16_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_16_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_16_tag;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_16_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_16_tag;
        }
    } else if ((0x200U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
        if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_15_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_15_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_15_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_15_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_15_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_15_tag;
                } else {
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_14_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_14_mru;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_14_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_14_tag;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_14_vld;
                    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_14_tag;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_13_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_13_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_13_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_13_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_13_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_13_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_12_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_12_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_12_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_12_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_12_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_12_tag;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_11_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_11_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_11_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_11_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_11_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_11_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_10_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_10_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_10_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_10_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_10_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_10_tag;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_9_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_9_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_9_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_9_tag;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_9_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_9_tag;
        } else {
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_8_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_8_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_8_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_8_tag;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_8_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_8_tag;
        }
    } else if ((0x100U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
        if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_7_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_7_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_7_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_7_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_7_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_7_tag;
            } else {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_6_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_6_mru;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_6_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_6_tag;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_6_vld;
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_6_tag;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_5_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_5_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_5_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_5_tag;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_5_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_5_tag;
        } else {
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_4_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_4_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_4_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_4_tag;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_4_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_4_tag;
        }
    } else if ((0x80U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
        if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_3_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_3_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_3_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_3_tag;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_3_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_3_tag;
        } else {
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_2_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_2_mru;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_2_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_2_tag;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_2_vld;
            SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_2_tag;
        }
    } else if ((0x40U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc)) {
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_1_mru;
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_1_mru;
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_1_vld;
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_1_tag;
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_1_vld;
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_1_tag;
    } else {
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_0_mru;
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_0_mru;
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_0_vld;
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_0_metas_0_tag;
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_0_vld;
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__ways_1_metas_0_tag;
    }
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
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_1) 
           & (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_mru_0));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_0 
        = ((SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_0 
            == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc 
                >> 0xdU)) & (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_0));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_1 
        = ((SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_tag_1 
            == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc 
                >> 0xdU)) & (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_hit_1));
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
    SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src_stream_valid 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rValid;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow) {
        SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src_stream_valid = 0U;
        SimTop__DOT__u_SuperScalar__DOT__control_1_src_ports_ready 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__ready;
        SimTop__DOT__u_SuperScalar__DOT__control_1_src_ports_ready = 1U;
    } else {
        SimTop__DOT__u_SuperScalar__DOT__control_1_src_ports_ready 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__ready;
    }
    SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_valid) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__rsp_flush))) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow)));
    SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid 
        = (1U & ((((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_empty)) 
                   & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty))) 
                  & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty))) 
                 & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow))));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_start) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_word 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_is_word;
        SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_op_is_signed;
        SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src1_data;
        SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_src2_data;
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_word 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_op_is_word_reg;
        SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_op_is_signed_reg;
        SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_src1_reg;
        SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_src2_reg;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__fire 
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__src_stream_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready 
        = SimTop__DOT__u_SuperScalar__DOT__control_1_src_ports_ready;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rValid)))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__ports_s_ports_fire 
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__ports_s_ports_fire 
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_full)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__ports_s_ports_fire 
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
           & (~ (IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full)));
    SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when 
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
           & (0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data)));
    SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when_1 
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
           & (0x63U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_cpu_rsp_payload_data)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_valid 
        = SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_valid = 0U;
    }
    SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_word_extd 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend)));
    SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_word_extd 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__fire) 
           & (1U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1_rob_micro_op)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__fire) 
           & (2U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1_rob_micro_op)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__fire) 
           & (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1_rob_micro_op)));
    SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow) {
        SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc 
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when)
            ? (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_regNextWhen 
               + (IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm))
            : ((IData)(SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when_1)
                ? (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_regNextWhen 
                   + (IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm))
                : 0U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_predict_taken 
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when) 
           | ((IData)(SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when_1) 
              & (IData)((SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm 
                         >> 0x1fU))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_positive 
        = (1U & ((~ (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed)) 
                 | (~ (IData)((SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_word_extd 
                               >> 0x3fU)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_abs 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_word)
            ? ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed)
                ? (((1U & (IData)((SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_word_extd 
                                   >> 0x3fU))) ? (~ SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_word_extd)
                     : SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_word_extd) 
                   + (QData)((IData)((1U & (IData)(
                                                   (SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__dividend_word_extd 
                                                    >> 0x3fU))))))
                : (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend)))
            : ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed)
                ? (((1U & (IData)((SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend 
                                   >> 0x3fU))) ? (~ SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend)
                     : SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend) 
                   + (QData)((IData)((1U & (IData)(
                                                   (SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend 
                                                    >> 0x3fU))))))
                : SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_dividend));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_positive 
        = (1U & ((~ (IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed)) 
                 | (~ (IData)((SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_word_extd 
                               >> 0x3fU)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_abs 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_word)
            ? ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed)
                ? (((1U & (IData)((SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_word_extd 
                                   >> 0x3fU))) ? (~ SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_word_extd)
                     : SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_word_extd) 
                   + (QData)((IData)((1U & (IData)(
                                                   (SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div__DOT__divisor_word_extd 
                                                    >> 0x3fU))))))
                : (QData)((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor)))
            : ((IData)(SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_op_is_signed)
                ? (((1U & (IData)((SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor 
                                   >> 0x3fU))) ? (~ SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor)
                     : SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor) 
                   + (QData)((IData)((1U & (IData)(
                                                   (SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor 
                                                    >> 0x3fU))))))
                : SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_divisor));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1 
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid) 
           & (IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire 
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid) 
           & (IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_2 
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid) 
           & (IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_3 
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid) 
           & (IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetch_valid) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow))) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_predict_taken)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt_next 
        = (7U & ((((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
                   & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_full))) 
                  & (~ ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_empty)) 
                        & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_2))))
                  ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt) 
                     - (IData)(1U)) : (((~ ((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
                                            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_full)))) 
                                        & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_empty)) 
                                           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_2)))
                                        ? ((IData)(1U) 
                                           + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt))
                                        : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt_next 
        = (7U & ((((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
                   & (~ (IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full))) 
                  & (~ ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty)) 
                        & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_3))))
                  ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt) 
                     - (IData)(1U)) : (((~ ((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
                                            & (~ (IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full)))) 
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
    SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__icache_ports_cmd_fire_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_1) 
            | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_0)) 
           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1)));
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willClear = 0U;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_miss) {
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willClear = 1U;
    } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_done) {
        SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willClear = 1U;
    }
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willIncrement = 0U;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_miss)))) {
        if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_done)))) {
            if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_next_level_rsp_valid) {
                SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willIncrement = 1U;
            }
        }
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__ports_s_ports_fire 
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__icache_ports_cmd_fire_1) 
           & (~ (IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_full)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt_next 
        = (7U & ((((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__icache_ports_cmd_fire_1) 
                   & (~ (IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_full))) 
                  & (~ ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_empty)) 
                        & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire))))
                  ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt) 
                     - (IData)(1U)) : (((~ ((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__icache_ports_cmd_fire_1) 
                                            & (~ (IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_full)))) 
                                        & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_empty)) 
                                           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire)))
                                        ? ((IData)(1U) 
                                           + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt))
                                        : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt))));
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_1)));
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_4 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_1)));
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_7 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_1));
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_10 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_hit) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_hit_1));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_valueNext 
        = (7U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_value) 
                 + (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willIncrement)));
    if (SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_willClear) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_valueNext = 0U;
    }
    __Vtableidx1 = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1) 
                     << 5U) | (((((1U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt_next)) 
                                  & (1U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt_next))) 
                                 & (1U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt_next))) 
                                << 4U) | ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid) 
                                            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1))) 
                                           << 3U) | 
                                          ((((IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid) 
                                             & (~ (IData)(SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready))) 
                                            << 2U) 
                                           | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetchFSM_state_curr)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetchFSM_state_next 
        = VSimTop__ConstPool__TABLE_he0435f8d_0[__Vtableidx1];
    if (SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_1) {
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
    } else if (SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_3) {
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
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_1) 
           | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_2) 
              | (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_3)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wen 
        = ((~ (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_1)) 
           & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_2)) 
              & (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_3)));
    if (SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_4) {
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
    } else if (SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_6) {
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
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_4) 
           | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_5) 
              | (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_6)));
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wen 
        = ((~ (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_4)) 
           & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_5)) 
              & (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_6)));
    if (SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_7) {
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
    } else if (SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_9) {
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
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_7) 
           | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_8) 
              | (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_9)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wen 
        = ((~ (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_7)) 
           & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_8)) 
              & (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_9)));
    if (SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_10) {
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
    } else if (SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_12) {
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
        = ((IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_10) 
           | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_11) 
              | (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_12)));
    SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wen 
        = ((~ (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_10)) 
           & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_11)) 
              & (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when_12)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__tmp_mem_port 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_0_ports_cmd_payload_wen));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__tmp_mem_port 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_valid) 
           & (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_1_ports_cmd_payload_wen));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__tmp_mem_port 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_2_ports_cmd_payload_wen));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__tmp_mem_port 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_valid) 
           & (IData)(SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_sram_3_ports_cmd_payload_wen));
}

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__10(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__10\n"); );
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__bypass_rsp_valid_d1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1_cpu_bypass_rsp_valid;
}

VL_INLINE_OPT void VSimTop___024root___combo__TOP__11(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___combo__TOP__11\n"); );
    // Body
    vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn 
        = (1U & (~ (IData)(vlSelf->reset)));
}

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__12(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__12\n"); );
    // Body
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1_cpu_bypass_rsp_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__bypass_reg) 
           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__bypass_write_reg)
               ? (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid)
               : ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_valid) 
                  & (1U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_payload_id)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_valid 
        = (((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__fire) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__trap_or_print)) 
             | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__alu_busy) 
                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rValid))) 
            | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__bju_busy) 
               & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rValid))) 
           | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__lsu_busy) 
              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__bypass_rsp_valid_d1)));
}

void VSimTop___024root___sequent__TOP__3(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__5(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__7(VSimTop___024root* vlSelf);

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VSimTop___024root___sequent__TOP__3(vlSelf);
        VSimTop___024root___sequent__TOP__4(vlSelf);
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__5(vlSelf);
    }
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VSimTop___024root___sequent__TOP__7(vlSelf);
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__8(vlSelf);
    }
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VSimTop___024root___sequent__TOP__9(vlSelf);
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__10(vlSelf);
    }
    VSimTop___024root___combo__TOP__11(vlSelf);
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VSimTop___024root___sequent__TOP__12(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn 
        = vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn;
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
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
    VL_DEBUG_IF( if(__req && ((vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn ^ vlSelf->__Vchglast__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn))) VL_DBG_MSGF("        CHANGE: /home/lin/DandProject/dv/projects/dand_riscv_maxfreq/build/DandMaxFreq.v:51: SimTop.__Vcellinp__u_SuperScalar__resetn\n"); );
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
