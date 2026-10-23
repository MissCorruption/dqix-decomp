#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_02089ea0 {
    void* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

// USA: func_02089ea0
extern "C" ARM void func_02089ea0(struct Struct_02089ea0* arg0, SafeAllocator* arg1, int arg2) {
    if (arg1 == NULL) return;
    if (arg2 < 0) return;
    arg0->unknown_0_ = arg1->Allocate(arg2 << 6);
    arg0->unknown_4_ = 0;
    arg0->unknown_6_ = arg2;
}
