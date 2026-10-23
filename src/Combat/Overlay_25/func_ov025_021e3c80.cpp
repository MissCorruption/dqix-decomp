#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0215440c_2;
struct Struct_ov000_02160094 { char unknown_0_[0x20]; unsigned short unknown_20_; };
struct Struct_ov000_0215440c { char unknown_0_[9]; unsigned char unknown_9_; };
struct Struct_ov000_021600f8 { char unknown_0_[0xe]; short unknown_e_; };

struct Struct_ov025_021e3c80 {
    char unknown_0_[8];
    unsigned short unknown_8_;
    unsigned char unknown_a_;
    float unknown_c_;
    float unknown_10_;
    float unknown_14_;
};

struct Struct_ov025_021ef988_8 {
#if defined(jpn)
    char unknown_0_[4];
    char* unknown_c_;
    char unknown_8_[0xc - 0x8];
#else
    char unknown1_0_[0xc];
    char* unknown_c_;
    char unknown_10_[0x1c - 0x10];
#endif
    unsigned int unknown_1c_;
};
extern Struct_ov025_021ef988_8 data_ov025_021ef988;

extern "C" void* func_ov000_02160130();
extern "C" char* func_ov000_02160f14(void* arg0);
extern "C" Struct_ov000_02160094* func_ov000_02160094(Struct_ov000_0215440c_2* arg0, int arg1);
extern "C" Struct_ov000_021600f8* func_ov000_021600f8(Struct_ov000_0215440c* arg0, int arg1);
extern "C" void func_ov000_021626a0(void* arg0, int arg1, int arg2);
extern "C" void func_ov025_021eb8e8(char* arg0);
extern "C" void func_ov000_0216d600(char* arg0, int arg1, int arg2, int arg3, float arg4, float arg5, float arg6, unsigned char arg7);
extern "C" void func_ov000_0216d90c(char* arg0, int arg1);
extern "C" void func_ov025_021eba60(char* arg0);
extern "C" void func_ov000_0216da34(char* arg0, int arg1, int arg2);
extern "C" struct Random* func_ov000_02160ef8(unsigned char* arg0);
extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov000_0216dbf0(char* arg0, int* arg1, int arg2, short arg3);
extern "C" void func_ov000_0216de00(char* arg0, int arg1, int arg2);
extern "C" void func_ov000_0216df00(char* arg0, int arg1, int arg2, float arg3, float arg4);
extern "C" short func_ov000_0215ffa0(void* arg0);
extern "C" void func_ov000_0216e250(char* arg0, int* arg1, int arg2);
extern "C" void func_ov000_0216d370(char* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov000_0216f2b8(char* arg0);

// USA: func_ov025_021e3c80
extern "C" ARM int func_ov025_021e3c80(Struct_ov025_021e3c80* arg0, Struct_ov000_0215440c_2* arg1) {
    int var0[12];
    int var1[8];
    unsigned char* var2 = (unsigned char*)func_ov000_02160130();
    char* var3 = func_ov000_02160f14(var2);
    char* var4 = data_ov025_021ef988.unknown_c_;
    Struct_ov000_02160094* var5 = func_ov000_02160094(arg1, 0);
    Struct_ov000_021600f8* var6 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, 0);
    if (*(unsigned int*)(var4 + 0x1c4) & 0x40) {
        func_ov000_021626a0(var2, 4, 1);
        *(unsigned int*)(var4 + 0x1c4) &= ~0x40;
    }
    var3[0x221] = 1;
    int var7 = 0;
    func_ov025_021eb8e8(var4);
    switch (arg0->unknown_8_) {
    case 0:
        var7 = 1;
        func_ov000_0216d600(var3, 1, 0, 0, 0.0f, 0.0f, 0.0f, 0);
        break;
    case 15:
        var7 = 1;
        func_ov000_0216d600(var3, 1, 1, 0, 0.0f, 0.0f, 0.0f, 0);
        break;
    case 1:
        if (var5 == 0) return 1;
        func_ov000_0216d90c(var3, var5->unknown_20_);
        func_ov025_021eba60(var4);
        break;
    case 2:
        if (var5 == 0 || var6 == 0) return 1;
        func_ov000_0216da34(var3, var5->unknown_20_, var6->unknown_e_);
        break;
    case 3:
    case 11: {
        struct Random* var8 = func_ov000_02160ef8(var2);
        int var9 = func_ov000_021820bc(var8, (int)arg1, 0x33, (int)var0);
        func_ov000_0216dbf0(var3, var0, var9, arg0->unknown_8_ == 11);
        var7 = 1;
        break;
    }
    case 4:
        if (var5 == 0 || var6 == 0) return 1;
        func_ov000_0216de00(var3, var5->unknown_20_, var6->unknown_e_);
        var7 = 1;
        break;
    case 5:
    case 13: {
        if (var5 == 0) return 1;
        if (arg0->unknown_8_ == 13) var7 = 1;
        float var10 = arg0->unknown_14_;
        float var11 = arg0->unknown_10_;
        func_ov000_0216df00(var3, var5->unknown_20_, var7, var11, var10);
        func_ov025_021eba60(var4);
        var7 = 1;
        break;
    }
    case 6:
    case 14: {
        if (var6 == 0) return 1;
        if (arg0->unknown_8_ == 14) var7 = 1;
        float var12 = arg0->unknown_14_;
        float var13 = arg0->unknown_10_;
        func_ov000_0216df00(var3, var6->unknown_e_, var7, var13, var12);
        func_ov025_021eba60(var4);
        var7 = 1;
        break;
    }
    case 12: {
        if (var6 == 0) return 1;
        short var14 = func_ov000_0215ffa0(var6);
        void* var15 = func_ov000_02160130();
        if (var15 != 0) {
            func_ov000_021626a0(var15, 4, 0);
        }
        GameObject* var16 = GameState::GetInstance()->GetCombatantByIndex(var14);
        if (var16 != 0) {
            var16->obj3D_.MakeVisible();
        }
        func_ov000_0216df00(var3, var14, 0, 0.0f, 1.8f);
        var7 = 1;
        break;
    }
    case 7: {
        int var17 = ((Struct_ov000_0215440c*)arg1)->unknown_9_;
        for (int var18 = 0; var18 < var17; var18++) {
            Struct_ov000_021600f8* var19 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, var18);
            if (var19 != 0) {
                var1[var18] = var19->unknown_e_;
            }
        }
        func_ov000_0216e250(var3, var1, var17);
        var7 = 1;
        break;
    }
    case 8: {
        if (var5 == 0) return 1;
        int var20 = var5->unknown_20_ > 3 ? 1 : 0;
        unsigned char var21 = var20 ? 1 : 0;
        func_ov000_0216d600(var3, var21, 0, arg0->unknown_a_, arg0->unknown_c_, arg0->unknown_10_, arg0->unknown_14_, 0);
        var7 = 1;
        break;
    }
    case 9: {
        if (var6 == 0) return 1;
        int var22 = 0;
        if (var6->unknown_e_ >= 0 && var6->unknown_e_ <= 3) var22 = 1;
        unsigned char var23 = var22 ? 0 : 1;
        func_ov000_0216d600(var3, var23, 0, arg0->unknown_a_, arg0->unknown_c_, arg0->unknown_10_, arg0->unknown_14_, 0);
        var7 = 1;
        break;
    }
    case 10:
        func_ov000_0216d370(var3, 0, 0, 0);
        break;
    }
    if (var2 != 0 && var7) {
#if defined(jpn)
        enum { Enum_ov025_021e3c80_28629 = 0x71c5 };
#else
        enum { Enum_ov025_021e3c80_28629 = 0x6fd5 };
#endif
        var2[Enum_ov025_021e3c80_28629] = 1;
    }
    data_ov025_021ef988.unknown_1c_ |= 8;
    *(int*)(data_ov025_021ef988.unknown_c_ + 0x224) = 0;
    func_ov000_0216f2b8(var3);
    return 1;
}
