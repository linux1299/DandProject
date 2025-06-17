// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

extern const VlUnpacked<CData/*2:0*/, 16> VSimTop__ConstPool__TABLE_h3595224e_0;
extern const VlUnpacked<QData/*47:0*/, 8> VSimTop__ConstPool__TABLE_hcaf4ada9_0;

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__50(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__50\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx8;
    CData/*2:0*/ __Vtableidx18;
    CData/*2:0*/ __Vtableidx23;
    CData/*2:0*/ __Vtableidx37;
    CData/*3:0*/ __Vtableidx113;
    // Body
    __Vtableidx113 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_0__DOT__lsu_ctrl_op_reg;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_0__DOT__dcache_size 
        = VSimTop__ConstPool__TABLE_h3595224e_0[__Vtableidx113];
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__alu_is_quo 
        = ((((0x10U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op)) 
             | (0x11U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op))) 
            | (0x15U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op))) 
           | (0x16U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__alu_is_rem 
        = ((((0x12U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op)) 
             | (0x13U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op))) 
            | (0x17U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op))) 
           | (0x18U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__alu_is_quo 
        = ((((0x10U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op)) 
             | (0x11U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op))) 
            | (0x15U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op))) 
           | (0x16U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__alu_is_rem 
        = ((((0x12U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op)) 
             | (0x13U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op))) 
            | (0x17U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op))) 
           | (0x18U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op)));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_bju_micro_op_rd_wen 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__rd_wen;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_exception 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1_exception;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_micro_op 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1_rob_micro_op;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__en_queue_fire_1) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_rd_wen 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_alu_micro_op_rd_wen;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__en_queue_fire_1) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_rd_wen 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_alu_micro_op_rd_wen;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_pc_next 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_pc_next;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_bpu_pred_taken 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_bpu_pred_taken;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_ready) {
        if ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) {
            if ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) {
                if ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_data 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_data_7;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_addr 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_addr_7;
                } else {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_data 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_data_6;
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_addr 
                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_addr_6;
                }
            } else if ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_data 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_data_5;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_addr 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_addr_5;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_data 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_data_4;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_addr 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_addr_4;
            }
        } else if ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) {
            if ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_data 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_data_3;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_addr 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_addr_3;
            } else {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_data 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_data_2;
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_addr 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_addr_2;
            }
        } else if ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_data 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_data_1;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_addr 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_addr_1;
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_data 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_data_0;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_rData_rd_addr 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_rd_addr_0;
        }
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__is_miss) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__evict_id_miss 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__evict_id;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_lsu_0__DOT__en_queue_fire_1) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_lsu_0__DOT__entry_micro_op_rd_wen 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_lsu_micro_op_rd_wen;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_bju_micro_op_src2_is_imm 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__src2_is_imm;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_alu_micro_op_src2_is_imm 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__src2_is_imm;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_imm 
            = (((((((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[0U]))) 
                    & (((QData)((IData)((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                        << 0x3fU) | (((QData)((IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                    << 0x3dU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                       << 0x3cU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                          << 0x3bU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                             << 0x3aU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                << 0x39U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                   << 0x38U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                      << 0x37U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                         << 0x36U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                            << 0x35U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                               << 0x34U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                   | ((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[2U]))) 
                      & (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                 >> 1U)))) 
                          << 0x3fU) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                            >> 1U)))) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                             >> 1U)))) 
                                         << 0x3dU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                >> 1U)))) 
                                            << 0x3cU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                   >> 1U)))) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                      >> 1U)))) 
                                                  << 0x3aU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                         >> 1U)))) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                            >> 1U)))) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                               >> 1U)))) 
                                                           << 0x37U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                              << 0x36U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                 << 0x35U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                    << 0x34U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                       << 0x33U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                          << 0x32U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                             << 0x31U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x30U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | (0x1fU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                  | ((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[5U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[4U]))) 
                     & (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                >> 2U)))) 
                         << 0x3fU) | (((QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                           >> 2U)))) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                            >> 2U)))) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                             >> 2U)))) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                >> 2U)))) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                   >> 2U)))) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                      >> 2U)))) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                         >> 2U)))) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                            >> 2U)))) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                               >> 2U)))) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1dU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1cU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 2U)) 
                                                                                | (0xfU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                 | ((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[7U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[6U]))) 
                    & (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                               >> 3U)))) 
                        << 0x3fU) | (((QData)((IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                          >> 3U)))) 
                                      << 0x3eU) | (
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                        >> 3U)))) 
                                                    << 0x3dU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                           >> 3U)))) 
                                                       << 0x3cU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                              >> 3U)))) 
                                                          << 0x3bU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                             << 0x3aU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                << 0x39U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                   << 0x38U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                      << 0x37U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                         << 0x36U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                            << 0x35U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                               << 0x34U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1cU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)) 
                                                                                | (7U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                | ((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[9U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[8U]))) 
                   & (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                              >> 4U)))) 
                       << 0x3fU) | (((QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                         >> 4U)))) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                       >> 4U)))) 
                                                   << 0x3dU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                          >> 4U)))) 
                                                      << 0x3cU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                             >> 4U)))) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                            << 0x3aU) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                               << 0x39U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                  << 0x38U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                     << 0x37U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                        << 0x36U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                           << 0x35U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                              << 0x34U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x33U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)) 
                                                                                | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
               | ((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[0xbU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[0xaU]))) 
                  & (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                             >> 5U)))) 
                      << 0x3fU) | (((QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                        >> 5U)))) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                      >> 5U)))) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                         >> 5U)))) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                            >> 5U)))) 
                                                        << 0x3bU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                               >> 5U)))) 
                                                           << 0x3aU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                              << 0x39U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                 << 0x38U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                    << 0x37U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                       << 0x36U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                          << 0x35U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                             << 0x34U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x33U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 2U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rs1_addr 
            = (0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                        >> 0xfU));
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rs2_addr 
            = (0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                        >> 0x14U));
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_pc 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_pc;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_bju_0__DOT__en_queue_fire_1) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_bju_0__DOT__entry_micro_op_exp_csr_addr 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_bju_micro_op_exp_csr_addr;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_7_delay_1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_7;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_6_delay_1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_6;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_5_delay_1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_5;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_4_delay_1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_4;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_3_delay_1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_3;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_2_delay_1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_2;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_1_delay_1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_1;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_0_delay_1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_0;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_lsu_0__DOT__en_queue_fire_1) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_lsu_0__DOT__entry_micro_op_lsu_is_store 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_lsu_micro_op_lsu_is_store;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__next_level_rdone 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__next_level_rvalid) 
           & (7U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__next_level_data_cnt_value)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__next_level_wdone 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1_next_level_rsp_valid) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1_next_level_rsp_payload_rvalid))) 
           & (0U == (IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_b_resp)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__bypass_rsp_valid_d1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1_cpu_bypass_rsp_valid;
    __Vtableidx1 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_exception;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_payload_exception_string 
        = VSimTop__ConstPool__TABLE_hcaf4ada9_0[__Vtableidx1];
    __Vtableidx8 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_exception;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_ports_payload_exception_string 
        = VSimTop__ConstPool__TABLE_hcaf4ada9_0[__Vtableidx8];
    __Vtableidx18 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_exception;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_m2sPipe_payload_exception_string 
        = VSimTop__ConstPool__TABLE_hcaf4ada9_0[__Vtableidx18];
    __Vtableidx23 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_exception;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_exception_string 
        = VSimTop__ConstPool__TABLE_hcaf4ada9_0[__Vtableidx23];
    __Vtableidx37 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_exception;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_payload_exception_string 
        = VSimTop__ConstPool__TABLE_hcaf4ada9_0[__Vtableidx37];
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_alu_micro_op_rd_wen 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__rd_wen;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_pc_next 
            = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr))
                ? ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr))
                    ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_7
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_6)
                    : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_5
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_4))
                : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr))
                    ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_3
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_2)
                    : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_1
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_0)));
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_bpu_pred_taken 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__tmp_ports_m_ports_payload;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_lsu_micro_op_rd_wen 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__rd_wen;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_pc 
            = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr))
                ? ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr))
                    ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_7
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_6)
                    : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_5
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_4))
                : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr))
                    ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_3
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_2)
                    : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__read_ptr))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_1
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_0)));
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_bju_micro_op_exp_csr_addr 
            = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
               >> 0x14U);
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_0__DOT__lsu_cen 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_lsu_0__DOT__entry_micro_op_lsu_is_load) 
           | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_lsu_0__DOT__entry_micro_op_lsu_is_store));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_lsu_micro_op_lsu_is_store 
            = (0x23U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction));
    }
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
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow)))) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__ports_s_ports_fire) {
            if ((0x80U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_7 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc;
            }
            if ((0x40U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_6 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc;
            }
            if ((0x20U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_5 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc;
            }
            if ((0x10U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_4 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc;
            }
            if ((8U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_3 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc;
            }
            if ((4U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_2 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc;
            }
            if ((2U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc;
            }
            if ((1U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_ram_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc;
            }
        }
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__ports_s_ports_fire) {
            if ((0x80U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_7 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
            }
            if ((0x40U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_6 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
            }
            if ((0x20U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_5 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
            }
            if ((0x10U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_4 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
            }
            if ((8U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_3 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
            }
            if ((4U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_2 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
            }
            if ((2U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
            }
            if ((1U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_ram_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc;
            }
        }
    }
}

VL_INLINE_OPT void VSimTop___024root___combo__TOP__51(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___combo__TOP__51\n"); );
    // Body
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (2U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (4U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (8U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x10U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x20U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x40U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x80U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x100U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x200U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x400U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x800U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x1000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x2000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x4000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x8000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x10000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x20000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x40000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x80000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x100000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x200000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x400000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x800000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x1000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x2000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x4000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x8000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x10000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x20000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x40000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x80000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
               | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
              >> 0x1fU));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (2U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (4U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (8U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x10U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x20U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x40U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x80U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x100U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x200U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x400U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x800U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x1000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x2000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x4000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x8000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x10000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x20000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x40000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x80000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x100000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x200000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x400000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x800000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x1000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x2000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x4000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x8000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x10000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x20000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x40000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x80000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
               | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
              >> 0x1fU));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (2U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (4U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (8U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x10U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x20U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x40U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x80U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x100U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x200U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x400U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x800U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x1000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x2000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x4000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x8000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x10000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x20000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x40000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x80000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x100000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x200000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x400000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x800000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x1000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x2000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x4000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x8000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x10000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x20000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x40000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x80000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
               | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
              >> 0x1fU));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (2U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (4U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (8U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x10U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x20U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x40U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x80U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x100U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x200U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x400U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x800U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x1000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x2000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x4000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x8000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x10000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x20000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x40000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x80000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x100000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x200000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x400000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x800000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x1000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x2000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x4000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x8000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x10000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x20000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x40000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x80000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
        = ((0x1eU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U]) 
           | (0x1fU & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                       >> 0x1fU)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
        = ((0x1dU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U]) 
           | (2U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[4U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[4U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
        = ((0x1bU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U]) 
           | (4U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[4U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[4U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
        = ((0x17U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U]) 
           | (8U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[4U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[4U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
        = ((0xfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U]) 
           | (0x10U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[4U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[4U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[0U] 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U] 
           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[1U] 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U] 
           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[2U] 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U] 
           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[3U] 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U] 
           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[4U] 
        = (0xfU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[4U] 
                   ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U]));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (2U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (4U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (8U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x10U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x20U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x40U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x80U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x100U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x200U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x400U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x800U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x1000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x2000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x4000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x8000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x10000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x20000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x40000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x80000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x100000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x200000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x400000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x800000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x1000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x2000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x4000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x8000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x10000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x20000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x40000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]) 
           | (0x80000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U]) 
               | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[0U]) 
              >> 0x1fU));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (2U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (4U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (8U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x10U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x20U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x40U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x80U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x100U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x200U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x400U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x800U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x1000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x2000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x4000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x8000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x10000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x20000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x40000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x80000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x100000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x200000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x400000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x800000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x1000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x2000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x4000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x8000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x10000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x20000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x40000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]) 
           | (0x80000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U]) 
               | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[1U]) 
              >> 0x1fU));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (2U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (4U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (8U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x10U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x20U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x40U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x80U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x100U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x200U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x400U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x800U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x1000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x2000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x4000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x8000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x10000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x20000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x40000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x80000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x100000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x200000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x400000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x800000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x1000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x2000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x4000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x8000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x10000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x20000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x40000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]) 
           | (0x80000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U]) 
               | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[2U]) 
              >> 0x1fU));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (2U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (4U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (8U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x10U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x20U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x40U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x80U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x100U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x200U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x400U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x800U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                        << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x1000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x2000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x4000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x8000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                         << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x10000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x20000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x40000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x80000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x100000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x200000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x400000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x800000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                           << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x1000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x2000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x4000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x8000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                            << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x10000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x20000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x40000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]) 
           | (0x80000000U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                              | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                             << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
        = ((0x1eU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U]) 
           | (0x1fU & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[3U]) 
                       >> 0x1fU)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
        = ((0x1dU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U]) 
           | (2U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[4U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[4U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
        = ((0x1bU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U]) 
           | (4U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[4U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[4U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
        = ((0x17U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U]) 
           | (8U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[4U]) 
                     | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[4U]) 
                    << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
        = ((0xfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U]) 
           | (0x10U & (((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[4U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__g[4U]) 
                       << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[0U] 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[0U] 
           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U]);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[1U] 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[1U] 
           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U]);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[2U] 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[2U] 
           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U]);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[3U] 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[3U] 
           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U]);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[4U] 
        = (0xfU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__p[4U] 
                   ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U]));
}

extern const VlUnpacked<IData/*31:0*/, 16> VSimTop__ConstPool__TABLE_h99921c07_0;
extern const VlUnpacked<QData/*47:0*/, 32> VSimTop__ConstPool__TABLE_hd257e550_0;
extern const VlUnpacked<QData/*47:0*/, 16> VSimTop__ConstPool__TABLE_ha9f3bb8c_0;
extern const VlUnpacked<QData/*39:0*/, 16> VSimTop__ConstPool__TABLE_hd7f1afcf_0;

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__53(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__53\n"); );
    // Init
    CData/*2:0*/ __Vtableidx13;
    CData/*3:0*/ __Vtableidx14;
    CData/*3:0*/ __Vtableidx15;
    CData/*4:0*/ __Vtableidx16;
    CData/*3:0*/ __Vtableidx17;
    CData/*4:0*/ __Vtableidx28;
    CData/*3:0*/ __Vtableidx29;
    CData/*3:0*/ __Vtableidx30;
    CData/*3:0*/ __Vtableidx31;
    CData/*2:0*/ __Vtableidx32;
    CData/*4:0*/ __Vtableidx33;
    CData/*3:0*/ __Vtableidx34;
    CData/*3:0*/ __Vtableidx35;
    CData/*3:0*/ __Vtableidx36;
    // Body
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr 
            = (0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                        >> 7U));
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
            = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr))
                ? ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr))
                    ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_7
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_6)
                    : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_5
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_4))
                : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr))
                    ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_3
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_2)
                    : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr))
                        ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_1
                        : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_0)));
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[0U] 
        = (IData)((QData)((IData)((0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                            >> 0xfU)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[1U] 
        = (IData)(((QData)((IData)((0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                             >> 0xfU)))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[2U] 
        = (IData)((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                >> 0x14U)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[3U] 
        = (IData)(((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                 >> 0x14U)))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[4U] 
        = (IData)((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                      >> 7U)))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[5U] 
        = (IData)(((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)(((0xfe0U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                       >> 7U)))))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[6U] 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[7U] 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[8U] 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[9U] 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[0xaU] 
        = (IData)((((QData)((IData)((- (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data[0xbU] 
        = (IData)(((((QData)((IData)((- (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                 >> 0x1fU))))) 
                     << 0x20U) | (QData)((IData)((0xfffff000U 
                                                  & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__src2_is_imm 
        = (((((((0x13U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
                | (0x1bU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
               | (3U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
              | (0x67U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
             | (0x23U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
            | ((0x37U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
               | (0x17U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
           | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1_rob_micro_op 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__tmp_alu_ctrl_sel 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__ebreak 
        = (IData)((0x100073U == (0xfff0707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__ecall 
        = (IData)((0x73U == (0xfff0707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__mret 
        = (IData)((0x30200073U == (0xfff0707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrci 
        = (IData)((0x7073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow)))) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__ports_s_ports_fire) {
            if ((0x80U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_7 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1;
            }
            if ((0x40U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_6 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1;
            }
            if ((0x20U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_5 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1;
            }
            if ((0x10U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_4 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1;
            }
            if ((8U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_3 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1;
            }
            if ((4U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_2 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1;
            }
            if ((2U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_1 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1;
            }
            if ((1U & ((IData)(1U) << (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_0 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1;
            }
        }
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_op 
        = (((((((((((1U & (- (IData)((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel))))) 
                    | (2U & (- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                              >> 1U)))))) 
                   | (3U & (- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                             >> 2U)))))) 
                  | (4U & ((8U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel)) 
                           | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                     >> 1U)) | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                                 >> 3U))))))))) 
                 | (5U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                 >> 1U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                   >> 2U)) 
                                            | ((2U 
                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                   >> 3U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                     >> 4U))))))) 
                | (6U & (- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                          >> 5U)))))) 
               | (7U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                               >> 3U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                 >> 4U)) 
                                          | (3U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                                 >> 6U))))))))) 
              | (8U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                              >> 4U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                >> 5U)) 
                                         | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                   >> 6U)) 
                                            | (1U & 
                                               ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                >> 7U))))))) 
             | (9U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                             >> 5U)) | (7U & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                            >> 8U)))))))) 
            | (0xaU & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                              >> 6U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                >> 7U)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                                >> 9U))))))))) 
           | (0xbU & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                             >> 7U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                               >> 8U)) 
                                        | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                  >> 9U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                               >> 0xaU)))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__tmp_alu_ctrl_sel) 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__rd_wen 
        = ((((((0x23U != (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
               & (0x63U != (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
              & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__ebreak))) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__ecall))) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__mret))) 
           & (0xfU != (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1_exception 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__ecall)
            ? 1U : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__ebreak)
                     ? 2U : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__mret)
                              ? 3U : 0U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrci) 
            << 8U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrsi) 
                       << 7U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrwi) 
                                  << 6U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrc) 
                                             << 5U) 
                                            | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrs) 
                                                << 4U) 
                                               | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrw) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__mret) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__ebreak) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__ecall)))))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csri 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrwi) 
            | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrsi)) 
           | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrci));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_memsymbol_read_3) 
            << 0x18U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_memsymbol_read_2) 
                          << 0x10U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_memsymbol_read_1) 
                                        << 8U) | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_memsymbol_read))));
    __Vtableidx17 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_payload_lsu_micro_op_lsu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_h99921c07_0[__Vtableidx17];
    __Vtableidx29 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_micro_op_lsu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_h99921c07_0[__Vtableidx29];
    __Vtableidx34 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__tmp_lsu_micro_op_lsu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_h99921c07_0[__Vtableidx34];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_op 
        = ((((((((((((((((((((((((1U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  << 4U)) 
                                        | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  << 3U)) 
                                           | (7U & 
                                              (- (IData)(
                                                         (1U 
                                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel))))))) 
                                 | (2U & ((0x10U & 
                                           (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            << 3U)) 
                                          | ((8U & 
                                              (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               << 2U)) 
                                             | (7U 
                                                & (- (IData)(
                                                             (1U 
                                                              & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                 >> 1U))))))))) 
                                | (3U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   << 2U)) 
                                         | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   << 1U)) 
                                            | ((4U 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                   >> 2U)))))))))) 
                               | (4U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  << 1U)) 
                                        | ((8U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                           | ((4U & 
                                               (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 1U)) 
                                              | ((2U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 3U)))))))) 
                              | (5U & ((0x10U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                       | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 >> 1U)) 
                                          | (7U & (- (IData)(
                                                             (1U 
                                                              & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                 >> 4U))))))))) 
                             | (6U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 1U)) 
                                      | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 2U)) 
                                         | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 3U)) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                              >> 5U)))))))))) 
                            | (7U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 2U)) 
                                     | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 3U)) 
                                        | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  >> 4U)) 
                                           | ((2U & 
                                               (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 5U)) 
                                              | (1U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    >> 6U)))))))) 
                           | (8U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 3U)) 
                                    | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 4U)) 
                                       | (7U & (- (IData)(
                                                          (1U 
                                                           & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                              >> 7U))))))))) 
                          | (9U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 4U)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 5U)) 
                                      | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 6U)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 8U)))))))))) 
                         | (0xaU & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 5U)) 
                                    | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 6U)) 
                                       | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 >> 7U)) 
                                          | ((2U & 
                                              (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 8U)) 
                                             | (1U 
                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 9U)))))))) 
                        | (0xbU & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 6U)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 7U)) 
                                      | (7U & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                             >> 0xaU))))))))) 
                       | (0xcU & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            >> 7U)) 
                                  | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            >> 8U)) 
                                     | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 9U)) 
                                        | (3U & (- (IData)(
                                                           (1U 
                                                            & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                               >> 0xbU)))))))))) 
                      | (0xdU & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                           >> 8U)) 
                                 | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                           >> 9U)) 
                                    | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 0xaU)) 
                                       | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 >> 0xbU)) 
                                          | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 0xcU)))))))) 
                     | (0xeU & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 9U)) | 
                                ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                        >> 0xaU)) | 
                                 (7U & (- (IData)((1U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0xdU))))))))) 
                    | (0xfU & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                         >> 0xaU)) 
                               | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                         >> 0xbU)) 
                                  | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            >> 0xcU)) 
                                     | (3U & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                            >> 0xeU)))))))))) 
                   | (0x10U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                         >> 0xbU)) 
                               | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                         >> 0xcU)) 
                                  | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            >> 0xdU)) 
                                     | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 0xeU)) 
                                        | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 >> 0xfU)))))))) 
                  | (0x11U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                        >> 0xcU)) | 
                              ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                      >> 0xdU)) | (7U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                    >> 0x10U))))))))) 
                 | (0x12U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xdU)) | 
                             ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                     >> 0xeU)) | ((4U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0xfU)) 
                                                  | (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                      >> 0x11U)))))))))) 
                | (0x13U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                      >> 0xeU)) | (
                                                   (8U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0xfU)) 
                                                   | ((4U 
                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                          >> 0x10U)) 
                                                      | ((2U 
                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                             >> 0x11U)) 
                                                         | (1U 
                                                            & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                               >> 0x12U)))))))) 
               | (0x14U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                     >> 0xfU)) | ((8U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0x10U)) 
                                                  | (7U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                      >> 0x13U))))))))) 
              | (0x15U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                    >> 0x10U)) | ((8U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0x11U)) 
                                                  | ((4U 
                                                      & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                         >> 0x12U)) 
                                                     | (3U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                         >> 0x14U)))))))))) 
             | (0x16U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                   >> 0x11U)) | ((8U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     >> 0x12U)) 
                                                 | ((4U 
                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                        >> 0x13U)) 
                                                    | ((2U 
                                                        & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                           >> 0x14U)) 
                                                       | (1U 
                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                             >> 0x15U)))))))) 
            | (0x17U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                  >> 0x12U)) | ((8U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    >> 0x13U)) 
                                                | (7U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                    >> 0x16U))))))))) 
           | (0x18U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                 >> 0x13U)) | ((8U 
                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 0x14U)) 
                                               | ((4U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0x15U)) 
                                                  | (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                      >> 0x17U))))))))));
    __Vtableidx13 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1_exception;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_payload_exception_string 
        = VSimTop__ConstPool__TABLE_hcaf4ada9_0[__Vtableidx13];
    __Vtableidx32 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1_exception;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exception_string 
        = VSimTop__ConstPool__TABLE_hcaf4ada9_0[__Vtableidx32];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_op 
        = (((((((((1U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                << 3U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                  << 2U)) 
                                           | (3U & 
                                              (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel)))))))) 
                  | (2U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                  << 2U)) | ((4U & 
                                              ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                               << 1U)) 
                                             | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                                 >> 1U))))))))) 
                 | (3U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                 << 1U)) | ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel)) 
                                            | ((2U 
                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                   >> 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                     >> 2U))))))) 
                | (4U & (- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                          >> 3U)))))) 
               | (5U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                               >> 1U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                 >> 2U)) 
                                          | (3U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                                 >> 4U))))))))) 
              | (6U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                              >> 2U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                >> 3U)) 
                                         | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                   >> 4U)) 
                                            | (1U & 
                                               ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                >> 5U))))))) 
             | (7U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                             >> 3U)) | (7U & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                            >> 6U)))))))) 
            | (8U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                            >> 4U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                              >> 5U)) 
                                       | (3U & (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                              >> 7U))))))))) 
           | (9U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                           >> 5U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                             >> 6U)) 
                                      | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                >> 7U)) 
                                         | (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                  >> 8U)))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type 
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
                                               | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csri))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel 
        = ((((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csri) 
               | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrw)) 
              | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrs)) 
             | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrc)) 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm 
        = ((0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1))
            ? (((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                    >> 0x1fU)))) << 0x15U) 
               | (QData)((IData)(((0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1) 
                                     | ((0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                            >> 0x14U))))))))
            : ((0x63U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1))
                ? (((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                        >> 0x1fU)))) 
                    << 0xdU) | (QData)((IData)(((0x1000U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                            >> 7U))))))))
                : 0ULL));
    __Vtableidx16 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_payload_alu_micro_op_alu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd257e550_0[__Vtableidx16];
    __Vtableidx28 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_micro_op_alu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd257e550_0[__Vtableidx28];
    __Vtableidx33 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__tmp_alu_micro_op_alu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd257e550_0[__Vtableidx33];
    __Vtableidx15 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_payload_bju_micro_op_exp_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_ha9f3bb8c_0[__Vtableidx15];
    __Vtableidx31 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_micro_op_exp_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_ha9f3bb8c_0[__Vtableidx31];
    __Vtableidx36 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__tmp_bju_micro_op_exp_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_ha9f3bb8c_0[__Vtableidx36];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_op 
        = ((((((((((1U & (- (IData)((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel))))) 
                   | (2U & (- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                             >> 1U)))))) 
                  | (3U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                  << 1U)) | ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel)) 
                                             | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                                 >> 2U))))))))) 
                 | (4U & ((8U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel)) 
                          | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                    >> 1U)) | ((2U 
                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                     >> 3U))))))) 
                | (5U & (- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                          >> 4U)))))) 
               | (6U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                               >> 2U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                 >> 3U)) 
                                          | (3U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                                 >> 5U))))))))) 
              | (7U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                              >> 3U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                >> 4U)) 
                                         | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                   >> 5U)) 
                                            | (1U & 
                                               ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                >> 6U))))))) 
             | (8U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                             >> 4U)) | (7U & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                            >> 7U)))))))) 
            | (9U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                            >> 5U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                              >> 6U)) 
                                       | (3U & (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                              >> 8U))))))))) 
           | (0xaU & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                             >> 6U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                               >> 7U)) 
                                        | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                  >> 8U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                               >> 9U)))))));
    __Vtableidx14 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_payload_bju_micro_op_bju_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd7f1afcf_0[__Vtableidx14];
    __Vtableidx30 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_micro_op_bju_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd7f1afcf_0[__Vtableidx30];
    __Vtableidx35 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__tmp_bju_micro_op_bju_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd7f1afcf_0[__Vtableidx35];
}

VL_INLINE_OPT void VSimTop___024root___combo__TOP__54(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___combo__TOP__54\n"); );
    // Body
    vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn 
        = (1U & (~ (IData)(vlSelf->reset)));
}

extern const VlUnpacked<VlWide<3>/*71:0*/, 8> VSimTop__ConstPool__TABLE_h1abb82eb_0;
extern const VlUnpacked<CData/*1:0*/, 64> VSimTop__ConstPool__TABLE_he0435f8d_0;

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__55(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__55\n"); );
    // Init
    CData/*5:0*/ __Vtableidx6;
    CData/*2:0*/ __Vtableidx63;
    CData/*2:0*/ __Vtableidx64;
    CData/*2:0*/ __Vtableidx65;
    CData/*2:0*/ __Vtableidx66;
    CData/*2:0*/ __Vtableidx67;
    CData/*2:0*/ __Vtableidx68;
    CData/*2:0*/ __Vtableidx69;
    CData/*2:0*/ __Vtableidx70;
    CData/*2:0*/ __Vtableidx76;
    // Body
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_0_interrupt_valid) 
           | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_0_redirect_valid));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
           & (0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
           & (0x63U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full 
        = (((7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr)) 
            == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))) 
           & ((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr) 
                     >> 3U)) != (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr) 
                                       >> 3U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr) 
           == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_fetch_1_dst_ports_thrown_valid 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rValid;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_fetch_1_dst_ports_thrown_valid = 0U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__rsp_flush))) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rValid;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1_en_rob_ports_ready 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1_en_rob_ports_ready = 1U;
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1_en_rob_ports_ready 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when)
            ? (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_reg 
               + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm))
            : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when_1)
                ? (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_reg 
                   + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm))
                : 0U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_predict_taken 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when) 
           | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when_1) 
              & (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm 
                         >> 0x1fU))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid 
        = (1U & ((((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_empty)) 
                   & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty))) 
                  & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty))) 
                 & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__src_stream_valid 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_fetch_1_dst_ports_thrown_valid;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__src_stream_valid = 0U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__ports_s_ports_fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_2 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_4 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_6 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_8 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_10 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_12 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_14 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_16 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_0 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__to_isq_onehot)) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_1 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
            & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__to_isq_onehot) 
               >> 1U)) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_2 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
            & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__to_isq_onehot) 
               >> 2U)) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_3 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
            & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__to_isq_onehot) 
               >> 3U)) & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready)) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_bju_micro_op_rd_wen));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_0 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready)) 
           & (0U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tail_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_1 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready)) 
           & (1U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tail_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_2 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready)) 
           & (2U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tail_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_3 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready)) 
           & (3U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tail_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_4 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready)) 
           & (4U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tail_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_5 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready)) 
           & (5U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tail_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_6 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready)) 
           & (6U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tail_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_7 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob_en_rob_ready)) 
           & (7U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tail_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_ready 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1_en_rob_ports_ready;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rValid)))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_ready = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetch_valid) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow))) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_predict_taken)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_valid 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_valid = 0U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_bju_0__DOT__en_queue_fire_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_0) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_bju_0_en_queue_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__en_queue_fire_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_1) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0_en_queue_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__en_queue_fire_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_2) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1_en_queue_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_lsu_0__DOT__en_queue_fire_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_3) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_lsu_0_en_queue_ready));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_0 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_1 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (1U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_2 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (2U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_3 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_4 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_5 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (5U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_6 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (6U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_7 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (7U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_8 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (8U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_9 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (9U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_10 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0xaU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_11 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0xbU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_12 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0xcU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_13 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0xdU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_14 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0xeU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_15 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0xfU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_16 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x10U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_17 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x11U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_18 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x12U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_19 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x13U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_20 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x14U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_21 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x15U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_22 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x16U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_23 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x17U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_24 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x18U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_25 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x19U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_26 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x1aU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_27 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x1bU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_28 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x1cU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_29 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x1dU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_30 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x1eU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_31 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld) 
           & (0x1fU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_rd_addr)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_0 
        = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_0))
            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_0)
                ? 1U : 0U) : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_0))
                               ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_0))
                                   ? (((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_busy_0) 
                                         & (0U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exception_0))) 
                                        & ((0U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) 
                                           & (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_0)))) 
                                       | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_0) 
                                          | (0x7bU 
                                             == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_0)))
                                       ? 4U : 3U) : 
                                  (((0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exe_done_bits_0)) 
                                    | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_0) 
                                       | (0x7bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_0)))
                                    ? 3U : 2U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_0))
                                                    ? 
                                                   (((0U 
                                                      != 
                                                      ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_isq_rd_equal_0) 
                                                       & (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_lsu_0_de_queue_fire) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_1_de_queue_fire) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_0_de_queue_fire) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_bju_0_de_queue_fire)))))) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_0) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_0)))
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_0) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_1 
        = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_1))
            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_1)
                ? 1U : 0U) : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_1))
                               ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_1))
                                   ? (((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_busy_1) 
                                         & (0U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exception_1))) 
                                        & ((1U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) 
                                           & (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_1)))) 
                                       | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_1) 
                                          | (0x7bU 
                                             == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_1)))
                                       ? 4U : 3U) : 
                                  (((0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exe_done_bits_1)) 
                                    | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_1) 
                                       | (0x7bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_1)))
                                    ? 3U : 2U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_1))
                                                    ? 
                                                   (((0U 
                                                      != 
                                                      ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_isq_rd_equal_1) 
                                                       & (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_lsu_0_de_queue_fire) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_1_de_queue_fire) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_0_de_queue_fire) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_bju_0_de_queue_fire)))))) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_1) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_1)))
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_1) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_2 
        = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_2))
            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_2)
                ? 1U : 0U) : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_2))
                               ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_2))
                                   ? (((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_busy_2) 
                                         & (0U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exception_2))) 
                                        & ((2U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) 
                                           & (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_2)))) 
                                       | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_2) 
                                          | (0x7bU 
                                             == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_2)))
                                       ? 4U : 3U) : 
                                  (((0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exe_done_bits_2)) 
                                    | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_2) 
                                       | (0x7bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_2)))
                                    ? 3U : 2U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_2))
                                                    ? 
                                                   (((0U 
                                                      != 
                                                      ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_isq_rd_equal_2) 
                                                       & (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_lsu_0_de_queue_fire) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_1_de_queue_fire) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_0_de_queue_fire) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_bju_0_de_queue_fire)))))) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_2) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_2)))
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_2) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_3 
        = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_3))
            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_3)
                ? 1U : 0U) : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_3))
                               ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_3))
                                   ? (((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_busy_3) 
                                         & (0U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exception_3))) 
                                        & ((3U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) 
                                           & (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_3)))) 
                                       | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_3) 
                                          | (0x7bU 
                                             == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_3)))
                                       ? 4U : 3U) : 
                                  (((0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exe_done_bits_3)) 
                                    | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_3) 
                                       | (0x7bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_3)))
                                    ? 3U : 2U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_3))
                                                    ? 
                                                   (((0U 
                                                      != 
                                                      ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_isq_rd_equal_3) 
                                                       & (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_lsu_0_de_queue_fire) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_1_de_queue_fire) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_0_de_queue_fire) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_bju_0_de_queue_fire)))))) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_3) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_3)))
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_3) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_4 
        = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_4))
            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_4)
                ? 1U : 0U) : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_4))
                               ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_4))
                                   ? (((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_busy_4) 
                                         & (0U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exception_4))) 
                                        & ((4U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) 
                                           & (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_4)))) 
                                       | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_4) 
                                          | (0x7bU 
                                             == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_4)))
                                       ? 4U : 3U) : 
                                  (((0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exe_done_bits_4)) 
                                    | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_4) 
                                       | (0x7bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_4)))
                                    ? 3U : 2U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_4))
                                                    ? 
                                                   (((0U 
                                                      != 
                                                      ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_isq_rd_equal_4) 
                                                       & (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_lsu_0_de_queue_fire) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_1_de_queue_fire) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_0_de_queue_fire) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_bju_0_de_queue_fire)))))) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_4) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_4)))
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_4) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_5 
        = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_5))
            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_5)
                ? 1U : 0U) : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_5))
                               ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_5))
                                   ? (((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_busy_5) 
                                         & (0U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exception_5))) 
                                        & ((5U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) 
                                           & (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_5)))) 
                                       | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_5) 
                                          | (0x7bU 
                                             == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_5)))
                                       ? 4U : 3U) : 
                                  (((0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exe_done_bits_5)) 
                                    | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_5) 
                                       | (0x7bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_5)))
                                    ? 3U : 2U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_5))
                                                    ? 
                                                   (((0U 
                                                      != 
                                                      ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_isq_rd_equal_5) 
                                                       & (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_lsu_0_de_queue_fire) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_1_de_queue_fire) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_0_de_queue_fire) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_bju_0_de_queue_fire)))))) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_5) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_5)))
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_5) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_6 
        = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_6))
            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_6)
                ? 1U : 0U) : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_6))
                               ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_6))
                                   ? (((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_busy_6) 
                                         & (0U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exception_6))) 
                                        & ((6U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) 
                                           & (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_6)))) 
                                       | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_6) 
                                          | (0x7bU 
                                             == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_6)))
                                       ? 4U : 3U) : 
                                  (((0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exe_done_bits_6)) 
                                    | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_6) 
                                       | (0x7bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_6)))
                                    ? 3U : 2U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_6))
                                                    ? 
                                                   (((0U 
                                                      != 
                                                      ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_isq_rd_equal_6) 
                                                       & (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_lsu_0_de_queue_fire) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_1_de_queue_fire) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_0_de_queue_fire) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_bju_0_de_queue_fire)))))) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_6) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_6)))
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_6) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_7 
        = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_7))
            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_7)
                ? 1U : 0U) : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_7))
                               ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_7))
                                   ? (((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_busy_7) 
                                         & (0U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exception_7))) 
                                        & ((7U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))) 
                                           & (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_7)))) 
                                       | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_7) 
                                          | (0x7bU 
                                             == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_7)))
                                       ? 4U : 3U) : 
                                  (((0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_exe_done_bits_7)) 
                                    | ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_7) 
                                       | (0x7bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_7)))
                                    ? 3U : 2U)) : (
                                                   (1U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_7))
                                                    ? 
                                                   (((0U 
                                                      != 
                                                      ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_isq_rd_equal_7) 
                                                       & (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_lsu_0_de_queue_fire) 
                                                           << 3U) 
                                                          | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_1_de_queue_fire) 
                                                              << 2U) 
                                                             | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_alu_0_de_queue_fire) 
                                                                 << 1U) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_isq_bju_0_de_queue_fire)))))) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_7) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_instruction_7)))
                                                     ? 2U
                                                     : 1U)
                                                    : 
                                                   (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_7) 
                                                     | ((0x6bU 
                                                         == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction) 
                                                        | (0x7bU 
                                                           == vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_rData_instruction)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__tmp_src_ports_ready_1 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_ready;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__tmp_src_ports_ready_1 = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__ports_s_ports_fire 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_full)));
    __Vtableidx63 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_0;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_0_string[0U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx63][0U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_0_string[1U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx63][1U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_0_string[2U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx63][2U];
    __Vtableidx64 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_1;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_1_string[0U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx64][0U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_1_string[1U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx64][1U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_1_string[2U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx64][2U];
    __Vtableidx65 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_2;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_2_string[0U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx65][0U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_2_string[1U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx65][1U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_2_string[2U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx65][2U];
    __Vtableidx66 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_3;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_3_string[0U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx66][0U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_3_string[1U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx66][1U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_3_string[2U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx66][2U];
    __Vtableidx67 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_4;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_4_string[0U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx67][0U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_4_string[1U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx67][1U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_4_string[2U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx67][2U];
    __Vtableidx68 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_5;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_5_string[0U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx68][0U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_5_string[1U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx68][1U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_5_string[2U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx68][2U];
    __Vtableidx69 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_6;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_6_string[0U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx69][0U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_6_string[1U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx69][1U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_6_string[2U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx69][2U];
    __Vtableidx70 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_7;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_7_string[0U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx70][0U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_7_string[1U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx70][1U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_7_string[2U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx70][2U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_tmp_de_rob_comb_valid 
        = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))
            ? ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))
                ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))
                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_7)
                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_6))
                : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))
                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_5)
                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_4)))
            : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))
                ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))
                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_3)
                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_2))
                : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))
                    ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_1)
                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_0))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1_dst_ports_ready 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__tmp_src_ports_ready_1;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1_dst_ports_ready = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_0 
        = (((4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_tmp_de_rob_comb_valid)) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_ready)) 
           & (0U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_1 
        = (((4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_tmp_de_rob_comb_valid)) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_ready)) 
           & (1U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_2 
        = (((4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_tmp_de_rob_comb_valid)) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_ready)) 
           & (2U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_3 
        = (((4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_tmp_de_rob_comb_valid)) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_ready)) 
           & (3U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_4 
        = (((4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_tmp_de_rob_comb_valid)) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_ready)) 
           & (4U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_5 
        = (((4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_tmp_de_rob_comb_valid)) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_ready)) 
           & (5U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_6 
        = (((4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_tmp_de_rob_comb_valid)) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_ready)) 
           & (6U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_7 
        = (((4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_tmp_de_rob_comb_valid)) 
            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__de_rob_comb_ready)) 
           & (7U == (7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__head_ptr))));
    __Vtableidx76 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_tmp_de_rob_comb_valid;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_de_rob_comb_valid_string[0U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx76][0U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_de_rob_comb_valid_string[1U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx76][1U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_de_rob_comb_valid_string[2U] 
        = VSimTop__ConstPool__TABLE_h1abb82eb_0[__Vtableidx76][2U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1_dst_ports_ready;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rValid)))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready = 1U;
    }
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt_next 
        = (0xfU & ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
                     & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full))) 
                    & (~ ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty)) 
                          & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1))))
                    ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt) 
                       - (IData)(1U)) : (((~ ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
                                              & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full)))) 
                                          & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty)) 
                                             & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1)))
                                          ? ((IData)(1U) 
                                             + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt))
                                          : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt_next 
        = (0xfU & ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid) 
                     & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_full))) 
                    & (~ ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_empty)) 
                          & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire))))
                    ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt) 
                       - (IData)(1U)) : (((~ ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid) 
                                              & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_full)))) 
                                          & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_empty)) 
                                             & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire)))
                                          ? ((IData)(1U) 
                                             + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt))
                                          : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt_next 
        = (0xfU & ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
                     & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_full))) 
                    & (~ ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_empty)) 
                          & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_2))))
                    ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt) 
                       - (IData)(1U)) : (((~ ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
                                              & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_full)))) 
                                          & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_empty)) 
                                             & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_2)))
                                          ? ((IData)(1U) 
                                             + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt))
                                          : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt_next 
        = (0xfU & ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
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
    __Vtableidx6 = (0x20U | (((((0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt_next)) 
                                & (0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt_next))) 
                               & (0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt_next))) 
                              << 4U) | ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid) 
                                          & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready))) 
                                         << 2U) | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetchFSM_state_curr))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetchFSM_state_next 
        = VSimTop__ConstPool__TABLE_he0435f8d_0[__Vtableidx6];
}

void VSimTop___024root___sequent__TOP__24(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__26(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__27(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__28(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__29(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__30(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__31(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__32(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__33(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__34(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__35(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__36(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__37(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__38(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__39(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__40(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__41(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__42(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__43(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__44(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__45(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__46(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__47(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__48(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__52(VSimTop___024root* vlSelf);

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VSimTop___024root___sequent__TOP__26(vlSelf);
        VSimTop___024root___sequent__TOP__27(vlSelf);
        VSimTop___024root___sequent__TOP__28(vlSelf);
        VSimTop___024root___sequent__TOP__29(vlSelf);
        VSimTop___024root___sequent__TOP__30(vlSelf);
        VSimTop___024root___sequent__TOP__31(vlSelf);
        VSimTop___024root___sequent__TOP__32(vlSelf);
        VSimTop___024root___sequent__TOP__33(vlSelf);
        VSimTop___024root___sequent__TOP__34(vlSelf);
        VSimTop___024root___sequent__TOP__35(vlSelf);
        VSimTop___024root___sequent__TOP__36(vlSelf);
        VSimTop___024root___sequent__TOP__37(vlSelf);
        VSimTop___024root___sequent__TOP__38(vlSelf);
        VSimTop___024root___sequent__TOP__39(vlSelf);
        VSimTop___024root___sequent__TOP__40(vlSelf);
        VSimTop___024root___sequent__TOP__41(vlSelf);
        VSimTop___024root___sequent__TOP__42(vlSelf);
        VSimTop___024root___sequent__TOP__43(vlSelf);
        VSimTop___024root___sequent__TOP__44(vlSelf);
        VSimTop___024root___sequent__TOP__45(vlSelf);
        VSimTop___024root___sequent__TOP__46(vlSelf);
        VSimTop___024root___sequent__TOP__47(vlSelf);
        VSimTop___024root___sequent__TOP__48(vlSelf);
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__50(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    VSimTop___024root___combo__TOP__51(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VSimTop___024root___sequent__TOP__52(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__53(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    VSimTop___024root___combo__TOP__54(vlSelf);
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VSimTop___024root___sequent__TOP__55(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
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
    __req |= ((vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn ^ vlSelf->__Vchglast__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)
         | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4])
         | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3])|| (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4]));
    VL_DEBUG_IF( if(__req && ((vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn ^ vlSelf->__Vchglast__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn))) VL_DBG_MSGF("        CHANGE: /home/lin/oscpu/projects/dand_riscv_superscalar/build/SuperScalar.v:51: SimTop.__Vcellinp__u_SuperScalar__resetn\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4]))) VL_DBG_MSGF("        CHANGE: /home/lin/oscpu/projects/dand_riscv_superscalar/build/SimTop.v:852: SimTop.u_SuperScalar.alu_0.mul.u_mult.u_rca_nbit.c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3]) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4] ^ vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4]))) VL_DBG_MSGF("        CHANGE: /home/lin/oscpu/projects/dand_riscv_superscalar/build/SimTop.v:852: SimTop.u_SuperScalar.alu_1_1.mul.u_mult.u_rca_nbit.c\n"); );
    // Final
    vlSelf->__Vchglast__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn 
        = vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn;
    vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U];
    vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U];
    vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U];
    vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U];
    vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U];
    vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U] 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[0U];
    vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U] 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[1U];
    vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U] 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[2U];
    vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U] 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[3U];
    vlSelf->__Vchglast__TOP__SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U] 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__u_rca_nbit__DOT__c[4U];
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
