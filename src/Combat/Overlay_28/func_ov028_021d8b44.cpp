#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov028_021d8b44 {
    char unknown_0_[0x40];
    void* unknown_40_;
    SafeAllocator unknown_44_;
};

// USA: func_ov028_021d8b44
extern "C" ARM void func_ov028_021d8b44(Struct_ov028_021d8b44* arg0, SafeAllocator* arg1) {
    if (arg1 == 0) {
        return;
    }
    void* var0 = arg1->AllocateReversed(0xa000);
    arg0->unknown_40_ = (char*)var0 + 0x1000;
    arg0->unknown_44_.ResetAllocatorPointer();
    void* var1 = arg1->AllocateReversed(0x5000);
    arg0->unknown_44_.CreateTypeA(var1, 0x5000);
}
