// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

VL_ATTR_COLD void VSimTop___024root___settle__TOP__21(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__21\n"); );
    // Body
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U] 
        = ((0xeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U] 
        = ((0xdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U] 
        = ((0xbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U] 
        = ((7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
        = ((0xeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
        = ((0xdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
        = ((0xbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
        = ((7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift[0U][0U] 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
           [0U][0U] << 1U);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift[0U][1U] 
        = ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
            [0U][0U] >> 0x1fU) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
                                  [0U][1U] << 1U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift[0U][2U] 
        = ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
            [0U][1U] >> 0x1fU) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
                                  [0U][2U] << 1U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift[0U][3U] 
        = ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
            [0U][2U] >> 0x1fU) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
                                  [0U][3U] << 1U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift[0U][4U] 
        = ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
            [0U][3U] >> 0x1fU) | (0xeU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
                                          [0U][4U] 
                                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift[1U][0U] 
        = (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
           [1U][0U] << 1U);
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift[1U][1U] 
        = ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
            [1U][0U] >> 0x1fU) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
                                  [1U][1U] << 1U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift[1U][2U] 
        = ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
            [1U][1U] >> 0x1fU) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
                                  [1U][2U] << 1U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift[1U][3U] 
        = ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
            [1U][2U] >> 0x1fU) | (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
                                  [1U][3U] << 1U));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift[1U][4U] 
        = ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
            [1U][3U] >> 0x1fU) | (0xeU & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5
                                          [1U][4U] 
                                          << 1U)));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U] 
        = ((0xeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U] 
        = ((0xdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U] 
        = ((0xbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U] 
        = ((7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                       [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                        [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                         [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                          [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                           [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                            [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                             [2U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
        = ((0xeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
        = ((0xdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
        = ((0xbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
        = ((7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row4_shift
                    [2U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U] 
        = ((0xeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U] 
        = ((0xdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U] 
        = ((0xbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U] 
        = ((7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U] 
        = ((0xeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U] 
        = ((0xdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U] 
        = ((0xbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U] 
        = ((7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (1U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (2U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (4U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (8U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x10U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x20U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x40U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x80U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x100U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x200U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x400U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x800U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x1000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x2000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x4000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x8000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x10000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x20000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x40000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x80000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x100000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x200000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x400000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x800000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x1000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x2000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x4000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x8000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x10000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x20000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x40000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x80000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (1U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (2U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (4U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (8U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x10U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x20U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x40U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x80U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x100U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x200U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x400U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x800U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x1000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x2000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x4000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x8000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x10000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x20000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x40000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x80000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x100000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x200000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x400000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x800000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x1000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x2000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x4000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x8000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x10000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x20000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x40000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x80000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (1U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (2U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (4U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (8U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x10U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x20U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x40U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x80U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x100U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x200U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x400U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x800U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x1000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x2000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x4000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x8000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x10000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x20000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x40000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x80000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x100000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x200000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x400000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x800000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x1000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x2000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x4000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x8000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x10000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x20000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x40000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x80000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (1U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (2U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (4U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (8U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x10U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x20U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x40U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x80U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x100U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x200U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x400U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x800U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x1000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x2000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x4000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x8000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x10000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x20000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x40000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x80000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x100000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x200000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x400000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x800000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x1000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x2000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x4000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x8000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x10000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x20000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x40000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x80000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U] 
        = ((0xeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U]) 
           | (1U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U] 
        = ((0xdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U]) 
           | (2U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U] 
        = ((0xbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U]) 
           | (4U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U] 
        = ((7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U]) 
           | (8U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U] 
        = ((0xeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U] 
        = ((0xdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U] 
        = ((0xbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U] 
        = ((7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U] 
        = ((0xeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U] 
        = ((0xdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U] 
        = ((0xbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U] 
        = ((7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[4U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][0U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][1U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][2U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                       [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                        [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                         [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                          [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                           [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                            [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                             [1U][3U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [1U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U] 
        = ((0xeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U] 
        = ((0xdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U] 
        = ((0xbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U] 
        = ((7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[4U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row5
                    [1U][4U] ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [1U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (1U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (2U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (4U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (8U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x10U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x20U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x40U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x80U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x100U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x200U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x400U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x800U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x1000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x2000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x4000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x8000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x10000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x20000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x40000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x80000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x100000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x200000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x400000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x800000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x1000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x2000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x4000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x8000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x10000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x20000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x40000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[0U]) 
           | (0x80000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][0U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (1U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (2U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (4U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (8U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x10U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x20U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x40U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x80U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x100U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x200U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x400U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x800U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x1000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x2000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x4000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x8000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x10000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x20000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x40000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x80000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x100000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x200000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x400000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x800000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x1000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x2000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x4000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x8000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x10000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x20000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x40000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[1U]) 
           | (0x80000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][1U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (1U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (2U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (4U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (8U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x10U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x20U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x40U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x80U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x100U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x200U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x400U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x800U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x1000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x2000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x4000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x8000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x10000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x20000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x40000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x80000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x100000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x200000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x400000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x800000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x1000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x2000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x4000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x8000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x10000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x20000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x40000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[2U]) 
           | (0x80000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][2U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (1U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (2U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (4U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (8U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x10U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x20U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x40U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x80U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x100U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x200U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x400U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x800U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x1000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x2000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x4000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x8000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x10000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x20000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x40000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x80000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x100000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x200000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x400000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x800000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x1000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x2000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x4000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x8000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x10000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x20000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x40000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[3U]) 
           | (0x80000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                              [0U][3U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U] 
        = ((0xeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U]) 
           | (1U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U] 
        = ((0xdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U]) 
           | (2U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U] 
        = ((0xbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U]) 
           | (4U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U] 
        = ((7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row6[4U]) 
           | (8U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                     [0U][4U] & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__g[4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[0U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[1U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[2U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x10U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x20U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x40U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x80U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                       ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                       [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x100U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x200U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x400U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x800U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                        ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                        [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x1000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x2000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x4000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x8000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                         ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                         [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x10000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x20000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x40000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x80000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                          ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                          [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x100000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x200000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x400000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x800000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                           ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                           [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x1000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x2000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x4000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x8000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                            ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                            [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x10000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x20000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x40000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U]) 
           | (0x80000000U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[3U] 
                             ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                             [0U][3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U] 
        = ((0xeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U]) 
           | (1U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U] 
        = ((0xdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U]) 
           | (2U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U] 
        = ((0xbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U]) 
           | (4U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U] 
        = ((7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[4U]) 
           | (8U & (vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row6__DOT__p[4U] 
                    ^ vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_1_1__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row5_shift
                    [0U][4U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (1U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (2U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (4U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (8U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x10U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x20U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x40U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x80U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x100U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x200U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x400U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x800U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x1000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x2000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x4000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x8000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x10000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x20000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x40000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x80000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x100000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x200000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x400000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x800000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x1000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x2000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x4000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x8000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x10000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x20000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x40000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[0U]) 
           | (0x80000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[0U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[0U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[0U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (1U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (2U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (4U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (8U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x10U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x20U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x40U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x80U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x100U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x200U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x400U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x800U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x1000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x2000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x4000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x8000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x10000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x20000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x40000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x80000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x100000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x200000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x400000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x800000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x1000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x2000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x4000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x8000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x10000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x20000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x40000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[1U]) 
           | (0x80000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[1U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[1U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[1U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (1U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (2U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (4U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (8U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x10U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x20U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x40U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xffffff7fU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x80U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfffffeffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x100U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfffffdffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x200U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfffffbffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x400U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfffff7ffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x800U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                         & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                        | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xffffefffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x1000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xffffdfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x2000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xffffbfffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x4000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xffff7fffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x8000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                          & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                         | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfffeffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x10000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfffdffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x20000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfffbffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x40000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfff7ffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x80000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                           & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                          | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xffefffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x100000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xffdfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x200000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xffbfffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x400000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xff7fffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x800000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                            & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                           | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfeffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x1000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfdffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x2000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xfbffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x4000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xf7ffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x8000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                             & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                            | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xefffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x10000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xdfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x20000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0xbfffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x40000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U] 
        = ((0x7fffffffU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[2U]) 
           | (0x80000000U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[2U] 
                              & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[2U]) 
                             | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[2U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[3U] 
        = ((0xfffffffeU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[3U]) 
           | (1U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[3U] 
        = ((0xfffffffdU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[3U]) 
           | (2U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[3U] 
        = ((0xfffffffbU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[3U]) 
           | (4U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[3U] 
        = ((0xfffffff7U & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[3U]) 
           | (8U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
                     & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
                    | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[3U] 
        = ((0xffffffefU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[3U]) 
           | (0x10U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[3U] 
        = ((0xffffffdfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[3U]) 
           | (0x20U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U])));
    vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[3U] 
        = ((0xffffffbfU & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__c_row7[3U]) 
           | (0x40U & ((vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__s_row6[3U] 
                        & vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__p[3U]) 
                       | vlSelf->SimTop__DOT__u_SuperScalar__DOT__alu_0__DOT__mul__DOT__u_mult__DOT__wallace_tree__DOT__csa_row7__DOT__g[3U])));
}
