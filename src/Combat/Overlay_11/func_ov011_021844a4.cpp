#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void* func_ov011_021842c8(void* arg0);

struct Struct_ov011_021844a4 { char unknown_0_[0x9c]; void* unknown_9c_; unsigned int unknown_a0_; void* unknown_a4_; };

// USA: func_ov011_021844a4
extern "C" ARM int func_ov011_021844a4(struct Struct_ov011_021844a4* arg0, void* arg1, unsigned int arg2) {
    void* var0 = func_ov011_021842c8(arg0);
    if (var0 == 0) return 1;
    void* var1 = ((SafeAllocator*)((char*)var0 + 4))->Allocate(arg2);
    arg0->unknown_9c_ = var1;
    if (var1 == 0) return 1;
    arg0->unknown_a4_ = arg1;
    arg0->unknown_a0_ = arg2;
    return 0;
}
