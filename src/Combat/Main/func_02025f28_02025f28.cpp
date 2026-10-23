#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);
extern "C" void* func_0203b628(void);
extern "C" void* func_02012fe4(void);

struct Struct_02020fc4_3;
extern "C" void func_0203bcb8(struct Struct_02020fc4_3* arg0, int arg1, int arg2);

struct Struct_0201bb78 { unsigned short unknown_0_; };
extern "C" int func_0201bb78(struct Struct_0201bb78* arg0, unsigned int arg1);

extern "C" void func_0202756c(void* arg0, int arg1, int arg2, int arg3,
        unsigned char arg4, unsigned char arg5, unsigned short arg6, unsigned char arg7, int arg8, int arg9);

extern "C" int func_0206dfb0(int arg0, unsigned char* arg1, int arg2);
extern "C" void func_0202630c(void* arg0, int* arg1, int arg2);

extern "C" int abs(int arg0);
extern "C" void ColorEffect_ConfigureAlphaBlend(unsigned int* out, unsigned char a, unsigned char b, int c, int d);

extern int data_020fdc4c;

struct Struct_02025f28 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    char unknown_3_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov026_021de6dc { int unknown_0_, unknown_4_, unknown_8_; };

struct Struct_02025f28_2 {
    char unknown_0_[0xc];
    unsigned char unknown_c_0_ : 4;
    unsigned char unknown_c_4_ : 4;
};

// USA: func_02025f28
extern "C" ARM void func_02025f28(unsigned char* arg0) {
#if defined(jpn)
    enum { Enum_02025f28_2713 = 0x9cd, Enum_02025f28_2716 = 0x9d0, Enum_02025f28_68 = 0x64, Enum_02025f28_72 = 0x68, Enum_02025f28_10100 = 0x27b4, Enum_02025f28_12 = 0x8 };
#else
    enum { Enum_02025f28_2713 = 0xa99, Enum_02025f28_2716 = 0xa9c, Enum_02025f28_68 = 0x44, Enum_02025f28_72 = 0x48, Enum_02025f28_10100 = 0x2774, Enum_02025f28_12 = 0xc };
#endif
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_0205ec34();
    func_0203b628();
    void* var2 = func_02012fe4();
    unsigned short var3 = *(unsigned short*)var2;
    GameObject* var4;
    int var5;
    int var6;
    void* var7 = *(void**)((char*)var2 + 8);
    var4 = var0->GetUnknownGameObject();
    var0->GetProtagonist();
    struct Struct_ov026_021de6dc var8 = *(struct Struct_ov026_021de6dc*)((char*)var4 + 0x44);

    if (*(unsigned char*)(arg0 + 0x55c) != 0) {
        *(unsigned char*)(arg0 + 0x55c) = 0;
        func_0203bcb8((struct Struct_02020fc4_3*)(*(char**)(arg0 + 0x20) + 8), 0, 0);
    }

    var6 = 1;
    for (var5 = 0; var5 < *(unsigned char*)(arg0 + Enum_02025f28_2713); var5++) {
        if (func_0201bb78((struct Struct_0201bb78*)var2, (unsigned short)((*(struct Struct_02025f28**)(arg0 + Enum_02025f28_2716))[var5].unknown_0_ * 100)) == 0) continue;
        struct Struct_02025f28* var9 = &(*(struct Struct_02025f28**)(arg0 + Enum_02025f28_2716))[var5];
        int var10 = var9->unknown_4_;
        int var11 = var9->unknown_8_;
        if ((*(struct Struct_02025f28**)(arg0 + Enum_02025f28_2716))[var5].unknown_2_ == 1) {
            func_0202756c(arg0, var10 + 0x7d000, var11 + 0x5d000, 0x18,
                (var5 + 0x55) & 0xff, var6, 0xff, 0xff, 0x1000, 0x1000);
        } else if ((*(struct Struct_02025f28**)(arg0 + Enum_02025f28_2716))[var5].unknown_2_ == 2) {
            func_0202756c(arg0, var10 + 0x7d000, var11 + 0x5d000, 0x17,
                (var5 + 0x55) & 0xff, 0, 0xff, 0xff, 0x1000, 0x1000);
        }
    }

    var5 = 1;
    var6 = var5;
    if (var3 == 10000 || func_0206dfb0((int)var1, var1 + 0x8c, 0x2b) == 0) var6 = 0;
    int var12[3];
    if (var3 == 10000 || var3 == 10100) {
        var12[0] = var8.unknown_0_ + 0x80000;
        var12[2] = var8.unknown_8_ + 0x60000;
    } else if (((struct Struct_02025f28_2*)var7)->unknown_c_0_ == 0) {
        var12[0] = fix32_Divide((fix32_t)(var8.unknown_0_ + *(int*)((char*)var2 + Enum_02025f28_68)), (fix32_t)(0x6000)) + 0x80000;
        var12[2] = fix32_Divide((fix32_t)(var8.unknown_8_ + *(int*)((char*)var2 + Enum_02025f28_72)), (fix32_t)(0x6000)) + 0x60000;
    } else if (*(int*)((char*)var2 + Enum_02025f28_68) != 0 && *(int*)((char*)var2 + Enum_02025f28_72) != 0) {
        var12[0] = *(int*)((char*)var2 + Enum_02025f28_68) + 0x80000;
        var12[2] = *(int*)((char*)var2 + Enum_02025f28_72) + 0x60000;
    } else {
        var5 = 0;
    }

    if (var6) {
        struct Struct_ov026_021de6dc var13 = *(struct Struct_ov026_021de6dc*)((char*)var2 + Enum_02025f28_10100);
        var13.unknown_0_ += 0x80000;
        var13.unknown_8_ += 0x60000;
        func_0202630c(arg0, (int*)&var13, 0x7000);
        var13.unknown_0_ -= 0x4000;
        var13.unknown_8_ -= 0x4000;
        func_0202756c(arg0, var13.unknown_0_, var13.unknown_8_, 0x19, 0x54, 0, 0xff, 0xff, 0x1000, 0x1000);
    }

    int var14 = (*(unsigned int*)((char*)&data_020fdc4c + Enum_02025f28_12) + var0->GetEffectiveDeltaTime()) % 0x560u;
    *(unsigned int*)((char*)&data_020fdc4c + Enum_02025f28_12) = var14;
    var14 = abs((var14 - 0x2b0) / 0x2b) * 0x4b / 100 + 5;
    if (var14 > 0x10) var14 = 0x10;
    int var15 = 0x10 - var14;
    ColorEffect_ConfigureAlphaBlend((unsigned int*)0x04001050, 0, 3, var14, var15);

    func_0202630c(arg0, var12, 0x5000);
    var12[0] -= 0x4000;
    var12[2] -= 0x4000;

    if (var5) {
        short var16 = var4->obj3D_.unknown_4_;
        unsigned char var17 = (unsigned char)(var16 + 0x44);
        unsigned short var18 = (unsigned short)(var16 + 4);
        func_0202756c(arg0, var12[0], var12[2], 5, var17, 0, var18, 0xff, 0x1000, 0x1000);
    }
}
