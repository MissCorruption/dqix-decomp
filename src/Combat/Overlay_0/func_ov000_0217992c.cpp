#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x28
#define REGION_OFFSET_1 0x800
#else
#define REGION_OFFSET_0 0x5c
#define REGION_OFFSET_1 0x960
#endif

#include "std_library_functions.h"

extern "C" void func_ov000_0217ab8c(void* arg0, int arg1, int arg2);
extern "C" void func_ov000_02179a70(void* arg0, void* arg1, int arg2, void* arg3);
extern "C" int func_020421a0(void);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

// USA: func_ov000_0217992c
extern "C" ARM void func_ov000_0217992c(char* arg0, void* arg1, int arg2, int arg3) {
    if (arg1 == NULL) return;

    int var0 = *(int*)((char*)arg1 + 0x44);
    int var1 = *(int*)((char*)arg1 + 0x48);
    func_ov000_0217ab8c(arg1, arg2, arg3);

    signed char var2 = *(signed char*)(arg0 + 0x78);
    char* var3 = arg0 + 0x188;
    if (var2 == 3) {
#if defined(jpn)
        *(short*)(var3 + 0xa0) = 0xa;
#else
        *(short*)(var3 + 0xa0) = 0xc;
#endif
        *(short*)(var3 + 0xa2) = 6;
    } else {
#if defined(jpn)
        *(short*)(var3 + 0xa0) = 0xa;
#else
        *(short*)(var3 + 0xa0) = 0xc;
#endif
        *(short*)(var3 + 0xa2) = 1;
    }
#if defined(jpn)
    *(short*)(var3 + 0xa4) = (var0 >> 3) + 0x16;
#else
    *(short*)(var3 + 0xa4) = (var0 >> 3) + 0x14;
#endif
    *(short*)(var3 + 0xa6) = (var1 >> 3);
    *(short*)(var3 + 0xa8) = 0xc;
    *(short*)(var3 + 0xaa) = 8;
    *(short*)(var3 + 0xac) = 0xa;
    *(short*)(var3 + 0xae) = 0xb;
    *(unsigned char*)(var3 + 0xb1) = 0x12;

    int var4 = func_020421a0();
    void* var5 = *(void**)((char*)var4 + REGION_OFFSET_0);
    memset(var5, 0, REGION_OFFSET_1);
    func_ov000_02179a70(arg0, arg1, arg2, var5);
#if defined(jpn)
    func_0205d304(var3, var5, 0, 1, 0, 1, 0);
#else
    func_0205d304(var3, var5, 0, 1, 0, 1, 0, 0);
#endif
}
