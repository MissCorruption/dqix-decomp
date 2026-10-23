#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02047b40_5 {
    int unknown_0_;      // 0x0
    void* unknown_4_;   // 0x4
};

// USA: func_02048090
extern "C" ARM void func_02048090(struct Struct_02047b40_5* arg0, int arg1, SafeAllocator* arg2) {
    arg0->unknown_0_ = arg1;
    arg0->unknown_4_ = arg2->Allocate(arg0->unknown_0_ * 0x1e);
}
