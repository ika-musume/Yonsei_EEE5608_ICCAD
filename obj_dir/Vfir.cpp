// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfir__pch.h"

//============================================================
// Constructors

Vfir::Vfir(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfir__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , din{vlSymsp->TOP.din}
    , dout{vlSymsp->TOP.dout}
    , dout_fullrange{vlSymsp->TOP.dout_fullrange}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfir::Vfir(const char* _vcname__)
    : Vfir(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfir::~Vfir() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfir___024root___eval_debug_assertions(Vfir___024root* vlSelf);
#endif  // VL_DEBUG
void Vfir___024root___eval_static(Vfir___024root* vlSelf);
void Vfir___024root___eval_initial(Vfir___024root* vlSelf);
void Vfir___024root___eval_settle(Vfir___024root* vlSelf);
void Vfir___024root___eval(Vfir___024root* vlSelf);

void Vfir::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfir::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfir___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfir___024root___eval_static(&(vlSymsp->TOP));
        Vfir___024root___eval_initial(&(vlSymsp->TOP));
        Vfir___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfir___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfir::eventsPending() { return false; }

uint64_t Vfir::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfir::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfir___024root___eval_final(Vfir___024root* vlSelf);

VL_ATTR_COLD void Vfir::final() {
    Vfir___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfir::hierName() const { return vlSymsp->name(); }
const char* Vfir::modelName() const { return "Vfir"; }
unsigned Vfir::threads() const { return 1; }
void Vfir::prepareClone() const { contextp()->prepareClone(); }
void Vfir::atClone() const {
    contextp()->threadPoolpOnClone();
}
