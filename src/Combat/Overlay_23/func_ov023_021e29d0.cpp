#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_ov023_021e2c38(void* arg0, int arg1);
extern "C" void* func_ov023_021e2418(void* arg0, int arg1);
struct Struct_ov023_021e2868;
extern "C" void func_ov023_021e2b5c(struct Struct_ov023_021e2868* arg0, int arg1, short* arg2, short* arg3);

// USA: func_ov023_021e29d0
extern "C" ARM int func_ov023_021e29d0(char* arg0) {
    if (g_touchInput.pressed_ == 0) return -1;

    int var0, var1;
    g_touchInput.GetTouchPoint(&var0, &var1);

    unsigned short var2 = *(unsigned short*)(arg0 + 0x14);
    char* var3 = *(char**)(arg0 + 8);
    unsigned short var4;
    for (var4 = 0; var4 < var2; var4++) {
        short var5 = *(short*)(var3 + var4 * 0x18);
        if (!func_ov023_021e2c38(arg0, var5)) continue;

        var5 = *(short*)(var3 + var4 * 0x18);
        void* var6 = func_ov023_021e2418(arg0, var5);
        if (var6 == 0 || *((unsigned char*)var6 + 2) == 0) continue;

        short var7 = *(short*)var6;
        short var8, var9;
        func_ov023_021e2b5c((struct Struct_ov023_021e2868*)arg0, var7, &var8, &var9);
        short var10 = *(short*)((char*)var6 + 8);
        short var11 = *(short*)((char*)var6 + 0xa);
        short var12 = var8 + var10;
        short var13 = var9 + var11;
        if (var9 > var1) continue;
        if (var1 >= var13) continue;
        if (var8 > var0) continue;
        if (var0 < var12) {
            return *(short*)(var3 + var4 * 0x18);
        }
    }
    return -1;
}
