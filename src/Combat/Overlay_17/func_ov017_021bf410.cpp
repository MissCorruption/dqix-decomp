#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);

// USA: func_ov017_021bf410
extern "C" ARM void func_ov017_021bf410(unsigned char* arg0) {
    func_0204693c((struct Struct_0204693c*)arg0);
    arg0[0x0] = 0xd;
    arg0[0xa] = 0;
    arg0[0xb] = 0;
    *(int*)(arg0 + 0xc) = 0;
    *(int*)(arg0 + 0x10) = 0;
    *(short*)(arg0 + 0x14) = -1;
    *(short*)(arg0 + 0x16) = 0x3d;
    *(short*)(arg0 + 0x18) = 0;
    *(short*)(arg0 + 0x8) = 0;
    ((SafeAllocator*)(arg0 + 0x34))->ResetAllocatorPointer();
    ((SafeAllocator*)(arg0 + 0x4c))->ResetAllocatorPointer();

    unsigned int var0 = (*(volatile unsigned int*)0x4000000 & 0x1f00) >> 8;
    var0 |= 0x10;
    unsigned int var1 = *(volatile unsigned int*)0x4000000 & ~0x1f00;
    *(volatile unsigned int*)0x4000000 = var1 | (var0 << 8);

    arg0[0x48] = 0;
}
