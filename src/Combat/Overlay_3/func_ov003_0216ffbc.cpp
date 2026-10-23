#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern "C" void func_0205a444(char* arg0);
struct Struct_0201099c_14;
extern "C" void func_020dfc40(Struct_0201099c_14* arg0);
extern "C" void func_0205c790(char* arg0);

// USA: func_ov003_0216ffbc
extern "C" ARM void func_ov003_0216ffbc(char* arg0) {
    arg0[0] = 1;
    arg0[1] = 0;
    arg0[2] = 0;
    arg0[3] = 0;
    arg0[4] = 0;
    arg0[5] = 0;
    arg0[6] = 0;
    arg0[7] = -1;
    arg0[8] = 0;
    arg0[9] = -1;
    arg0[0xa] = 0;
    *(short*)(arg0 + 0xc) = 0;
    *(short*)(arg0 + 0xe) = 0;
    *(int*)(arg0 + 0x10) = -1;
    *(int*)(arg0 + 0x14) = 0;
    *(int*)(arg0 + 0x18) = 0;
    *(int*)(arg0 + 0x1c) = -1;
    *(short*)(arg0 + 0x20) = 0;
    *(int*)(arg0 + 0x24) = 0;
    *(short*)(arg0 + 0x28) = 0;

    int var0;
    for (var0 = 0; var0 < 3; var0++)
        *(short*)(arg0 + var0 * 2 + 0x2a) = -1;

    memset(arg0 + 0x30, 0, 0xb);

    arg0[0x3b] = 0;
    *(int*)(arg0 + 0x3c) = 0;
    *(int*)(arg0 + 0x40) = 0;
    *(int*)(arg0 + 0x44) = 0;
    arg0[0x58] = 0;
    arg0[0x59] = 0;
    *(int*)(arg0 + 0x5c) = 0;
    *(int*)(arg0 + 0x60) = 0;
    *(int*)(arg0 + 0x64) = 0;
    func_0205a444(arg0 + 0x68);

    ((SafeAllocator*)(arg0 + 0xbc))->ResetAllocatorPointer();

    *(int*)(arg0 + 0xd0) = 0;
    *(int*)(arg0 + 0xd4) = 0;
    *(int*)(arg0 + 0xd8) = 0;
    *(int*)(arg0 + 0x16c) = 0;
    *(int*)(arg0 + 0x174) = 0;
    func_020dfc40((Struct_0201099c_14*)(arg0 + 0xdc));

    func_0205c790(arg0 + 0x178);

#if !defined(jpn)
    memset(arg0 + 0x3b0, -1, 0x20);
#endif
}
