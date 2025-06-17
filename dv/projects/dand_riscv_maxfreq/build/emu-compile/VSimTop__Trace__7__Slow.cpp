// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


VL_ATTR_COLD void VSimTop___024root__trace_full_sub_7(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_full_sub_7\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h5ba7746c__0;
    VlWide<4>/*127:0*/ __Vtemp_h18df95fe__0;
    // Body
    tracep->fullCData(oldp+10050,((((((((((((((1U & 
                                               ((0x10U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    << 4U)) 
                                                | ((8U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       << 3U)) 
                                                   | (7U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel))))))) 
                                              | (2U 
                                                 & ((0x10U 
                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                        << 3U)) 
                                                    | ((8U 
                                                        & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                           << 2U)) 
                                                       | (7U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                           >> 1U))))))))) 
                                             | (3U 
                                                & ((0x10U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       << 2U)) 
                                                   | ((8U 
                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                          << 1U)) 
                                                      | ((4U 
                                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                                         | (3U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                             >> 2U)))))))))) 
                                            | (4U & 
                                               ((0x10U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    << 1U)) 
                                                | ((8U 
                                                    & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                                   | ((4U 
                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                          >> 1U)) 
                                                      | ((2U 
                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                             >> 2U)) 
                                                         | (1U 
                                                            & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                               >> 3U)))))))) 
                                           | (5U & 
                                              ((0x10U 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                               | ((8U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 1U)) 
                                                  | (7U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                      >> 4U))))))))) 
                                          | (6U & (
                                                   (0x10U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 1U)) 
                                                   | ((8U 
                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                          >> 2U)) 
                                                      | ((4U 
                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                             >> 3U)) 
                                                         | (3U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                             >> 5U)))))))))) 
                                         | (7U & ((0x10U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 2U)) 
                                                  | ((8U 
                                                      & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                         >> 3U)) 
                                                     | ((4U 
                                                         & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                            >> 4U)) 
                                                        | ((2U 
                                                            & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                               >> 5U)) 
                                                           | (1U 
                                                              & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                 >> 6U)))))))) 
                                        | (8U & ((0x10U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     >> 3U)) 
                                                 | ((8U 
                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                        >> 4U)) 
                                                    | (7U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                        >> 7U))))))))) 
                                       | (9U & ((0x10U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    >> 4U)) 
                                                | ((8U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 5U)) 
                                                   | ((4U 
                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                          >> 6U)) 
                                                      | (3U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                          >> 8U)))))))))) 
                                      | (0xaU & ((0x10U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     >> 5U)) 
                                                 | ((8U 
                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                        >> 6U)) 
                                                    | ((4U 
                                                        & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                           >> 7U)) 
                                                       | ((2U 
                                                           & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                              >> 8U)) 
                                                          | (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 9U)))))))) 
                                     | (0xbU & ((0x10U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    >> 6U)) 
                                                | ((8U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 7U)) 
                                                   | (7U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                       >> 0xaU))))))))) 
                                    | (0xcU & ((0x10U 
                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 7U)) 
                                               | ((8U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 8U)) 
                                                  | ((4U 
                                                      & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                         >> 9U)) 
                                                     | (3U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                         >> 0xbU)))))))))) 
                                   | (0xdU & ((0x10U 
                                               & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  >> 8U)) 
                                              | ((8U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     >> 9U)) 
                                                 | ((4U 
                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                        >> 0xaU)) 
                                                    | ((2U 
                                                        & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                           >> 0xbU)) 
                                                       | (1U 
                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                             >> 0xcU))))))))),5);
    tracep->fullCData(oldp+10051,(((((((((((1U & ((0x10U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel))))))) 
                                           | (2U & 
                                              ((0x10U 
                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   << 3U)) 
                                               | ((8U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      << 2U)) 
                                                  | (7U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                      >> 1U))))))))) 
                                          | (3U & (
                                                   (0x10U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       << 2U)) 
                                                   | ((8U 
                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                          << 1U)) 
                                                      | ((4U 
                                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                                         | (3U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                             >> 2U)))))))))) 
                                         | (4U & ((0x10U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      << 1U)) 
                                                  | ((8U 
                                                      & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                                     | ((4U 
                                                         & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                            >> 1U)) 
                                                        | ((2U 
                                                            & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                               >> 2U)) 
                                                           | (1U 
                                                              & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                 >> 3U)))))))) 
                                        | (5U & ((0x10U 
                                                  & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                                 | ((8U 
                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                        >> 1U)) 
                                                    | (7U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                        >> 4U))))))))) 
                                       | (6U & ((0x10U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    >> 1U)) 
                                                | ((8U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 2U)) 
                                                   | ((4U 
                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                          >> 3U)) 
                                                      | (3U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                          >> 5U)))))))))) 
                                      | (7U & ((0x10U 
                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 2U)) 
                                               | ((8U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 3U)) 
                                                  | ((4U 
                                                      & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                         >> 4U)) 
                                                     | ((2U 
                                                         & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                            >> 5U)) 
                                                        | (1U 
                                                           & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                              >> 6U)))))))) 
                                     | (8U & ((0x10U 
                                               & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  >> 3U)) 
                                              | ((8U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     >> 4U)) 
                                                 | (7U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                     >> 7U))))))))) 
                                    | (9U & ((0x10U 
                                              & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 >> 4U)) 
                                             | ((8U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    >> 5U)) 
                                                | ((4U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 6U)) 
                                                   | (3U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                       >> 8U)))))))))) 
                                   | (0xaU & ((0x10U 
                                               & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  >> 5U)) 
                                              | ((8U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     >> 6U)) 
                                                 | ((4U 
                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                        >> 7U)) 
                                                    | ((2U 
                                                        & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                           >> 8U)) 
                                                       | (1U 
                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                             >> 9U))))))))),5);
    tracep->fullCData(oldp+10052,((((((((1U & ((0x10U 
                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   << 4U)) 
                                               | ((8U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      << 3U)) 
                                                  | (7U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel))))))) 
                                        | (2U & ((0x10U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     << 3U)) 
                                                 | ((8U 
                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                        << 2U)) 
                                                    | (7U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                        >> 1U))))))))) 
                                       | (3U & ((0x10U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    << 2U)) 
                                                | ((8U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       << 1U)) 
                                                   | ((4U 
                                                       & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                                      | (3U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                          >> 2U)))))))))) 
                                      | (4U & ((0x10U 
                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   << 1U)) 
                                               | ((8U 
                                                   & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                                  | ((4U 
                                                      & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                         >> 1U)) 
                                                     | ((2U 
                                                         & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                            >> 2U)) 
                                                        | (1U 
                                                           & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                              >> 3U)))))))) 
                                     | (5U & ((0x10U 
                                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                              | ((8U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     >> 1U)) 
                                                 | (7U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                     >> 4U))))))))) 
                                    | (6U & ((0x10U 
                                              & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 >> 1U)) 
                                             | ((8U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    >> 2U)) 
                                                | ((4U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 3U)) 
                                                   | (3U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                       >> 5U)))))))))) 
                                   | (7U & ((0x10U 
                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 2U)) 
                                            | ((8U 
                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 3U)) 
                                               | ((4U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 4U)) 
                                                  | ((2U 
                                                      & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                         >> 5U)) 
                                                     | (1U 
                                                        & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                           >> 6U))))))))),5);
    tracep->fullCData(oldp+10053,(((((1U & ((0x10U 
                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                << 4U)) 
                                            | ((8U 
                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   << 3U)) 
                                               | (7U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel))))))) 
                                     | (2U & ((0x10U 
                                               & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  << 3U)) 
                                              | ((8U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     << 2U)) 
                                                 | (7U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                     >> 1U))))))))) 
                                    | (3U & ((0x10U 
                                              & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                 << 2U)) 
                                             | ((8U 
                                                 & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                    << 1U)) 
                                                | ((4U 
                                                    & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                                   | (3U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                       >> 2U)))))))))) 
                                   | (4U & ((0x10U 
                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                << 1U)) 
                                            | ((8U 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                               | ((4U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 1U)) 
                                                  | ((2U 
                                                      & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                         >> 2U)) 
                                                     | (1U 
                                                        & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                           >> 3U))))))))),5);
    tracep->fullCData(oldp+10054,((1U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   << 4U)) 
                                         | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   << 3U)) 
                                            | (7U & 
                                               (- (IData)(
                                                          (1U 
                                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel)))))))),5);
    tracep->fullBit(oldp+10055,((1U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel)));
    tracep->fullCData(oldp+10056,((7U & (- (IData)(
                                                   (1U 
                                                    & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel))))),3);
    tracep->fullCData(oldp+10057,((2U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   << 3U)) 
                                         | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   << 2U)) 
                                            | (7U & 
                                               (- (IData)(
                                                          (1U 
                                                           & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                              >> 1U))))))))),5);
    tracep->fullBit(oldp+10058,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 1U))));
    tracep->fullCData(oldp+10059,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 1U)))))),3);
    tracep->fullCData(oldp+10060,(((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             << 2U)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             << 1U)) 
                                      | ((4U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 2U))))))))),5);
    tracep->fullBit(oldp+10061,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 2U))));
    tracep->fullCData(oldp+10062,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 2U)))))),2);
    tracep->fullBit(oldp+10063,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 3U))));
    tracep->fullCData(oldp+10064,(((8U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                   | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 1U)) 
                                      | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 2U)) 
                                         | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  >> 3U)))))),4);
    tracep->fullCData(oldp+10065,((5U & ((0x10U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                         | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 1U)) 
                                            | (7U & 
                                               (- (IData)(
                                                          (1U 
                                                           & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                              >> 4U))))))))),5);
    tracep->fullBit(oldp+10066,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 4U))));
    tracep->fullCData(oldp+10067,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 4U)))))),3);
    tracep->fullCData(oldp+10068,(((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 1U)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 2U)) 
                                      | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 3U)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 5U))))))))),5);
    tracep->fullBit(oldp+10069,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 5U))));
    tracep->fullCData(oldp+10070,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 5U)))))),2);
    tracep->fullBit(oldp+10071,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 6U))));
    tracep->fullCData(oldp+10072,(((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 3U)) | 
                                   ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                           >> 4U)) 
                                    | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 5U)) 
                                       | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 6U)))))),4);
    tracep->fullCData(oldp+10073,((8U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 3U)) 
                                         | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 4U)) 
                                            | (7U & 
                                               (- (IData)(
                                                          (1U 
                                                           & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                              >> 7U))))))))),5);
    tracep->fullBit(oldp+10074,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 7U))));
    tracep->fullCData(oldp+10075,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 7U)))))),3);
    tracep->fullCData(oldp+10076,(((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 4U)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 5U)) 
                                      | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 6U)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 8U))))))))),5);
    tracep->fullBit(oldp+10077,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 8U))));
    tracep->fullCData(oldp+10078,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 8U)))))),2);
    tracep->fullBit(oldp+10079,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 9U))));
    tracep->fullCData(oldp+10080,(((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 6U)) | 
                                   ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                           >> 7U)) 
                                    | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 8U)) 
                                       | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 9U)))))),4);
    tracep->fullCData(oldp+10081,((0xbU & ((0x10U & 
                                            (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 6U)) 
                                           | ((8U & 
                                               (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 7U)) 
                                              | (7U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                  >> 0xaU))))))))),5);
    tracep->fullBit(oldp+10082,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xaU))));
    tracep->fullCData(oldp+10083,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0xaU)))))),3);
    tracep->fullCData(oldp+10084,(((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 7U)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 8U)) 
                                      | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 9U)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 0xbU))))))))),5);
    tracep->fullBit(oldp+10085,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xbU))));
    tracep->fullCData(oldp+10086,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0xbU)))))),2);
    tracep->fullBit(oldp+10087,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xcU))));
    tracep->fullCData(oldp+10088,(((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 9U)) | 
                                   ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                           >> 0xaU)) 
                                    | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 0xbU)) 
                                       | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0xcU)))))),4);
    tracep->fullCData(oldp+10089,((0xeU & ((0x10U & 
                                            (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 9U)) 
                                           | ((8U & 
                                               (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0xaU)) 
                                              | (7U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                  >> 0xdU))))))))),5);
    tracep->fullBit(oldp+10090,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xdU))));
    tracep->fullCData(oldp+10091,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0xdU)))))),3);
    tracep->fullCData(oldp+10092,(((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0xaU)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0xbU)) 
                                      | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0xcU)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 0xeU))))))))),5);
    tracep->fullBit(oldp+10093,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xeU))));
    tracep->fullCData(oldp+10094,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0xeU)))))),2);
    tracep->fullBit(oldp+10095,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xfU))));
    tracep->fullCData(oldp+10096,(((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 0xcU)) 
                                   | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0xdU)) 
                                      | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0xeU)) 
                                         | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  >> 0xfU)))))),4);
    tracep->fullCData(oldp+10097,((0x11U & ((0x10U 
                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0xcU)) 
                                            | ((8U 
                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 0xdU)) 
                                               | (7U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                   >> 0x10U))))))))),5);
    tracep->fullBit(oldp+10098,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x10U))));
    tracep->fullCData(oldp+10099,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0x10U)))))),3);
    tracep->fullCData(oldp+10100,(((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0xdU)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0xeU)) 
                                      | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0xfU)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 0x11U))))))))),5);
    tracep->fullBit(oldp+10101,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x11U))));
    tracep->fullCData(oldp+10102,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0x11U)))))),2);
    tracep->fullBit(oldp+10103,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x12U))));
    tracep->fullCData(oldp+10104,(((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 0xfU)) 
                                   | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0x10U)) 
                                      | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0x11U)) 
                                         | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  >> 0x12U)))))),4);
    tracep->fullCData(oldp+10105,((0x14U & ((0x10U 
                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0xfU)) 
                                            | ((8U 
                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 0x10U)) 
                                               | (7U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                   >> 0x13U))))))))),5);
    tracep->fullBit(oldp+10106,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x13U))));
    tracep->fullCData(oldp+10107,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0x13U)))))),3);
    tracep->fullCData(oldp+10108,(((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0x10U)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0x11U)) 
                                      | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0x12U)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 0x14U))))))))),5);
    tracep->fullBit(oldp+10109,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x14U))));
    tracep->fullCData(oldp+10110,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0x14U)))))),2);
    tracep->fullBit(oldp+10111,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x15U))));
    tracep->fullCData(oldp+10112,(((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 0x12U)) 
                                   | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0x13U)) 
                                      | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0x14U)) 
                                         | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  >> 0x15U)))))),4);
    tracep->fullBit(oldp+10113,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x16U))));
    tracep->fullCData(oldp+10114,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0x16U)))))),3);
    tracep->fullBit(oldp+10115,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x17U))));
    tracep->fullCData(oldp+10116,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0x17U)))))),2);
    tracep->fullCData(oldp+10117,((((((1U & (- (IData)(
                                                       (1U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel))))) 
                                      | (2U & (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                             >> 1U)))))) 
                                     | (3U & ((8U & 
                                               ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                << 1U)) 
                                              | ((4U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel)) 
                                                 | (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                                     >> 2U))))))))) 
                                    | (4U & ((8U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel)) 
                                             | ((4U 
                                                 & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                    >> 1U)) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                         >> 3U))))))) 
                                   | (5U & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                          >> 4U))))))),4);
    tracep->fullCData(oldp+10118,(((1U & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel))))) 
                                   | (2U & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                          >> 1U))))))),4);
    tracep->fullBit(oldp+10119,((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel))));
    tracep->fullCData(oldp+10120,((7U & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel)))))),3);
    tracep->fullBit(oldp+10121,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 1U))));
    tracep->fullCData(oldp+10122,((7U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                       >> 1U)))))),3);
    tracep->fullCData(oldp+10123,((3U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                << 1U)) 
                                         | ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel)) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                              >> 2U))))))))),4);
    tracep->fullBit(oldp+10124,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 2U))));
    tracep->fullCData(oldp+10125,((3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                       >> 2U)))))),2);
    tracep->fullCData(oldp+10126,(((8U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel)) 
                                   | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                             >> 1U)) 
                                      | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                >> 2U)) 
                                         | (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                  >> 3U)))))),4);
    tracep->fullBit(oldp+10127,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 3U))));
    tracep->fullBit(oldp+10128,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 4U))));
    tracep->fullCData(oldp+10129,((7U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                       >> 4U)))))),3);
    tracep->fullCData(oldp+10130,((6U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                >> 2U)) 
                                         | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                   >> 3U)) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                              >> 5U))))))))),4);
    tracep->fullBit(oldp+10131,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 5U))));
    tracep->fullCData(oldp+10132,((3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                       >> 5U)))))),2);
    tracep->fullCData(oldp+10133,(((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                          >> 3U)) | 
                                   ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                           >> 4U)) 
                                    | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                              >> 5U)) 
                                       | (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                >> 6U)))))),4);
    tracep->fullBit(oldp+10134,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 6U))));
    tracep->fullBit(oldp+10135,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 7U))));
    tracep->fullCData(oldp+10136,((7U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                       >> 7U)))))),3);
    tracep->fullBit(oldp+10137,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 8U))));
    tracep->fullCData(oldp+10138,((3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                       >> 8U)))))),2);
    tracep->fullBit(oldp+10139,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 9U))));
    tracep->fullCData(oldp+10140,(((((1U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                   << 3U)) 
                                            | ((4U 
                                                & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel)))))))) 
                                     | (2U & ((8U & 
                                               ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                << 2U)) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                     << 1U)) 
                                                 | (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                                     >> 1U))))))))) 
                                    | (3U & ((8U & 
                                              ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                               << 1U)) 
                                             | ((4U 
                                                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel)) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                         >> 2U))))))) 
                                   | (4U & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                          >> 3U))))))),4);
    tracep->fullCData(oldp+10141,((1U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                << 3U)) 
                                         | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                   << 2U)) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel))))))))),4);
    tracep->fullBit(oldp+10142,((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel))));
    tracep->fullCData(oldp+10143,((3U & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel)))))),2);
    tracep->fullCData(oldp+10144,((2U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                << 2U)) 
                                         | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                   << 1U)) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                              >> 1U))))))))),4);
    tracep->fullBit(oldp+10145,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                       >> 1U))));
    tracep->fullCData(oldp+10146,((3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                       >> 1U)))))),2);
    tracep->fullCData(oldp+10147,(((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                          << 1U)) | 
                                   ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel)) 
                                    | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                              >> 1U)) 
                                       | (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                >> 2U)))))),4);
    tracep->fullBit(oldp+10148,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                       >> 2U))));
    tracep->fullBit(oldp+10149,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                       >> 3U))));
    tracep->fullCData(oldp+10150,((7U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                       >> 3U)))))),3);
    tracep->fullCData(oldp+10151,((5U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                >> 1U)) 
                                         | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                   >> 2U)) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                              >> 4U))))))))),4);
    tracep->fullBit(oldp+10152,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                       >> 4U))));
    tracep->fullCData(oldp+10153,((3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                       >> 4U)))))),2);
    tracep->fullCData(oldp+10154,(((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                          >> 2U)) | 
                                   ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                           >> 3U)) 
                                    | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                              >> 4U)) 
                                       | (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                >> 5U)))))),4);
    tracep->fullBit(oldp+10155,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                       >> 5U))));
    tracep->fullBit(oldp+10156,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                       >> 6U))));
    tracep->fullCData(oldp+10157,((7U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                       >> 6U)))))),3);
    tracep->fullBit(oldp+10158,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                       >> 7U))));
    tracep->fullCData(oldp+10159,((3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                       >> 7U)))))),2);
    tracep->fullBit(oldp+10160,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                       >> 8U))));
    tracep->fullCData(oldp+10161,(((((((1U & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel))))) 
                                       | (2U & (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                              >> 1U)))))) 
                                      | (3U & (- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                             >> 2U)))))) 
                                     | (4U & ((8U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel)) 
                                              | ((4U 
                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                     >> 1U)) 
                                                 | (3U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                                     >> 3U))))))))) 
                                    | (5U & ((8U & 
                                              ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                               >> 1U)) 
                                             | ((4U 
                                                 & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                    >> 2U)) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                         >> 4U))))))) 
                                   | (6U & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                          >> 5U))))))),4);
    tracep->fullCData(oldp+10162,((((1U & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel))))) 
                                    | (2U & (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                           >> 1U)))))) 
                                   | (3U & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                          >> 2U))))))),4);
    tracep->fullCData(oldp+10163,((0xfU & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel)))))),4);
    tracep->fullCData(oldp+10164,((0xfU & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                         >> 1U)))))),4);
    tracep->fullBit(oldp+10165,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                       >> 2U))));
    tracep->fullCData(oldp+10166,((7U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                       >> 2U)))))),3);
    tracep->fullCData(oldp+10167,((4U & ((8U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel)) 
                                         | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                   >> 1U)) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                              >> 3U))))))))),4);
    tracep->fullBit(oldp+10168,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                       >> 3U))));
    tracep->fullCData(oldp+10169,((3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                       >> 3U)))))),2);
    tracep->fullCData(oldp+10170,(((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                          >> 1U)) | 
                                   ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                           >> 2U)) 
                                    | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                              >> 3U)) 
                                       | (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                >> 4U)))))),4);
    tracep->fullBit(oldp+10171,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                       >> 4U))));
    tracep->fullBit(oldp+10172,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                       >> 5U))));
    tracep->fullCData(oldp+10173,((7U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                       >> 5U)))))),3);
    tracep->fullCData(oldp+10174,((7U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                >> 3U)) 
                                         | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                   >> 4U)) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                              >> 6U))))))))),4);
    tracep->fullBit(oldp+10175,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                       >> 6U))));
    tracep->fullCData(oldp+10176,((3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                       >> 6U)))))),2);
    tracep->fullCData(oldp+10177,(((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                          >> 4U)) | 
                                   ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                           >> 5U)) 
                                    | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                              >> 6U)) 
                                       | (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                >> 7U)))))),4);
    tracep->fullBit(oldp+10178,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                       >> 7U))));
    tracep->fullBit(oldp+10179,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                       >> 8U))));
    tracep->fullCData(oldp+10180,((7U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                       >> 8U)))))),3);
    tracep->fullBit(oldp+10181,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                       >> 9U))));
    tracep->fullCData(oldp+10182,((3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                       >> 9U)))))),2);
    tracep->fullBit(oldp+10183,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                       >> 0xaU))));
    tracep->fullCData(oldp+10184,((7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                         >> 0xcU))),3);
    tracep->fullCData(oldp+10185,((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                   >> 0x19U)),7);
    tracep->fullBit(oldp+10186,((0x13U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
    tracep->fullBit(oldp+10187,((0x33U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
    tracep->fullBit(oldp+10188,((0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
    tracep->fullBit(oldp+10189,((0x67U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
    tracep->fullBit(oldp+10190,((0x63U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
    tracep->fullBit(oldp+10191,((0xfU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
    tracep->fullBit(oldp+10192,((0x73U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
    tracep->fullBit(oldp+10193,((0x3bU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
    tracep->fullBit(oldp+10194,((0x1bU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
    tracep->fullBit(oldp+10195,((0U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                              >> 0xcU)))));
    tracep->fullBit(oldp+10196,((1U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                              >> 0xcU)))));
    tracep->fullBit(oldp+10197,((2U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                              >> 0xcU)))));
    tracep->fullBit(oldp+10198,((3U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                              >> 0xcU)))));
    tracep->fullBit(oldp+10199,((4U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                              >> 0xcU)))));
    tracep->fullBit(oldp+10200,((5U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                              >> 0xcU)))));
    tracep->fullBit(oldp+10201,((6U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                              >> 0xcU)))));
    tracep->fullBit(oldp+10202,((7U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                              >> 0xcU)))));
    tracep->fullBit(oldp+10203,((0U == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                        >> 0x19U))));
    tracep->fullBit(oldp+10204,((0x20U == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                           >> 0x19U))));
    tracep->fullBit(oldp+10205,((0x18U == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                           >> 0x19U))));
    tracep->fullBit(oldp+10206,((1U == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                        >> 0x19U))));
    tracep->fullBit(oldp+10207,((0U == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                        >> 0x1aU))));
    tracep->fullBit(oldp+10208,((0x10U == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                           >> 0x1aU))));
    tracep->fullBit(oldp+10209,((IData)((0x33U == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10210,((IData)((0x7033U == 
                                         (0xfe00707fU 
                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10211,((IData)((0x6033U == 
                                         (0xfe00707fU 
                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10212,((IData)((0x1033U == 
                                         (0xfe00707fU 
                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10213,((IData)((0x2033U == 
                                         (0xfe00707fU 
                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10214,((IData)((0x3033U == 
                                         (0xfe00707fU 
                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10215,((IData)((0x40005033U 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10216,((IData)((0x5033U == 
                                         (0xfe00707fU 
                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10217,((IData)((0x40000033U 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10218,((IData)((0x4033U == 
                                         (0xfe00707fU 
                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10219,((IData)((0x4000003bU 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10220,((IData)((0x503bU == 
                                         (0xfe00707fU 
                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10221,((IData)((0x4000503bU 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10222,((IData)((0x3bU == (0xfe00707fU 
                                                   & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10223,((IData)((0x103bU == 
                                         (0xfe00707fU 
                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10224,((IData)((0x13U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10225,((IData)((0x7013U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10226,((IData)((0x6013U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10227,((IData)((0x1013U == 
                                         (0xfc00707fU 
                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10228,((IData)((0x2013U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10229,((IData)((0x3013U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10230,((IData)((0x40005013U 
                                         == (0xfc00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10231,((IData)((0x5013U == 
                                         (0xfc00707fU 
                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10232,((IData)((0x4013U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10233,((IData)((0x501bU == 
                                         (0xfc00707fU 
                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10234,((IData)((0x4000501bU 
                                         == (0xfc00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10235,((IData)((0x1bU == (0x707fU 
                                                   & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10236,((IData)((0x101bU == 
                                         (0xfc00707fU 
                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10237,((IData)((0x2000033U 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10238,((IData)((0x2001033U 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10239,((IData)((0x2002033U 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10240,((IData)((0x2003033U 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10241,((IData)((0x2004033U 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10242,((IData)((0x2005033U 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10243,((IData)((0x2006033U 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10244,((IData)((0x2007033U 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10245,((IData)((0x200003bU 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10246,((IData)((0x200403bU 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10247,((IData)((0x200603bU 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10248,((IData)((0x200703bU 
                                         == (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10249,(((((IData)((0x33U == 
                                            (0xfe00707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                   | (IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                  | (IData)((0x3bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                 | (IData)((0x1bU == 
                                            (0x707fU 
                                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
    tracep->fullBit(oldp+10250,(((IData)((0x40000033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                 | (IData)((0x4000003bU 
                                            == (0xfe00707fU 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
    tracep->fullBit(oldp+10251,(((IData)((0x2033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                 | (IData)((0x2013U 
                                            == (0x707fU 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
    tracep->fullBit(oldp+10252,(((IData)((0x3033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                 | (IData)((0x3013U 
                                            == (0x707fU 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
    tracep->fullBit(oldp+10253,(((IData)((0x4033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                 | (IData)((0x4013U 
                                            == (0x707fU 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
    tracep->fullBit(oldp+10254,(((((IData)((0x1033U 
                                            == (0xfe00707fU 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                   | (IData)((0x1013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                  | (IData)((0x103bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                 | (IData)((0x101bU 
                                            == (0xfc00707fU 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
    tracep->fullBit(oldp+10255,(((((IData)((0x5033U 
                                            == (0xfe00707fU 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                   | (IData)((0x5013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                  | (IData)((0x503bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                 | (IData)((0x501bU 
                                            == (0xfc00707fU 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
    tracep->fullBit(oldp+10256,(((((IData)((0x40005033U 
                                            == (0xfe00707fU 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                   | (IData)((0x40005013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                  | (IData)((0x4000503bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                 | (IData)((0x4000501bU 
                                            == (0xfc00707fU 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
    tracep->fullBit(oldp+10257,(((IData)((0x7033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                 | (IData)((0x7013U 
                                            == (0x707fU 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
    tracep->fullBit(oldp+10258,(((IData)((0x6033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                 | (IData)((0x6013U 
                                            == (0x707fU 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
    tracep->fullBit(oldp+10259,((IData)((3U == (0x707fU 
                                                & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10260,((IData)((0x4003U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10261,((IData)((0x3003U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10262,((IData)((0x1003U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10263,((IData)((0x5003U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10264,((IData)((0x2003U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10265,((IData)((0x6003U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10266,((IData)((0x23U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10267,((IData)((0x3023U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10268,((IData)((0x1023U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10269,((IData)((0x2023U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10270,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__ebreak));
    tracep->fullBit(oldp+10271,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__ecall));
    tracep->fullBit(oldp+10272,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__mret));
    tracep->fullBit(oldp+10273,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrw));
    tracep->fullBit(oldp+10274,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrs));
    tracep->fullBit(oldp+10275,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrc));
    tracep->fullBit(oldp+10276,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrwi));
    tracep->fullBit(oldp+10277,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrsi));
    tracep->fullBit(oldp+10278,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrci));
    tracep->fullBit(oldp+10279,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csri));
    tracep->fullBit(oldp+10280,(((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csri) 
                                   | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrw)) 
                                  | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrs)) 
                                 | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrc))));
    tracep->fullBit(oldp+10281,((IData)((0x63U == (0x707fU 
                                                   & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10282,((IData)((0x5063U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10283,((IData)((0x7063U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10284,((IData)((0x4063U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10285,((IData)((0x6063U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullBit(oldp+10286,((IData)((0x1063U == 
                                         (0x707fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
    tracep->fullQData(oldp+10287,((QData)((IData)((0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                      >> 0xfU))))),64);
    tracep->fullBit(oldp+10289,((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                 >> 0x1fU)));
    tracep->fullIData(oldp+10290,((- (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                              >> 0x1fU)))),32);
    tracep->fullBit(oldp+10291,((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                 >> 0x1fU)));
    tracep->fullQData(oldp+10292,((0x7ffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                         >> 0x1fU)))))),43);
    tracep->fullQData(oldp+10294,((0x7ffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                         >> 0x1fU)))))),51);
    tracep->fullQData(oldp+10296,((0xfffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                         >> 0x1fU)))))),52);
    tracep->fullQData(oldp+10298,((0xfffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                         >> 0x1fU)))))),52);
    tracep->fullWData(oldp+10300,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data),384);
    tracep->fullCData(oldp+10312,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type),6);
    tracep->fullIData(oldp+10313,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel),24);
    tracep->fullSData(oldp+10314,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel),10);
    tracep->fullSData(oldp+10315,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel),9);
    tracep->fullSData(oldp+10316,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel),11);
    tracep->fullBit(oldp+10317,((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel))));
    tracep->fullBit(oldp+10318,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                       >> 1U))));
    tracep->fullQData(oldp+10319,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_micro_op_alu_ctrl_op_string),48);
    tracep->fullIData(oldp+10321,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_micro_op_lsu_ctrl_op_string),32);
    tracep->fullQData(oldp+10322,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_micro_op_bju_ctrl_op_string),40);
    tracep->fullQData(oldp+10324,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_micro_op_exp_ctrl_op_string),48);
    tracep->fullQData(oldp+10326,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exception_string),48);
    tracep->fullQData(oldp+10328,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__tmp_alu_micro_op_alu_ctrl_op_string),48);
    tracep->fullIData(oldp+10330,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__tmp_lsu_micro_op_lsu_ctrl_op_string),32);
    tracep->fullQData(oldp+10331,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__tmp_bju_micro_op_bju_ctrl_op_string),40);
    tracep->fullQData(oldp+10333,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__tmp_bju_micro_op_exp_ctrl_op_string),48);
    tracep->fullIData(oldp+10335,(((0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                >> 0xcU)) 
                                   | ((0x7f800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                   >> 1U)) 
                                      | ((0x400U & 
                                          (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                           >> 0xaU)) 
                                         | (0x3ffU 
                                            & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                               >> 0x15U)))))),20);
    tracep->fullSData(oldp+10336,(((0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                              >> 0x14U)) 
                                   | ((0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                 << 3U)) 
                                      | ((0x3f0U & 
                                          (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                           >> 0x15U)) 
                                         | (0xfU & 
                                            (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                             >> 8U)))))),12);
    tracep->fullBit(oldp+10337,((vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                 >> 0x1fU)));
    tracep->fullBit(oldp+10338,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                       >> 7U))));
    tracep->fullQData(oldp+10339,((0x7ffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                         >> 0x1fU)))))),43);
    tracep->fullQData(oldp+10341,((0x7ffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                         >> 0x1fU)))))),51);
    tracep->fullIData(oldp+10343,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_0),32);
    tracep->fullIData(oldp+10344,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_1),32);
    tracep->fullIData(oldp+10345,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_2),32);
    tracep->fullIData(oldp+10346,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_3),32);
    tracep->fullIData(oldp+10347,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_4),32);
    tracep->fullIData(oldp+10348,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_5),32);
    tracep->fullIData(oldp+10349,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_6),32);
    tracep->fullIData(oldp+10350,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_7),32);
    tracep->fullBit(oldp+10351,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1_dst_ports_ready));
    tracep->fullBit(oldp+10352,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1_en_rob_ports_ready));
    tracep->fullBit(oldp+10353,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid));
    tracep->fullBit(oldp+10354,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_predict_taken));
    tracep->fullIData(oldp+10355,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc),32);
    tracep->fullBit(oldp+10356,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__tmp_src_ports_ready_1));
    tracep->fullBit(oldp+10357,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_0));
    tracep->fullBit(oldp+10358,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_1));
    tracep->fullBit(oldp+10359,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_2));
    tracep->fullBit(oldp+10360,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_3));
    tracep->fullBit(oldp+10361,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow));
    tracep->fullBit(oldp+10362,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_fetch_1_dst_ports_thrown_valid));
    tracep->fullBit(oldp+10363,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid));
    tracep->fullBit(oldp+10364,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when));
    tracep->fullBit(oldp+10365,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when_1));
    tracep->fullBit(oldp+10366,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__src_stream_valid));
    tracep->fullBit(oldp+10367,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_ready));
    tracep->fullBit(oldp+10368,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready));
    tracep->fullBit(oldp+10369,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid));
    tracep->fullBit(oldp+10370,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_valid));
    tracep->fullBit(oldp+10371,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready));
    tracep->fullBit(oldp+10372,((0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt_next))));
    tracep->fullBit(oldp+10373,((0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt_next))));
    tracep->fullBit(oldp+10374,((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty)))));
    tracep->fullBit(oldp+10375,((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full)))));
    tracep->fullBit(oldp+10376,((0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt_next))));
    tracep->fullBit(oldp+10377,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire));
    tracep->fullBit(oldp+10378,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1));
    tracep->fullBit(oldp+10379,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_2));
    tracep->fullBit(oldp+10380,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid));
    tracep->fullBit(oldp+10381,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_3));
    tracep->fullBit(oldp+10382,((((0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt_next)) 
                                  & (0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt_next))) 
                                 & (0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt_next)))));
    tracep->fullCData(oldp+10383,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetchFSM_state_next),2);
    tracep->fullBit(oldp+10384,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid) 
                                 & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready)))));
    tracep->fullQData(oldp+10385,(((0U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetchFSM_state_next))
                                    ? 0x49444c4520ULL
                                    : ((1U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetchFSM_state_next))
                                        ? 0x4645544348ULL
                                        : ((2U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetchFSM_state_next))
                                            ? 0x48414c5420ULL
                                            : 0x3f3f3f3f3fULL)))),40);
    tracep->fullCData(oldp+10387,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt_next),4);
    tracep->fullCData(oldp+10388,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr),4);
    tracep->fullCData(oldp+10389,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr),4);
    tracep->fullCData(oldp+10390,((7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr))),3);
    tracep->fullCData(oldp+10391,((7U & ((IData)(1U) 
                                         + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr)))),3);
    tracep->fullCData(oldp+10392,((7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))),3);
    tracep->fullBit(oldp+10393,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty));
    tracep->fullBit(oldp+10394,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full));
    tracep->fullBit(oldp+10395,(((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty)) 
                                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_3))));
    tracep->fullCData(oldp+10396,((0xffU & ((IData)(1U) 
                                            << (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))))),8);
    tracep->fullBit(oldp+10397,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__ports_s_ports_fire));
    tracep->fullCData(oldp+10398,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt_next),4);
    tracep->fullBit(oldp+10399,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
                                 & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full)))));
    tracep->fullBit(oldp+10400,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__ports_s_ports_fire));
    tracep->fullCData(oldp+10401,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt_next),4);
    tracep->fullBit(oldp+10402,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__en_queue_fire_1));
    tracep->fullBit(oldp+10403,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__en_queue_fire_1));
    tracep->fullBit(oldp+10404,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_bju_0__DOT__en_queue_fire_1));
    tracep->fullBit(oldp+10405,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_lsu_0__DOT__en_queue_fire_1));
    tracep->fullBit(oldp+10406,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld));
    tracep->fullCData(oldp+10407,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_tmp_de_rob_comb_valid),3);
    tracep->fullCData(oldp+10408,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_0),3);
    tracep->fullCData(oldp+10409,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_1),3);
    tracep->fullCData(oldp+10410,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_2),3);
    tracep->fullCData(oldp+10411,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_3),3);
    tracep->fullCData(oldp+10412,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_4),3);
    tracep->fullCData(oldp+10413,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_5),3);
    tracep->fullCData(oldp+10414,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_6),3);
    tracep->fullCData(oldp+10415,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_7),3);
    tracep->fullBit(oldp+10416,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_0));
    tracep->fullBit(oldp+10417,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_1));
    tracep->fullBit(oldp+10418,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_2));
    tracep->fullBit(oldp+10419,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_3));
    tracep->fullBit(oldp+10420,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_4));
    tracep->fullBit(oldp+10421,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_5));
    tracep->fullBit(oldp+10422,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_6));
    tracep->fullBit(oldp+10423,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_7));
    tracep->fullBit(oldp+10424,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_0));
    tracep->fullBit(oldp+10425,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_1));
    tracep->fullBit(oldp+10426,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_2));
    tracep->fullBit(oldp+10427,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_3));
    tracep->fullBit(oldp+10428,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_4));
    tracep->fullBit(oldp+10429,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_5));
    tracep->fullBit(oldp+10430,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_6));
    tracep->fullBit(oldp+10431,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_7));
    tracep->fullBit(oldp+10432,((4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_tmp_de_rob_comb_valid))));
    tracep->fullBit(oldp+10433,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_2));
    tracep->fullBit(oldp+10434,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_4));
    tracep->fullBit(oldp+10435,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_6));
    tracep->fullBit(oldp+10436,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_8));
    tracep->fullBit(oldp+10437,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_10));
    tracep->fullBit(oldp+10438,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_12));
    tracep->fullBit(oldp+10439,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_14));
    tracep->fullBit(oldp+10440,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_16));
    tracep->fullWData(oldp+10441,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_0_string),72);
    tracep->fullWData(oldp+10444,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_1_string),72);
    tracep->fullWData(oldp+10447,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_2_string),72);
    tracep->fullWData(oldp+10450,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_3_string),72);
    tracep->fullWData(oldp+10453,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_4_string),72);
    tracep->fullWData(oldp+10456,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_5_string),72);
    tracep->fullWData(oldp+10459,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_6_string),72);
    tracep->fullWData(oldp+10462,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_7_string),72);
    tracep->fullWData(oldp+10465,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_de_rob_comb_valid_string),72);
    tracep->fullBit(oldp+10468,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_0));
    tracep->fullBit(oldp+10469,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_1));
    tracep->fullBit(oldp+10470,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_2));
    tracep->fullBit(oldp+10471,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_3));
    tracep->fullBit(oldp+10472,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_4));
    tracep->fullBit(oldp+10473,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_5));
    tracep->fullBit(oldp+10474,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_6));
    tracep->fullBit(oldp+10475,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_7));
    tracep->fullBit(oldp+10476,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_8));
    tracep->fullBit(oldp+10477,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_9));
    tracep->fullBit(oldp+10478,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_10));
    tracep->fullBit(oldp+10479,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_11));
    tracep->fullBit(oldp+10480,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_12));
    tracep->fullBit(oldp+10481,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_13));
    tracep->fullBit(oldp+10482,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_14));
    tracep->fullBit(oldp+10483,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_15));
    tracep->fullBit(oldp+10484,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_16));
    tracep->fullBit(oldp+10485,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_17));
    tracep->fullBit(oldp+10486,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_18));
    tracep->fullBit(oldp+10487,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_19));
    tracep->fullBit(oldp+10488,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_20));
    tracep->fullBit(oldp+10489,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_21));
    tracep->fullBit(oldp+10490,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_22));
    tracep->fullBit(oldp+10491,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_23));
    tracep->fullBit(oldp+10492,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_24));
    tracep->fullBit(oldp+10493,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_25));
    tracep->fullBit(oldp+10494,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_26));
    tracep->fullBit(oldp+10495,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_27));
    tracep->fullBit(oldp+10496,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_28));
    tracep->fullBit(oldp+10497,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_29));
    tracep->fullBit(oldp+10498,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_30));
    tracep->fullBit(oldp+10499,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_31));
    tracep->fullBit(oldp+10500,(vlSelf->clock));
    tracep->fullBit(oldp+10501,(vlSelf->reset));
    tracep->fullQData(oldp+10502,(vlSelf->io_logCtrl_log_begin),64);
    tracep->fullQData(oldp+10504,(vlSelf->io_logCtrl_log_end),64);
    tracep->fullQData(oldp+10506,(vlSelf->io_logCtrl_log_level),64);
    tracep->fullBit(oldp+10508,(vlSelf->io_perfInfo_clean));
    tracep->fullBit(oldp+10509,(vlSelf->io_perfInfo_dump));
    tracep->fullBit(oldp+10510,(vlSelf->io_uart_out_valid));
    tracep->fullCData(oldp+10511,(vlSelf->io_uart_out_ch),8);
    tracep->fullBit(oldp+10512,(vlSelf->io_uart_in_valid));
    tracep->fullCData(oldp+10513,(vlSelf->io_uart_in_ch),8);
    tracep->fullBit(oldp+10514,(((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag) 
                                 | ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready) 
                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1_dcache_w_valid)))));
    tracep->fullQData(oldp+10515,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__bypass_reg)
                                    ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__bypass_rsp_data_d1
                                    : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__is_hit_d1)
                                        ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__hit_id_d1)
                                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__sram_area_1_sram__DOT__tmp_mem_port1
                                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__sram_area_0_sram__DOT__tmp_mem_port1)
                                        : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__evict_id_miss)
                                            ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__sram_area_1_sram__DOT__tmp_mem_port1
                                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__sram_area_0_sram__DOT__tmp_mem_port1)))),64);
    tracep->fullQData(oldp+10517,((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__alu_is_quo_reg) 
                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div_io_done_valid))
                                    ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div_io_op_is_word)
                                        ? (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__dividend_positive) 
                                            == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__divisor_positive))
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[2U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[2U])))
                                            : (1ULL 
                                               + (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[2U]))))))
                                        : (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__dividend_positive) 
                                            == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__divisor_positive))
                                            ? (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[2U])))
                                            : (1ULL 
                                               + (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[2U])))))))
                                    : (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__alu_is_rem_reg) 
                                        & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div_io_done_valid))
                                        ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div_io_op_is_word)
                                            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__dividend_positive)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[0U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))
                                                : (1ULL 
                                                   + 
                                                   (~ 
                                                    (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[0U]))))))
                                            : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__dividend_positive)
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))
                                                : (1ULL 
                                                   + 
                                                   (~ 
                                                    (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))))))
                                        : ((((((0xcU 
                                                == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op)) 
                                               | (0xdU 
                                                  == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op))) 
                                              | (0xeU 
                                                 == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op))) 
                                             | (0xfU 
                                                == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op))) 
                                            | (0x14U 
                                               == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op)))
                                            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_is_word)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[0U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[0U])))
                                                : (
                                                   ((0xcU 
                                                     == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op)) 
                                                    | (0xdU 
                                                       == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[0U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[2U])))))
                                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__alu_result)))),64);
    tracep->fullQData(oldp+10519,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_is_word)
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[0U] 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[0U])))
                                    : (((0xcU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op)) 
                                        | (0xdU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op)))
                                        ? (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[0U])))
                                        : (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[2U])))))),64);
    tracep->fullQData(oldp+10521,((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__alu_is_quo_reg) 
                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div_io_done_valid))
                                    ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div_io_op_is_word)
                                        ? (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__dividend_positive) 
                                            == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__divisor_positive))
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[2U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[2U])))
                                            : (1ULL 
                                               + (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[2U]))))))
                                        : (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__dividend_positive) 
                                            == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__divisor_positive))
                                            ? (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[2U])))
                                            : (1ULL 
                                               + (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[2U])))))))
                                    : (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__alu_is_rem_reg) 
                                        & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div_io_done_valid))
                                        ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div_io_op_is_word)
                                            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__dividend_positive)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))
                                                : (1ULL 
                                                   + 
                                                   (~ 
                                                    (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U]))))))
                                            : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__dividend_positive)
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))
                                                : (1ULL 
                                                   + 
                                                   (~ 
                                                    (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))))))
                                        : ((((((0xcU 
                                                == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op)) 
                                               | (0xdU 
                                                  == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op))) 
                                              | (0xeU 
                                                 == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op))) 
                                             | (0xfU 
                                                == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op))) 
                                            | (0x14U 
                                               == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op)))
                                            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_is_word)
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[0U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[0U])))
                                                : (
                                                   ((0xcU 
                                                     == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op)) 
                                                    | (0xdU 
                                                       == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[0U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[2U])))))
                                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__alu_result)))),64);
    tracep->fullQData(oldp+10523,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_is_word)
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[0U] 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[0U])))
                                    : (((0xcU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op)) 
                                        | (0xdU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op)))
                                        ? (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[0U])))
                                        : (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[2U])))))),64);
    tracep->fullIData(oldp+10525,((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_reg 
                                   + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm))),32);
    tracep->fullQData(oldp+10526,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__evict_id_miss)
                                    ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__sram_area_1_sram__DOT__tmp_mem_port1
                                    : vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__sram_area_0_sram__DOT__tmp_mem_port1)),64);
    tracep->fullIData(oldp+10528,(((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr))
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
                                            : vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_0)))),32);
    tracep->fullBit(oldp+10529,((0U < (0xfU & ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
                                                 & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full))) 
                                                & (~ 
                                                   ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty)) 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1))))
                                                ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt) 
                                                   - (IData)(1U))
                                                : (
                                                   ((~ 
                                                     ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
                                                      & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full)))) 
                                                    & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty)) 
                                                       & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1)))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt))
                                                    : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt)))))));
    tracep->fullBit(oldp+10530,(((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_empty)) 
                                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_2))));
    tracep->fullCData(oldp+10531,((0xfU & ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
                                             & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full))) 
                                            & (~ ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty)) 
                                                  & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1))))
                                            ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt) 
                                               - (IData)(1U))
                                            : (((~ 
                                                 ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
                                                  & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full)))) 
                                                & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty)) 
                                                   & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1)))
                                                ? ((IData)(1U) 
                                                   + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt))
                                                : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt))))),4);
    tracep->fullBit(oldp+10532,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_1) 
                                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0_en_queue_ready))));
    tracep->fullBit(oldp+10533,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_2) 
                                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1_en_queue_ready))));
    tracep->fullBit(oldp+10534,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_0) 
                                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_bju_0_en_queue_ready))));
    tracep->fullCData(oldp+10535,(((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_3) 
                                     & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_lsu_0_en_queue_ready)) 
                                    << 3U) | ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_2) 
                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1_en_queue_ready)) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_1) 
                                                   & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0_en_queue_ready)) 
                                                  << 1U) 
                                                 | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_0) 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_bju_0_en_queue_ready)))))),4);
    tracep->fullBit(oldp+10536,((1U & (~ (IData)(vlSelf->reset)))));
    tracep->fullIData(oldp+10537,(0x20U),32);
    tracep->fullIData(oldp+10538,(0x40U),32);
    tracep->fullCData(oldp+10539,(0U),3);
    tracep->fullCData(oldp+10540,(0U),4);
    tracep->fullBit(oldp+10541,(0U));
    tracep->fullQData(oldp+10542,(0ULL),64);
    tracep->fullCData(oldp+10544,(0U),8);
    tracep->fullCData(oldp+10545,(1U),2);
    tracep->fullBit(oldp+10546,(1U));
    tracep->fullBit(oldp+10547,(vlSelf->SimTop__DOT__ram_i_mem_rvalid));
    tracep->fullQData(oldp+10548,(vlSelf->SimTop__DOT__ram_i_mem_rdata),64);
    tracep->fullBit(oldp+10550,(vlSelf->SimTop__DOT__ram_i_mem_rsp_valid));
    tracep->fullBit(oldp+10551,(vlSelf->SimTop__DOT__ram_d_mem_rvalid));
    tracep->fullQData(oldp+10552,(vlSelf->SimTop__DOT__ram_d_mem_rdata),64);
    tracep->fullBit(oldp+10554,(vlSelf->SimTop__DOT__ram_d_mem_rsp_valid));
    tracep->fullIData(oldp+10555,(vlSelf->SimTop__DOT__j),32);
    tracep->fullCData(oldp+10556,(3U),2);
    tracep->fullIData(oldp+10557,(0U),32);
    tracep->fullCData(oldp+10558,(0U),2);
    tracep->fullCData(oldp+10559,(2U),2);
    tracep->fullCData(oldp+10560,(1U),3);
    tracep->fullCData(oldp+10561,(2U),3);
    tracep->fullCData(oldp+10562,(3U),3);
    tracep->fullCData(oldp+10563,(4U),3);
    tracep->fullCData(oldp+10564,(1U),4);
    tracep->fullCData(oldp+10565,(2U),4);
    tracep->fullCData(oldp+10566,(3U),4);
    tracep->fullCData(oldp+10567,(4U),4);
    tracep->fullCData(oldp+10568,(5U),4);
    tracep->fullCData(oldp+10569,(6U),4);
    tracep->fullCData(oldp+10570,(7U),4);
    tracep->fullCData(oldp+10571,(8U),4);
    tracep->fullCData(oldp+10572,(9U),4);
    tracep->fullCData(oldp+10573,(0xaU),4);
    tracep->fullCData(oldp+10574,(0U),5);
    tracep->fullCData(oldp+10575,(1U),5);
    tracep->fullCData(oldp+10576,(2U),5);
    tracep->fullCData(oldp+10577,(3U),5);
    tracep->fullCData(oldp+10578,(4U),5);
    tracep->fullCData(oldp+10579,(5U),5);
    tracep->fullCData(oldp+10580,(6U),5);
    tracep->fullCData(oldp+10581,(7U),5);
    tracep->fullCData(oldp+10582,(8U),5);
    tracep->fullCData(oldp+10583,(9U),5);
    tracep->fullCData(oldp+10584,(0xaU),5);
    tracep->fullCData(oldp+10585,(0xbU),5);
    tracep->fullCData(oldp+10586,(0xcU),5);
    tracep->fullCData(oldp+10587,(0xdU),5);
    tracep->fullCData(oldp+10588,(0xeU),5);
    tracep->fullCData(oldp+10589,(0xfU),5);
    tracep->fullCData(oldp+10590,(0x10U),5);
    tracep->fullCData(oldp+10591,(0x11U),5);
    tracep->fullCData(oldp+10592,(0x12U),5);
    tracep->fullCData(oldp+10593,(0x13U),5);
    tracep->fullCData(oldp+10594,(0x14U),5);
    tracep->fullCData(oldp+10595,(0x15U),5);
    tracep->fullCData(oldp+10596,(0x16U),5);
    tracep->fullCData(oldp+10597,(0x17U),5);
    tracep->fullCData(oldp+10598,(0x18U),5);
    tracep->fullCData(oldp+10599,(0xbU),4);
    tracep->fullCData(oldp+10600,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_bju_0_rob_head_ptr),4);
    tracep->fullCData(oldp+10601,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0_rob_head_ptr),4);
    tracep->fullCData(oldp+10602,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1_rob_head_ptr),4);
    tracep->fullBit(oldp+10603,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1_stall));
    tracep->fullQData(oldp+10604,(0ULL),63);
    tracep->fullIData(oldp+10606,(0x42U),32);
    tracep->fullIData(oldp+10607,(0x84U),32);
    tracep->fullIData(oldp+10608,(0x21U),32);
    tracep->fullQData(oldp+10609,(0xfffffffffffffffeULL),64);
    tracep->fullQData(oldp+10611,(1ULL),64);
    tracep->fullBit(oldp+10613,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__cpu_stall));
    tracep->fullBit(oldp+10614,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__cpu_bypass_stall));
    tracep->fullBit(oldp+10615,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__cache_invld_0));
    tracep->fullBit(oldp+10616,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__cache_invld_1));
    tracep->fullBit(oldp+10617,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__cache_lru_0));
    tracep->fullBit(oldp+10618,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__cache_lru_1));
    tracep->fullSData(oldp+10619,(0U),12);
    tracep->fullCData(oldp+10620,(0x6fU),7);
    tracep->fullCData(oldp+10621,(0x13U),7);
    tracep->fullCData(oldp+10622,(0x1bU),7);
    __Vtemp_h5ba7746c__0[0U] = 0xa307b9acU;
    __Vtemp_h5ba7746c__0[1U] = 0x8bdab49cU;
    __Vtemp_h5ba7746c__0[2U] = 1U;
    tracep->fullWData(oldp+10623,(__Vtemp_h5ba7746c__0),65);
    tracep->fullSData(oldp+10626,(0x317U),10);
    __Vtemp_h18df95fe__0[0U] = 0xcc520c41U;
    __Vtemp_h18df95fe__0[1U] = 0xd62d4941U;
    __Vtemp_h18df95fe__0[2U] = 0x4e5183dcU;
    __Vtemp_h18df95fe__0[3U] = 0xc5ed5aU;
    tracep->fullWData(oldp+10627,(__Vtemp_h18df95fe__0),120);
    tracep->fullQData(oldp+10631,(0xa987654321ULL),40);
    tracep->fullQData(oldp+10633,(0x987654321ULL),36);
    tracep->fullQData(oldp+10635,(0xba987654321ULL),44);
    tracep->fullQData(oldp+10637,(0x52454d555720ULL),48);
    tracep->fullQData(oldp+10639,(0x52454d572020ULL),48);
    tracep->fullQData(oldp+10641,(0x444956555720ULL),48);
    tracep->fullQData(oldp+10643,(0x444956572020ULL),48);
    tracep->fullQData(oldp+10645,(0x4d554c572020ULL),48);
    tracep->fullQData(oldp+10647,(0x52454d552020ULL),48);
    tracep->fullQData(oldp+10649,(0x52454d5f3120ULL),48);
    tracep->fullQData(oldp+10651,(0x444956552020ULL),48);
    tracep->fullQData(oldp+10653,(0x444956202020ULL),48);
    tracep->fullQData(oldp+10655,(0x4d554c485520ULL),48);
    tracep->fullQData(oldp+10657,(0x4d554c485355ULL),48);
    tracep->fullQData(oldp+10659,(0x4d554c482020ULL),48);
    tracep->fullQData(oldp+10661,(0x4d554c202020ULL),48);
    tracep->fullQData(oldp+10663,(0x4c5549202020ULL),48);
    tracep->fullQData(oldp+10665,(0x4f525f312020ULL),48);
    tracep->fullQData(oldp+10667,(0x414e445f3120ULL),48);
    tracep->fullQData(oldp+10669,(0x5352415f3120ULL),48);
    tracep->fullQData(oldp+10671,(0x53524c5f3120ULL),48);
    tracep->fullQData(oldp+10673,(0x534c4c5f3120ULL),48);
    tracep->fullQData(oldp+10675,(0x584f525f3120ULL),48);
    tracep->fullQData(oldp+10677,(0x534c54552020ULL),48);
    tracep->fullQData(oldp+10679,(0x534c54202020ULL),48);
    tracep->fullQData(oldp+10681,(0x535542202020ULL),48);
    tracep->fullQData(oldp+10683,(0x414444202020ULL),48);
    tracep->fullQData(oldp+10685,(0x4353522020ULL),40);
    tracep->fullQData(oldp+10687,(0x4247455520ULL),40);
    tracep->fullQData(oldp+10689,(0x424c545520ULL),40);
    tracep->fullQData(oldp+10691,(0x4247452020ULL),40);
    tracep->fullQData(oldp+10693,(0x424c542020ULL),40);
    tracep->fullQData(oldp+10695,(0x424e452020ULL),40);
    tracep->fullQData(oldp+10697,(0x4245512020ULL),40);
    tracep->fullQData(oldp+10699,(0x4a414c5220ULL),40);
    tracep->fullQData(oldp+10701,(0x4a414c2020ULL),40);
    tracep->fullQData(oldp+10703,(0x4155495043ULL),40);
    tracep->fullQData(oldp+10705,(0x435352524349ULL),48);
    tracep->fullQData(oldp+10707,(0x435352525349ULL),48);
    tracep->fullQData(oldp+10709,(0x435352525749ULL),48);
    tracep->fullQData(oldp+10711,(0x435352524320ULL),48);
    tracep->fullQData(oldp+10713,(0x435352525320ULL),48);
    tracep->fullQData(oldp+10715,(0x435352525720ULL),48);
    tracep->fullQData(oldp+10717,(0x4d5245542020ULL),48);
    tracep->fullQData(oldp+10719,(0x45425245414bULL),48);
    tracep->fullQData(oldp+10721,(0x4543414c4c20ULL),48);
    tracep->fullIData(oldp+10723,(0x53442020U),32);
    tracep->fullIData(oldp+10724,(0x53572020U),32);
    tracep->fullIData(oldp+10725,(0x53482020U),32);
    tracep->fullIData(oldp+10726,(0x53422020U),32);
    tracep->fullIData(oldp+10727,(0x4c442020U),32);
    tracep->fullIData(oldp+10728,(0x4c575520U),32);
    tracep->fullIData(oldp+10729,(0x4c572020U),32);
    tracep->fullIData(oldp+10730,(0x4c485520U),32);
    tracep->fullIData(oldp+10731,(0x4c482020U),32);
    tracep->fullIData(oldp+10732,(0x4c425520U),32);
    tracep->fullIData(oldp+10733,(0x4c422020U),32);
    tracep->fullBit(oldp+10734,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__lsu_0__DOT__dcache_ports_stall));
    tracep->fullQData(oldp+10735,(0ULL),56);
    tracep->fullQData(oldp+10737,(0ULL),48);
    tracep->fullCData(oldp+10739,(0xffU),8);
    tracep->fullIData(oldp+10740,(4U),32);
    tracep->fullIData(oldp+10741,(8U),32);
    tracep->fullIData(oldp+10742,(1U),32);
    tracep->fullIData(oldp+10743,(0x2000000U),32);
    tracep->fullIData(oldp+10744,(3U),32);
    tracep->fullIData(oldp+10745,(0x16U),32);
    tracep->fullQData(oldp+10746,(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_r_data),64);
    tracep->fullQData(oldp+10748,(vlSelf->SimTop__DOT__u_axi_slave_mem_i__DOT__sig_r_data),64);
}
