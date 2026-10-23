#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void* func_ov011_021842c8(void* arg0);

struct Struct_ov011_021844f4 {
    char unknown_0_[0xb0];
    void* unknown_b0_;
    unsigned int unknown_b4_;
};

// USA: func_ov011_021844f4
extern "C" ARM int func_ov011_021844f4(Struct_ov011_021844f4* arg0, int arg1, unsigned int arg2) {
    void* var0 = func_ov011_021842c8(arg0);
    if (!var0) return 0;
    void* var1 = ((SafeAllocator*)((char*)var0 + 4))->Allocate(arg2);
    arg0->unknown_b0_ = var1;
    if (!var1) return 0;
    arg0->unknown_b4_ = arg2;
    return 1;
}
