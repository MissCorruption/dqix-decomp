#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0201f1f0 {
    char unknown_0_[0xc];
    void* unknown_c_;       // +0xc
    int unknown_10_;       // +0x10
    int unknown_14_;    // +0x14
};

// USA: func_0201f1f0
extern "C" ARM void func_0201f1f0(struct Struct_0201f1f0* arg0, int arg1, SafeAllocator* arg2) {
    arg0->unknown_c_ = arg2->Allocate(arg1 * 0x20);
    arg0->unknown_14_ = arg1;
}
