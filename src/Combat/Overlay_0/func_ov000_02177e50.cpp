#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x28
#define REGION_OFFSET_1 0x800
#else
#define REGION_OFFSET_0 0x5c
#define REGION_OFFSET_1 0x960
#endif

#include "std_library_functions.h"

extern "C" int func_020421a0();

extern "C" void func_ov000_0217c638(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_02177f74(void* arg0, void* arg1);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

struct Struct_ov000_02177e50 {
    char unknown_0_[0x44];
    int unknown_44_;
    int unknown_48_;
};

// USA: func_ov000_02177e50
extern "C" ARM void func_ov000_02177e50(void* arg0, struct Struct_ov000_02177e50* arg1, int arg2, int arg3) {
    char* var0 = (char*)arg0;
    if (arg1 == 0) {
        return;
    }
    int var1 = arg1->unknown_44_;
    int var2 = arg1->unknown_48_;
    func_ov000_0217c638(var0, arg2, arg3);
    char* var3 = var0 + 0x188;
#if defined(jpn)
    *(short*)(var3 + 0xa0) = 9;
#else
    *(short*)(var3 + 0xa0) = 0xb;
#endif
    *(short*)(var3 + 0xa2) = 9;
    *(short*)(var3 + 0xa4) = (var1 >> 3) + 9;
    *(short*)(var3 + 0xa6) = var2 >> 3;
    *(short*)(var3 + 0xa8) = 0xc;
    *(short*)(var3 + 0xaa) = 8;
    *(short*)(var3 + 0xac) = 0xa;
    *(short*)(var3 + 0xae) = 0xd;
    *(unsigned char*)(var3 + 0xb1) = 6;
    void* var4;
    int var5 = *(int*)(var3 + 0x58);
    var4 = *(void**)((char*)func_020421a0() + REGION_OFFSET_0);
    memset(var4, 0, REGION_OFFSET_1);
    func_ov000_02177f74(var0, var4);
    int var6 = (var5 > 1) ? 1 : 0;
#if defined(jpn)
    func_0205d304(var0 + 0x188, var4, 0, 0, var6, 1, 0);
#else
    func_0205d304(var3, var4, 0, 0, var6, 1, 0, 0);
#endif
}
