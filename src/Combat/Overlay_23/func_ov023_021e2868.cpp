#include <globaldefs.h>
#include "Input/Input.h"

extern "C" void* func_ov023_021db4e4(void* arg0, int arg1);
extern "C" void* func_ov023_021e2418(void* arg0, int arg1);
struct Struct_ov023_021e2868;
extern "C" void func_ov023_021e2b5c(struct Struct_ov023_021e2868* arg0, int arg1, short* arg2, short* arg3);

// USA: func_ov023_021e2868
extern "C" ARM int func_ov023_021e2868(void* arg0) {
    if (g_touchInput.isRepeatValid_ == 0 || g_touchInput.currentReading_.isHeld == 0) return 0;

    int var0, var1;
    g_touchInput.GetTouchPoint(&var0, &var1);

    char* var2;
    unsigned short var3;
    for (var3 = 0, var2 = *(char**)((char*)arg0 + 8); var3 < *(unsigned short*)((char*)arg0 + 0x14); var3++, var2 = *(char**)((char*)arg0 + 8) + var3 * 0x18) {
        if (*(short*)(var2 + 0xe) == 0 || !(*(unsigned char*)(var2 + 0x16) & 2)) continue;

        void* var4 = func_ov023_021db4e4(arg0, *(short*)(var2 + 0xe));
        while (var4 != 0) {
            void* var5 = func_ov023_021e2418(arg0, *(short*)var4);
            if (var5 == 0) {
                var4 = func_ov023_021db4e4(arg0, *(short*)((char*)var4 + 0x12));
                continue;
            }
            short var6, var7;
            func_ov023_021e2b5c((struct Struct_ov023_021e2868*)arg0, *(short*)var5, &var6, &var7);
            if (var6 > var0 || var0 > var6 + *(short*)((char*)var5 + 8)) {
                var4 = func_ov023_021db4e4(arg0, *(short*)((char*)var4 + 0x12));
                continue;
            }
            if (var7 > var1 || var1 > var7 + *(short*)((char*)var5 + 0xa)) {
                var4 = func_ov023_021db4e4(arg0, *(short*)((char*)var4 + 0x12));
                continue;
            }
            return *(short*)var4;
        }
    }
    return 0;
}
