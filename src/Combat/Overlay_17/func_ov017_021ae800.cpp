#include <globaldefs.h>
#include "Combat/LootPickupEvent.h"

struct Struct_0204693c;
extern "C" void func_0204693c(Struct_0204693c* arg0);

// USA: func_ov017_021ae800
extern "C" ARM void func_ov017_021ae800(Struct_ov017_021986fc* arg0) {
    func_0204693c((Struct_0204693c*)arg0);
    arg0->unknown_0_ = 0x23;
    arg0->unknown_8_ = 0;
    arg0->unknown_a_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_2c_.ResetAllocatorPointer();
    {
        volatile unsigned int* var0 = (volatile unsigned int*)0x4000000;
        unsigned int var1 = (*var0 & 0x1f00) >> 8;
        *var0 = (*var0 & ~0x1f00) | ((var1 | 0x10) << 8);
    }
    arg0->unknown_9_ = 0;
}
