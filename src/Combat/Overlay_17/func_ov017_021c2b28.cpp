#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c { signed char unknown_0_, unknown_1_, unknown_2_, unknown_3_; };
extern "C" void func_0204693c(Struct_0204693c* arg0);

// USA: func_ov017_021c2b28
extern "C" ARM void func_ov017_021c2b28(void* arg0, unsigned char arg1, unsigned char arg2) {
    unsigned char* var0 = (unsigned char*)arg0;
    func_0204693c((Struct_0204693c*)var0);
    var0[0] = 0x46;
    ((SafeAllocator*)(var0 + 8))->ResetAllocatorPointer();
    var0[0x8c] = 0;
    var0[0x8d] = 0;
    *(int*)(var0 + 0x90) = 0;
    var0[0x96] = 0;
    var0[0x94] = arg1;
    var0[0x95] = arg2;
}
