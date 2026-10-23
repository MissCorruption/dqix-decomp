#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0201f500 {
    char unknown_0_[0x20];
    void* unknown_20_;
    int unknown_24_;
    int unknown_28_;
};

// USA: func_020277c4
extern "C" ARM void func_020277c4(struct Struct_0201f500* arg0, int arg1, SafeAllocator* arg2) {
    arg0->unknown_20_ = arg2->Allocate(arg1 * 0x24);
    arg0->unknown_24_ = 0;
    arg0->unknown_28_ = arg1;
}
