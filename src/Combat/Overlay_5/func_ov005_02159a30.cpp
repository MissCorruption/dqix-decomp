#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"

struct Struct_ov005_02153954 {
    char unknown_0_[0xdf8];
    Struct_0201099c_3 unknown_df8_;
    char unknown_e00_[LOW_REGION(0xf80, 0xf84) - 0xdf8 - sizeof(Struct_0201099c_3)];
    short unknown_f84_;
    short unknown_f86_;
    short unknown_f88_;
    short unknown_f8a_;
    char unknown_f8c_[LOW_REGION(0x3d33 - 0xf88, 0x3dbb - 0xf8c)];
    signed char unknown_3dbb_;
    char unknown_3dbc_[LOW_REGION(0x3d54, 0x3ddc) - LOW_REGION(0x3d34, 0x3dbc)];
    unsigned char unknown_3ddc_;
    unsigned char unknown_3ddd_;
    signed char unknown_3dde_;
    unsigned char unknown_3ddf_;
};

extern "C" void func_02041c08(char* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);
extern "C" void func_02041ea4(char* arg0, int arg1);
extern "C" const char* func_020e0434(Struct_0201099c_3* arg0, int arg1);
extern "C" int func_020420e8(const char* arg0, int arg1);
extern "C" void func_02041b70(char* arg0, int arg1, const char* arg2);
extern "C" void func_02042058(char* arg0, const char* arg1);

// USA: func_ov005_02159a30
extern "C" ARM void func_ov005_02159a30(Struct_ov005_02153954* arg0, char* arg1, int arg2) {
    if (arg1 == NULL)
        return;
    int var0 = arg0->unknown_3dde_;
    if (arg2)
        func_02041c08(arg1, var0, 8, 5, 5, 5);
    func_02041ea4(arg1, var0);
    int var1 = 4;
    int var2 = 0;
    if (arg0->unknown_3dbb_ >= 0 && arg0->unknown_3dbb_ < 8) {
        var1--;
        var2 = 1;
    }
#if defined(jpn)
    for (int var3 = 0; var3 < var1; var3++) {
        if (var2) {
            if (var3 == 0)
                func_02041b70(arg1, var3, func_020e0434(&arg0->unknown_df8_, 4));
            else
                func_02041b70(arg1, var3, func_020e0434(&arg0->unknown_df8_, (short)(var3 + 1)));
        } else {
            func_02041b70(arg1, var3, func_020e0434(&arg0->unknown_df8_, (short)var3));
        }
        if (var3 != var1 - 1)
            func_02042058(arg1, func_020e0434(&arg0->unknown_df8_, 0x64));
    }
#else
    Struct_0201099c_3* var4 = &arg0->unknown_df8_;
    const char* var5 = func_020e0434(var4, 0x64);
    int var6 = 0;
    for (int var7 = 0; var7 < var1; var7++) {
        short var8 = var7;
        if (var2) {
            var8++;
            if (var7 == 0)
                var8 = 4;
        }
        const char* var9 = func_020e0434(var4, var8);
        int var10 = func_020420e8(var9, 0);
        if (var6 < var10)
            var6 = var10;
        func_02041b70(arg1, var7, var9);
        if (var7 != var1 - 1)
            func_02042058(arg1, var5);
    }
    int var11 = ((var6 + 0x1b) & ~7) >> 3;
    var11 += var11 & 1;
    arg0->unknown_f84_ = var11;
    arg0->unknown_f86_ = 7;
    arg0->unknown_f88_ = (0x20 - var11) >> 1;
    arg0->unknown_f8a_ = 9;
#endif
}
