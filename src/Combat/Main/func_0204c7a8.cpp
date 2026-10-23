#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204c7a8 {
    char unknown_0_[0x8];
    int unknown_8_;
    char unknown_c_[0xd4 - 0xc];
    void* unknown_d4_;
};

// USA: func_0204c7a8
extern "C" ARM void func_0204c7a8(struct Struct_0204c7a8* arg0, SafeAllocator* arg1, int arg2, unsigned int arg3) {
    arg0->unknown_d4_ = arg1->Allocate(arg3);
    arg0->unknown_8_ = arg2;
}
