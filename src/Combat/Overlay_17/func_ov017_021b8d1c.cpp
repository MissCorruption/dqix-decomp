#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);

extern "C" void func_0208b9a0(void*, int);

struct Struct_02061c04_11;
extern "C" void func_ov017_021b994c(struct Struct_02061c04_11* arg0);

// USA: func_ov017_021b8d1c
extern "C" ARM void func_ov017_021b8d1c(unsigned char* arg0) {
    func_0204693c((struct Struct_0204693c*)arg0);
    ((SafeAllocator*)(arg0 + 0x8))->ResetAllocatorPointer();
    ((SafeAllocator*)(arg0 + 0x1c))->ResetAllocatorPointer();
    func_0208b9a0(arg0 + 0x30, 0);
    arg0[0] = 5;
    *(int*)(arg0 + 0x11c) = 0;
    *(int*)(arg0 + 0x124) = 0;
    *(int*)(arg0 + 0x114) = 0;
    *(int*)(arg0 + 0x118) = 0;
    arg0[0x128] = 0;
    arg0[0x129] = 0;
    arg0[0x137] = 0;
    arg0[0x138] = 0;
    arg0[0x139] = 0;
    func_ov017_021b994c((struct Struct_02061c04_11*)arg0);
}
