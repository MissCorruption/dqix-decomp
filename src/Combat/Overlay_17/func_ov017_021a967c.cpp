#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);

struct Struct_ov017_021a967c { unsigned short unknown_0_0_ : 14; unsigned short unknown_1_6_ : 1; unsigned short unknown_1_7_ : 1; };

// USA: func_ov017_021a967c
extern "C" ARM void func_ov017_021a967c(unsigned char* arg0, int arg1) {
    func_0204693c((struct Struct_0204693c*)arg0);
    arg0[0x0] = 0x3a;
    ((SafeAllocator*)(arg0 + 0xc))->ResetAllocatorPointer();
    arg0[0x8] = 0;
    *(int*)(arg0 + 0x20) = 0;
    arg0[0x24] = arg1;
    arg0[0x9] = 0;
    arg0[0x25] = 0;
    arg0[0x26] = 0;
    VectorizedMemset(arg0 + 0x28, 0, 6);
    memset(arg0 + 0x2e, 0, 0xb);
    ((Struct_ov017_021a967c*)(arg0 + 0x3a))->unknown_0_0_ = 0;
    arg0[0x39] = 0;
    ((Struct_ov017_021a967c*)(arg0 + 0x3a))->unknown_1_6_ = 0;
    VectorizedMemset(arg0 + 0x3c, 0, 0x18);
    *(int*)(arg0 + 0x54) = 0;
}
