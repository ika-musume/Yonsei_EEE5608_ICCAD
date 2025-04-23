// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfir.h for the primary calling header

#include "Vfir__pch.h"
#include "Vfir___024root.h"

VL_ATTR_COLD void Vfir___024root___eval_static(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_static\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vfir___024root___eval_initial(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_initial\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vfir___024root___eval_final(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_final\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir___024root___dump_triggers__stl(Vfir___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfir___024root___eval_phase__stl(Vfir___024root* vlSelf);

VL_ATTR_COLD void Vfir___024root___eval_settle(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_settle\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vfir___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("fir.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfir___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir___024root___dump_triggers__stl(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___dump_triggers__stl\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfir___024root___stl_sequent__TOP__0(Vfir___024root* vlSelf);

VL_ATTR_COLD void Vfir___024root___eval_stl(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_stl\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vfir___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vfir___024root___stl_sequent__TOP__0(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___stl_sequent__TOP__0\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*17:0*/ fir__DOT__pacc_tmp;
    fir__DOT__pacc_tmp = 0;
    CData/*3:0*/ fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = 0;
    CData/*4:0*/ fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = 0;
    // Body
    fir__DOT__pacc_tmp = ((0x3c000U & ((- (IData)((1U 
                                                   & (vlSelfRef.fir__DOT__mul
                                                      [0U] 
                                                      >> 0xdU)))) 
                                       << 0xeU)) | 
                          vlSelfRef.fir__DOT__mul[0U]);
    fir__DOT__pacc_tmp = (0x3ffffU & (fir__DOT__pacc_tmp 
                                      + ((0x3c000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.fir__DOT__mul
                                                            [1U] 
                                                            >> 0xdU)))) 
                                             << 0xeU)) 
                                         | vlSelfRef.fir__DOT__mul
                                         [1U])));
    fir__DOT__pacc_tmp = (0x3ffffU & (fir__DOT__pacc_tmp 
                                      + ((0x3c000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.fir__DOT__mul
                                                            [2U] 
                                                            >> 0xdU)))) 
                                             << 0xeU)) 
                                         | vlSelfRef.fir__DOT__mul
                                         [2U])));
    fir__DOT__pacc_tmp = (0x3ffffU & (fir__DOT__pacc_tmp 
                                      + ((0x3c000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.fir__DOT__mul
                                                            [3U] 
                                                            >> 0xdU)))) 
                                             << 0xeU)) 
                                         | vlSelfRef.fir__DOT__mul
                                         [3U])));
    fir__DOT__pacc_tmp = (0x3ffffU & (fir__DOT__pacc_tmp 
                                      + ((0x3c000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.fir__DOT__mul
                                                            [4U] 
                                                            >> 0xdU)))) 
                                             << 0xeU)) 
                                         | vlSelfRef.fir__DOT__mul
                                         [4U])));
    fir__DOT__pacc_tmp = (0x3ffffU & (fir__DOT__pacc_tmp 
                                      + ((0x3c000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.fir__DOT__mul
                                                            [5U] 
                                                            >> 0xdU)))) 
                                             << 0xeU)) 
                                         | vlSelfRef.fir__DOT__mul
                                         [5U])));
    fir__DOT__pacc_tmp = (0x3ffffU & (fir__DOT__pacc_tmp 
                                      + ((0x3c000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.fir__DOT__mul
                                                            [6U] 
                                                            >> 0xdU)))) 
                                             << 0xeU)) 
                                         | vlSelfRef.fir__DOT__mul
                                         [6U])));
    fir__DOT__pacc_tmp = (0x3ffffU & (fir__DOT__pacc_tmp 
                                      + ((0x3c000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.fir__DOT__mul
                                                            [7U] 
                                                            >> 0xdU)))) 
                                             << 0xeU)) 
                                         | vlSelfRef.fir__DOT__mul
                                         [7U])));
    fir__DOT__pacc_tmp = (0x3ffffU & (fir__DOT__pacc_tmp 
                                      + ((0x3c000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.fir__DOT__mul
                                                            [8U] 
                                                            >> 0xdU)))) 
                                             << 0xeU)) 
                                         | vlSelfRef.fir__DOT__mul
                                         [8U])));
    fir__DOT__pacc_tmp = (0x3ffffU & (fir__DOT__pacc_tmp 
                                      + ((0x3c000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.fir__DOT__mul
                                                            [9U] 
                                                            >> 0xdU)))) 
                                             << 0xeU)) 
                                         | vlSelfRef.fir__DOT__mul
                                         [9U])));
    fir__DOT__pacc_tmp = (0x3ffffU & (fir__DOT__pacc_tmp 
                                      + ((0x3c000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.fir__DOT__mul
                                                            [0xaU] 
                                                            >> 0xdU)))) 
                                             << 0xeU)) 
                                         | vlSelfRef.fir__DOT__mul
                                         [0xaU])));
    fir__DOT__pacc_tmp = (0x3ffffU & (fir__DOT__pacc_tmp 
                                      + ((0x3c000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.fir__DOT__mul
                                                            [0xbU] 
                                                            >> 0xdU)))) 
                                             << 0xeU)) 
                                         | vlSelfRef.fir__DOT__mul
                                         [0xbU])));
    fir__DOT__pacc_tmp = (0x3ffffU & (fir__DOT__pacc_tmp 
                                      + ((0x3c000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.fir__DOT__mul
                                                            [0xcU] 
                                                            >> 0xdU)))) 
                                             << 0xeU)) 
                                         | vlSelfRef.fir__DOT__mul
                                         [0xcU])));
    fir__DOT__pacc_tmp = (0x3ffffU & (fir__DOT__pacc_tmp 
                                      + ((0x3c000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.fir__DOT__mul
                                                            [0xdU] 
                                                            >> 0xdU)))) 
                                             << 0xeU)) 
                                         | vlSelfRef.fir__DOT__mul
                                         [0xdU])));
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0U];
    vlSelfRef.fir__DOT__x[1U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [1U];
    vlSelfRef.fir__DOT__x[2U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [2U];
    vlSelfRef.fir__DOT__x[3U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [3U];
    vlSelfRef.fir__DOT__x[4U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [4U];
    vlSelfRef.fir__DOT__x[5U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [5U];
    vlSelfRef.fir__DOT__x[6U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [6U];
    vlSelfRef.fir__DOT__x[7U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [7U];
    vlSelfRef.fir__DOT__x[8U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [8U];
    vlSelfRef.fir__DOT__x[9U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [9U];
    vlSelfRef.fir__DOT__x[0xaU] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0xaU];
    vlSelfRef.fir__DOT__x[0xbU] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0xbU];
    vlSelfRef.fir__DOT__x[0xcU] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0xcU];
    vlSelfRef.fir__DOT__x[0xdU] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0xdU];
    vlSelfRef.fir__DOT__x[0xeU] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0xeU];
    vlSelfRef.fir__DOT__x[0xfU] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0xfU];
    vlSelfRef.fir__DOT__x[0x10U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0x10U];
    vlSelfRef.fir__DOT__x[0x11U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0x11U];
    vlSelfRef.fir__DOT__x[0x12U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0x12U];
    vlSelfRef.fir__DOT__x[0x13U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0x13U];
    vlSelfRef.fir__DOT__x[0x14U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0x14U];
    vlSelfRef.fir__DOT__x[0x15U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0x15U];
    vlSelfRef.fir__DOT__x[0x16U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0x16U];
    vlSelfRef.fir__DOT__x[0x17U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0x17U];
    vlSelfRef.fir__DOT__x[0x18U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0x18U];
    vlSelfRef.fir__DOT__x[0x19U] = fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = vlSelfRef.fir__DOT__sr
        [0x19U];
    vlSelfRef.fir__DOT__x[0x1aU] = fir__DOT____Vlvbound_hd947a6c7__0;
    vlSelfRef.fir__DOT__x[0U] = ((8U & ((~ ((IData)(vlSelfRef.din) 
                                            >> 3U)) 
                                        << 3U)) | (7U 
                                                   & (IData)(vlSelfRef.din)));
    vlSelfRef.dout = ((1U == (3U & (fir__DOT__pacc_tmp 
                                    >> 0xbU))) ? 0xfU
                       : ((2U == (3U & (fir__DOT__pacc_tmp 
                                        >> 0xbU))) ? 0U
                           : ((8U & ((~ (fir__DOT__pacc_tmp 
                                         >> 0xbU)) 
                                     << 3U)) | (7U 
                                                & (fir__DOT__pacc_tmp 
                                                   >> 8U)))));
    vlSelfRef.dout_fullrange = (0x1fffU & fir__DOT__pacc_tmp);
    fir__DOT____Vlvbound_h98a7fb6f__0 = (0x1fU & (VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0U]) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0x1aU])));
    vlSelfRef.fir__DOT__ssum[0U] = fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = (0x1fU & (VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [1U]) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0x19U])));
    vlSelfRef.fir__DOT__ssum[1U] = fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = (0x1fU & (VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [2U]) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0x18U])));
    vlSelfRef.fir__DOT__ssum[2U] = fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = (0x1fU & (VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [3U]) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0x17U])));
    vlSelfRef.fir__DOT__ssum[3U] = fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = (0x1fU & (VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [4U]) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0x16U])));
    vlSelfRef.fir__DOT__ssum[4U] = fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = (0x1fU & (VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [5U]) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0x15U])));
    vlSelfRef.fir__DOT__ssum[5U] = fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = (0x1fU & (VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [6U]) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0x14U])));
    vlSelfRef.fir__DOT__ssum[6U] = fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = (0x1fU & (VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [7U]) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0x13U])));
    vlSelfRef.fir__DOT__ssum[7U] = fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = (0x1fU & (VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [8U]) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0x12U])));
    vlSelfRef.fir__DOT__ssum[8U] = fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = (0x1fU & (VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [9U]) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0x11U])));
    vlSelfRef.fir__DOT__ssum[9U] = fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = (0x1fU & (VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0xaU]) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0x10U])));
    vlSelfRef.fir__DOT__ssum[0xaU] = fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = (0x1fU & (VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0xbU]) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0xfU])));
    vlSelfRef.fir__DOT__ssum[0xbU] = fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = (0x1fU & (VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0xcU]) 
                                                  + 
                                                  VL_EXTENDS_II(5,4, 
                                                                vlSelfRef.fir__DOT__x
                                                                [0xeU])));
    vlSelfRef.fir__DOT__ssum[0xcU] = fir__DOT____Vlvbound_h98a7fb6f__0;
    vlSelfRef.fir__DOT__ssum[0xdU] = ((0x10U & (vlSelfRef.fir__DOT__x
                                                [0xdU] 
                                                << 1U)) 
                                      | vlSelfRef.fir__DOT__x
                                      [0xdU]);
}

VL_ATTR_COLD void Vfir___024root___eval_triggers__stl(Vfir___024root* vlSelf);

VL_ATTR_COLD bool Vfir___024root___eval_phase__stl(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_phase__stl\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfir___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vfir___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir___024root___dump_triggers__ico(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___dump_triggers__ico\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir___024root___dump_triggers__act(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___dump_triggers__act\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir___024root___dump_triggers__nba(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___dump_triggers__nba\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfir___024root___ctor_var_reset(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___ctor_var_reset\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->din = VL_RAND_RESET_I(4);
    vlSelf->dout = VL_RAND_RESET_I(4);
    vlSelf->dout_fullrange = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 26; ++__Vi0) {
        vlSelf->fir__DOT__sr[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 27; ++__Vi0) {
        vlSelf->fir__DOT__x[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 14; ++__Vi0) {
        vlSelf->fir__DOT__ssum[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 14; ++__Vi0) {
        vlSelf->fir__DOT__mul[__Vi0] = VL_RAND_RESET_I(14);
    }
    vlSelf->fir__DOT____Vlvbound_h7cf78d59__0 = VL_RAND_RESET_I(4);
    vlSelf->fir__DOT____Vlvbound_h0592e454__0 = VL_RAND_RESET_I(14);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
