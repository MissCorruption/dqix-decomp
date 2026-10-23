#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_021748c4_4154 = 0xfb6 };
enum { Enum_ov003_021748c4_2164 = 0x7f0 };
enum { Enum_ov003_021748c4_4166 = 0xfc2 };
enum { Enum_ov003_021748c4_1968 = 0x72c };
#else
enum { Enum_ov003_021748c4_4154 = 0x103a };
enum { Enum_ov003_021748c4_2164 = 0x874 };
enum { Enum_ov003_021748c4_4166 = 0x1046 };
enum { Enum_ov003_021748c4_1968 = 0x7b0 };
#endif

#include "Memory/SafeAllocator.h"

extern "C" void* func_020d6c00(void);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);

extern "C" void func_ov023_021dc9e8(void* arg0, void* arg1, int arg2, void* arg3, int arg4);
extern "C" void func_ov023_021dc134(void* arg0, int arg1, int arg2);
extern "C" void func_ov023_021dbfd0(void* arg0, void* arg1);

// USA: func_ov003_021748c4
extern "C" ARM void func_ov003_021748c4(unsigned char* arg0) {
    func_020466e4((unsigned int*)func_020d6c00(), 1);
    unsigned char* var0 = *(unsigned char**)(arg0 + 0x4);
    unsigned short var1 = *(unsigned short*)(arg0 + Enum_ov003_021748c4_4166);
    if (var1 & 0x800) {
        return;
    }
    SafeAllocator* var2 = (SafeAllocator*)(var0 + 0x28);
    if (var1 & 0x80) {
        var2->Reset();
        short var3 = *(short*)(arg0 + Enum_ov003_021748c4_4154);
        func_ov023_021dc9e8(arg0 + 0x3c, var2, var3, arg0 + Enum_ov003_021748c4_2164, 0x450);
#if !defined(jpn)
        *(unsigned short*)(arg0 + Enum_ov003_021748c4_4166) |= 0x800;
#endif
    } else {
        var2->Reset();
        short var4 = *(short*)(arg0 + Enum_ov003_021748c4_4154);
        func_ov023_021dc134(arg0 + 0x3c, var4, 0);
        *(unsigned short*)(arg0 + Enum_ov003_021748c4_1968) |= 0x450;
        func_ov023_021dbfd0(arg0 + 0x3c, var2);
        *(void**)(arg0 + 0x84) = arg0 + Enum_ov003_021748c4_2164;
        *(unsigned short*)(arg0 + Enum_ov003_021748c4_4166) |= 0x880;
    }
}
