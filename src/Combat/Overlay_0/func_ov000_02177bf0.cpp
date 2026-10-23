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
extern "C" void func_ov000_02177d04(void* arg0, void* arg1);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

struct Struct_ov000_02177bf0 {
    char unknown_0_[0x44];
    int unknown_44_;
    int unknown_48_;
};

// USA: func_ov000_02177bf0
extern "C" ARM void func_ov000_02177bf0(void* arg0, struct Struct_ov000_02177bf0* arg1, int arg2, int arg3) {
    char* var0 = (char*)arg0;
    if (arg1 == 0) {
        return;
    }
    int var1 = arg1->unknown_44_;
    int var2 = arg1->unknown_48_;
    func_ov000_0217c638(var0, arg2, arg3);
    char* var3 = var0 + 0x188;
    *(short*)(var3 + 0xa0) = 0x15;
    *(short*)(var3 + 0xa2) = 7;
    *(short*)(var3 + 0xa4) = (var1 >> 3) + 9;
    *(short*)(var3 + 0xa6) = (var2 >> 3) + 1;
    *(short*)(var3 + 0xa8) = 0xc;
    *(short*)(var3 + 0xaa) = 5;
    *(short*)(var3 + 0xac) = 0xa;
    *(short*)(var3 + 0xae) = 0xc;
    *(unsigned char*)(var3 + 0xb1) = 5;
    void* var4 = *(void**)((char*)func_020421a0() + REGION_OFFSET_0);
    memset(var4, 0, REGION_OFFSET_1);
    func_ov000_02177d04(var0, var4);
#if defined(jpn)
    func_0205d304(var0 + 0x188, var4, 0, 0, 0, 1, 0);
#else
    func_0205d304(var0 + 0x188, var4, 0, 0, 0, 1, 0, 0);
#endif
}
