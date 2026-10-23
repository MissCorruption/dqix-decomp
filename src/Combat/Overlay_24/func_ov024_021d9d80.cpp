#include <globaldefs.h>
#include "Util/Random.h"

extern "C" void* func_ov000_02153710(void*, short);
extern "C" int func_ov000_02159dbc(void*, short);

struct Struct_ov024_021d9d80 { struct Random* unknown_0_; };

// USA: func_ov024_021d9d80
extern "C" ARM int func_ov024_021d9d80(struct Struct_ov024_021d9d80* arg0, unsigned short arg1, int arg2, int arg3, int arg4, int arg5) {
#if defined(jpn)
 enum {Enum_ov024_021d9d80_2384=0x8b8};
#else
 enum {Enum_ov024_021d9d80_2384=0x950};
#endif
    int var0 = 0;
    if (arg1 <= 3) {
        var0 = 1;
    }
    float var1;
    if (var0) {
        char* var2 = (char*)func_ov000_02153710(arg0->unknown_0_, (short)arg1);
        if (var2 == NULL) {
            return arg5;
        }
        int var3 = *(int*)(var2 + Enum_ov024_021d9d80_2384);
        unsigned short var4 = *(unsigned short*)(var2 + var3 * 2 + 0x16c);
        var1 = var4;
    } else {
        int var5 = func_ov000_02159dbc(arg0->unknown_0_, (short)arg1);
        var1 = var5;
    }
    struct Random* var6 = arg0->unknown_0_;
    float var7 = NextRandomFloatBetween(var6, 0.95f, 1.05f);
    float var8 = 7.0f * var1 * var7;
    float var9 = NextRandomFloatBetween(var6, 0.95f, 1.05f);
    float var10 = 280.0f * var9;
    if (var8 < var10) {
        var8 = var10;
    }
    return (int)var8;
}
