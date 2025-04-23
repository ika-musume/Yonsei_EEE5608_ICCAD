// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfir.h for the primary calling header

#include "Vfir__pch.h"
#include "Vfir___024root.h"

void Vfir___024root___ico_sequent__TOP__0(Vfir___024root* vlSelf);

void Vfir___024root___eval_ico(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_ico\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vfir___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfir___024root___ico_sequent__TOP__0(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___ico_sequent__TOP__0\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = 0;
    CData/*4:0*/ fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = 0;
    // Body
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

void Vfir___024root___eval_triggers__ico(Vfir___024root* vlSelf);

bool Vfir___024root___eval_phase__ico(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_phase__ico\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vfir___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vfir___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vfir___024root___eval_act(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_act\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vfir___024root___nba_sequent__TOP__0(Vfir___024root* vlSelf);

void Vfir___024root___eval_nba(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_nba\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfir___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfir___024root___nba_sequent__TOP__0(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___nba_sequent__TOP__0\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*17:0*/ fir__DOT__pacc_tmp;
    fir__DOT__pacc_tmp = 0;
    CData/*3:0*/ fir__DOT____Vlvbound_hd947a6c7__0;
    fir__DOT____Vlvbound_hd947a6c7__0 = 0;
    CData/*4:0*/ fir__DOT____Vlvbound_h98a7fb6f__0;
    fir__DOT____Vlvbound_h98a7fb6f__0 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v0;
    __VdlyVal__fir__DOT__sr__v0 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v0;
    __VdlySet__fir__DOT__sr__v0 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v1;
    __VdlyVal__fir__DOT__sr__v1 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v1;
    __VdlySet__fir__DOT__sr__v1 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v2;
    __VdlyVal__fir__DOT__sr__v2 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v2;
    __VdlySet__fir__DOT__sr__v2 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v3;
    __VdlyVal__fir__DOT__sr__v3 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v3;
    __VdlySet__fir__DOT__sr__v3 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v4;
    __VdlyVal__fir__DOT__sr__v4 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v4;
    __VdlySet__fir__DOT__sr__v4 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v5;
    __VdlyVal__fir__DOT__sr__v5 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v5;
    __VdlySet__fir__DOT__sr__v5 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v6;
    __VdlyVal__fir__DOT__sr__v6 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v6;
    __VdlySet__fir__DOT__sr__v6 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v7;
    __VdlyVal__fir__DOT__sr__v7 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v7;
    __VdlySet__fir__DOT__sr__v7 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v8;
    __VdlyVal__fir__DOT__sr__v8 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v8;
    __VdlySet__fir__DOT__sr__v8 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v9;
    __VdlyVal__fir__DOT__sr__v9 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v9;
    __VdlySet__fir__DOT__sr__v9 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v10;
    __VdlyVal__fir__DOT__sr__v10 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v10;
    __VdlySet__fir__DOT__sr__v10 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v11;
    __VdlyVal__fir__DOT__sr__v11 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v11;
    __VdlySet__fir__DOT__sr__v11 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v12;
    __VdlyVal__fir__DOT__sr__v12 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v12;
    __VdlySet__fir__DOT__sr__v12 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v13;
    __VdlyVal__fir__DOT__sr__v13 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v13;
    __VdlySet__fir__DOT__sr__v13 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v14;
    __VdlyVal__fir__DOT__sr__v14 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v14;
    __VdlySet__fir__DOT__sr__v14 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v15;
    __VdlyVal__fir__DOT__sr__v15 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v15;
    __VdlySet__fir__DOT__sr__v15 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v16;
    __VdlyVal__fir__DOT__sr__v16 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v16;
    __VdlySet__fir__DOT__sr__v16 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v17;
    __VdlyVal__fir__DOT__sr__v17 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v17;
    __VdlySet__fir__DOT__sr__v17 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v18;
    __VdlyVal__fir__DOT__sr__v18 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v18;
    __VdlySet__fir__DOT__sr__v18 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v19;
    __VdlyVal__fir__DOT__sr__v19 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v19;
    __VdlySet__fir__DOT__sr__v19 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v20;
    __VdlyVal__fir__DOT__sr__v20 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v20;
    __VdlySet__fir__DOT__sr__v20 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v21;
    __VdlyVal__fir__DOT__sr__v21 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v21;
    __VdlySet__fir__DOT__sr__v21 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v22;
    __VdlyVal__fir__DOT__sr__v22 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v22;
    __VdlySet__fir__DOT__sr__v22 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v23;
    __VdlyVal__fir__DOT__sr__v23 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v23;
    __VdlySet__fir__DOT__sr__v23 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v24;
    __VdlyVal__fir__DOT__sr__v24 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v24;
    __VdlySet__fir__DOT__sr__v24 = 0;
    CData/*3:0*/ __VdlyVal__fir__DOT__sr__v25;
    __VdlyVal__fir__DOT__sr__v25 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__sr__v26;
    __VdlySet__fir__DOT__sr__v26 = 0;
    SData/*13:0*/ __VdlyVal__fir__DOT__mul__v0;
    __VdlyVal__fir__DOT__mul__v0 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__mul__v0;
    __VdlySet__fir__DOT__mul__v0 = 0;
    SData/*13:0*/ __VdlyVal__fir__DOT__mul__v1;
    __VdlyVal__fir__DOT__mul__v1 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__mul__v1;
    __VdlySet__fir__DOT__mul__v1 = 0;
    SData/*13:0*/ __VdlyVal__fir__DOT__mul__v3;
    __VdlyVal__fir__DOT__mul__v3 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__mul__v3;
    __VdlySet__fir__DOT__mul__v3 = 0;
    SData/*13:0*/ __VdlyVal__fir__DOT__mul__v4;
    __VdlyVal__fir__DOT__mul__v4 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__mul__v4;
    __VdlySet__fir__DOT__mul__v4 = 0;
    SData/*13:0*/ __VdlyVal__fir__DOT__mul__v5;
    __VdlyVal__fir__DOT__mul__v5 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__mul__v5;
    __VdlySet__fir__DOT__mul__v5 = 0;
    SData/*13:0*/ __VdlyVal__fir__DOT__mul__v6;
    __VdlyVal__fir__DOT__mul__v6 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__mul__v6;
    __VdlySet__fir__DOT__mul__v6 = 0;
    SData/*13:0*/ __VdlyVal__fir__DOT__mul__v7;
    __VdlyVal__fir__DOT__mul__v7 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__mul__v7;
    __VdlySet__fir__DOT__mul__v7 = 0;
    SData/*13:0*/ __VdlyVal__fir__DOT__mul__v8;
    __VdlyVal__fir__DOT__mul__v8 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__mul__v8;
    __VdlySet__fir__DOT__mul__v8 = 0;
    SData/*13:0*/ __VdlyVal__fir__DOT__mul__v9;
    __VdlyVal__fir__DOT__mul__v9 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__mul__v9;
    __VdlySet__fir__DOT__mul__v9 = 0;
    SData/*13:0*/ __VdlyVal__fir__DOT__mul__v10;
    __VdlyVal__fir__DOT__mul__v10 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__mul__v10;
    __VdlySet__fir__DOT__mul__v10 = 0;
    SData/*13:0*/ __VdlyVal__fir__DOT__mul__v11;
    __VdlyVal__fir__DOT__mul__v11 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__mul__v11;
    __VdlySet__fir__DOT__mul__v11 = 0;
    SData/*13:0*/ __VdlyVal__fir__DOT__mul__v12;
    __VdlyVal__fir__DOT__mul__v12 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__mul__v12;
    __VdlySet__fir__DOT__mul__v12 = 0;
    SData/*13:0*/ __VdlyVal__fir__DOT__mul__v13;
    __VdlyVal__fir__DOT__mul__v13 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__mul__v13;
    __VdlySet__fir__DOT__mul__v13 = 0;
    CData/*0:0*/ __VdlySet__fir__DOT__mul__v14;
    __VdlySet__fir__DOT__mul__v14 = 0;
    // Body
    __VdlySet__fir__DOT__mul__v0 = 0U;
    __VdlySet__fir__DOT__mul__v1 = 0U;
    __VdlySet__fir__DOT__mul__v3 = 0U;
    __VdlySet__fir__DOT__mul__v4 = 0U;
    __VdlySet__fir__DOT__mul__v5 = 0U;
    __VdlySet__fir__DOT__mul__v6 = 0U;
    __VdlySet__fir__DOT__mul__v7 = 0U;
    __VdlySet__fir__DOT__mul__v8 = 0U;
    __VdlySet__fir__DOT__mul__v9 = 0U;
    __VdlySet__fir__DOT__mul__v10 = 0U;
    __VdlySet__fir__DOT__mul__v11 = 0U;
    __VdlySet__fir__DOT__mul__v12 = 0U;
    __VdlySet__fir__DOT__mul__v13 = 0U;
    __VdlySet__fir__DOT__mul__v14 = 0U;
    __VdlySet__fir__DOT__sr__v0 = 0U;
    __VdlySet__fir__DOT__sr__v1 = 0U;
    __VdlySet__fir__DOT__sr__v2 = 0U;
    __VdlySet__fir__DOT__sr__v3 = 0U;
    __VdlySet__fir__DOT__sr__v4 = 0U;
    __VdlySet__fir__DOT__sr__v5 = 0U;
    __VdlySet__fir__DOT__sr__v6 = 0U;
    __VdlySet__fir__DOT__sr__v7 = 0U;
    __VdlySet__fir__DOT__sr__v8 = 0U;
    __VdlySet__fir__DOT__sr__v9 = 0U;
    __VdlySet__fir__DOT__sr__v10 = 0U;
    __VdlySet__fir__DOT__sr__v11 = 0U;
    __VdlySet__fir__DOT__sr__v12 = 0U;
    __VdlySet__fir__DOT__sr__v13 = 0U;
    __VdlySet__fir__DOT__sr__v14 = 0U;
    __VdlySet__fir__DOT__sr__v15 = 0U;
    __VdlySet__fir__DOT__sr__v16 = 0U;
    __VdlySet__fir__DOT__sr__v17 = 0U;
    __VdlySet__fir__DOT__sr__v18 = 0U;
    __VdlySet__fir__DOT__sr__v19 = 0U;
    __VdlySet__fir__DOT__sr__v20 = 0U;
    __VdlySet__fir__DOT__sr__v21 = 0U;
    __VdlySet__fir__DOT__sr__v22 = 0U;
    __VdlySet__fir__DOT__sr__v23 = 0U;
    __VdlySet__fir__DOT__sr__v24 = 0U;
    __VdlySet__fir__DOT__sr__v26 = 0U;
    if (vlSelfRef.rst_n) {
        vlSelfRef.fir__DOT____Vlvbound_h0592e454__0 
            = (0x3fffU & VL_MULS_III(14, (IData)(0x3fffU), 
                                     (0x3fffU & VL_EXTENDS_II(14,5, 
                                                              vlSelfRef.fir__DOT__ssum
                                                              [0U]))));
        __VdlyVal__fir__DOT__mul__v0 = vlSelfRef.fir__DOT____Vlvbound_h0592e454__0;
        __VdlySet__fir__DOT__mul__v0 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h0592e454__0 
            = (0x3fffU & VL_MULS_III(14, (IData)(4U), 
                                     (0x3fffU & VL_EXTENDS_II(14,5, 
                                                              vlSelfRef.fir__DOT__ssum
                                                              [1U]))));
        __VdlyVal__fir__DOT__mul__v1 = vlSelfRef.fir__DOT____Vlvbound_h0592e454__0;
        __VdlySet__fir__DOT__mul__v1 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h0592e454__0 
            = (0x3fffU & VL_MULS_III(14, (IData)(0x3ffaU), 
                                     (0x3fffU & VL_EXTENDS_II(14,5, 
                                                              vlSelfRef.fir__DOT__ssum
                                                              [3U]))));
        __VdlyVal__fir__DOT__mul__v3 = vlSelfRef.fir__DOT____Vlvbound_h0592e454__0;
        __VdlySet__fir__DOT__mul__v3 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h0592e454__0 
            = (0x3fffU & VL_EXTENDS_II(14,5, vlSelfRef.fir__DOT__ssum
                                       [4U]));
        __VdlyVal__fir__DOT__mul__v4 = vlSelfRef.fir__DOT____Vlvbound_h0592e454__0;
        __VdlySet__fir__DOT__mul__v4 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h0592e454__0 
            = (0x3fffU & VL_MULS_III(14, (IData)(8U), 
                                     (0x3fffU & VL_EXTENDS_II(14,5, 
                                                              vlSelfRef.fir__DOT__ssum
                                                              [5U]))));
        __VdlyVal__fir__DOT__mul__v5 = vlSelfRef.fir__DOT____Vlvbound_h0592e454__0;
        __VdlySet__fir__DOT__mul__v5 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h0592e454__0 
            = (0x3fffU & VL_MULS_III(14, (IData)(0x3ffcU), 
                                     (0x3fffU & VL_EXTENDS_II(14,5, 
                                                              vlSelfRef.fir__DOT__ssum
                                                              [6U]))));
        __VdlyVal__fir__DOT__mul__v6 = vlSelfRef.fir__DOT____Vlvbound_h0592e454__0;
        __VdlySet__fir__DOT__mul__v6 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h0592e454__0 
            = (0x3fffU & VL_MULS_III(14, (IData)(0x3ff7U), 
                                     (0x3fffU & VL_EXTENDS_II(14,5, 
                                                              vlSelfRef.fir__DOT__ssum
                                                              [7U]))));
        __VdlyVal__fir__DOT__mul__v7 = vlSelfRef.fir__DOT____Vlvbound_h0592e454__0;
        __VdlySet__fir__DOT__mul__v7 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h0592e454__0 
            = (0x3fffU & VL_MULS_III(14, (IData)(0xaU), 
                                     (0x3fffU & VL_EXTENDS_II(14,5, 
                                                              vlSelfRef.fir__DOT__ssum
                                                              [8U]))));
        __VdlyVal__fir__DOT__mul__v8 = vlSelfRef.fir__DOT____Vlvbound_h0592e454__0;
        __VdlySet__fir__DOT__mul__v8 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h0592e454__0 
            = (0x3fffU & VL_MULS_III(14, (IData)(0xbU), 
                                     (0x3fffU & VL_EXTENDS_II(14,5, 
                                                              vlSelfRef.fir__DOT__ssum
                                                              [9U]))));
        __VdlyVal__fir__DOT__mul__v9 = vlSelfRef.fir__DOT____Vlvbound_h0592e454__0;
        __VdlySet__fir__DOT__mul__v9 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h0592e454__0 
            = (0x3fffU & VL_MULS_III(14, (IData)(0x3fe9U), 
                                     (0x3fffU & VL_EXTENDS_II(14,5, 
                                                              vlSelfRef.fir__DOT__ssum
                                                              [0xaU]))));
        __VdlyVal__fir__DOT__mul__v10 = vlSelfRef.fir__DOT____Vlvbound_h0592e454__0;
        __VdlySet__fir__DOT__mul__v10 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h0592e454__0 
            = (0x3fffU & VL_MULS_III(14, (IData)(0x3ff4U), 
                                     (0x3fffU & VL_EXTENDS_II(14,5, 
                                                              vlSelfRef.fir__DOT__ssum
                                                              [0xbU]))));
        __VdlyVal__fir__DOT__mul__v11 = vlSelfRef.fir__DOT____Vlvbound_h0592e454__0;
        __VdlySet__fir__DOT__mul__v11 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h0592e454__0 
            = (0x3fffU & VL_MULS_III(14, (IData)(0x4fU), 
                                     (0x3fffU & VL_EXTENDS_II(14,5, 
                                                              vlSelfRef.fir__DOT__ssum
                                                              [0xcU]))));
        __VdlyVal__fir__DOT__mul__v12 = vlSelfRef.fir__DOT____Vlvbound_h0592e454__0;
        __VdlySet__fir__DOT__mul__v12 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h0592e454__0 
            = (0x3fffU & VL_MULS_III(14, (IData)(0x8cU), 
                                     (0x3fffU & VL_EXTENDS_II(14,5, 
                                                              vlSelfRef.fir__DOT__ssum
                                                              [0xdU]))));
        __VdlyVal__fir__DOT__mul__v13 = vlSelfRef.fir__DOT____Vlvbound_h0592e454__0;
        __VdlySet__fir__DOT__mul__v13 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0U];
        __VdlyVal__fir__DOT__sr__v0 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v0 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[1U];
        __VdlyVal__fir__DOT__sr__v1 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v1 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[2U];
        __VdlyVal__fir__DOT__sr__v2 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v2 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[3U];
        __VdlyVal__fir__DOT__sr__v3 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v3 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[4U];
        __VdlyVal__fir__DOT__sr__v4 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v4 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[5U];
        __VdlyVal__fir__DOT__sr__v5 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v5 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[6U];
        __VdlyVal__fir__DOT__sr__v6 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v6 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[7U];
        __VdlyVal__fir__DOT__sr__v7 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v7 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[8U];
        __VdlyVal__fir__DOT__sr__v8 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v8 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[9U];
        __VdlyVal__fir__DOT__sr__v9 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v9 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0xaU];
        __VdlyVal__fir__DOT__sr__v10 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v10 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0xbU];
        __VdlyVal__fir__DOT__sr__v11 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v11 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0xcU];
        __VdlyVal__fir__DOT__sr__v12 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v12 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0xdU];
        __VdlyVal__fir__DOT__sr__v13 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v13 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0xeU];
        __VdlyVal__fir__DOT__sr__v14 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v14 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0xfU];
        __VdlyVal__fir__DOT__sr__v15 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v15 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0x10U];
        __VdlyVal__fir__DOT__sr__v16 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v16 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0x11U];
        __VdlyVal__fir__DOT__sr__v17 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v17 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0x12U];
        __VdlyVal__fir__DOT__sr__v18 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v18 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0x13U];
        __VdlyVal__fir__DOT__sr__v19 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v19 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0x14U];
        __VdlyVal__fir__DOT__sr__v20 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v20 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0x15U];
        __VdlyVal__fir__DOT__sr__v21 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v21 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0x16U];
        __VdlyVal__fir__DOT__sr__v22 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v22 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0x17U];
        __VdlyVal__fir__DOT__sr__v23 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v23 = 1U;
        vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0 
            = vlSelfRef.fir__DOT__sr[0x18U];
        __VdlyVal__fir__DOT__sr__v24 = vlSelfRef.fir__DOT____Vlvbound_h7cf78d59__0;
        __VdlySet__fir__DOT__sr__v24 = 1U;
        __VdlyVal__fir__DOT__sr__v25 = ((8U & ((~ ((IData)(vlSelfRef.din) 
                                                   >> 3U)) 
                                               << 3U)) 
                                        | (7U & (IData)(vlSelfRef.din)));
    } else {
        __VdlySet__fir__DOT__mul__v14 = 1U;
        __VdlySet__fir__DOT__sr__v26 = 1U;
    }
    if (__VdlySet__fir__DOT__mul__v0) {
        vlSelfRef.fir__DOT__mul[0U] = __VdlyVal__fir__DOT__mul__v0;
    }
    if (__VdlySet__fir__DOT__mul__v1) {
        vlSelfRef.fir__DOT__mul[1U] = __VdlyVal__fir__DOT__mul__v1;
        vlSelfRef.fir__DOT__mul[2U] = 0U;
    }
    if (__VdlySet__fir__DOT__mul__v3) {
        vlSelfRef.fir__DOT__mul[3U] = __VdlyVal__fir__DOT__mul__v3;
    }
    if (__VdlySet__fir__DOT__mul__v4) {
        vlSelfRef.fir__DOT__mul[4U] = __VdlyVal__fir__DOT__mul__v4;
    }
    if (__VdlySet__fir__DOT__mul__v5) {
        vlSelfRef.fir__DOT__mul[5U] = __VdlyVal__fir__DOT__mul__v5;
    }
    if (__VdlySet__fir__DOT__mul__v6) {
        vlSelfRef.fir__DOT__mul[6U] = __VdlyVal__fir__DOT__mul__v6;
    }
    if (__VdlySet__fir__DOT__mul__v7) {
        vlSelfRef.fir__DOT__mul[7U] = __VdlyVal__fir__DOT__mul__v7;
    }
    if (__VdlySet__fir__DOT__mul__v8) {
        vlSelfRef.fir__DOT__mul[8U] = __VdlyVal__fir__DOT__mul__v8;
    }
    if (__VdlySet__fir__DOT__mul__v9) {
        vlSelfRef.fir__DOT__mul[9U] = __VdlyVal__fir__DOT__mul__v9;
    }
    if (__VdlySet__fir__DOT__mul__v10) {
        vlSelfRef.fir__DOT__mul[0xaU] = __VdlyVal__fir__DOT__mul__v10;
    }
    if (__VdlySet__fir__DOT__mul__v11) {
        vlSelfRef.fir__DOT__mul[0xbU] = __VdlyVal__fir__DOT__mul__v11;
    }
    if (__VdlySet__fir__DOT__mul__v12) {
        vlSelfRef.fir__DOT__mul[0xcU] = __VdlyVal__fir__DOT__mul__v12;
    }
    if (__VdlySet__fir__DOT__mul__v13) {
        vlSelfRef.fir__DOT__mul[0xdU] = __VdlyVal__fir__DOT__mul__v13;
    }
    if (__VdlySet__fir__DOT__mul__v14) {
        vlSelfRef.fir__DOT__mul[0U] = 0U;
        vlSelfRef.fir__DOT__mul[1U] = 0U;
        vlSelfRef.fir__DOT__mul[2U] = 0U;
        vlSelfRef.fir__DOT__mul[3U] = 0U;
        vlSelfRef.fir__DOT__mul[4U] = 0U;
        vlSelfRef.fir__DOT__mul[5U] = 0U;
        vlSelfRef.fir__DOT__mul[6U] = 0U;
        vlSelfRef.fir__DOT__mul[7U] = 0U;
        vlSelfRef.fir__DOT__mul[8U] = 0U;
        vlSelfRef.fir__DOT__mul[9U] = 0U;
        vlSelfRef.fir__DOT__mul[0xaU] = 0U;
        vlSelfRef.fir__DOT__mul[0xbU] = 0U;
        vlSelfRef.fir__DOT__mul[0xcU] = 0U;
        vlSelfRef.fir__DOT__mul[0xdU] = 0U;
    }
    if (__VdlySet__fir__DOT__sr__v0) {
        vlSelfRef.fir__DOT__sr[1U] = __VdlyVal__fir__DOT__sr__v0;
    }
    if (__VdlySet__fir__DOT__sr__v1) {
        vlSelfRef.fir__DOT__sr[2U] = __VdlyVal__fir__DOT__sr__v1;
    }
    if (__VdlySet__fir__DOT__sr__v2) {
        vlSelfRef.fir__DOT__sr[3U] = __VdlyVal__fir__DOT__sr__v2;
    }
    if (__VdlySet__fir__DOT__sr__v3) {
        vlSelfRef.fir__DOT__sr[4U] = __VdlyVal__fir__DOT__sr__v3;
    }
    if (__VdlySet__fir__DOT__sr__v4) {
        vlSelfRef.fir__DOT__sr[5U] = __VdlyVal__fir__DOT__sr__v4;
    }
    if (__VdlySet__fir__DOT__sr__v5) {
        vlSelfRef.fir__DOT__sr[6U] = __VdlyVal__fir__DOT__sr__v5;
    }
    if (__VdlySet__fir__DOT__sr__v6) {
        vlSelfRef.fir__DOT__sr[7U] = __VdlyVal__fir__DOT__sr__v6;
    }
    if (__VdlySet__fir__DOT__sr__v7) {
        vlSelfRef.fir__DOT__sr[8U] = __VdlyVal__fir__DOT__sr__v7;
    }
    if (__VdlySet__fir__DOT__sr__v8) {
        vlSelfRef.fir__DOT__sr[9U] = __VdlyVal__fir__DOT__sr__v8;
    }
    if (__VdlySet__fir__DOT__sr__v9) {
        vlSelfRef.fir__DOT__sr[0xaU] = __VdlyVal__fir__DOT__sr__v9;
    }
    if (__VdlySet__fir__DOT__sr__v10) {
        vlSelfRef.fir__DOT__sr[0xbU] = __VdlyVal__fir__DOT__sr__v10;
    }
    if (__VdlySet__fir__DOT__sr__v11) {
        vlSelfRef.fir__DOT__sr[0xcU] = __VdlyVal__fir__DOT__sr__v11;
    }
    if (__VdlySet__fir__DOT__sr__v12) {
        vlSelfRef.fir__DOT__sr[0xdU] = __VdlyVal__fir__DOT__sr__v12;
    }
    if (__VdlySet__fir__DOT__sr__v13) {
        vlSelfRef.fir__DOT__sr[0xeU] = __VdlyVal__fir__DOT__sr__v13;
    }
    if (__VdlySet__fir__DOT__sr__v14) {
        vlSelfRef.fir__DOT__sr[0xfU] = __VdlyVal__fir__DOT__sr__v14;
    }
    if (__VdlySet__fir__DOT__sr__v15) {
        vlSelfRef.fir__DOT__sr[0x10U] = __VdlyVal__fir__DOT__sr__v15;
    }
    if (__VdlySet__fir__DOT__sr__v16) {
        vlSelfRef.fir__DOT__sr[0x11U] = __VdlyVal__fir__DOT__sr__v16;
    }
    if (__VdlySet__fir__DOT__sr__v17) {
        vlSelfRef.fir__DOT__sr[0x12U] = __VdlyVal__fir__DOT__sr__v17;
    }
    if (__VdlySet__fir__DOT__sr__v18) {
        vlSelfRef.fir__DOT__sr[0x13U] = __VdlyVal__fir__DOT__sr__v18;
    }
    if (__VdlySet__fir__DOT__sr__v19) {
        vlSelfRef.fir__DOT__sr[0x14U] = __VdlyVal__fir__DOT__sr__v19;
    }
    if (__VdlySet__fir__DOT__sr__v20) {
        vlSelfRef.fir__DOT__sr[0x15U] = __VdlyVal__fir__DOT__sr__v20;
    }
    if (__VdlySet__fir__DOT__sr__v21) {
        vlSelfRef.fir__DOT__sr[0x16U] = __VdlyVal__fir__DOT__sr__v21;
    }
    if (__VdlySet__fir__DOT__sr__v22) {
        vlSelfRef.fir__DOT__sr[0x17U] = __VdlyVal__fir__DOT__sr__v22;
    }
    if (__VdlySet__fir__DOT__sr__v23) {
        vlSelfRef.fir__DOT__sr[0x18U] = __VdlyVal__fir__DOT__sr__v23;
    }
    if (__VdlySet__fir__DOT__sr__v24) {
        vlSelfRef.fir__DOT__sr[0x19U] = __VdlyVal__fir__DOT__sr__v24;
        vlSelfRef.fir__DOT__sr[0U] = __VdlyVal__fir__DOT__sr__v25;
    }
    if (__VdlySet__fir__DOT__sr__v26) {
        vlSelfRef.fir__DOT__sr[0U] = 0U;
        vlSelfRef.fir__DOT__sr[1U] = 0U;
        vlSelfRef.fir__DOT__sr[2U] = 0U;
        vlSelfRef.fir__DOT__sr[3U] = 0U;
        vlSelfRef.fir__DOT__sr[4U] = 0U;
        vlSelfRef.fir__DOT__sr[5U] = 0U;
        vlSelfRef.fir__DOT__sr[6U] = 0U;
        vlSelfRef.fir__DOT__sr[7U] = 0U;
        vlSelfRef.fir__DOT__sr[8U] = 0U;
        vlSelfRef.fir__DOT__sr[9U] = 0U;
        vlSelfRef.fir__DOT__sr[0xaU] = 0U;
        vlSelfRef.fir__DOT__sr[0xbU] = 0U;
        vlSelfRef.fir__DOT__sr[0xcU] = 0U;
        vlSelfRef.fir__DOT__sr[0xdU] = 0U;
        vlSelfRef.fir__DOT__sr[0xeU] = 0U;
        vlSelfRef.fir__DOT__sr[0xfU] = 0U;
        vlSelfRef.fir__DOT__sr[0x10U] = 0U;
        vlSelfRef.fir__DOT__sr[0x11U] = 0U;
        vlSelfRef.fir__DOT__sr[0x12U] = 0U;
        vlSelfRef.fir__DOT__sr[0x13U] = 0U;
        vlSelfRef.fir__DOT__sr[0x14U] = 0U;
        vlSelfRef.fir__DOT__sr[0x15U] = 0U;
        vlSelfRef.fir__DOT__sr[0x16U] = 0U;
        vlSelfRef.fir__DOT__sr[0x17U] = 0U;
        vlSelfRef.fir__DOT__sr[0x18U] = 0U;
        vlSelfRef.fir__DOT__sr[0x19U] = 0U;
    }
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

void Vfir___024root___eval_triggers__act(Vfir___024root* vlSelf);

bool Vfir___024root___eval_phase__act(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_phase__act\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfir___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vfir___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfir___024root___eval_phase__nba(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_phase__nba\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfir___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir___024root___dump_triggers__ico(Vfir___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir___024root___dump_triggers__nba(Vfir___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfir___024root___dump_triggers__act(Vfir___024root* vlSelf);
#endif  // VL_DEBUG

void Vfir___024root___eval(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vfir___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("fir.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vfir___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vfir___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("fir.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vfir___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("fir.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vfir___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vfir___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfir___024root___eval_debug_assertions(Vfir___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfir___024root___eval_debug_assertions\n"); );
    Vfir__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.din & 0xf0U)))) {
        Verilated::overWidthError("din");}
}
#endif  // VL_DEBUG
