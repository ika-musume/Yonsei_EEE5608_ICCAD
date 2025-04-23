// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFIR__SYMS_H_
#define VERILATED_VFIR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfir.h"

// INCLUDE MODULE CLASSES
#include "Vfir___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vfir__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfir* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfir___024root                 TOP;

    // CONSTRUCTORS
    Vfir__Syms(VerilatedContext* contextp, const char* namep, Vfir* modelp);
    ~Vfir__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
