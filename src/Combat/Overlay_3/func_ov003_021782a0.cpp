#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0207fdcc_2;
struct Struct_0207fdcc;
extern "C" struct Struct_0207fdcc* func_02081da8(struct Struct_0207fdcc_2* arg0, int arg1);
extern "C" int func_0204c7cc(unsigned char* arg0);
extern "C" void func_ov003_02173f08(char* arg0, char* arg1, char* arg2, char* arg3);

// USA: func_ov003_021782a0
extern "C" ARM int func_ov003_021782a0(struct Struct_0207fdcc_2* arg0) {
    if (g_touchInput.isRepeatValid_ == 0 || g_touchInput.currentReading_.isHeld == 0)
        return 0;

    int var0, var1;
    g_touchInput.GetTouchPoint(&var0, &var1);
    if (var1 < 0x5d || var1 > 0x6e)
        return 0;

#if defined(jpn)
    if (var0 >= 0x8c && var0 <= 0xb7)
        return 1;
    if (var0 >= 0xc8 && var0 <= 0xf0)
        return -1;
    return 0;
#else
    struct Struct_0207fdcc_2* var2 = *(struct Struct_0207fdcc_2**)((char*)arg0 + 0x89c);
    struct Struct_0207fdcc* var3 = func_02081da8(var2, 10);
    if (!var3)
        return 0;
    if (!func_0204c7cc((unsigned char*)var3))
        return 0;

    char var4, var5, var6, var7;
    func_ov003_02173f08(&var4, &var5, &var6, &var7);

    short var8 = *(short*)((char*)var3 + 0xac);
    short var9 = var4 + (short)(var8 << 3);
    short var10 = var5 + (short)(var8 << 3);
    short var11 = var6 + var9;
    short var12 = var7 + var10;

    int var13 = var0;
    if (var13 >= var9) {
        if (var13 <= var11)
            return 1;
    }
    if (var9 <= var13 && var13 <= var12)
        return -1;
    return 0;
#endif
}
