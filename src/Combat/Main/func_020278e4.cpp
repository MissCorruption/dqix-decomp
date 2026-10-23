#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0201f580 {
    char unknown_0_[0x2c];
    void* unknown_2c_;   // 0x2c
    int unknown_30_;      // 0x30
    int unknown_34_;   // 0x34
};

// USA: func_020278e4
extern "C" ARM void func_020278e4(struct Struct_0201f580* arg0, int arg1, SafeAllocator* arg2) {
    arg0->unknown_2c_ = arg2->Allocate(arg1 * 0x10);
    arg0->unknown_30_ = 0;
    arg0->unknown_34_ = arg1;
}
