#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_020421a0();
extern "C" void func_ov000_0217c638(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_021777e4(void* arg0, void* arg1);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

struct Struct_ov000_0217768c {
    char unknown_0_[0x44];
    int unknown_44_;
    int unknown_48_;
};

// USA: func_ov000_0217768c
extern "C" ARM void func_ov000_0217768c(void* arg0, struct Struct_ov000_0217768c* arg1, int arg2, int arg3) {
    char* var0 = (char*)arg0;
    if (arg1 == 0) {
        return;
    }
    int var1 = arg1->unknown_44_;
    int var2 = arg1->unknown_48_;
    func_ov000_0217c638(var0, arg2, arg3);
    char* var3 = var0 + 0x188;
    *(short*)(var3 + 0xa0) = 0x15;
    *(short*)(var3 + 0xa2) = 1;
    *(short*)(var3 + 0xa4) = (var1 >> 3) + 9;
    *(short*)(var3 + 0xa6) = (var2 >> 3) + 1;
    *(short*)(var3 + 0xac) = 0xa;
    *(short*)(var3 + 0xae) = 0xd;
    if (arg2 == 2) {
        *(short*)(var3 + 0xa8) = 0xc;
        *(short*)(var3 + 0xaa) = 0xa;
    }
    if (arg2 == 3) {
        *(short*)(var3 + 0xa8) = 0xc;
        *(short*)(var3 + 0xaa) = 8;
    }
    if (arg2 == 4) {
        *(short*)(var3 + 0xac) = 0xa;
        *(short*)(var3 + 0xae) = 0xb;
        *(short*)(var3 + 0xa8) = 0xc;
        *(short*)(var3 + 0xaa) = 4;
    }
    *(unsigned char*)(var3 + 0xb1) = 3;
#if defined(jpn)
    void* var4 = *(void**)((char*)func_020421a0() + 0x28);
#else
    void* var4 = *(void**)((char*)func_020421a0() + 0x5c);
#endif
#if defined(jpn)
    memset(var4, 0, 0x800);
#else
    memset(var4, 0, 0x960);
#endif
    func_ov000_021777e4(var0, var4);
#if defined(jpn)
    func_0205d304(var3, var4, 0, 1, 0, 1, 0);
#else
    func_0205d304(var3, var4, 0, 1, 0, 1, 0, 0);
#endif
}
