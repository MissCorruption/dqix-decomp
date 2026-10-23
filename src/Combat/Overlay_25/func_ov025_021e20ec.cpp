#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov025_021e20ec {
    void* unknown_0_;
    int unknown_4_;
};

// USA: func_ov025_021e20ec
extern "C" ARM void* func_ov025_021e20ec(struct Struct_ov025_021e20ec* arg0, SafeAllocator* arg1) {
    arg0->unknown_4_ = 0x51;
    return arg0->unknown_0_ = arg1->Allocate(arg0->unknown_4_ * 0xc);
}
