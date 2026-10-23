#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov010_021842a0 {
    int unknown_0_;
    SafeAllocator unknown_4_;
    int unknown_18_;
    int unknown_1c_;
};

// USA: func_ov011_021842a0
extern "C" ARM void func_ov011_021842a0(Struct_ov010_021842a0* arg0) {
    arg0->unknown_0_ = 0;
    arg0->unknown_4_.ResetAllocatorPointer();
    arg0->unknown_18_ = 0;
    arg0->unknown_1c_ = 0;
}
