// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__trace_chg_sub_7(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_sub_7\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 10050);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        tracep->chgCData(oldp+0,((((((((((((((1U & 
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
                                            | (3U & 
                                               ((0x10U 
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
                                          | (5U & (
                                                   (0x10U 
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
        tracep->chgCData(oldp+1,(((((((((((1U & ((0x10U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                        << 3U)) 
                                                    | (7U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel))))))) 
                                          | (2U & (
                                                   (0x10U 
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
        tracep->chgCData(oldp+2,((((((((1U & ((0x10U 
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
                                  | (7U & ((0x10U & 
                                            (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 2U)) 
                                           | ((8U & 
                                               (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
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
        tracep->chgCData(oldp+3,(((((1U & ((0x10U & 
                                            (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             << 4U)) 
                                           | ((8U & 
                                               (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
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
                                  | (4U & ((0x10U & 
                                            (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             << 1U)) 
                                           | ((8U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                              | ((4U 
                                                  & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                     >> 1U)) 
                                                 | ((2U 
                                                     & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                        >> 2U)) 
                                                    | (1U 
                                                       & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                          >> 3U))))))))),5);
        tracep->chgCData(oldp+4,((1U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  << 4U)) 
                                        | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  << 3U)) 
                                           | (7U & 
                                              (- (IData)(
                                                         (1U 
                                                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel)))))))),5);
        tracep->chgBit(oldp+5,((1U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel)));
        tracep->chgCData(oldp+6,((7U & (- (IData)((1U 
                                                   & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel))))),3);
        tracep->chgCData(oldp+7,((2U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  << 3U)) 
                                        | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  << 2U)) 
                                           | (7U & 
                                              (- (IData)(
                                                         (1U 
                                                          & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                             >> 1U))))))))),5);
        tracep->chgBit(oldp+8,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                      >> 1U))));
        tracep->chgCData(oldp+9,((7U & (- (IData)((1U 
                                                   & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                      >> 1U)))))),3);
        tracep->chgCData(oldp+10,(((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             << 2U)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             << 1U)) 
                                      | ((4U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 2U))))))))),5);
        tracep->chgBit(oldp+11,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 2U))));
        tracep->chgCData(oldp+12,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 2U)))))),2);
        tracep->chgBit(oldp+13,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 3U))));
        tracep->chgCData(oldp+14,(((8U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                   | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 1U)) 
                                      | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 2U)) 
                                         | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  >> 3U)))))),4);
        tracep->chgCData(oldp+15,((5U & ((0x10U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel) 
                                         | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 1U)) 
                                            | (7U & 
                                               (- (IData)(
                                                          (1U 
                                                           & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                              >> 4U))))))))),5);
        tracep->chgBit(oldp+16,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 4U))));
        tracep->chgCData(oldp+17,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 4U)))))),3);
        tracep->chgCData(oldp+18,(((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 1U)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 2U)) 
                                      | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 3U)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 5U))))))))),5);
        tracep->chgBit(oldp+19,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 5U))));
        tracep->chgCData(oldp+20,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 5U)))))),2);
        tracep->chgBit(oldp+21,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 6U))));
        tracep->chgCData(oldp+22,(((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 3U)) | 
                                   ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                           >> 4U)) 
                                    | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 5U)) 
                                       | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 6U)))))),4);
        tracep->chgCData(oldp+23,((8U & ((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 3U)) 
                                         | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                   >> 4U)) 
                                            | (7U & 
                                               (- (IData)(
                                                          (1U 
                                                           & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                              >> 7U))))))))),5);
        tracep->chgBit(oldp+24,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 7U))));
        tracep->chgCData(oldp+25,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 7U)))))),3);
        tracep->chgCData(oldp+26,(((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 4U)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 5U)) 
                                      | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 6U)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 8U))))))))),5);
        tracep->chgBit(oldp+27,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 8U))));
        tracep->chgCData(oldp+28,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 8U)))))),2);
        tracep->chgBit(oldp+29,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 9U))));
        tracep->chgCData(oldp+30,(((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 6U)) | 
                                   ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                           >> 7U)) 
                                    | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 8U)) 
                                       | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 9U)))))),4);
        tracep->chgCData(oldp+31,((0xbU & ((0x10U & 
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
        tracep->chgBit(oldp+32,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xaU))));
        tracep->chgCData(oldp+33,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0xaU)))))),3);
        tracep->chgCData(oldp+34,(((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 7U)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 8U)) 
                                      | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 9U)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 0xbU))))))))),5);
        tracep->chgBit(oldp+35,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xbU))));
        tracep->chgCData(oldp+36,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0xbU)))))),2);
        tracep->chgBit(oldp+37,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xcU))));
        tracep->chgCData(oldp+38,(((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 9U)) | 
                                   ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                           >> 0xaU)) 
                                    | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                              >> 0xbU)) 
                                       | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0xcU)))))),4);
        tracep->chgCData(oldp+39,((0xeU & ((0x10U & 
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
        tracep->chgBit(oldp+40,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xdU))));
        tracep->chgCData(oldp+41,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0xdU)))))),3);
        tracep->chgCData(oldp+42,(((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0xaU)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0xbU)) 
                                      | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0xcU)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 0xeU))))))))),5);
        tracep->chgBit(oldp+43,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xeU))));
        tracep->chgCData(oldp+44,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0xeU)))))),2);
        tracep->chgBit(oldp+45,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0xfU))));
        tracep->chgCData(oldp+46,(((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 0xcU)) 
                                   | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0xdU)) 
                                      | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0xeU)) 
                                         | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  >> 0xfU)))))),4);
        tracep->chgCData(oldp+47,((0x11U & ((0x10U 
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
        tracep->chgBit(oldp+48,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x10U))));
        tracep->chgCData(oldp+49,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0x10U)))))),3);
        tracep->chgCData(oldp+50,(((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0xdU)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0xeU)) 
                                      | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0xfU)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 0x11U))))))))),5);
        tracep->chgBit(oldp+51,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x11U))));
        tracep->chgCData(oldp+52,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0x11U)))))),2);
        tracep->chgBit(oldp+53,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x12U))));
        tracep->chgCData(oldp+54,(((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 0xfU)) 
                                   | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0x10U)) 
                                      | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0x11U)) 
                                         | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  >> 0x12U)))))),4);
        tracep->chgCData(oldp+55,((0x14U & ((0x10U 
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
        tracep->chgBit(oldp+56,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x13U))));
        tracep->chgCData(oldp+57,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0x13U)))))),3);
        tracep->chgCData(oldp+58,(((0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0x10U)) 
                                   | ((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0x11U)) 
                                      | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0x12U)) 
                                         | (3U & (- (IData)(
                                                            (1U 
                                                             & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                                >> 0x14U))))))))),5);
        tracep->chgBit(oldp+59,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x14U))));
        tracep->chgCData(oldp+60,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0x14U)))))),2);
        tracep->chgBit(oldp+61,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x15U))));
        tracep->chgCData(oldp+62,(((8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                          >> 0x12U)) 
                                   | ((4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                             >> 0x13U)) 
                                      | ((2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                >> 0x14U)) 
                                         | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                  >> 0x15U)))))),4);
        tracep->chgBit(oldp+63,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x16U))));
        tracep->chgCData(oldp+64,((7U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0x16U)))))),3);
        tracep->chgBit(oldp+65,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                       >> 0x17U))));
        tracep->chgCData(oldp+66,((3U & (- (IData)(
                                                   (1U 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel 
                                                       >> 0x17U)))))),2);
        tracep->chgCData(oldp+67,((((((1U & (- (IData)(
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
        tracep->chgCData(oldp+68,(((1U & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel))))) 
                                   | (2U & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                          >> 1U))))))),4);
        tracep->chgBit(oldp+69,((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel))));
        tracep->chgCData(oldp+70,((7U & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel)))))),3);
        tracep->chgBit(oldp+71,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 1U))));
        tracep->chgCData(oldp+72,((7U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                       >> 1U)))))),3);
        tracep->chgCData(oldp+73,((3U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                << 1U)) 
                                         | ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel)) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                              >> 2U))))))))),4);
        tracep->chgBit(oldp+74,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 2U))));
        tracep->chgCData(oldp+75,((3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                       >> 2U)))))),2);
        tracep->chgCData(oldp+76,(((8U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel)) 
                                   | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                             >> 1U)) 
                                      | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                >> 2U)) 
                                         | (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                  >> 3U)))))),4);
        tracep->chgBit(oldp+77,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 3U))));
        tracep->chgBit(oldp+78,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 4U))));
        tracep->chgCData(oldp+79,((7U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                       >> 4U)))))),3);
        tracep->chgCData(oldp+80,((6U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                >> 2U)) 
                                         | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                   >> 3U)) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                              >> 5U))))))))),4);
        tracep->chgBit(oldp+81,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 5U))));
        tracep->chgCData(oldp+82,((3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                       >> 5U)))))),2);
        tracep->chgCData(oldp+83,(((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                          >> 3U)) | 
                                   ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                           >> 4U)) 
                                    | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                              >> 5U)) 
                                       | (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                >> 6U)))))),4);
        tracep->chgBit(oldp+84,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 6U))));
        tracep->chgBit(oldp+85,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 7U))));
        tracep->chgCData(oldp+86,((7U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                       >> 7U)))))),3);
        tracep->chgBit(oldp+87,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 8U))));
        tracep->chgCData(oldp+88,((3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                                       >> 8U)))))),2);
        tracep->chgBit(oldp+89,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel) 
                                       >> 9U))));
        tracep->chgCData(oldp+90,(((((1U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
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
        tracep->chgCData(oldp+91,((1U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                << 3U)) 
                                         | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                   << 2U)) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel))))))))),4);
        tracep->chgBit(oldp+92,((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel))));
        tracep->chgCData(oldp+93,((3U & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel)))))),2);
        tracep->chgCData(oldp+94,((2U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                << 2U)) 
                                         | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                   << 1U)) 
                                            | (3U & 
                                               (- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                              >> 1U))))))))),4);
        tracep->chgBit(oldp+95,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                       >> 1U))));
        tracep->chgCData(oldp+96,((3U & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                       >> 1U)))))),2);
        tracep->chgCData(oldp+97,(((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                          << 1U)) | 
                                   ((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel)) 
                                    | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                              >> 1U)) 
                                       | (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                >> 2U)))))),4);
        tracep->chgBit(oldp+98,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                       >> 2U))));
        tracep->chgBit(oldp+99,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                       >> 3U))));
        tracep->chgCData(oldp+100,((7U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                        >> 3U)))))),3);
        tracep->chgCData(oldp+101,((5U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                 >> 1U)) 
                                          | ((4U & 
                                              ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                               >> 2U)) 
                                             | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                                 >> 4U))))))))),4);
        tracep->chgBit(oldp+102,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                        >> 4U))));
        tracep->chgCData(oldp+103,((3U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                        >> 4U)))))),2);
        tracep->chgCData(oldp+104,(((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                           >> 2U)) 
                                    | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                              >> 3U)) 
                                       | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                 >> 4U)) 
                                          | (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                   >> 5U)))))),4);
        tracep->chgBit(oldp+105,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                        >> 5U))));
        tracep->chgBit(oldp+106,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                        >> 6U))));
        tracep->chgCData(oldp+107,((7U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                        >> 6U)))))),3);
        tracep->chgBit(oldp+108,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                        >> 7U))));
        tracep->chgCData(oldp+109,((3U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                                        >> 7U)))))),2);
        tracep->chgBit(oldp+110,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel) 
                                        >> 8U))));
        tracep->chgCData(oldp+111,(((((((1U & (- (IData)(
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
                                      | (4U & ((8U 
                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel)) 
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
        tracep->chgCData(oldp+112,((((1U & (- (IData)(
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
        tracep->chgCData(oldp+113,((0xfU & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel)))))),4);
        tracep->chgCData(oldp+114,((0xfU & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                          >> 1U)))))),4);
        tracep->chgBit(oldp+115,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                        >> 2U))));
        tracep->chgCData(oldp+116,((7U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                        >> 2U)))))),3);
        tracep->chgCData(oldp+117,((4U & ((8U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel)) 
                                          | ((4U & 
                                              ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                               >> 1U)) 
                                             | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                                 >> 3U))))))))),4);
        tracep->chgBit(oldp+118,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                        >> 3U))));
        tracep->chgCData(oldp+119,((3U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                        >> 3U)))))),2);
        tracep->chgCData(oldp+120,(((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                           >> 1U)) 
                                    | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                              >> 2U)) 
                                       | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                 >> 3U)) 
                                          | (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                   >> 4U)))))),4);
        tracep->chgBit(oldp+121,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                        >> 4U))));
        tracep->chgBit(oldp+122,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                        >> 5U))));
        tracep->chgCData(oldp+123,((7U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                        >> 5U)))))),3);
        tracep->chgCData(oldp+124,((7U & ((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                 >> 3U)) 
                                          | ((4U & 
                                              ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                               >> 4U)) 
                                             | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                                 >> 6U))))))))),4);
        tracep->chgBit(oldp+125,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                        >> 6U))));
        tracep->chgCData(oldp+126,((3U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                        >> 6U)))))),2);
        tracep->chgCData(oldp+127,(((8U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                           >> 4U)) 
                                    | ((4U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                              >> 5U)) 
                                       | ((2U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                 >> 6U)) 
                                          | (1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                   >> 7U)))))),4);
        tracep->chgBit(oldp+128,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                        >> 7U))));
        tracep->chgBit(oldp+129,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                        >> 8U))));
        tracep->chgCData(oldp+130,((7U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                        >> 8U)))))),3);
        tracep->chgBit(oldp+131,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                        >> 9U))));
        tracep->chgCData(oldp+132,((3U & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                                        >> 9U)))))),2);
        tracep->chgBit(oldp+133,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                        >> 0xaU))));
        tracep->chgCData(oldp+134,((7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+135,((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                    >> 0x19U)),7);
        tracep->chgBit(oldp+136,((0x13U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
        tracep->chgBit(oldp+137,((0x33U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
        tracep->chgBit(oldp+138,((0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
        tracep->chgBit(oldp+139,((0x67U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
        tracep->chgBit(oldp+140,((0x63U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
        tracep->chgBit(oldp+141,((0xfU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
        tracep->chgBit(oldp+142,((0x73U == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
        tracep->chgBit(oldp+143,((0x3bU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
        tracep->chgBit(oldp+144,((0x1bU == (0x7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))));
        tracep->chgBit(oldp+145,((0U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+146,((1U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+147,((2U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+148,((3U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+149,((4U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+150,((5U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+151,((6U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+152,((7U == (7U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+153,((0U == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                         >> 0x19U))));
        tracep->chgBit(oldp+154,((0x20U == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                            >> 0x19U))));
        tracep->chgBit(oldp+155,((0x18U == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                            >> 0x19U))));
        tracep->chgBit(oldp+156,((1U == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                         >> 0x19U))));
        tracep->chgBit(oldp+157,((0U == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+158,((0x10U == (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                            >> 0x1aU))));
        tracep->chgBit(oldp+159,((IData)((0x33U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+160,((IData)((0x7033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+161,((IData)((0x6033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+162,((IData)((0x1033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+163,((IData)((0x2033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+164,((IData)((0x3033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+165,((IData)((0x40005033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+166,((IData)((0x5033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+167,((IData)((0x40000033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+168,((IData)((0x4033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+169,((IData)((0x4000003bU 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+170,((IData)((0x503bU == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+171,((IData)((0x4000503bU 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+172,((IData)((0x3bU == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+173,((IData)((0x103bU == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+174,((IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+175,((IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+176,((IData)((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+177,((IData)((0x1013U == 
                                          (0xfc00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+178,((IData)((0x2013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+179,((IData)((0x3013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+180,((IData)((0x40005013U 
                                          == (0xfc00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+181,((IData)((0x5013U == 
                                          (0xfc00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+182,((IData)((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+183,((IData)((0x501bU == 
                                          (0xfc00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+184,((IData)((0x4000501bU 
                                          == (0xfc00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+185,((IData)((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+186,((IData)((0x101bU == 
                                          (0xfc00707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+187,((IData)((0x2000033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+188,((IData)((0x2001033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+189,((IData)((0x2002033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+190,((IData)((0x2003033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+191,((IData)((0x2004033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+192,((IData)((0x2005033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+193,((IData)((0x2006033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+194,((IData)((0x2007033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+195,((IData)((0x200003bU 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+196,((IData)((0x200403bU 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+197,((IData)((0x200603bU 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+198,((IData)((0x200703bU 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+199,(((((IData)((0x33U 
                                             == (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                    | (IData)((0x13U 
                                               == (0x707fU 
                                                   & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                   | (IData)((0x3bU 
                                              == (0xfe00707fU 
                                                  & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))) 
                                  | (IData)((0x1bU 
                                             == (0x707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
        tracep->chgBit(oldp+200,(((IData)((0x40000033U 
                                           == (0xfe00707fU 
                                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                  | (IData)((0x4000003bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
        tracep->chgBit(oldp+201,(((IData)((0x2033U 
                                           == (0xfe00707fU 
                                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                  | (IData)((0x2013U 
                                             == (0x707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
        tracep->chgBit(oldp+202,(((IData)((0x3033U 
                                           == (0xfe00707fU 
                                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                  | (IData)((0x3013U 
                                             == (0x707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
        tracep->chgBit(oldp+203,(((IData)((0x4033U 
                                           == (0xfe00707fU 
                                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                  | (IData)((0x4013U 
                                             == (0x707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
        tracep->chgBit(oldp+204,(((((IData)((0x1033U 
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
        tracep->chgBit(oldp+205,(((((IData)((0x5033U 
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
        tracep->chgBit(oldp+206,(((((IData)((0x40005033U 
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
        tracep->chgBit(oldp+207,(((IData)((0x7033U 
                                           == (0xfe00707fU 
                                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                  | (IData)((0x7013U 
                                             == (0x707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
        tracep->chgBit(oldp+208,(((IData)((0x6033U 
                                           == (0xfe00707fU 
                                               & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))) 
                                  | (IData)((0x6013U 
                                             == (0x707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction))))));
        tracep->chgBit(oldp+209,((IData)((3U == (0x707fU 
                                                 & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+210,((IData)((0x4003U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+211,((IData)((0x3003U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+212,((IData)((0x1003U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+213,((IData)((0x5003U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+214,((IData)((0x2003U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+215,((IData)((0x6003U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+216,((IData)((0x23U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+217,((IData)((0x3023U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+218,((IData)((0x1023U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+219,((IData)((0x2023U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+220,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__ebreak));
        tracep->chgBit(oldp+221,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__ecall));
        tracep->chgBit(oldp+222,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__mret));
        tracep->chgBit(oldp+223,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrw));
        tracep->chgBit(oldp+224,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrs));
        tracep->chgBit(oldp+225,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrc));
        tracep->chgBit(oldp+226,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrwi));
        tracep->chgBit(oldp+227,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrsi));
        tracep->chgBit(oldp+228,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrci));
        tracep->chgBit(oldp+229,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csri));
        tracep->chgBit(oldp+230,(((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csri) 
                                    | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrw)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrs)) 
                                  | (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__csrrc))));
        tracep->chgBit(oldp+231,((IData)((0x63U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+232,((IData)((0x5063U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+233,((IData)((0x7063U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+234,((IData)((0x4063U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+235,((IData)((0x6063U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgBit(oldp+236,((IData)((0x1063U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction)))));
        tracep->chgQData(oldp+237,((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                       >> 0xfU))))),64);
        tracep->chgBit(oldp+239,((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                  >> 0x1fU)));
        tracep->chgIData(oldp+240,((- (IData)((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                               >> 0x1fU)))),32);
        tracep->chgBit(oldp+241,((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                  >> 0x1fU)));
        tracep->chgQData(oldp+242,((0x7ffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                          >> 0x1fU)))))),43);
        tracep->chgQData(oldp+244,((0x7ffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                          >> 0x1fU)))))),51);
        tracep->chgQData(oldp+246,((0xfffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                          >> 0x1fU)))))),52);
        tracep->chgQData(oldp+248,((0xfffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_rData_instruction 
                                                          >> 0x1fU)))))),52);
        tracep->chgWData(oldp+250,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_data),384);
        tracep->chgCData(oldp+262,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__imm_type),6);
        tracep->chgIData(oldp+263,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_ctrl_sel),24);
        tracep->chgSData(oldp+264,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_ctrl_sel),10);
        tracep->chgSData(oldp+265,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exp_ctrl_sel),9);
        tracep->chgSData(oldp+266,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel),11);
        tracep->chgBit(oldp+267,((1U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel))));
        tracep->chgBit(oldp+268,((1U & ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_ctrl_sel) 
                                        >> 1U))));
        tracep->chgQData(oldp+269,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__alu_micro_op_alu_ctrl_op_string),48);
        tracep->chgIData(oldp+271,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__lsu_micro_op_lsu_ctrl_op_string),32);
        tracep->chgQData(oldp+272,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_micro_op_bju_ctrl_op_string),40);
        tracep->chgQData(oldp+274,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__bju_micro_op_exp_ctrl_op_string),48);
        tracep->chgQData(oldp+276,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__exception_string),48);
        tracep->chgQData(oldp+278,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__tmp_alu_micro_op_alu_ctrl_op_string),48);
        tracep->chgIData(oldp+280,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__tmp_lsu_micro_op_lsu_ctrl_op_string),32);
        tracep->chgQData(oldp+281,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__tmp_bju_micro_op_bju_ctrl_op_string),40);
        tracep->chgQData(oldp+283,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__decode_1__DOT__tmp_bju_micro_op_exp_ctrl_op_string),48);
        tracep->chgIData(oldp+285,(((0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                 >> 0xcU)) 
                                    | ((0x7f800U & 
                                        (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                         >> 1U)) | 
                                       ((0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                            >> 0x15U)))))),20);
        tracep->chgSData(oldp+286,(((0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                               >> 0x14U)) 
                                    | ((0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                  << 3U)) 
                                       | ((0x3f0U & 
                                           (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                            >> 0x15U)) 
                                          | (0xfU & 
                                             (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                              >> 8U)))))),12);
        tracep->chgBit(oldp+287,((vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+288,((1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                        >> 7U))));
        tracep->chgQData(oldp+289,((0x7ffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                          >> 0x1fU)))))),43);
        tracep->chgQData(oldp+291,((0x7ffffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__tmp_mem_port1 
                                                          >> 0x1fU)))))),51);
        tracep->chgIData(oldp+293,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_0),32);
        tracep->chgIData(oldp+294,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_1),32);
        tracep->chgIData(oldp+295,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_2),32);
        tracep->chgIData(oldp+296,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_3),32);
        tracep->chgIData(oldp+297,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_4),32);
        tracep->chgIData(oldp+298,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_5),32);
        tracep->chgIData(oldp+299,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_6),32);
        tracep->chgIData(oldp+300,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_ram_7),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        tracep->chgBit(oldp+301,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1_dst_ports_ready));
        tracep->chgBit(oldp+302,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1_en_rob_ports_ready));
        tracep->chgBit(oldp+303,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_icache_ports_cmd_valid));
        tracep->chgBit(oldp+304,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_predict_taken));
        tracep->chgIData(oldp+305,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu_target_pc),32);
        tracep->chgBit(oldp+306,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__tmp_src_ports_ready_1));
        tracep->chgBit(oldp+307,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_0));
        tracep->chgBit(oldp+308,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_1));
        tracep->chgBit(oldp+309,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_2));
        tracep->chgBit(oldp+310,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_3));
        tracep->chgBit(oldp+311,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__change_flow));
        tracep->chgBit(oldp+312,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_fetch_1_dst_ports_thrown_valid));
        tracep->chgBit(oldp+313,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__toplevel_decode_1_en_rob_ports_thrown_valid));
        tracep->chgBit(oldp+314,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when));
        tracep->chgBit(oldp+315,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__bpu__DOT__tmp_when_1));
        tracep->chgBit(oldp+316,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__src_stream_valid));
        tracep->chgBit(oldp+317,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__decode_1__DOT__en_rob_stream_ready));
        tracep->chgBit(oldp+318,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready));
        tracep->chgBit(oldp+319,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid));
        tracep->chgBit(oldp+320,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_valid));
        tracep->chgBit(oldp+321,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__src_stream_ready));
        tracep->chgBit(oldp+322,((0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt_next))));
        tracep->chgBit(oldp+323,((0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt_next))));
        tracep->chgBit(oldp+324,((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty)))));
        tracep->chgBit(oldp+325,((1U & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full)))));
        tracep->chgBit(oldp+326,((0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt_next))));
        tracep->chgBit(oldp+327,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire));
        tracep->chgBit(oldp+328,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1));
        tracep->chgBit(oldp+329,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_2));
        tracep->chgBit(oldp+330,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid));
        tracep->chgBit(oldp+331,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_3));
        tracep->chgBit(oldp+332,((((0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt_next)) 
                                   & (0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt_next))) 
                                  & (0U < (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt_next)))));
        tracep->chgCData(oldp+333,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetchFSM_state_next),2);
        tracep->chgBit(oldp+334,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_dst_ports_valid) 
                                  & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__tmp_dst_ports_ready)))));
        tracep->chgQData(oldp+335,(((0U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetchFSM_state_next))
                                     ? 0x49444c4520ULL
                                     : ((1U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetchFSM_state_next))
                                         ? 0x4645544348ULL
                                         : ((2U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__fetchFSM_state_next))
                                             ? 0x48414c5420ULL
                                             : 0x3f3f3f3f3fULL)))),40);
        tracep->chgCData(oldp+337,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__empty_entry_cnt_next),4);
        tracep->chgCData(oldp+338,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr),4);
        tracep->chgCData(oldp+339,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr),4);
        tracep->chgCData(oldp+340,((7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr))),3);
        tracep->chgCData(oldp+341,((7U & ((IData)(1U) 
                                          + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr)))),3);
        tracep->chgCData(oldp+342,((7U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))),3);
        tracep->chgBit(oldp+343,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty));
        tracep->chgBit(oldp+344,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full));
        tracep->chgBit(oldp+345,(((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_empty)) 
                                  & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_3))));
        tracep->chgCData(oldp+346,((0xffU & ((IData)(1U) 
                                             << (7U 
                                                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__write_ptr))))),8);
        tracep->chgBit(oldp+347,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__ports_s_ports_fire));
        tracep->chgCData(oldp+348,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__empty_entry_cnt_next),4);
        tracep->chgBit(oldp+349,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_in_stream_valid) 
                                  & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__fifo_full)))));
        tracep->chgBit(oldp+350,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__ports_s_ports_fire));
        tracep->chgCData(oldp+351,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_stream_fifo__DOT__empty_entry_cnt_next),4);
        tracep->chgBit(oldp+352,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__en_queue_fire_1));
        tracep->chgBit(oldp+353,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__en_queue_fire_1));
        tracep->chgBit(oldp+354,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_bju_0__DOT__en_queue_fire_1));
        tracep->chgBit(oldp+355,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_lsu_0__DOT__en_queue_fire_1));
        tracep->chgBit(oldp+356,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1_en_rob_vld));
        tracep->chgCData(oldp+357,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_tmp_de_rob_comb_valid),3);
        tracep->chgCData(oldp+358,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_0),3);
        tracep->chgCData(oldp+359,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_1),3);
        tracep->chgCData(oldp+360,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_2),3);
        tracep->chgCData(oldp+361,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_3),3);
        tracep->chgCData(oldp+362,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_4),3);
        tracep->chgCData(oldp+363,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_5),3);
        tracep->chgCData(oldp+364,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_6),3);
        tracep->chgCData(oldp+365,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_7),3);
        tracep->chgBit(oldp+366,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_0));
        tracep->chgBit(oldp+367,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_1));
        tracep->chgBit(oldp+368,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_2));
        tracep->chgBit(oldp+369,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_3));
        tracep->chgBit(oldp+370,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_4));
        tracep->chgBit(oldp+371,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_5));
        tracep->chgBit(oldp+372,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_6));
        tracep->chgBit(oldp+373,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_en_rob_7));
        tracep->chgBit(oldp+374,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_0));
        tracep->chgBit(oldp+375,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_1));
        tracep->chgBit(oldp+376,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_2));
        tracep->chgBit(oldp+377,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_3));
        tracep->chgBit(oldp+378,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_4));
        tracep->chgBit(oldp+379,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_5));
        tracep->chgBit(oldp+380,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_6));
        tracep->chgBit(oldp+381,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_de_rob_7));
        tracep->chgBit(oldp+382,((4U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_tmp_de_rob_comb_valid))));
        tracep->chgBit(oldp+383,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_2));
        tracep->chgBit(oldp+384,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_4));
        tracep->chgBit(oldp+385,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_6));
        tracep->chgBit(oldp+386,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_8));
        tracep->chgBit(oldp+387,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_10));
        tracep->chgBit(oldp+388,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_12));
        tracep->chgBit(oldp+389,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_14));
        tracep->chgBit(oldp+390,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_fire_16));
        tracep->chgWData(oldp+391,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_0_string),72);
        tracep->chgWData(oldp+394,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_1_string),72);
        tracep->chgWData(oldp+397,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_2_string),72);
        tracep->chgWData(oldp+400,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_3_string),72);
        tracep->chgWData(oldp+403,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_4_string),72);
        tracep->chgWData(oldp+406,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_5_string),72);
        tracep->chgWData(oldp+409,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_6_string),72);
        tracep->chgWData(oldp+412,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__entry_state_nxt_7_string),72);
        tracep->chgWData(oldp+415,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__tmp_de_rob_comb_valid_string),72);
        tracep->chgBit(oldp+418,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_0));
        tracep->chgBit(oldp+419,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_1));
        tracep->chgBit(oldp+420,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_2));
        tracep->chgBit(oldp+421,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_3));
        tracep->chgBit(oldp+422,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_4));
        tracep->chgBit(oldp+423,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_5));
        tracep->chgBit(oldp+424,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_6));
        tracep->chgBit(oldp+425,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_7));
        tracep->chgBit(oldp+426,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_8));
        tracep->chgBit(oldp+427,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_9));
        tracep->chgBit(oldp+428,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_10));
        tracep->chgBit(oldp+429,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_11));
        tracep->chgBit(oldp+430,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_12));
        tracep->chgBit(oldp+431,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_13));
        tracep->chgBit(oldp+432,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_14));
        tracep->chgBit(oldp+433,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_15));
        tracep->chgBit(oldp+434,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_16));
        tracep->chgBit(oldp+435,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_17));
        tracep->chgBit(oldp+436,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_18));
        tracep->chgBit(oldp+437,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_19));
        tracep->chgBit(oldp+438,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_20));
        tracep->chgBit(oldp+439,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_21));
        tracep->chgBit(oldp+440,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_22));
        tracep->chgBit(oldp+441,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_23));
        tracep->chgBit(oldp+442,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_24));
        tracep->chgBit(oldp+443,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_25));
        tracep->chgBit(oldp+444,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_26));
        tracep->chgBit(oldp+445,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_27));
        tracep->chgBit(oldp+446,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_28));
        tracep->chgBit(oldp+447,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_29));
        tracep->chgBit(oldp+448,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_30));
        tracep->chgBit(oldp+449,(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__rat_1__DOT__write_enable_31));
    }
    tracep->chgBit(oldp+450,(vlSelf->clock));
    tracep->chgBit(oldp+451,(vlSelf->reset));
    tracep->chgQData(oldp+452,(vlSelf->io_logCtrl_log_begin),64);
    tracep->chgQData(oldp+454,(vlSelf->io_logCtrl_log_end),64);
    tracep->chgQData(oldp+456,(vlSelf->io_logCtrl_log_level),64);
    tracep->chgBit(oldp+458,(vlSelf->io_perfInfo_clean));
    tracep->chgBit(oldp+459,(vlSelf->io_perfInfo_dump));
    tracep->chgBit(oldp+460,(vlSelf->io_uart_out_valid));
    tracep->chgCData(oldp+461,(vlSelf->io_uart_out_ch),8);
    tracep->chgBit(oldp+462,(vlSelf->io_uart_in_valid));
    tracep->chgCData(oldp+463,(vlSelf->io_uart_in_ch),8);
    tracep->chgBit(oldp+464,(((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__axi_arv_arr_flag) 
                              | ((IData)(vlSelf->SimTop__DOT__u_axi_slave_mem_d__DOT__sig_w_ready) 
                                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1_dcache_w_valid)))));
    tracep->chgQData(oldp+465,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__bypass_reg)
                                 ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__bypass_rsp_data_d1
                                 : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__is_hit_d1)
                                     ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__hit_id_d1)
                                         ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__sram_area_1_sram__DOT__tmp_mem_port1
                                         : vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__sram_area_0_sram__DOT__tmp_mem_port1)
                                     : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__evict_id_miss)
                                         ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__sram_area_1_sram__DOT__tmp_mem_port1
                                         : vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__sram_area_0_sram__DOT__tmp_mem_port1)))),64);
    tracep->chgQData(oldp+467,((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__alu_is_quo_reg) 
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
                                         : (1ULL + 
                                            (~ (((QData)((IData)(
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
                                         : (1ULL + 
                                            (~ (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[2U])))))))
                                 : (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__alu_is_rem_reg) 
                                     & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div_io_done_valid))
                                     ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div_io_op_is_word)
                                         ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__dividend_positive)
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[0U] 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))
                                             : (1ULL 
                                                + (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[0U]))))))
                                         : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__dividend_positive)
                                             ? (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))
                                             : (1ULL 
                                                + (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))))))
                                     : ((((((0xcU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op)) 
                                            | (0xdU 
                                               == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op))) 
                                           | (0xeU 
                                              == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op))) 
                                          | (0xfU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op))) 
                                         | (0x14U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_ctrl_op)))
                                         ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_is_word)
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[0U] 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__res[0U])))
                                             : (((0xcU 
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
    tracep->chgQData(oldp+469,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0__DOT__entry_micro_op_alu_is_word)
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
    tracep->chgQData(oldp+471,((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__alu_is_quo_reg) 
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
                                         : (1ULL + 
                                            (~ (((QData)((IData)(
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
                                         : (1ULL + 
                                            (~ (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[2U])))))))
                                 : (((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__alu_is_rem_reg) 
                                     & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div_io_done_valid))
                                     ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div_io_op_is_word)
                                         ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__dividend_positive)
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U] 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))
                                             : (1ULL 
                                                + (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U]))))))
                                         : ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__dividend_positive)
                                             ? (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))
                                             : (1ULL 
                                                + (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__div__DOT__u_div_m_axis_dout_tdata[0U])))))))
                                     : ((((((0xcU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op)) 
                                            | (0xdU 
                                               == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op))) 
                                           | (0xeU 
                                              == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op))) 
                                          | (0xfU == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op))) 
                                         | (0x14U == (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_ctrl_op)))
                                         ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_is_word)
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[0U] 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__res[0U])))
                                             : (((0xcU 
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
    tracep->chgQData(oldp+473,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1__DOT__entry_micro_op_alu_is_word)
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
    tracep->chgIData(oldp+475,((vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_reg 
                                + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1_bpu_predict_imm))),32);
    tracep->chgQData(oldp+476,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__dcache_1__DOT__evict_id_miss)
                                 ? vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__sram_area_1_sram__DOT__tmp_mem_port1
                                 : vlSelf->SimTop__DOT__u_SuperScalar__DOT__dcache_1__DOT__sram_area_0_sram__DOT__tmp_mem_port1)),64);
    tracep->chgIData(oldp+478,(((4U & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__instr_stream_fifo__DOT__read_ptr))
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
    tracep->chgBit(oldp+479,((0U < (0xfU & ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
                                              & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full))) 
                                             & (~ (
                                                   (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty)) 
                                                   & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1))))
                                             ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt) 
                                                - (IData)(1U))
                                             : (((~ 
                                                  ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
                                                   & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full)))) 
                                                 & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty)) 
                                                    & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1)))
                                                 ? 
                                                ((IData)(1U) 
                                                 + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt))
                                                 : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt)))))));
    tracep->chgBit(oldp+480,(((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__bpu_pred_taken_fifo__DOT__fifo_empty)) 
                              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_2))));
    tracep->chgCData(oldp+481,((0xfU & ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
                                          & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full))) 
                                         & (~ ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty)) 
                                               & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1))))
                                         ? ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt) 
                                            - (IData)(1U))
                                         : (((~ ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__icache__DOT__sram_3__DOT__rsp_valid) 
                                                 & (~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_full)))) 
                                             & ((~ (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__fifo_empty)) 
                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__dst_ports_fire_1)))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt))
                                             : (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__fetch_1__DOT__fetch_1__DOT__pc_next_stream_fifo__DOT__empty_entry_cnt))))),4);
    tracep->chgBit(oldp+482,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_1) 
                              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0_en_queue_ready))));
    tracep->chgBit(oldp+483,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_2) 
                              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1_en_queue_ready))));
    tracep->chgBit(oldp+484,(((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_0) 
                              & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_bju_0_en_queue_ready))));
    tracep->chgCData(oldp+485,(((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_3) 
                                  & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_lsu_0_en_queue_ready)) 
                                 << 3U) | ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_2) 
                                             & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_1_en_queue_ready)) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_1) 
                                                & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_alu_0_en_queue_ready)) 
                                               << 1U) 
                                              | ((IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__rob__DOT__en_rob_to_isq_fire_0) 
                                                 & (IData)(vlSelf->SimTop__DOT__u_SuperScalar__DOT__isq_bju_0_en_queue_ready)))))),4);
    tracep->chgBit(oldp+486,((1U & (~ (IData)(vlSelf->reset)))));
}

void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_cleanup\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
}
