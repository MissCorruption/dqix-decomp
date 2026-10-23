#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);
extern "C" int func_020421a0();

// USA: func_ov017_021b57fc
extern "C" ARM void func_ov017_021b57fc(unsigned char* arg0) {
    func_0204693c((struct Struct_0204693c*)arg0);

    arg0[0x0] = 0x15;
    *(int*)(arg0 + 0x8) = 0;
    arg0[0xc] = 0;
    *(unsigned short*)(arg0 + 0x10) = 0xffff;
    *(int*)(arg0 + 0x1c) = 0;
    *(short*)(arg0 + 0xe) = 0;
    *(int*)(arg0 + 0x20) = 0;
    *(int*)(arg0 + 0x24) = 0;
    *(int*)(arg0 + 0x28) = -1;
    *(unsigned short*)(arg0 + 0x12) = 0xffff;
    arg0[0x16] = 0x3d;
    *(int*)(arg0 + 0x38) = 0;
    arg0[0x17] = 0;
    *(short*)(arg0 + 0x14) = -1;
    *(short*)(arg0 + 0x18) = 0x1f4;

    ((SafeAllocator*)(arg0 + 0x40))->ResetAllocatorPointer();
    ((SafeAllocator*)(arg0 + 0x58))->ResetAllocatorPointer();

    int var0 = func_020421a0();
#if defined(jpn)
    void* var1 = *(void**)((char*)var0 + 0x28);
    memset(*(void**)(arg0 + 0x3c) = var1, 0, 0x800);
#else
    void* var2 = *(void**)((char*)var0 + 0x5c);
    memset(*(void**)(arg0 + 0x3c) = var2, 0, 0x960);
#endif

    unsigned int var3 = (*(volatile unsigned int*)0x4000000 & 0x1f00) >> 8;
    var3 |= 0x10;
    unsigned int var4 = *(volatile unsigned int*)0x4000000 & ~0x1f00;
    *(volatile unsigned int*)0x4000000 = var4 | (var3 << 8);

    arg0[0x54] = 0;
}
