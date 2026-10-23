#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif


extern "C" int func_020421a0(void);
#if defined(jpn)
extern "C" int func_020469b0(void* arg0, int arg1, void* arg2, int arg3);
extern "C" int func_02046f80(void* arg0, int arg1, void* arg2, int arg3);
#else
extern "C" int func_02045d14(void* arg0, int arg1, void* arg2, int arg3);
extern "C" int func_02046170(void* arg0, void* arg1, int arg2, int arg3);
#endif

// USA: func_0205cb74
#pragma optimize_for_size off
extern "C" ARM void func_0205cb74(char* arg0, int arg1) {
    if (arg1 == 0) return;

    void* var0 = (void*)func_020421a0();

    *(unsigned short*)(arg0 + (IS_JPN ? 0x1b0 : 0x220) + *(unsigned char*)(arg0 + (IS_JPN ? 0x1c2 : 0x232)) * 2) = *(unsigned short*)(arg0 + (IS_JPN ? 0x1c0 : 0x230));

#if defined(jpn)
    int var1 = func_020469b0(var0, arg1, (unsigned short*)(arg0 + 0x120) + *(unsigned short*)(arg0 + (IS_JPN ? 0x1c0 : 0x230)), 0xc);
#else
    int var1 = func_02045d14(var0, arg1, (unsigned short*)(arg0 + 0x120) + *(unsigned short*)(arg0 + (IS_JPN ? 0x1c0 : 0x230)), 1);
#endif
    *(unsigned short*)(arg0 + (IS_JPN ? 0x1c0 : 0x230)) = *(unsigned short*)(arg0 + (IS_JPN ? 0x1c0 : 0x230)) + var1;

#if defined(jpn)
    int var2 = func_02046f80(var0, 0xc, (unsigned short*)(arg0 + 0x120) + *(unsigned short*)(arg0 + (IS_JPN ? 0x1b0 : 0x220) + *(unsigned char*)(arg0 + (IS_JPN ? 0x1c2 : 0x232)) * 2), 0x100);
#else
    int var2 = func_02046170(var0, (unsigned short*)(arg0 + 0x120) + *(unsigned short*)(arg0 + (IS_JPN ? 0x1b0 : 0x220) + *(unsigned char*)(arg0 + (IS_JPN ? 0x1c2 : 0x232)) * 2), 0x100, 1);
#endif

    if (*(int*)(arg0 + 0xd0) < var2) {
        *(int*)(arg0 + 0xd0) = var2;
    }

    *(unsigned char*)(arg0 + (IS_JPN ? 0x1c2 : 0x232)) = *(unsigned char*)(arg0 + (IS_JPN ? 0x1c2 : 0x232)) + 1;

    if (*(int*)(arg0 + 0xdc) >= 8) {
        *(int*)(arg0 + 0xdc) = 7;
    } else {
        *(unsigned short*)(arg0 + 0x100 + *(int*)(arg0 + 0xdc) * 2) = var2;
        *(unsigned short*)(arg0 + 0x110 + *(int*)(arg0 + 0xdc) * 2) = 0xc;
    }

    *(int*)(arg0 + 0xdc) = *(int*)(arg0 + 0xdc) + 1;
}
