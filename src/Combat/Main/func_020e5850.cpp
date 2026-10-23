#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020e5728 {
    void* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_020e5850
extern "C" ARM void func_020e5850(struct Struct_020e5728* arg0, SafeAllocator* arg1, int arg2) {
    arg0->unknown_0_ = arg1->Allocate(arg2 * 0x14);
    arg0->unknown_4_ = arg2;
    arg0->unknown_8_ = 0;
}
