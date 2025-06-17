// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__7(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__7\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__dcache_ar_payload_size = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__bypass_reg = 0U;
        vlSelf->SimTop__DOT____Vcellout__u_DandRiscvSimple__dcache_ar_payload_id = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__cpu_cmd_ready_1 = 1U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__writeback_arbitration_isValid = 0U;
        vlSelf->SimTop__DOT__dcache_aw_payload_len = 0U;
        vlSelf->SimTop__DOT____Vcellout__u_DandRiscvSimple__dcache_aw_payload_addr = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_1_tag = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_3_tag = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_2_tag = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_0_tag = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_0_tag = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_1_tag = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_2_tag = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_3_tag = 0U;
        vlSelf->__Vdly__SimTop__DOT____Vcellout__u_DandRiscvSimple__dcache_ar_payload_addr = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__timer_1__DOT__mtimecmp = 0xffffffffffffffffULL;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__timer_1__DOT__mtime = 0ULL;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_0_vld = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_0_mru = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_1_vld = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_1_mru = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_2_vld = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_2_mru = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_3_vld = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_3_mru = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_0_vld = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_0_mru = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_1_vld = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_1_mru = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_2_vld = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_2_mru = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_3_vld = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_3_mru = 0U;
    } else {
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_5) {
            vlSelf->SimTop__DOT__dcache_ar_payload_size 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_LSUPlugin_lsu_size;
        } else if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_cmd_valid_1) {
            vlSelf->SimTop__DOT__dcache_ar_payload_size = 3U;
        }
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__bypass) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__bypass_reg = 1U;
        } else if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__bypass_rsp_valid_d1) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__bypass_reg = 0U;
        }
        vlSelf->SimTop__DOT____Vcellout__u_DandRiscvSimple__dcache_ar_payload_id = 1U;
        if ((((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__is_miss) 
              | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__is_write)) 
             | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__bypass))) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__cpu_cmd_ready_1 = 0U;
        } else if (((((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_done) 
                      | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_rdone)) 
                     | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_wdone)) 
                    | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__bypass_rsp_valid_d1))) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__cpu_cmd_ready_1 = 1U;
        }
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__dcache_stall) {
            if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__dcache_stall)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__writeback_arbitration_isValid = 0U;
            }
        } else {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__writeback_arbitration_isValid 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_arbitration_isValid;
        }
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_dcache_w_payload_data) {
            vlSelf->SimTop__DOT__dcache_aw_payload_len = 0U;
            vlSelf->SimTop__DOT____Vcellout__u_DandRiscvSimple__dcache_aw_payload_addr 
                = (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT);
        } else if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_4) {
            vlSelf->SimTop__DOT__dcache_aw_payload_len 
                = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_IS_STORE)
                    ? 0U : 7U);
            vlSelf->SimTop__DOT____Vcellout__u_DandRiscvSimple__dcache_aw_payload_addr 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1_next_level_cmd_payload_addr;
        }
        if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_rdone) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__evict_id_miss)))) {
            if ((2U & ((IData)(1U) << (3U & (IData)(
                                                    (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                     >> 6U)))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_1_tag 
                    = (0xffffffU & (IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                            >> 8U)));
            }
        }
        if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_rdone) 
             & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__evict_id_miss))) {
            if ((8U & ((IData)(1U) << (3U & (IData)(
                                                    (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                     >> 6U)))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_3_tag 
                    = (0xffffffU & (IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                            >> 8U)));
            }
        }
        if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_rdone) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__evict_id_miss)))) {
            if ((4U & ((IData)(1U) << (3U & (IData)(
                                                    (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                     >> 6U)))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_2_tag 
                    = (0xffffffU & (IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                            >> 8U)));
            }
        }
        if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_rdone) 
             & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__evict_id_miss))) {
            if ((1U & ((IData)(1U) << (3U & (IData)(
                                                    (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                     >> 6U)))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_0_tag 
                    = (0xffffffU & (IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                            >> 8U)));
            }
        }
        if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_rdone) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__evict_id_miss)))) {
            if ((1U & ((IData)(1U) << (3U & (IData)(
                                                    (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                     >> 6U)))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_0_tag 
                    = (0xffffffU & (IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                            >> 8U)));
            }
        }
        if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_rdone) 
             & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__evict_id_miss))) {
            if ((2U & ((IData)(1U) << (3U & (IData)(
                                                    (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                     >> 6U)))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_1_tag 
                    = (0xffffffU & (IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                            >> 8U)));
            }
            if ((4U & ((IData)(1U) << (3U & (IData)(
                                                    (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                     >> 6U)))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_2_tag 
                    = (0xffffffU & (IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                            >> 8U)));
            }
        }
        if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_rdone) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__evict_id_miss)))) {
            if ((8U & ((IData)(1U) << (3U & (IData)(
                                                    (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                     >> 6U)))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_3_tag 
                    = (0xffffffU & (IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                            >> 8U)));
            }
        }
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_3) {
            vlSelf->__Vdly__SimTop__DOT____Vcellout__u_DandRiscvSimple__dcache_ar_payload_addr 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1_next_level_cmd_payload_addr;
        } else if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_5) {
            vlSelf->__Vdly__SimTop__DOT____Vcellout__u_DandRiscvSimple__dcache_ar_payload_addr 
                = (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT);
        } else if (((IData)(vlSelf->SimTop__DOT__dcache_ar_valid) 
                    & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready))) {
            vlSelf->__Vdly__SimTop__DOT____Vcellout__u_DandRiscvSimple__dcache_ar_payload_addr 
                = ((IData)(8U) + vlSelf->SimTop__DOT____Vcellout__u_DandRiscvSimple__dcache_ar_payload_addr);
        }
        if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_IS_STORE) 
             & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_TIMER_CEN))) {
            if ((0x200bff8ULL != vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT)) {
                if ((0x2004000ULL == vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__timer_1__DOT__mtimecmp 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_LSUPlugin_lsu_wdata;
                }
            }
            if ((0x200bff8ULL == vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__timer_1__DOT__mtime 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_LSUPlugin_lsu_wdata;
            }
        } else {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__timer_1__DOT__mtime 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__timer_1__DOT__tmp_mtime;
        }
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_busy) {
            if ((1U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_0_mru = 0U;
            }
            if ((2U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_1_mru = 0U;
            }
            if ((4U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_2_mru = 0U;
            }
            if ((8U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_3_mru = 0U;
            }
            if ((1U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_0_vld = 0U;
            }
            if ((2U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_1_vld = 0U;
            }
            if ((4U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_2_vld = 0U;
            }
            if ((8U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_3_vld = 0U;
            }
            if ((1U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_0_mru = 0U;
            }
            if ((2U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_1_mru = 0U;
            }
            if ((4U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_2_mru = 0U;
            }
            if ((8U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_3_mru = 0U;
            }
            if ((1U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_0_vld = 0U;
            }
            if ((2U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_1_vld = 0U;
            }
            if ((4U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_2_vld = 0U;
            }
            if ((8U & ((IData)(1U) << (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_3_vld = 0U;
            }
        } else if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__is_hit) 
                    & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__mru_full))) {
            if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__cache_hit_0) {
                if ((1U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_0_mru = 1U;
                }
                if ((2U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_1_mru = 1U;
                }
                if ((4U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_2_mru = 1U;
                }
                if ((8U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_3_mru = 1U;
                }
            } else {
                if ((1U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_0_mru = 0U;
                }
                if ((2U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_1_mru = 0U;
                }
                if ((4U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_2_mru = 0U;
                }
                if ((8U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_3_mru = 0U;
                }
            }
            if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__cache_hit_1) {
                if ((1U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_0_mru = 1U;
                }
                if ((2U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_1_mru = 1U;
                }
                if ((4U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_2_mru = 1U;
                }
                if ((8U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_3_mru = 1U;
                }
            } else {
                if ((1U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_0_mru = 0U;
                }
                if ((2U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_1_mru = 0U;
                }
                if ((4U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_2_mru = 0U;
                }
                if ((8U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_3_mru = 0U;
                }
            }
        } else {
            if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__is_hit) 
                 & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__cache_hit_0))) {
                if ((1U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_0_mru = 1U;
                }
                if ((2U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_1_mru = 1U;
                }
                if ((4U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_2_mru = 1U;
                }
                if ((8U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_3_mru = 1U;
                }
            } else if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_rdone) 
                        & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__evict_id_miss)))) {
                if ((1U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_0_vld = 1U;
                }
                if ((2U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_1_vld = 1U;
                }
                if ((4U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_2_vld = 1U;
                }
                if ((8U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_0_metas_3_vld = 1U;
                }
            }
            if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__is_hit) 
                 & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__cache_hit_1))) {
                if ((1U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_0_mru = 1U;
                }
                if ((2U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_1_mru = 1U;
                }
                if ((4U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_2_mru = 1U;
                }
                if ((8U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_3_mru = 1U;
                }
            } else if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_rdone) 
                        & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__evict_id_miss))) {
                if ((1U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_0_vld = 1U;
                }
                if ((2U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_1_vld = 1U;
                }
                if ((4U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_2_vld = 1U;
                }
                if ((8U & ((IData)(1U) << (3U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                         >> 6U)))))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__ways_1_metas_3_vld = 1U;
                }
            }
        }
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_1 
        = vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__tmp_1;
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_predict_taken_fifo__DOT__read_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_predict_taken_fifo__DOT__read_ptr;
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_predict_taken_fifo__DOT__write_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_predict_taken_fifo__DOT__write_ptr;
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__fifo_cnt 
        = vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__fifo_cnt;
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__gshare_predictor_1__DOT__GSHARE_global_branch_history 
        = vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__gshare_predictor_1__DOT__GSHARE_global_branch_history;
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_branch_history 
        = vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_branch_history;
    vlSelf->SimTop__DOT____Vcellout__u_DandRiscvSimple__icache_ar_payload_addr 
        = vlSelf->__Vdly__SimTop__DOT____Vcellout__u_DandRiscvSimple__icache_ar_payload_addr;
    vlSelf->SimTop__DOT____Vcellout__u_DandRiscvSimple__dcache_ar_payload_addr 
        = vlSelf->__Vdly__SimTop__DOT____Vcellout__u_DandRiscvSimple__dcache_ar_payload_addr;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__ar_wrap_en 
        = ((vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr 
            & ((IData)(vlSelf->SimTop__DOT__dcache_ar_payload_len) 
               << 3U)) == ((IData)(vlSelf->SimTop__DOT__dcache_ar_payload_len) 
                           << 3U));
    vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__ar_wrap_en 
        = ((vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr 
            & ((IData)(vlSelf->SimTop__DOT__icache_ar_payload_len) 
               << 3U)) == ((IData)(vlSelf->SimTop__DOT__icache_ar_payload_len) 
                           << 3U));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__tmp_mcycle 
        = (1ULL + vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mcycle);
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__dcache_aw_valid = 0U;
        vlSelf->SimTop__DOT__icache_ar_valid = 0U;
        vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__ar_len_cnt = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__gshare_predictor_1__DOT__BTB_btb_alloc_index_value = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mtvec = 0ULL;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mepc = 0ULL;
    } else {
        if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_4) 
             | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_dcache_w_payload_data))) {
            vlSelf->SimTop__DOT__dcache_aw_valid = 1U;
        } else if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dcache_aw_fire) {
            vlSelf->SimTop__DOT__dcache_aw_valid = 0U;
        }
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__next_level_cmd_valid_1) {
            vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__ar_len_cnt = 7U;
            vlSelf->SimTop__DOT__icache_ar_valid = 1U;
        } else {
            if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__icache_ar_fire) 
                 & (0U < (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__ar_len_cnt)))) {
                vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__ar_len_cnt 
                    = (0xfU & ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__ar_len_cnt) 
                               - (IData)(1U)));
            }
            if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__icache_ar_fire_1) {
                vlSelf->SimTop__DOT__icache_ar_valid 
                    = (0U < (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__ar_len_cnt));
            }
        }
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__gshare_predictor_1__DOT__BTB_btb_alloc_index_value 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__gshare_predictor_1__DOT__BTB_btb_alloc_index_valueNext;
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_WEN) {
            if (((((((((0x300U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_ADDR)) 
                       | (0x304U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_ADDR))) 
                      | (0x305U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_ADDR))) 
                     | (0x341U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_ADDR))) 
                    | (0x342U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_ADDR))) 
                   | (0x343U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_ADDR))) 
                  | (0xf14U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_ADDR))) 
                 | (0x340U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_ADDR)))) {
                if ((0x300U != (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_ADDR))) {
                    if ((0x304U != (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_ADDR))) {
                        if ((0x305U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_ADDR))) {
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mtvec 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ExcepPlugin_csr_wdata;
                        }
                        if ((0x305U != (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_ADDR))) {
                            if ((0x341U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_ADDR))) {
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mepc 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ExcepPlugin_csr_wdata;
                            }
                        }
                    }
                }
            }
        } else {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mtvec 
                = (0xfffffffffffffffcULL & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1_clint_ports_mtvec);
            if (((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__int_state)) 
                 | (2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__int_state)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mepc 
                    = (((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__int_state)) 
                        | (2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__int_state)))
                        ? ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__int_state))
                            ? ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_arbitration_isValid)
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_redirect_pc_next
                                : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__pc_next_d1)
                            : ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_arbitration_isValid)
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_PC
                                : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__pc_next_d1))
                        : 0ULL);
            }
        }
    }
    vlSelf->SimTop__DOT__regs_o[0x15U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_21;
    vlSelf->SimTop__DOT__regs_o[0x14U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_20;
    vlSelf->SimTop__DOT__regs_o[0x13U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_19;
    vlSelf->SimTop__DOT__regs_o[0x12U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_18;
    vlSelf->SimTop__DOT__regs_o[0x11U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_17;
    vlSelf->SimTop__DOT__regs_o[0x10U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_16;
    vlSelf->SimTop__DOT__regs_o[0xfU] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_15;
    vlSelf->SimTop__DOT__regs_o[0xeU] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_14;
    vlSelf->SimTop__DOT__regs_o[0xdU] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_13;
    vlSelf->SimTop__DOT__regs_o[0xcU] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_12;
    vlSelf->SimTop__DOT__regs_o[0xbU] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_11;
    vlSelf->SimTop__DOT__regs_o[0xaU] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_10;
    vlSelf->SimTop__DOT__regs_o[3U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_3;
    vlSelf->SimTop__DOT__regs_o[2U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_2;
    vlSelf->SimTop__DOT__regs_o[1U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_1;
    vlSelf->SimTop__DOT__regs_o[0U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_0;
    vlSelf->SimTop__DOT__regs_o[5U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_5;
    vlSelf->SimTop__DOT__regs_o[4U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_4;
    vlSelf->SimTop__DOT__regs_o[7U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_7;
    vlSelf->SimTop__DOT__regs_o[6U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_6;
    vlSelf->SimTop__DOT__regs_o[9U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_9;
    vlSelf->SimTop__DOT__regs_o[8U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_8;
    vlSelf->SimTop__DOT__regs_o[0x16U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_22;
    vlSelf->SimTop__DOT__regs_o[0x17U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_23;
    vlSelf->SimTop__DOT__regs_o[0x18U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_24;
    vlSelf->SimTop__DOT__regs_o[0x19U] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_25;
    vlSelf->SimTop__DOT__regs_o[0x1aU] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_26;
    vlSelf->SimTop__DOT__regs_o[0x1bU] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_27;
    vlSelf->SimTop__DOT__regs_o[0x1cU] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_28;
    vlSelf->SimTop__DOT__regs_o[0x1dU] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_29;
    vlSelf->SimTop__DOT__regs_o[0x1eU] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_30;
    vlSelf->SimTop__DOT__regs_o[0x1fU] = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__regFileModule_1__DOT__reg_file_31;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_cnt_value = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_busy = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1 = 0U;
    } else {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_cnt_value 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_cnt_valueNext;
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_done) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_busy = 0U;
        }
        if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__ICachePlugin_icache_access_cmd_valid) 
             & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_cmd_ready_1))) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1 
                = (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__pc_next);
        }
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_cmd_valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__is_miss) 
                                         | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__is_write)));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_arbitration_isValid = 0U;
    } else if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__dcache_stall) {
        if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__dcache_stall)))) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_arbitration_isValid = 0U;
        }
    } else {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_arbitration_isValid 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_arbitration_isValid;
    }
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__aw_wrap_en 
        = ((vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr 
            & ((IData)(vlSelf->SimTop__DOT__dcache_aw_payload_len) 
               << 3U)) == ((IData)(vlSelf->SimTop__DOT__dcache_aw_payload_len) 
                           << 3U));
    if (vlSelf->reset) {
        vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__tmp_2 = 0U;
        vlSelf->SimTop__DOT__dcache_ar_valid = 0U;
    } else {
        if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_3) 
             | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_5))) {
            vlSelf->SimTop__DOT__dcache_ar_valid = 1U;
        } else if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dcache_ar_fire) {
            vlSelf->SimTop__DOT__dcache_ar_valid = 
                (0U < (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_2));
        }
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_3) {
            vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__tmp_2 
                = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_IS_STORE)
                    ? 0U : 7U);
        } else if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_5) {
            vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__tmp_2 = 0U;
        } else if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dcache_ar_fire_1) 
                    & (0U < (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_2)))) {
            vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__tmp_2 
                = (0xfU & ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_2) 
                           - (IData)(1U)));
        }
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__timer_1__DOT__tmp_mtime 
        = (1ULL + vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__timer_1__DOT__mtime);
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__timer_1_timer_int 
        = (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__timer_1__DOT__mtimecmp 
           <= vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__timer_1__DOT__mtime);
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_busy = 0U;
    } else {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_valueNext;
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_done) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_busy = 0U;
        }
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__ar_len_cnt 
        = vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__ar_len_cnt;
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_2 
        = vlSelf->__Vdly__SimTop__DOT__u_DandRiscvSimple__DOT__tmp_2;
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__next_level_cmd_valid_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__is_miss));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1_clint_ports_mtvec 
        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mtvec;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__pc_next_d1 = 0ULL;
    } else if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_redirect_valid) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__pc_next_d1 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_redirect_pc_next;
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_when 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_busy) 
           & (0x7fU == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_cnt_value)));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_hit_data_1 
        = ((0x20U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
            ? ((0x10U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
                ? ((8U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
                    ? ((4U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
                        ? ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[0xfU]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[0xfU]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[0xfU]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[0xfU])))
                        : ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[0xeU]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[0xeU]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[0xeU]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[0xeU]))))
                    : ((4U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
                        ? ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[0xdU]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[0xdU]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[0xdU]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[0xdU])))
                        : ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[0xcU]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[0xcU]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[0xcU]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[0xcU])))))
                : ((8U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
                    ? ((4U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
                        ? ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[0xbU]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[0xbU]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[0xbU]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[0xbU])))
                        : ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[0xaU]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[0xaU]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[0xaU]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[0xaU]))))
                    : ((4U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
                        ? ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[9U]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[9U]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[9U]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[9U])))
                        : ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[8U]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[8U]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[8U]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[8U]))))))
            : ((0x10U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
                ? ((8U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
                    ? ((4U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
                        ? ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[7U]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[7U]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[7U]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[7U])))
                        : ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[6U]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[6U]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[6U]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[6U]))))
                    : ((4U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
                        ? ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[5U]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[5U]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[5U]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[5U])))
                        : ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[4U]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[4U]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[4U]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[4U])))))
                : ((8U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
                    ? ((4U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
                        ? ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[3U]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[3U]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[3U]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[3U])))
                        : ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[2U]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[2U]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[2U]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[2U]))))
                    : ((4U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)
                        ? ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[1U]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[1U]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[1U]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[1U])))
                        : ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_0_ports_rsp_payload_data[0U]
                            : ((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_1_ports_rsp_payload_data[0U]
                                : ((2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__hit_id_d1))
                                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_2_ports_rsp_payload_data[0U]
                                    : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__sramBanks_2_sram_3_ports_rsp_payload_data[0U])))))));
    if ((0x1000U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
        if ((0x800U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x400U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x200U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                            if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_127_mru;
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_127_mru;
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_127_mru;
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_127_mru;
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_127_vld;
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_127_vld;
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_127_vld;
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_127_vld;
                            } else {
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_126_mru;
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_126_mru;
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_126_mru;
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_126_mru;
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_126_vld;
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_126_vld;
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_126_vld;
                                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_126_vld;
                            }
                        } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_125_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_125_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_125_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_125_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_125_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_125_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_125_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_125_vld;
                        } else {
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_124_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_124_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_124_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_124_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_124_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_124_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_124_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_124_vld;
                        }
                    } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_123_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_123_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_123_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_123_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_123_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_123_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_123_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_123_vld;
                        } else {
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_122_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_122_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_122_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_122_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_122_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_122_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_122_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_122_vld;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_121_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_121_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_121_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_121_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_121_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_121_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_121_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_121_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_120_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_120_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_120_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_120_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_120_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_120_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_120_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_120_vld;
                    }
                } else if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_119_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_119_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_119_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_119_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_119_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_119_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_119_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_119_vld;
                        } else {
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_118_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_118_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_118_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_118_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_118_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_118_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_118_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_118_vld;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_117_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_117_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_117_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_117_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_117_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_117_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_117_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_117_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_116_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_116_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_116_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_116_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_116_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_116_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_116_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_116_vld;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_115_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_115_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_115_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_115_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_115_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_115_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_115_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_115_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_114_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_114_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_114_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_114_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_114_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_114_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_114_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_114_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_113_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_113_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_113_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_113_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_113_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_113_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_113_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_113_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_112_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_112_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_112_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_112_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_112_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_112_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_112_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_112_vld;
                }
            } else if ((0x200U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_111_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_111_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_111_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_111_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_111_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_111_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_111_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_111_vld;
                        } else {
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_110_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_110_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_110_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_110_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_110_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_110_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_110_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_110_vld;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_109_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_109_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_109_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_109_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_109_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_109_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_109_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_109_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_108_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_108_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_108_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_108_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_108_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_108_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_108_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_108_vld;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_107_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_107_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_107_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_107_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_107_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_107_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_107_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_107_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_106_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_106_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_106_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_106_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_106_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_106_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_106_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_106_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_105_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_105_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_105_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_105_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_105_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_105_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_105_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_105_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_104_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_104_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_104_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_104_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_104_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_104_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_104_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_104_vld;
                }
            } else if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_103_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_103_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_103_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_103_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_103_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_103_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_103_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_103_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_102_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_102_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_102_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_102_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_102_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_102_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_102_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_102_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_101_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_101_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_101_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_101_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_101_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_101_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_101_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_101_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_100_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_100_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_100_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_100_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_100_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_100_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_100_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_100_vld;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_99_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_99_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_99_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_99_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_99_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_99_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_99_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_99_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_98_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_98_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_98_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_98_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_98_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_98_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_98_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_98_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_97_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_97_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_97_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_97_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_97_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_97_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_97_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_97_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_96_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_96_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_96_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_96_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_96_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_96_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_96_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_96_vld;
            }
        } else if ((0x400U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x200U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_95_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_95_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_95_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_95_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_95_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_95_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_95_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_95_vld;
                        } else {
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_94_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_94_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_94_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_94_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_94_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_94_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_94_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_94_vld;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_93_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_93_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_93_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_93_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_93_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_93_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_93_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_93_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_92_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_92_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_92_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_92_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_92_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_92_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_92_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_92_vld;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_91_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_91_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_91_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_91_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_91_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_91_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_91_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_91_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_90_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_90_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_90_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_90_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_90_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_90_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_90_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_90_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_89_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_89_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_89_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_89_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_89_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_89_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_89_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_89_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_88_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_88_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_88_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_88_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_88_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_88_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_88_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_88_vld;
                }
            } else if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_87_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_87_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_87_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_87_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_87_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_87_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_87_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_87_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_86_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_86_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_86_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_86_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_86_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_86_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_86_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_86_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_85_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_85_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_85_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_85_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_85_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_85_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_85_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_85_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_84_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_84_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_84_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_84_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_84_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_84_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_84_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_84_vld;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_83_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_83_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_83_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_83_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_83_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_83_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_83_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_83_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_82_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_82_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_82_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_82_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_82_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_82_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_82_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_82_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_81_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_81_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_81_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_81_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_81_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_81_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_81_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_81_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_80_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_80_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_80_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_80_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_80_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_80_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_80_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_80_vld;
            }
        } else if ((0x200U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_79_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_79_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_79_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_79_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_79_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_79_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_79_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_79_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_78_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_78_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_78_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_78_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_78_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_78_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_78_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_78_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_77_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_77_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_77_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_77_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_77_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_77_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_77_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_77_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_76_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_76_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_76_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_76_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_76_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_76_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_76_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_76_vld;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_75_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_75_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_75_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_75_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_75_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_75_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_75_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_75_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_74_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_74_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_74_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_74_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_74_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_74_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_74_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_74_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_73_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_73_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_73_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_73_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_73_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_73_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_73_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_73_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_72_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_72_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_72_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_72_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_72_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_72_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_72_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_72_vld;
            }
        } else if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_71_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_71_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_71_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_71_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_71_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_71_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_71_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_71_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_70_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_70_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_70_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_70_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_70_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_70_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_70_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_70_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_69_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_69_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_69_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_69_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_69_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_69_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_69_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_69_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_68_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_68_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_68_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_68_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_68_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_68_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_68_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_68_vld;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_67_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_67_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_67_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_67_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_67_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_67_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_67_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_67_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_66_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_66_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_66_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_66_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_66_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_66_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_66_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_66_vld;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_65_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_65_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_65_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_65_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_65_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_65_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_65_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_65_vld;
        } else {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_64_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_64_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_64_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_64_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_64_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_64_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_64_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_64_vld;
        }
    } else if ((0x800U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
        if ((0x400U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x200U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_63_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_63_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_63_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_63_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_63_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_63_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_63_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_63_vld;
                        } else {
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_62_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_62_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_62_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_62_mru;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_62_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_62_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_62_vld;
                            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_62_vld;
                        }
                    } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_61_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_61_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_61_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_61_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_61_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_61_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_61_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_61_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_60_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_60_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_60_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_60_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_60_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_60_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_60_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_60_vld;
                    }
                } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_59_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_59_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_59_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_59_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_59_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_59_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_59_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_59_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_58_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_58_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_58_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_58_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_58_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_58_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_58_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_58_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_57_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_57_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_57_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_57_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_57_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_57_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_57_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_57_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_56_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_56_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_56_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_56_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_56_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_56_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_56_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_56_vld;
                }
            } else if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_55_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_55_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_55_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_55_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_55_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_55_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_55_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_55_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_54_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_54_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_54_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_54_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_54_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_54_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_54_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_54_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_53_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_53_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_53_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_53_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_53_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_53_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_53_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_53_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_52_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_52_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_52_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_52_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_52_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_52_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_52_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_52_vld;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_51_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_51_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_51_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_51_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_51_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_51_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_51_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_51_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_50_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_50_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_50_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_50_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_50_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_50_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_50_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_50_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_49_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_49_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_49_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_49_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_49_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_49_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_49_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_49_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_48_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_48_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_48_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_48_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_48_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_48_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_48_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_48_vld;
            }
        } else if ((0x200U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_47_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_47_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_47_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_47_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_47_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_47_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_47_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_47_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_46_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_46_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_46_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_46_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_46_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_46_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_46_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_46_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_45_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_45_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_45_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_45_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_45_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_45_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_45_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_45_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_44_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_44_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_44_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_44_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_44_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_44_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_44_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_44_vld;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_43_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_43_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_43_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_43_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_43_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_43_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_43_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_43_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_42_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_42_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_42_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_42_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_42_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_42_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_42_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_42_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_41_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_41_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_41_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_41_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_41_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_41_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_41_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_41_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_40_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_40_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_40_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_40_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_40_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_40_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_40_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_40_vld;
            }
        } else if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_39_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_39_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_39_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_39_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_39_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_39_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_39_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_39_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_38_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_38_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_38_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_38_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_38_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_38_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_38_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_38_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_37_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_37_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_37_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_37_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_37_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_37_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_37_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_37_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_36_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_36_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_36_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_36_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_36_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_36_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_36_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_36_vld;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_35_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_35_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_35_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_35_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_35_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_35_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_35_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_35_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_34_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_34_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_34_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_34_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_34_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_34_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_34_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_34_vld;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_33_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_33_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_33_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_33_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_33_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_33_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_33_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_33_vld;
        } else {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_32_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_32_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_32_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_32_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_32_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_32_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_32_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_32_vld;
        }
    } else if ((0x400U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
        if ((0x200U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_31_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_31_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_31_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_31_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_31_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_31_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_31_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_31_vld;
                    } else {
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_30_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_30_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_30_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_30_mru;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_30_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_30_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_30_vld;
                        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_30_vld;
                    }
                } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_29_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_29_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_29_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_29_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_29_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_29_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_29_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_29_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_28_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_28_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_28_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_28_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_28_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_28_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_28_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_28_vld;
                }
            } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_27_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_27_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_27_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_27_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_27_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_27_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_27_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_27_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_26_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_26_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_26_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_26_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_26_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_26_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_26_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_26_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_25_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_25_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_25_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_25_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_25_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_25_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_25_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_25_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_24_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_24_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_24_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_24_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_24_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_24_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_24_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_24_vld;
            }
        } else if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_23_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_23_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_23_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_23_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_23_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_23_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_23_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_23_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_22_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_22_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_22_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_22_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_22_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_22_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_22_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_22_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_21_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_21_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_21_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_21_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_21_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_21_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_21_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_21_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_20_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_20_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_20_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_20_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_20_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_20_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_20_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_20_vld;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_19_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_19_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_19_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_19_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_19_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_19_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_19_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_19_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_18_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_18_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_18_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_18_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_18_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_18_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_18_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_18_vld;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_17_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_17_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_17_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_17_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_17_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_17_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_17_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_17_vld;
        } else {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_16_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_16_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_16_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_16_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_16_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_16_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_16_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_16_vld;
        }
    } else if ((0x200U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
        if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_15_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_15_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_15_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_15_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_15_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_15_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_15_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_15_vld;
                } else {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_14_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_14_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_14_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_14_mru;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_14_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_14_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_14_vld;
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_14_vld;
                }
            } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_13_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_13_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_13_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_13_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_13_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_13_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_13_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_13_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_12_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_12_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_12_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_12_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_12_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_12_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_12_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_12_vld;
            }
        } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_11_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_11_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_11_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_11_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_11_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_11_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_11_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_11_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_10_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_10_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_10_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_10_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_10_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_10_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_10_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_10_vld;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_9_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_9_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_9_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_9_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_9_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_9_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_9_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_9_vld;
        } else {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_8_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_8_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_8_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_8_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_8_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_8_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_8_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_8_vld;
        }
    } else if ((0x100U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
        if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_7_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_7_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_7_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_7_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_7_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_7_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_7_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_7_vld;
            } else {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_6_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_6_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_6_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_6_mru;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_6_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_6_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_6_vld;
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_6_vld;
            }
        } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_5_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_5_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_5_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_5_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_5_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_5_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_5_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_5_vld;
        } else {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_4_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_4_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_4_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_4_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_4_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_4_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_4_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_4_vld;
        }
    } else if ((0x80U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
        if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_3_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_3_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_3_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_3_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_3_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_3_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_3_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_3_vld;
        } else {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_2_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_2_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_2_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_2_mru;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_2_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_2_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_2_vld;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_2_vld;
        }
    } else if ((0x40U & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_addr_d1)) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_1_mru;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_1_mru;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_1_mru;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_1_mru;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_1_vld;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_1_vld;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_1_vld;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_1_vld;
    } else {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_0 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_0_mru;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_3 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_0_mru;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_2 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_0_mru;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_lru_d1_1 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_0_mru;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_0_metas_0_vld;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_2_metas_0_vld;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_3_metas_0_vld;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__ways_1_metas_0_vld;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_cmd_ready_1 = 1U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_arbitration_isValid = 0U;
    } else {
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__is_miss) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_cmd_ready_1 = 0U;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_cmd_ready_1 = 0U;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_cmd_ready_1 = 0U;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_cmd_ready_1 = 0U;
        } else if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_done) 
                    | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__next_level_done))) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_cmd_ready_1 = 1U;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_cmd_ready_1 = 1U;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_cmd_ready_1 = 1U;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cpu_cmd_ready_1 = 1U;
        }
        if ((1U & ((~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_arbitration_isStuckByOthers)) 
                   & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_arbitration_removeIt))))) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_arbitration_isValid 
                = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_arbitration_isValid;
        } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__dcache_stall)))) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_arbitration_isValid = 0U;
        }
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_done 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_busy) 
           & (3U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__tmp_when_1 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_busy) 
           & (3U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value)));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_cnt_willClear = 0U;
    if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_when) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_cnt_willClear = 1U;
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_cnt_willIncrement = 0U;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_when)))) {
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_busy) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_cnt_willIncrement = 1U;
        }
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_gnt_0_1 
        = ((8U & ((~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_3)) 
                  << 3U)) | ((4U & ((~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_2)) 
                                    << 2U)) | ((2U 
                                                & ((~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_1)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_d1_0))))));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_done 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_busy) 
           & (0x7fU == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_cnt_value)));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_willClear = 0U;
    if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__tmp_when_1) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_willClear = 1U;
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_willIncrement = 0U;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__tmp_when_1)))) {
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_busy) {
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_willIncrement = 1U;
        }
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_cnt_valueNext 
        = (0x7fU & ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_cnt_value) 
                    + (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_cnt_willIncrement)));
    if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_cnt_willClear) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__flush_cnt_valueNext = 0U;
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_gnt_0_3 
        = (0xffU & ((((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_gnt_0_1) 
                      << 4U) | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_gnt_0_1)) 
                    & (~ ((((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_gnt_0_1) 
                            << 4U) | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_gnt_0_1)) 
                          - (IData)(1U)))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_arbitration_isValid = 0U;
    } else if ((1U & ((~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_arbitration_isStuckByOthers)) 
                      & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_arbitration_removeIt))))) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_arbitration_isValid 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_arbitration_isValid;
    } else if ((1U & ((~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_arbitration_isStuckByOthers)) 
                      | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_arbitration_removeIt)))) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_arbitration_isValid = 0U;
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1_ecall 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_arbitration_isValid) 
           & (1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_CTRL)));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1_ebreak 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_arbitration_isValid) 
           & (2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_CTRL)));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_valueNext 
        = (3U & ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_value) 
                 + (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_willIncrement)));
    if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_willClear) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__flush_cnt_valueNext = 0U;
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__int_state 
        = (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1_ecall) 
            | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1_ebreak))
            ? 1U : ((((IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mstatus 
                               >> 3U)) & (IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mie 
                                                  >> 7U))) 
                     & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__timer_1_timer_int))
                     ? 2U : (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_arbitration_isValid) 
                              & (3U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_CTRL)))
                              ? 3U : 0U)));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1_csr_ports_mstatus_wdata 
        = (((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__int_state)) 
            | (2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__int_state)))
            ? ((0xffffffffffffff00ULL & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mstatus) 
               | (QData)((IData)(((0x80U & ((IData)(
                                                    (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mstatus 
                                                     >> 3U)) 
                                            << 7U)) 
                                  | ((0x70U & ((IData)(
                                                       (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mstatus 
                                                        >> 4U)) 
                                               << 4U)) 
                                     | (7U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mstatus)))))))
            : ((3U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__int_state))
                ? ((0xffffffffffffff00ULL & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mstatus) 
                   | (QData)((IData)((0x80U | ((0x70U 
                                                & ((IData)(
                                                           (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mstatus 
                                                            >> 4U)) 
                                                   << 4U)) 
                                               | ((8U 
                                                   & ((IData)(
                                                              (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mstatus 
                                                               >> 7U)) 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__csrRegfile_1__DOT__mstatus))))))))
                : 0ULL));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1_int_en 
        = (((1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__int_state)) 
            | (2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__int_state))) 
           | (3U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__clint_1__DOT__int_state)));
}

extern const VlUnpacked<CData/*2:0*/, 16> VSimTop__ConstPool__TABLE_h3595224e_0;

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__8(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__8\n"); );
    // Init
    CData/*3:0*/ __Vtableidx2;
    // Body
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready;
    vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready;
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__writeback_RD 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_to_writeback_IS_LOAD)
            ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_to_writeback_LSU_RDATA
            : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_to_writeback_ALU_RESULT);
    __Vtableidx2 = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_CTRL;
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_LSUPlugin_lsu_size 
        = VSimTop__ConstPool__TABLE_h3595224e_0[__Vtableidx2];
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__dcache_stall)))) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_to_writeback_RD_ADDR 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_RD_ADDR;
    }
    if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__is_miss) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__evict_id_miss 
            = (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cache_victim_3) 
                | ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cache_victim_2) 
                   | ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cache_victim_1) 
                      | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__cache_victim_0))))
                ? (((IData)((0U != (0xcU & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_victim_gnt_0_4)))) 
                    << 1U) | (IData)((0U != (0xaU & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_victim_gnt_0_4)))))
                : (((IData)((0U != (0xcU & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_gnt_0_4)))) 
                    << 1U) | (IData)((0U != (0xaU & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_cache_invld_gnt_0_4))))));
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__bypass_rsp_valid_d1 
        = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1_cpu_bypass_rsp_valid;
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_wdone 
        = (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1_next_level_rsp_valid) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1_next_level_rsp_payload_rvalid))) 
           & (0U == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_resp)));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_rdone 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_rvalid) 
           & (7U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__next_level_data_cnt_value)));
    if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__is_miss) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__evict_id_miss 
            = (1U & (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__cache_victim_1) 
                      | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__cache_victim_0))
                      ? (1U & (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__tmp_cache_victim_gnt_0_3) 
                                >> 3U) | ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__tmp_cache_victim_gnt_0_3) 
                                          >> 1U))) : 
                     (1U & (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__tmp_cache_invld_gnt_0_3) 
                             >> 3U) | ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__tmp_cache_invld_gnt_0_3) 
                                       >> 1U)))));
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__dcache_stall)))) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_alu_result;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_WEN 
            = (((4U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_DecodePlugin_csr_ctrl)) 
                | (5U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_DecodePlugin_csr_ctrl))) 
               | (6U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_DecodePlugin_csr_ctrl)));
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_CSR_ADDR 
            = (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
               >> 0x14U);
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_PC 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_PC;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_IS_STORE 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_IS_STORE;
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__next_level_done 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1_next_level_rsp_valid) 
           & (7U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__next_level_data_cnt_value)));
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__dcache_stall)))) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_RD_ADDR 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_RD_ADDR;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid = 0U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_resp = 0U;
    } else if ((((((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag) 
                   & (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready)) 
                  & (IData)(vlSelf->SimTop__DOT__dcache_w_valid)) 
                 & (~ (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid))) 
                & (IData)(vlSelf->SimTop__DOT__dcache_w_payload_last))) {
        vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid = 1U;
        vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_resp = 0U;
    } else if (vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid) {
        vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid = 0U;
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_LSUPlugin_lsu_wstrb 
        = (0xffU & (((8U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_CTRL))
                      ? (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_9)
                      : ((9U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_CTRL))
                          ? (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_10)
                          : ((0xaU == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_CTRL))
                              ? (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__tmp_11)
                              : ((0xbU == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_CTRL))
                                  ? 0xffU : 0U)))) 
                    << (7U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT))));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_LSUPlugin_lsu_wdata 
        = (((8U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_CTRL))
             ? (((- (QData)((IData)((1U & (IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_WDATA 
                                                   >> 7U)))))) 
                 << 8U) | (QData)((IData)((0xffU & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_WDATA)))))
             : ((9U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_CTRL))
                 ? (((- (QData)((IData)((1U & (IData)(
                                                      (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_WDATA 
                                                       >> 0xfU)))))) 
                     << 0x10U) | (QData)((IData)((0xffffU 
                                                  & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_WDATA)))))
                 : ((0xaU == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_CTRL))
                     ? (((QData)((IData)((- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_WDATA 
                                                                >> 0x1fU))))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_WDATA)))
                     : ((0xbU == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_CTRL))
                         ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_MEM_WDATA
                         : 0ULL)))) << (0x38U & ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT) 
                                                 << 3U)));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_LSUPlugin_is_timer 
        = ((0x200bff8ULL == vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT) 
           | (0x2004000ULL == vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT));
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_arbitration_isStuckByOthers)))) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_PC 
            = ((0U == (3U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__read_ptr)))
                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__fifo_ram_0
                : ((1U == (3U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__read_ptr)))
                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__fifo_ram_1
                    : ((2U == (3U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__read_ptr)))
                        ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__fifo_ram_2
                        : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__fifo_ram_3)));
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__dcache_stall)))) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_IS_STORE 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_DecodePlugin_is_store;
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1_next_level_cmd_payload_addr 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_IS_STORE)
            ? ((IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                        >> 3U)) << 3U) : ((IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_ALU_RESULT 
                                                   >> 6U)) 
                                          << 6U));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__memaccess_LSUPlugin_is_mem 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_IS_LOAD) 
           | (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_to_memaccess_IS_STORE));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_when_2 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__next_level_done) 
           & (0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__evict_id_miss)));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_when_5 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__next_level_done) 
           & (1U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__evict_id_miss)));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_when_8 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__next_level_done) 
           & (2U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__evict_id_miss)));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__tmp_when_11 
        = ((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__next_level_done) 
           & (3U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1__DOT__evict_id_miss)));
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__axi_awv_awr_flag;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_valid;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__dCache_1__DOT__dcache_stall)))) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_RD_ADDR 
            = (0x1fU & (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                        >> 7U));
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_fetch_flush)))) {
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__ports_s_ports_fire) {
            if ((1U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__fifo_ram_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__pc_next;
            }
            if ((2U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__fifo_ram_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__pc_next;
            }
            if ((4U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__fifo_ram_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__pc_next;
            }
            if ((8U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_pc_stream_fifo__DOT__fifo_ram_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__pc_next;
            }
        }
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_rd_is_link 
        = ((0U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_RD_ADDR)) 
           | (5U == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_RD_ADDR)));
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_arbitration_isStuckByOthers)))) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
            = ((0U == (3U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__read_ptr)))
                ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__fifo_ram_0
                : ((1U == (3U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__read_ptr)))
                    ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__fifo_ram_1
                    : ((2U == (3U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__read_ptr)))
                        ? vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__fifo_ram_2
                        : vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__fifo_ram_3)));
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_jmp = 0U;
    if ((0xdU == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_ALU_CTRL))) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_jmp 
            = (1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_rd_is_link)));
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_ret = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_ret = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_call = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_call 
            = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_rd_is_link;
    } else if ((0xeU == (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_ALU_CTRL))) {
        if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_rd_is_link)))) {
            if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_rs1_is_link)))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_jmp = 1U;
            }
        }
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_ret = 0U;
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_rd_is_link) {
            if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_rs1_is_link) {
                if (((IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_RD_ADDR) 
                     != (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_to_execute_RS1_ADDR))) {
                    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_ret = 1U;
                }
            }
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_call = 0U;
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_call = 1U;
        } else {
            if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_rs1_is_link) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_ret = 1U;
            }
            vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_call = 0U;
        }
    } else {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_ret = 0U;
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__execute_ALUPlugin_is_call = 0U;
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_DecodePlugin_imm 
        = (((((0x13U == (0x7fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
              | (0x1bU == (0x7fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
             | (3U == (0x7fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
            | (0x67U == (0x7fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
            ? (((- (QData)((IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                  >> 0x14U)))) : ((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                            >> 7U))))))
                                                   : 
                                                  ((0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                         >> 0x1fU)))) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(
                                                                      ((0x1000U 
                                                                        & (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                           >> 0x13U)) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                              << 4U)) 
                                                                          | ((0x7e0U 
                                                                              & (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                                >> 0x14U)) 
                                                                             | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                                >> 7U))))))))
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                          >> 0x1fU)))) 
                                                      << 0x15U) 
                                                     | (QData)((IData)(
                                                                       ((0x100000U 
                                                                         & (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                            >> 0xbU)) 
                                                                        | ((0xff000U 
                                                                            & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                                >> 9U)) 
                                                                              | (0x7feU 
                                                                                & (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                                >> 0x14U))))))))
                                                     : 
                                                    (((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                                                      | (0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (0xfffff000U 
                                                                         & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))))
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION 
                                                                         >> 0x14U)))))))));
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_DecodePlugin_alu_ctrl 
        = ((((((((((((((((0x33U == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                         | (0x3bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                        | (0x13U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                       | (0x1bU == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                      | (0x23U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                     | (0x1023U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                    | (0x2023U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                   | (0x3023U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                  | ((0x40000033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                     | (0x4000003bU == (0xfe00707fU 
                                        & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))) 
                 | ((0x2033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                    | (0x2013U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))) 
                | ((0x3033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                   | (0x3013U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))) 
               | ((0x4033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                  | (0x4013U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))) 
              | ((((0x1033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                   | (0x1013U == (0xfc00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                  | (0x103bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                 | (0x101bU == (0xfc00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))) 
             | ((((0x5033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                  | (0x5013U == (0xfc00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                 | (0x503bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                | (0x501bU == (0xfc00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))) 
            | ((((0x40005033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                 | (0x40005013U == (0xfc00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                | (0x4000503bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
               | (0x4000501bU == (0xfc00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))))
            ? (((((((((0x33U == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                      | (0x3bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                     | (0x13U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                    | (0x1bU == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                   | (0x23U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                  | (0x1023U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                 | (0x2023U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                | (0x3023U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
                ? 1U : (((0x40000033U == (0xfe00707fU 
                                          & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                         | (0x4000003bU == (0xfe00707fU 
                                            & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
                         ? 2U : (((0x2033U == (0xfe00707fU 
                                               & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                                  | (0x2013U == (0x707fU 
                                                 & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
                                  ? 3U : (((0x3033U 
                                            == (0xfe00707fU 
                                                & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                                           | (0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
                                           ? 4U : (
                                                   ((0x4033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                                                    | (0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
                                                    ? 5U
                                                    : 
                                                   (((((0x1033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                                                       | (0x1013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                                                      | (0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                                                     | (0x101bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
                                                     ? 6U
                                                     : 
                                                    (((((0x5033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                                                        | (0x5013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                                                       | (0x503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                                                      | (0x501bU 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
                                                      ? 7U
                                                      : 8U)))))))
            : ((((((((((0x7033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                       | (0x7013U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                      | ((0x6033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                         | (0x6013U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))) 
                     | (0x37U == (0x7fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                    | (0x17U == (0x7fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                   | (0x6fU == (0x20007fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                  | (0x67U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                 | (0x63U == (0x717fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                | (0x1063U == (0x717fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
                ? (((0x7033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                    | (0x7013U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
                    ? 9U : (((0x6033U == (0xfe00707fU 
                                          & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                             | (0x6013U == (0x707fU 
                                            & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
                             ? 0xaU : ((0x37U == (0x7fU 
                                                  & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                        ? 0xbU : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                   ? 0xcU
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x20007fU 
                                                     & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                    ? 0xdU
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                     ? 0xeU
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x717fU 
                                                       & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                      ? 0xfU
                                                      : 0x10U)))))))
                : (((((((((0x4063U == (0x717fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                          | (0x5063U == (0x717fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                         | (0x6063U == (0x717fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                        | (0x7063U == (0x717fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                       | ((((((0x1073U == (0x707fU 
                                           & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                              | (0x2073U == (0x707fU 
                                             & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                             | (0x3073U == (0x707fU 
                                            & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                            | (0x5073U == (0x707fU 
                                           & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                           | (0x6073U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                          | (0x7073U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))) 
                      | (0x2000033U == (0xfe00707fU 
                                        & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                     | (0x2001033U == (0xfe00707fU 
                                       & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                    | (0x2002033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
                    ? ((0x4063U == (0x717fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                        ? 0x11U : ((0x5063U == (0x717fU 
                                                & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                    ? 0x12U : ((0x6063U 
                                                == 
                                                (0x717fU 
                                                 & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                ? 0x13U
                                                : (
                                                   (0x7063U 
                                                    == 
                                                    (0x717fU 
                                                     & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                    ? 0x14U
                                                    : 
                                                   (((((((0x1073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                                                         | (0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                                                        | (0x3073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                                                       | (0x5073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                                                      | (0x6073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                                                     | (0x7073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
                                                     ? 0x15U
                                                     : 
                                                    ((0x2000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                      ? 0x16U
                                                      : 
                                                     ((0x2001033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                       ? 0x17U
                                                       : 0x18U)))))))
                    : (((((((((0x2003033U == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                              | (0x2004033U == (0xfe00707fU 
                                                & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                             | (0x2005033U == (0xfe00707fU 
                                               & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                            | (0x2006033U == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                           | (0x2007033U == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                          | (0x200003bU == (0xfe00707fU 
                                            & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                         | (0x200403bU == (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
                        | (0x200503bU == (0xfe00707fU 
                                          & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
                        ? ((0x2003033U == (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                            ? 0x19U : ((0x2004033U 
                                        == (0xfe00707fU 
                                            & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                        ? 0x1aU : (
                                                   (0x2005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                    ? 0x1bU
                                                    : 
                                                   ((0x2006033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                     ? 0x1cU
                                                     : 
                                                    ((0x2007033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                      ? 0x1dU
                                                      : 
                                                     ((0x200003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                       ? 0x1eU
                                                       : 
                                                      ((0x200403bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                        ? 0x1fU
                                                        : 0x20U)))))))
                        : ((0x200603bU == (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                            ? 0x21U : ((0x200703bU 
                                        == (0xfe00707fU 
                                            & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                        ? 0x22U : 0U))))));
    if (((((((((3U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
               | (0x4003U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
              | (0x1003U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
             | (0x5003U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
            | (0x2003U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
           | (0x6003U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
          | (0x3003U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
         | (0x23U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))) {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_DecodePlugin_mem_ctrl 
            = ((3U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                ? 1U : ((0x4003U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                         ? 2U : ((0x1003U == (0x707fU 
                                              & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                  ? 3U : ((0x5003U 
                                           == (0x707fU 
                                               & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                           ? 4U : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                    ? 5U
                                                    : 
                                                   ((0x6003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                     ? 6U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                      ? 7U
                                                      : 8U)))))));
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_DecodePlugin_is_store 
            = ((3U != (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
               & ((0x4003U != (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                  & ((0x1003U != (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                     & ((0x5003U != (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                        & ((0x2003U != (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                           & ((0x6003U != (0x707fU 
                                           & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                              & (0x3003U != (0x707fU 
                                             & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))))))));
    } else {
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_DecodePlugin_mem_ctrl 
            = ((0x1023U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                ? 9U : ((0x2023U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                         ? 0xaU : ((0x3023U == (0x707fU 
                                                & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                    ? 0xbU : 0U)));
        vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_DecodePlugin_is_store 
            = ((0x1023U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
               | ((0x2023U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                  | (0x3023U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))));
    }
    vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__decode_DecodePlugin_csr_ctrl 
        = (((((((((0x73U == vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION) 
                  | (0x100073U == vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                 | (0x30200073U == vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)) 
                | (0x1073U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
               | (0x2073U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
              | (0x3073U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
             | (0x5073U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))) 
            | (0x6073U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)))
            ? ((0x73U == vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)
                ? 1U : ((0x100073U == vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)
                         ? 2U : ((0x30200073U == vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION)
                                  ? 3U : ((0x1073U 
                                           == (0x707fU 
                                               & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                           ? 4U : (
                                                   (0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                    ? 5U
                                                    : 
                                                   ((0x3073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                     ? 6U
                                                     : 
                                                    ((0x5073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                                                      ? 7U
                                                      : 8U)))))))
            : ((0x7073U == (0x707fU & vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_to_decode_INSTRUCTION))
                ? 9U : 0U));
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_fetch_flush)))) {
        if (vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__ports_s_ports_fire) {
            if ((1U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__fifo_ram_0 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1_cpu_rsp_payload_data;
            }
            if ((2U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__fifo_ram_1 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1_cpu_rsp_payload_data;
            }
            if ((4U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__fifo_ram_2 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1_cpu_rsp_payload_data;
            }
            if ((8U & ((IData)(1U) << (3U & (IData)(vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__fetch_FetchPlugin_instruction_stream_fifo__DOT__fifo_ram_3 
                    = vlSelf->SimTop__DOT__u_DandRiscvSimple__DOT__iCache_1_cpu_rsp_payload_data;
            }
        }
    }
}

void VSimTop___024root___sequent__TOP__2(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__3(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__5(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__6(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__9(VSimTop___024root* vlSelf);

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VSimTop___024root___sequent__TOP__3(vlSelf);
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VSimTop___024root___sequent__TOP__5(vlSelf);
        VSimTop___024root___sequent__TOP__6(vlSelf);
        VSimTop___024root___sequent__TOP__7(vlSelf);
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VSimTop___024root___sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
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
