// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfir.h for the primary calling header

#ifndef VERILATED_VFIR___024ROOT_H_
#define VERILATED_VFIR___024ROOT_H_  // guard

#include "verilated.h"


class Vfir__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfir___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(din,3,0);
    VL_OUT8(dout,3,0);
    CData/*3:0*/ fir__DOT____Vlvbound_h7cf78d59__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(dout_fullrange,12,0);
    SData/*13:0*/ fir__DOT____Vlvbound_h0592e454__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*3:0*/, 26> fir__DOT__sr;
    VlUnpacked<CData/*3:0*/, 27> fir__DOT__x;
    VlUnpacked<CData/*4:0*/, 14> fir__DOT__ssum;
    VlUnpacked<SData/*13:0*/, 14> fir__DOT__mul;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfir__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfir___024root(Vfir__Syms* symsp, const char* v__name);
    ~Vfir___024root();
    VL_UNCOPYABLE(Vfir___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
