#include <globaldefs.h>

extern "C" int func_020420e8(void* arg0, int arg1);
extern "C" int func_02041a90(char* arg0, int arg1, int arg2);
extern "C" int func_02042058(char* arg0, const char* arg1);
extern "C" int func_02041bac(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

#if defined(jpn)
extern "C" void __clear(void*, int);
extern "C" void func_02041f50(const char*, char*);
extern "C" int func_020d2ff0(const char*);
#endif

// USA: func_ov023_021ed254
extern "C" ARM void func_ov023_021ed254(char* arg0, char* arg1) {
    if (arg1 == 0) return;

    unsigned char var0 = *(unsigned char*)(arg0 + 0x28);
    char* var1 = *(char**)(arg0 + 0x20);
#if defined(jpn)
    char* var2 = var1 + var0 * 0x15c;
    char var3[0x80];
    __clear(var3, 0x80);
    func_02041f50(var2 + 0xc, var3);
    int var4 = func_020d2ff0(var3);
    int var5 = (0x80 - (var4 / 2) * 12) / 2;
    int var6 = 6;
    if (var4 != func_020d2ff0(var2 + 0xc)) var6 = 8;
    func_02041a90(arg1, var5, var6);
    func_02042058(arg1, var2 + 0xc);
#else
    char* var7 = var1 + var0 * 0x244 + 0xc;
    int var8 = func_020420e8(var7, 1);
    int var9 = 0xa0 - var8;
    int var10 = var9 / 2;
    if (var10 < 0) var10 = 0;
    func_02041a90(arg1, var10, 6);

    if (var7 != 0) {
        func_02042058(arg1, var7);
    }

    #endif

    if (!(*(unsigned short*)(arg0 + 0x438) & 0x2)) {
        short var11 = *(short*)(arg0 + 0x448);
#if defined(jpn)
        short var12 = var11 - 0x1c;
        short var13 = 0x80 - var12;
#else
        short var12 = var11 - 0xc;
        short var13 = 0xa0 - var12;
#endif
        if (var12 > 0 && var13 > 0) {
            func_02041bac(arg1, 1, var12, 1, var13, 0x16);
        } else if (var12 <= 0) {
#if defined(jpn)
            func_02041bac(arg1, 1, 1, 1, 0x7e, 0x16);
#else
            func_02041bac(arg1, 1, 1, 1, 0x9e, 0x16);
#endif
        }
    }
    *(unsigned short*)(arg0 + 0x438) &= ~0x2;
}
