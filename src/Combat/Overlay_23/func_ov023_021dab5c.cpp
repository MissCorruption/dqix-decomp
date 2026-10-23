#include <globaldefs.h>

#if defined(jpn)
#include "Resource/CharacterCreationUI.h"
#include "Graphics/SpriteAffineTransform.h"

extern "C" int func_0205bafc(void*);
extern "C" void func_0205ac40(Struct_0205ac40*, Struct_0205ac40_2*);

extern "C" ARM void func_ov023_021dab5c(Struct_ov009_021842a0* arg0, int arg1, int arg2, int arg3, int arg4) {
    int var0 = arg4 << 12;
    int var1 = arg1 << 12;
    int var2 = arg2 << 12;
    int var3, var4, var5, var6;
    if (arg0->unknown_c58_ == 1) {
        int var7 = var1 + (arg3 << 12);
        int var8 = var2 + var0;
        var3 = var1 - 0x7000;
        var5 = var2 - 0x7000;
        var4 = var7 - 0x1000;
        var6 = var8 - 0x1000;
        if (func_0205bafc(&arg0->unknown_bec_) == 8 && arg0->unknown_bec_.unknown_c_ == 1) {
            var3 = var1 - 0x4000;
            var5 = var2 - 0x4000;
            var4 = var7 - 0x4000;
            var6 = var8 - 0x4000;
        }
    } else {
        int var9 = var1 + (arg3 << 12);
        int var10 = var2 + var0;
        var3 = var1 - 0x4000;
        var5 = var2 - 0x4000;
        var4 = var9 - 0x4000;
        var6 = var10 - 0x4000;
    }
    fix32_t* var11 = arg0->unknown_7e8_[21].unknown_14_;
    var11[0] = var3;
    var11[1] = var5;
    var11 = arg0->unknown_7e8_[22].unknown_14_;
    var11[0] = var4;
    var11[1] = var5;
    var11 = arg0->unknown_7e8_[23].unknown_14_;
    var11[0] = var3;
    var11[1] = var6;
    var11 = arg0->unknown_7e8_[24].unknown_14_;
    var11[0] = var4;
    var11[1] = var6;
    for (int var12 = 0; var12 < 4; ++var12)
        func_0205ac40(arg0->unknown_7e4_, &arg0->unknown_7e8_[var12 + 21]);
}
#else
extern "C" int func_0205bafc(void* arg0);
extern "C" void func_0205ac40(void* arg0, void* arg1);

// USA: func_ov023_021dab5c
extern "C" ARM void func_ov023_021dab5c(void* arg0, int arg1, int arg2, int arg3, int arg4) {
    char* var13 = (char*)arg0;
    int var14 = arg4 << 12;
    int var15 = arg1 << 12;
    int var16 = arg2 << 12;
    int var17, var18, var19, var20;

    if (*(signed char*)(var13 + 0xc58) == 1) {
        int var21 = var15 + (arg3 << 12);
        int var22 = var16 + var14;
        var17 = var15 - 0x7000;
        var18 = var16 - 0x7000;
        var19 = var21 - 0x1000;
        var20 = var22 - 0x1000;
        if (func_0205bafc(var13 + 0xbec) == 8 && *(int*)(var13 + 0xbf8) == 1) {
            var17 = var15 - 0x4000;
            var18 = var16 - 0x4000;
            var19 = var21 - 0x4000;
            var20 = var22 - 0x4000;
        }
    } else {
        int var23 = var15 + (arg3 << 12);
        int var24 = var16 + var14;
        var17 = var15 - 0x4000;
        var18 = var16 - 0x4000;
        var19 = var23 - 0x4000;
        var20 = var24 - 0x4000;
    }

    char* var25 = *(char**)(var13 + 0x7e8);
    *(int*)(var25 + 0x35c) = var17;
    *(int*)(var25 + 0x360) = var18;
    *(int*)(var25 + 0x384) = var19;
    *(int*)(var25 + 0x388) = var18;
    *(int*)(var25 + 0x3ac) = var17;
    *(int*)(var25 + 0x3b0) = var20;
    *(int*)(var25 + 0x3d4) = var19;
    *(int*)(var25 + 0x3d8) = var20;

    int var26;
    for (var26 = 0; var26 < 4; var26++) {
        func_0205ac40(*(void**)(var13 + 0x7e4), var25 + (var26 + 0x15) * 0x28);
    }
}
#endif
