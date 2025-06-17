// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__5(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__5\n"); );
    // Body
    if (vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wen_regNext) {
            if (((((((((0x300U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext)) 
                       | (0x304U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) 
                      | (0x305U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) 
                     | (0x341U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) 
                    | (0x342U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) 
                   | (0x343U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) 
                  | (0xf14U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) 
                 | (0x340U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext)))) {
                if ((0x300U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                    if ((0x304U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                        if ((0x305U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                            if ((0x341U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                                if ((0x342U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                                    if ((0x343U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                                        if ((0xf14U 
                                             != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mscratch 
                                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext;
                                        }
                                        if ((0xf14U 
                                             == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mhartid 
                                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext;
                                        }
                                    }
                                    if ((0x343U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mtval 
                                            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext;
                                    }
                                }
                                if ((0x342U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mcause 
                                        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext;
                                }
                            }
                        }
                    }
                    if ((0x304U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mie 
                            = (((QData)((IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext 
                                                            >> 0xbU))))) 
                                << 0xbU) | (QData)((IData)(
                                                           ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext 
                                                                         >> 7U)) 
                                                                << 7U)) 
                                                            | (8U 
                                                               & ((IData)(
                                                                          (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext 
                                                                           >> 3U)) 
                                                                  << 3U))))));
                    }
                }
                if ((0x300U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus 
                        = (0x1800ULL | (((QData)((IData)(
                                                         ((3U 
                                                           == 
                                                           (3U 
                                                            & (IData)(
                                                                      (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext 
                                                                       >> 0xfU)))) 
                                                          | (3U 
                                                             == 
                                                             (3U 
                                                              & (IData)(
                                                                        (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext 
                                                                         >> 0xdU))))))) 
                                         << 0x3fU) 
                                        | (QData)((IData)(
                                                          ((0x80U 
                                                            & ((IData)(
                                                                       (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext 
                                                                        >> 7U)) 
                                                               << 7U)) 
                                                           | (8U 
                                                              & ((IData)(
                                                                         (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext 
                                                                          >> 3U)) 
                                                                 << 3U)))))));
                }
            }
        } else {
            if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1_csr_ports_mcause_wen) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mcause 
                    = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                        ? ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                            ? 0ULL : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                                       ? 0ULL : vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__mcause_wdata))
                        : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                            ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                                ? 0ULL : vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__mcause_wdata)
                            : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                                ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__mcause_wdata
                                : 0ULL)));
            }
            if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1_csr_ports_mstatus_wen) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus 
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1_csr_ports_mstatus_wdata;
            }
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x1fU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_31 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x1eU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_30 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x1dU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_29 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x1cU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_28 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x1bU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_27 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x1aU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_26 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x19U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_25 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x18U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_24 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0x17U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_23 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0xaU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_10 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (9U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_9 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (8U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_8 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (6U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_6 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (5U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_5 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_0 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (1U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_1 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (7U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_7 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0xfU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_15 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_3 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (2U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_2 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_4 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
        if ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen) 
              & (0xbU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr))) 
             & (0U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_addr)))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_11 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_data;
        }
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
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mscratch = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mhartid = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mtval = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mcause = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mie = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mstatus = 0x1880ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_31 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_30 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_29 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_28 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_27 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_26 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_25 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_24 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_23 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_10 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_9 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_8 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_6 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_5 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_0 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_1 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_7 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_15 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_3 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_2 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_4 = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_11 = 0ULL;
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_payload_addr 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_payload_addr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__write_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__write_ptr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__read_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__read_ptr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_cnt 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__fifo_cnt;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_cnt 
        = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_cnt;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__ar_wrap_en 
        = ((vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_addr 
            & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_payload_len) 
               << 3U)) == ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_payload_len) 
                           << 3U));
    vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__ar_wrap_en 
        = ((vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_addr 
            & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_payload_len) 
               << 3U)) == ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_payload_len) 
                           << 3U));
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__aw_wrap_en 
        = ((vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_addr 
            & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_aw_payload_len) 
               << 3U)) == ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_aw_payload_len) 
                           << 3U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__tmp_mcycle 
        = (1ULL + vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mcycle);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1_write_ports_rd_wen 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rValid) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_wb_rData_rd_wen));
    if (vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__bypass_read) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_valid = 1U;
            vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__ar_len_cnt = 0U;
        } else {
            if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__dcache_ar_fire) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_valid 
                    = (0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__ar_len_cnt));
            }
            if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__dcache_ar_fire_1) 
                 & (0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__ar_len_cnt)))) {
                vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__ar_len_cnt 
                    = (0xfU & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__ar_len_cnt) 
                               - (IData)(1U)));
            }
        }
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__bypass_write) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_valid = 1U;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_aw_valid = 1U;
        } else {
            if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__dcache_w_fire) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_valid = 0U;
            }
            if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__dcache_aw_fire) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_aw_valid = 0U;
            }
        }
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_ready) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rValid 
                = (((~ ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_is_quo) 
                        | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__alu_is_rem))) 
                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rValid)) 
                   | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__div_io_done_valid));
        }
    } else {
        vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__ar_len_cnt = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_ar_valid = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_w_valid = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_dcache_aw_valid = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__dst_stream_rValid = 0U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__read_ptr) 
           == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__write_ptr));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_full 
        = (((3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__read_ptr)) 
            == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__write_ptr))) 
           & ((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__read_ptr) 
                     >> 2U)) != (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__write_ptr) 
                                       >> 2U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full 
        = (((3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr)) 
            == (3U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr))) 
           & ((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr) 
                     >> 2U)) != (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr) 
                                       >> 2U))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__read_ptr) 
           == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__write_ptr));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__timer_1__DOT__tmp_mtime 
        = (1ULL + vlSelf->SimTop__DOT__u_SuperScalar__DOT__timer_1__DOT__mtime);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__timer_1_timer_int 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__timer_1__DOT__mtimecmp 
           <= vlSelf->SimTop__DOT__u_SuperScalar__DOT__timer_1__DOT__mtime);
    if (vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn) {
        if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_ar_fire) 
             & (0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__ar_len_cnt)))) {
            vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__ar_len_cnt 
                = (0xfU & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__ar_len_cnt) 
                           - (IData)(1U)));
        } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_cmd_valid_1) {
            vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__ar_len_cnt = 7U;
        }
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_cmd_valid_1) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_valid = 1U;
        } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_ar_fire_1) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_valid 
                = (0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__ar_len_cnt));
        }
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
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1_icache_ar_valid = 0U;
        vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__ar_len_cnt = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_value = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_busy = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1 = 0U;
    }
    vlSelf->SimTop__DOT__cpu_regs[0x1fU] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_31;
    vlSelf->SimTop__DOT__cpu_regs[0x1eU] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_30;
    vlSelf->SimTop__DOT__cpu_regs[0x1dU] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_29;
    vlSelf->SimTop__DOT__cpu_regs[0x1cU] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_28;
    vlSelf->SimTop__DOT__cpu_regs[0x1bU] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_27;
    vlSelf->SimTop__DOT__cpu_regs[0x1aU] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_26;
    vlSelf->SimTop__DOT__cpu_regs[0x19U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_25;
    vlSelf->SimTop__DOT__cpu_regs[0x18U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_24;
    vlSelf->SimTop__DOT__cpu_regs[0x17U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_23;
    vlSelf->SimTop__DOT__cpu_regs[0xaU] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_10;
    vlSelf->SimTop__DOT__cpu_regs[9U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_9;
    vlSelf->SimTop__DOT__cpu_regs[8U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_8;
    vlSelf->SimTop__DOT__cpu_regs[6U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_6;
    vlSelf->SimTop__DOT__cpu_regs[5U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_5;
    vlSelf->SimTop__DOT__cpu_regs[0U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_0;
    vlSelf->SimTop__DOT__cpu_regs[1U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_1;
    vlSelf->SimTop__DOT__cpu_regs[7U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_7;
    vlSelf->SimTop__DOT__cpu_regs[0xfU] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_15;
    vlSelf->SimTop__DOT__cpu_regs[3U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_3;
    vlSelf->SimTop__DOT__cpu_regs[2U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_2;
    vlSelf->SimTop__DOT__cpu_regs[4U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_4;
    vlSelf->SimTop__DOT__cpu_regs[0xbU] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_11;
    vlSelf->SimTop__DOT__cpu_regs[0xcU] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_12;
    vlSelf->SimTop__DOT__cpu_regs[0xdU] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_13;
    vlSelf->SimTop__DOT__cpu_regs[0xeU] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_14;
    vlSelf->SimTop__DOT__cpu_regs[0x10U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_16;
    vlSelf->SimTop__DOT__cpu_regs[0x11U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_17;
    vlSelf->SimTop__DOT__cpu_regs[0x12U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_18;
    vlSelf->SimTop__DOT__cpu_regs[0x13U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_19;
    vlSelf->SimTop__DOT__cpu_regs[0x14U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_20;
    vlSelf->SimTop__DOT__cpu_regs[0x15U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_21;
    vlSelf->SimTop__DOT__cpu_regs[0x16U] = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__arf_1__DOT__reg_file_22;
    if (vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_ready) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rValid 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rValid;
        }
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wen_regNext) {
            if (((((((((0x300U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext)) 
                       | (0x304U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) 
                      | (0x305U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) 
                     | (0x341U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) 
                    | (0x342U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) 
                   | (0x343U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) 
                  | (0xf14U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) 
                 | (0x340U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext)))) {
                if ((0x300U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                    if ((0x304U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                        if ((0x305U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mtvec 
                                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext;
                        }
                        if ((0x305U != (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                            if ((0x341U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_csr_addr_regNext))) {
                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mepc 
                                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_wdata_regNext;
                            }
                        }
                    }
                }
            }
        } else {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mtvec 
                = (0xfffffffffffffffcULL & vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile_clint_ports_mtvec);
            if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1_csr_ports_mepc_wen) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mepc 
                    = ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                        ? ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                            ? 0ULL : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                                       ? 0ULL : vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__mepc_wdata))
                        : ((2U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                            ? ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                                ? 0ULL : vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__mepc_wdata)
                            : ((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__int_state))
                                ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__clint_1__DOT__mepc_wdata
                                : 0ULL)));
            }
        }
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__ar_len_cnt 
            = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__ar_len_cnt;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__ar_len_cnt 
            = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__ar_len_cnt;
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_miss) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_cmd_valid_1 = 1U;
        } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_cmd_fire) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_cmd_valid_1 = 0U;
        }
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__dst_stream_rValid = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mtvec = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mepc = 0ULL;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__ar_len_cnt 
            = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__ar_len_cnt;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__ar_len_cnt 
            = vlSelf->__Vdly__SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__ar_len_cnt;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_cmd_valid_1 = 0U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_busy) 
           & (0x7fU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_value)));
    if (vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_miss) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1 = 0U;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1 = 0U;
        } else if (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_done) 
                    | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_done))) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1 = 1U;
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1 = 1U;
        }
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_cmd_ready_1 = 1U;
    }
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
    if ((4U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cpu_addr_d1)) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__sram_banks_data_0 
            = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__tmp_memsymbol_read_3) 
                << 0x18U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__tmp_memsymbol_read_2) 
                              << 0x10U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__tmp_memsymbol_read_1) 
                                            << 8U) 
                                           | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_1_sram__DOT__tmp_memsymbol_read))));
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__sram_banks_data_1 
            = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__tmp_memsymbol_read_3) 
                << 0x18U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__tmp_memsymbol_read_2) 
                              << 0x10U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__tmp_memsymbol_read_1) 
                                            << 8U) 
                                           | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_3_sram__DOT__tmp_memsymbol_read))));
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__sram_banks_data_0 
            = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__tmp_memsymbol_read_3) 
                << 0x18U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__tmp_memsymbol_read_2) 
                              << 0x10U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__tmp_memsymbol_read_1) 
                                            << 8U) 
                                           | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_0_sram__DOT__tmp_memsymbol_read))));
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__sram_banks_data_1 
            = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__tmp_memsymbol_read_3) 
                << 0x18U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__tmp_memsymbol_read_2) 
                              << 0x10U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__tmp_memsymbol_read_1) 
                                            << 8U) 
                                           | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__sram_area_2_sram__DOT__tmp_memsymbol_read))));
    }
    if (vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_ready) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rValid 
                = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_valid;
        }
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rValid = 0U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile_clint_ports_mtvec 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__csr_regfile__DOT__mtvec;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_willClear = 0U;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_willClear = 1U;
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_willIncrement = 0U;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_when)))) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_busy) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_willIncrement = 1U;
        }
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_done 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_busy) 
           & (0x7fU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_value)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cpu_rsp_payload_data 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__hit_id_d1)
            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__sram_banks_data_1
            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__sram_banks_data_0);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_valueNext 
        = (0x7fU & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_value) 
                    + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_willIncrement)));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_willClear) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__flush_cnt_valueNext = 0U;
    }
}

extern const VlUnpacked<IData/*31:0*/, 16> VSimTop__ConstPool__TABLE_h99921c07_0;
extern const VlUnpacked<CData/*2:0*/, 16> VSimTop__ConstPool__TABLE_h3595224e_0;
extern const VlUnpacked<QData/*47:0*/, 16> VSimTop__ConstPool__TABLE_ha9f3bb8c_0;
extern const VlUnpacked<QData/*47:0*/, 32> VSimTop__ConstPool__TABLE_hd257e550_0;
extern const VlUnpacked<QData/*39:0*/, 16> VSimTop__ConstPool__TABLE_hd7f1afcf_0;
extern const VlUnpacked<QData/*47:0*/, 8> VSimTop__ConstPool__TABLE_hcaf4ada9_0;

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__7(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__7\n"); );
    // Init
    CData/*4:0*/ __Vtableidx3;
    CData/*3:0*/ __Vtableidx4;
    CData/*3:0*/ __Vtableidx5;
    CData/*3:0*/ __Vtableidx6;
    CData/*4:0*/ __Vtableidx7;
    CData/*3:0*/ __Vtableidx8;
    CData/*3:0*/ __Vtableidx9;
    CData/*3:0*/ __Vtableidx10;
    CData/*4:0*/ __Vtableidx11;
    CData/*4:0*/ __Vtableidx12;
    CData/*3:0*/ __Vtableidx13;
    CData/*3:0*/ __Vtableidx14;
    CData/*3:0*/ __Vtableidx15;
    CData/*3:0*/ __Vtableidx16;
    CData/*3:0*/ __Vtableidx17;
    CData/*3:0*/ __Vtableidx18;
    CData/*4:0*/ __Vtableidx19;
    CData/*3:0*/ __Vtableidx20;
    CData/*3:0*/ __Vtableidx21;
    CData/*3:0*/ __Vtableidx22;
    CData/*2:0*/ __Vtableidx23;
    CData/*4:0*/ __Vtableidx24;
    CData/*3:0*/ __Vtableidx25;
    CData/*3:0*/ __Vtableidx26;
    CData/*3:0*/ __Vtableidx27;
    CData/*3:0*/ __Vtableidx28;
    CData/*3:0*/ __Vtableidx29;
    CData/*3:0*/ __Vtableidx30;
    CData/*3:0*/ __Vtableidx31;
    CData/*3:0*/ __Vtableidx32;
    CData/*3:0*/ __Vtableidx33;
    CData/*4:0*/ __Vtableidx39;
    CData/*4:0*/ __Vtableidx40;
    CData/*4:0*/ __Vtableidx41;
    CData/*3:0*/ __Vtableidx42;
    CData/*3:0*/ __Vtableidx43;
    CData/*3:0*/ __Vtableidx44;
    CData/*3:0*/ __Vtableidx45;
    CData/*3:0*/ __Vtableidx46;
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
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_ar_ready;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready;
    vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_d__DOT__sig_aw_ready;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_src1_data 
           + vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_imm);
    vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready 
        = vlSelf->__Vdly__SimTop__DOT__u_axi_slave_mem_i__DOT__sig_ar_ready;
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_rd_rob_ptr = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_rd_wen 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__rd_wen;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_rd_rob_ptr = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_rd_wen 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__rd_wen;
    }
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_ready) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_pc 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_pc;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_instruction 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_is_store 
            = (0x23U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction));
    }
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr_is_timer 
        = ((0x200bff8ULL == vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr) 
           | (0x2004000ULL == vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr));
    if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__is_miss) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__evict_id_miss 
            = (1U & ((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_victim_1) 
                            | ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_0)) 
                               & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_lru_d1_0)))))
                      ? (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__cache_victim_1)
                      : (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__tmp_cache_invld_d1_1))));
    }
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_done 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1_next_level_rsp_valid) 
           & (7U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache_1__DOT__icache_1__DOT__next_level_data_cnt_value)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__dcache_rdata 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache__DOT__biu_1__DOT__bypass_rsp_data_d1 
           >> (0x3fU & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr_offset_reg) 
                        << 3U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_cen 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_is_load) 
           | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_is_store));
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1_timer_cen 
        = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_addr_is_timer) 
           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_cen));
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
    __Vtableidx45 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_ctrl_op_reg;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_ctrl_op_reg_string 
        = VSimTop__ConstPool__TABLE_h99921c07_0[__Vtableidx45];
    __Vtableidx46 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__lsu_ctrl_op_reg;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__dcache_size 
        = VSimTop__ConstPool__TABLE_h3595224e_0[__Vtableidx46];
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
    __Vtableidx5 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__to_ports_bju_payload_micro_op_exp_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_ha9f3bb8c_0[__Vtableidx5];
    __Vtableidx14 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_m2sPipe_payload_micro_op_exp_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_ha9f3bb8c_0[__Vtableidx14];
    __Vtableidx16 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_ha9f3bb8c_0[__Vtableidx16];
    __Vtableidx29 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__src_ports_payload_micro_op_exp_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_ha9f3bb8c_0[__Vtableidx29];
    __Vtableidx31 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__src_stream_payload_micro_op_exp_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_ha9f3bb8c_0[__Vtableidx31];
    __Vtableidx33 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_exp_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_exp_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_ha9f3bb8c_0[__Vtableidx33];
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
    __Vtableidx6 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__to_ports_lsu_payload_micro_op_lsu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_h99921c07_0[__Vtableidx6];
    __Vtableidx17 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_m2sPipe_payload_micro_op_lsu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_h99921c07_0[__Vtableidx17];
    __Vtableidx18 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_h99921c07_0[__Vtableidx18];
    __Vtableidx42 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__src_ports_payload_micro_op_lsu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_h99921c07_0[__Vtableidx42];
    __Vtableidx43 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__tmp_src_stream_payload_micro_op_lsu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_h99921c07_0[__Vtableidx43];
    __Vtableidx44 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_rData_micro_op_lsu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_1__DOT__src_stream_payload_micro_op_lsu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_h99921c07_0[__Vtableidx44];
    __Vtableidx3 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__to_ports_alu_payload_micro_op_alu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd257e550_0[__Vtableidx3];
    __Vtableidx11 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_m2sPipe_payload_micro_op_alu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd257e550_0[__Vtableidx11];
    __Vtableidx12 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd257e550_0[__Vtableidx12];
    __Vtableidx39 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__src_ports_payload_micro_op_alu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd257e550_0[__Vtableidx39];
    __Vtableidx40 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__tmp_src_stream_payload_micro_op_alu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd257e550_0[__Vtableidx40];
    __Vtableidx41 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_rData_micro_op_alu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__src_stream_payload_micro_op_alu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd257e550_0[__Vtableidx41];
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[0U] 
        = vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[0U];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[1U] 
        = (- (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[0U] 
                      >> 0x1fU)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[2U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[0U]))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[3U] 
        = (IData)(((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[0U]))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[4U] 
        = (IData)((((QData)((IData)(__Vtemp_h969ac8a3__0[3U])) 
                    << 0x20U) | (QData)((IData)(__Vtemp_h969ac8a3__0[2U]))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[5U] 
        = (IData)(((((QData)((IData)(__Vtemp_h969ac8a3__0[3U])) 
                     << 0x20U) | (QData)((IData)(__Vtemp_h969ac8a3__0[2U]))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[6U] 
        = (IData)((((QData)((IData)(__Vtemp_h2c8a25e5__0[3U])) 
                    << 0x20U) | (QData)((IData)(__Vtemp_h2c8a25e5__0[2U]))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[7U] 
        = (IData)(((((QData)((IData)(__Vtemp_h2c8a25e5__0[3U])) 
                     << 0x20U) | (QData)((IData)(__Vtemp_h2c8a25e5__0[2U]))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[8U] 
        = (IData)((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_temp_u[0U]))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[9U] 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__is_call = 0U;
    if ((2U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op))) {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__is_call 
            = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_rd_is_link;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__is_jmp = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__is_jmp 
            = (1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_rd_is_link)));
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__is_ret = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__is_ret = 0U;
    } else if ((3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op))) {
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_rd_is_link) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__is_call = 1U;
        }
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__is_jmp = 0U;
        if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_rd_is_link)))) {
            if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_rs1_is_link)))) {
                vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__is_jmp = 1U;
            }
        }
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__is_ret = 0U;
        if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_rd_is_link) {
            if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_rs1_is_link) {
                if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_rd_eq_rs1)))) {
                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__is_ret = 1U;
                }
            }
        } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_rs1_is_link) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__is_ret = 1U;
        }
    } else {
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__is_jmp = 0U;
        vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__is_ret = 0U;
    }
    __Vtableidx4 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__to_ports_bju_payload_micro_op_bju_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd7f1afcf_0[__Vtableidx4];
    __Vtableidx13 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_m2sPipe_payload_micro_op_bju_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd7f1afcf_0[__Vtableidx13];
    __Vtableidx15 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd7f1afcf_0[__Vtableidx15];
    __Vtableidx28 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__src_ports_payload_micro_op_bju_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd7f1afcf_0[__Vtableidx28];
    __Vtableidx30 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__src_stream_payload_micro_op_bju_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd7f1afcf_0[__Vtableidx30];
    __Vtableidx32 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__micro_op_bju_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd7f1afcf_0[__Vtableidx32];
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__pc_next 
        = ((3U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_micro_op_bju_ctrl_op))
            ? (0xfffffffeU & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_src1_data) 
                              + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_imm)))
            : (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_pc 
               + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_imm)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__src2_is_imm 
        = (((((((0x13U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
                | (0x1bU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
               | (3U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
              | (0x67U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
             | (0x23U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
            | ((0x37U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)) 
               | (0x17U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
           | (0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[0U] 
        = (IData)((QData)((IData)((0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                            >> 0xfU)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[1U] 
        = (IData)(((QData)((IData)((0x1fU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                             >> 0xfU)))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[2U] 
        = (IData)((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                >> 0x14U)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[3U] 
        = (IData)(((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                 >> 0x14U)))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[4U] 
        = (IData)((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                        >> 0x1fU)))) 
                    << 0xcU) | (QData)((IData)(((0xfe0U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                      >> 7U)))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[5U] 
        = (IData)(((((- (QData)((IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                         >> 0x1fU)))) 
                     << 0xcU) | (QData)((IData)(((0xfe0U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                       >> 7U)))))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[6U] 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[7U] 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[8U] 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[9U] 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[0xaU] 
        = (IData)((((QData)((IData)((- (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[0xbU] 
        = (IData)(((((QData)((IData)((- (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                 >> 0x1fU))))) 
                     << 0x20U) | (QData)((IData)((0xfffff000U 
                                                  & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__trap_or_print 
        = ((0x6bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction) 
           | (0x7bU == vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction));
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__tmp_alu_ctrl_sel 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ebreak 
        = (IData)((0x100073U == (0xfff0707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ecall 
        = (IData)((0x73U == (0xfff0707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__mret 
        = (IData)((0x30200073U == (0xfff0707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrci 
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
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_result 
        = ((((((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[1U])) 
                 << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[0U]))) 
               & (((QData)((IData)((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                   << 0x3fU) | (((QData)((IData)((1U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                 << 0x3eU) | (((QData)((IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
              | ((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[3U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[2U]))) 
                 & (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                            >> 1U)))) 
                     << 0x3fU) | (((QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                       >> 1U)))) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                     >> 1U)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                        >> 1U)))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                           >> 1U)))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                              >> 1U)))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x18U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x17U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x16U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 4U)) 
                                                                                | (0x1fU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
             | ((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[5U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[4U]))) 
                & (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                           >> 2U)))) 
                    << 0x3fU) | (((QData)((IData)((1U 
                                                   & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                      >> 2U)))) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                    >> 2U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                       >> 2U)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                          >> 2U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                             >> 2U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1dU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1cU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1bU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1aU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x19U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x18U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x17U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x16U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x15U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x14U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x13U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x12U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x11U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x10U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xfU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 2U)) 
                                                                                | (0xfU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
            | ((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[7U])) 
                 << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[6U]))) 
               & (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                          >> 3U)))) 
                   << 0x3fU) | (((QData)((IData)((1U 
                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                     >> 3U)))) 
                                 << 0x3eU) | (((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                   >> 3U)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                      >> 3U)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                         >> 3U)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                            >> 3U)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                               >> 3U)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1cU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1bU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1aU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x19U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x18U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x17U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x16U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x15U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x14U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x13U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x11U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x10U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 6U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 4U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)) 
                                                                                | (7U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 3U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
           | ((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[9U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_data[8U]))) 
              & (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                         >> 4U)))) 
                  << 0x3fU) | (((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                    >> 4U)))) 
                                << 0x3eU) | (((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                  >> 4U)))) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                     >> 4U)))) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                        >> 4U)))) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                           >> 4U)))) 
                                                       << 0x3aU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                              >> 4U)))) 
                                                          << 0x39U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                << 0x37U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                   << 0x36U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                      << 0x35U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                         << 0x34U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                            << 0x33U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                               << 0x32U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1bU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x1aU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x19U)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x18U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x17U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x16U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x15U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x14U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x13U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x12U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x11U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0x10U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xeU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xcU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 5U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 2U)) 
                                                                                | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1__DOT__mul_sel) 
                                                                                >> 4U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__tmp_when 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_bpu_pred_taken)) 
                 | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_pc_next 
                    != vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__pc_next)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_op 
        = (((((((((((1U & (- (IData)((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel))))) 
                    | (2U & (- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                              >> 1U)))))) 
                   | (3U & (- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                             >> 2U)))))) 
                  | (4U & ((8U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel)) 
                           | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                     >> 1U)) | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                                 >> 3U))))))))) 
                 | (5U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                 >> 1U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                   >> 2U)) 
                                            | ((2U 
                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                   >> 3U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                     >> 4U))))))) 
                | (6U & (- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                          >> 5U)))))) 
               | (7U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                               >> 3U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                 >> 4U)) 
                                          | (3U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                                 >> 6U))))))))) 
              | (8U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                              >> 4U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                >> 5U)) 
                                         | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                   >> 6U)) 
                                            | (1U & 
                                               ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                >> 7U))))))) 
             | (9U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                             >> 5U)) | (7U & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                            >> 8U)))))))) 
            | (0xaU & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                              >> 6U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                >> 7U)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                                >> 9U))))))))) 
           | (0xbU & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                             >> 7U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                               >> 8U)) 
                                        | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                  >> 9U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                               >> 0xaU)))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__tmp_alu_ctrl_sel) 
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
              & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ebreak))) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ecall))) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__mret))) 
           & (0xfU != (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)));
    __Vtableidx23 = ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ecall)
                      ? 1U : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ebreak)
                               ? 2U : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__mret)
                                        ? 3U : 0U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exception_string 
        = VSimTop__ConstPool__TABLE_hcaf4ada9_0[__Vtableidx23];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrci) 
            << 8U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrsi) 
                       << 7U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrwi) 
                                  << 6U) | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrc) 
                                             << 5U) 
                                            | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrs) 
                                                << 4U) 
                                               | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrw) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__mret) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ebreak) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__ecall)))))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csri 
        = (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrwi) 
            | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrsi)) 
           | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csrrci));
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
                    = vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1__DOT__pc_next;
            }
        } else if (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_bpu_pred_taken) {
            vlSelf->SimTop__DOT__u_SuperScalar__DOT__bju_1__DOT__bju_kernel_1_redirect_pc 
                = ((IData)(4U) + vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_rData_pc);
        }
    }
    __Vtableidx10 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_lsu_payload_micro_op_lsu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_h99921c07_0[__Vtableidx10];
    __Vtableidx20 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_micro_op_lsu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_h99921c07_0[__Vtableidx20];
    __Vtableidx25 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__lsu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__tmp_lsu_micro_op_lsu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_h99921c07_0[__Vtableidx25];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_op 
        = ((((((((((((((((((((((((1U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  << 4U)) 
                                        | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  << 3U)) 
                                           | (7U & 
                                              (- (IData)(
                                                         (1U 
                                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel))))))) 
                                 | (2U & ((0x10U & 
                                           (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            << 3U)) 
                                          | ((8U & 
                                              (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               << 2U)) 
                                             | (7U 
                                                & (- (IData)(
                                                             (1U 
                                                              & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                 >> 1U))))))))) 
                                | (3U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   << 2U)) 
                                         | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   << 1U)) 
                                            | ((4U 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                   >> 2U)))))))))) 
                               | (4U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  << 1U)) 
                                        | ((8U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                           | ((4U & 
                                               (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 1U)) 
                                              | ((2U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 3U)))))))) 
                              | (5U & ((0x10U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                       | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 >> 1U)) 
                                          | (7U & (- (IData)(
                                                             (1U 
                                                              & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                 >> 4U))))))))) 
                             | (6U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 1U)) 
                                      | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 2U)) 
                                         | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 3U)) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                              >> 5U)))))))))) 
                            | (7U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 2U)) 
                                     | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 3U)) 
                                        | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  >> 4U)) 
                                           | ((2U & 
                                               (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 5U)) 
                                              | (1U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    >> 6U)))))))) 
                           | (8U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 3U)) 
                                    | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 4U)) 
                                       | (7U & (- (IData)(
                                                          (1U 
                                                           & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                              >> 7U))))))))) 
                          | (9U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 4U)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 5U)) 
                                      | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 6U)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 8U)))))))))) 
                         | (0xaU & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 5U)) 
                                    | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 6U)) 
                                       | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 >> 7U)) 
                                          | ((2U & 
                                              (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 8U)) 
                                             | (1U 
                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 9U)))))))) 
                        | (0xbU & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 6U)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 7U)) 
                                      | (7U & (- (IData)(
                                                         (1U 
                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                             >> 0xaU))))))))) 
                       | (0xcU & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            >> 7U)) 
                                  | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            >> 8U)) 
                                     | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 9U)) 
                                        | (3U & (- (IData)(
                                                           (1U 
                                                            & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                               >> 0xbU)))))))))) 
                      | (0xdU & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                           >> 8U)) 
                                 | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                           >> 9U)) 
                                    | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 0xaU)) 
                                       | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 >> 0xbU)) 
                                          | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 0xcU)))))))) 
                     | (0xeU & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 9U)) | 
                                ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                        >> 0xaU)) | 
                                 (7U & (- (IData)((1U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0xdU))))))))) 
                    | (0xfU & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                         >> 0xaU)) 
                               | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                         >> 0xbU)) 
                                  | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            >> 0xcU)) 
                                     | (3U & (- (IData)(
                                                        (1U 
                                                         & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                            >> 0xeU)))))))))) 
                   | (0x10U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                         >> 0xbU)) 
                               | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                         >> 0xcU)) 
                                  | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                            >> 0xdU)) 
                                     | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                               >> 0xeU)) 
                                        | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 >> 0xfU)))))))) 
                  | (0x11U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                        >> 0xcU)) | 
                              ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                      >> 0xdU)) | (7U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                    >> 0x10U))))))))) 
                 | (0x12U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xdU)) | 
                             ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                     >> 0xeU)) | ((4U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0xfU)) 
                                                  | (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                      >> 0x11U)))))))))) 
                | (0x13U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                      >> 0xeU)) | (
                                                   (8U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0xfU)) 
                                                   | ((4U 
                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                          >> 0x10U)) 
                                                      | ((2U 
                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                             >> 0x11U)) 
                                                         | (1U 
                                                            & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                               >> 0x12U)))))))) 
               | (0x14U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                     >> 0xfU)) | ((8U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0x10U)) 
                                                  | (7U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                      >> 0x13U))))))))) 
              | (0x15U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                    >> 0x10U)) | ((8U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0x11U)) 
                                                  | ((4U 
                                                      & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                         >> 0x12U)) 
                                                     | (3U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                         >> 0x14U)))))))))) 
             | (0x16U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                   >> 0x11U)) | ((8U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     >> 0x12U)) 
                                                 | ((4U 
                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                        >> 0x13U)) 
                                                    | ((2U 
                                                        & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                           >> 0x14U)) 
                                                       | (1U 
                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                             >> 0x15U)))))))) 
            | (0x17U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                  >> 0x12U)) | ((8U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    >> 0x13U)) 
                                                | (7U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                    >> 0x16U))))))))) 
           | (0x18U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                 >> 0x13U)) | ((8U 
                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 0x14U)) 
                                               | ((4U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 0x15U)) 
                                                  | (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                      >> 0x17U))))))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_op 
        = (((((((((1U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                << 3U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                  << 2U)) 
                                           | (3U & 
                                              (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel)))))))) 
                  | (2U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                  << 2U)) | ((4U & 
                                              ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                               << 1U)) 
                                             | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                                 >> 1U))))))))) 
                 | (3U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                 << 1U)) | ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel)) 
                                            | ((2U 
                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                   >> 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                     >> 2U))))))) 
                | (4U & (- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                          >> 3U)))))) 
               | (5U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                               >> 1U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                 >> 2U)) 
                                          | (3U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                                 >> 4U))))))))) 
              | (6U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                              >> 2U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                >> 3U)) 
                                         | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                   >> 4U)) 
                                            | (1U & 
                                               ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                >> 5U))))))) 
             | (7U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                             >> 3U)) | (7U & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                            >> 6U)))))))) 
            | (8U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                            >> 4U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                              >> 5U)) 
                                       | (3U & (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                              >> 7U))))))))) 
           | (9U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                           >> 5U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                             >> 6U)) 
                                      | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                >> 7U)) 
                                         | (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                  >> 8U)))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type 
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
                                               | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csri))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel 
        = ((((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__csri) 
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
    __Vtableidx7 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_alu_payload_micro_op_alu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd257e550_0[__Vtableidx7];
    __Vtableidx19 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_micro_op_alu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd257e550_0[__Vtableidx19];
    __Vtableidx24 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__alu_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__tmp_alu_micro_op_alu_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd257e550_0[__Vtableidx24];
    __Vtableidx9 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_payload_micro_op_exp_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_ha9f3bb8c_0[__Vtableidx9];
    __Vtableidx22 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_micro_op_exp_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_ha9f3bb8c_0[__Vtableidx22];
    __Vtableidx27 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__exp_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__tmp_bju_micro_op_exp_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_ha9f3bb8c_0[__Vtableidx27];
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1_imm 
        = (((((((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[0U]))) 
                & (((QData)((IData)((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                    << 0x3fU) | (((QData)((IData)((1U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
               | ((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[2U]))) 
                  & (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                             >> 1U)))) 
                      << 0x3fU) | (((QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                        >> 1U)))) 
                                    << 0x3eU) | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                      >> 1U)))) 
                                                  << 0x3dU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                         >> 1U)))) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                            >> 1U)))) 
                                                        << 0x3bU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                               >> 1U)))) 
                                                           << 0x3aU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                              << 0x39U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                 << 0x38U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                    << 0x37U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                       << 0x36U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                          << 0x35U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                             << 0x34U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x33U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1eU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1cU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | (0x1fU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
              | ((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[5U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[4U]))) 
                 & (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                            >> 2U)))) 
                     << 0x3fU) | (((QData)((IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                       >> 2U)))) 
                                   << 0x3eU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                     >> 2U)))) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                        >> 2U)))) 
                                                    << 0x3cU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                           >> 2U)))) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                              >> 2U)))) 
                                                          << 0x3aU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                             << 0x39U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                << 0x38U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                   << 0x37U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                      << 0x36U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                         << 0x35U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                            << 0x34U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                               << 0x33U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1dU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1cU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 2U)) 
                                                                                | (0xfU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
             | ((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[7U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[6U]))) 
                & (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                           >> 3U)))) 
                    << 0x3fU) | (((QData)((IData)((1U 
                                                   & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                      >> 3U)))) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                    >> 3U)))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                       >> 3U)))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                          >> 3U)))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                             >> 3U)))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1cU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 3U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 2U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)) 
                                                                                | (7U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
            | ((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[9U])) 
                 << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[8U]))) 
               & (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                          >> 4U)))) 
                   << 0x3fU) | (((QData)((IData)((1U 
                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                     >> 4U)))) 
                                 << 0x3eU) | (((QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                   >> 4U)))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                      >> 4U)))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                         >> 4U)))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                            >> 4U)))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                               >> 4U)))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1bU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)) 
                                                                                | (3U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
           | ((((QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[0xbU])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_data[0xaU]))) 
              & (((QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                         >> 5U)))) 
                  << 0x3fU) | (((QData)((IData)((1U 
                                                 & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                    >> 5U)))) 
                                << 0x3eU) | (((QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                  >> 5U)))) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                     >> 5U)))) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                        >> 5U)))) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                           >> 5U)))) 
                                                       << 0x3aU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                              >> 5U)))) 
                                                          << 0x39U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                << 0x37U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                   << 0x36U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                      << 0x35U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                         << 0x34U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                            << 0x33U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                               << 0x32U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x1aU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x19U)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x18U)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x17U)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x16U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x15U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x14U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x13U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x12U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x11U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0x10U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xfU)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xeU)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xdU)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xcU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xbU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 0xaU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 9U)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 8U)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 7U)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 6U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 5U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 4U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 3U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 2U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                << 1U)) 
                                                                                | ((0x20U 
                                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 2U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 4U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__imm_type) 
                                                                                >> 5U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_op 
        = ((((((((((1U & (- (IData)((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel))))) 
                   | (2U & (- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                             >> 1U)))))) 
                  | (3U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                  << 1U)) | ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel)) 
                                             | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                                 >> 2U))))))))) 
                 | (4U & ((8U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel)) 
                          | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                    >> 1U)) | ((2U 
                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                     >> 3U))))))) 
                | (5U & (- (IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                          >> 4U)))))) 
               | (6U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                               >> 2U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                 >> 3U)) 
                                          | (3U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                                 >> 5U))))))))) 
              | (7U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                              >> 3U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                >> 4U)) 
                                         | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                   >> 5U)) 
                                            | (1U & 
                                               ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                >> 6U))))))) 
             | (8U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                             >> 4U)) | (7U & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                            >> 7U)))))))) 
            | (9U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                            >> 5U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                              >> 6U)) 
                                       | (3U & (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                              >> 8U))))))))) 
           | (0xaU & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                             >> 6U)) | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                               >> 7U)) 
                                        | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                  >> 8U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                               >> 9U)))))));
    __Vtableidx8 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__stream_bju_payload_micro_op_bju_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd7f1afcf_0[__Vtableidx8];
    __Vtableidx21 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_micro_op_bju_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd7f1afcf_0[__Vtableidx21];
    __Vtableidx26 = vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__bju_ctrl_op;
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__control_1__DOT__decode_1__DOT__tmp_bju_micro_op_bju_ctrl_op_string 
        = VSimTop__ConstPool__TABLE_hd7f1afcf_0[__Vtableidx26];
}

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__9(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__9\n"); );
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

VL_INLINE_OPT void VSimTop___024root___combo__TOP__10(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___combo__TOP__10\n"); );
    // Body
    vlSelf->SimTop__DOT____Vcellinp__u_SuperScalar__resetn 
        = (1U & (~ (IData)(vlSelf->reset)));
}

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__11(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__11\n"); );
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

void VSimTop___024root___sequent__TOP__2(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__4(VSimTop___024root* vlSelf);
void VSimTop___024root___sequent__TOP__8(VSimTop___024root* vlSelf);

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VSimTop___024root___sequent__TOP__4(vlSelf);
        VSimTop___024root___sequent__TOP__5(vlSelf);
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VSimTop___024root___sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    VSimTop___024root___combo__TOP__10(vlSelf);
    if ((((~ (IData)(vlSelf->__VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
          & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__SimTop__DOT____Vcellinp__u_SuperScalar__resetn)) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VSimTop___024root___sequent__TOP__11(vlSelf);
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
