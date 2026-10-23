#include <globaldefs.h>
#include "GameState/Field3b0.h"

#include "GameState/GameState.h"
#include "Graphics/LightingManager.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "NitroSDK/Graphics.h"

struct Struct_0201730c;
struct Struct_0201730c_2;

struct Struct_0201730c_3 {
    char unknown_0_[0x8];
    void* unknown_8_;
    char unknown_c_[0x1c - 0xc];
    Vector3i unknown_1c_;
    char unknown_28_[0x34 - 0x28];
    Vector3i unknown_34_;
    char unknown_40_[0x80 - 0x40];
    unsigned short unknown_80_;
    char unknown_82_[0x88 - 0x82];
};

struct Struct_0201730c_2 {
    char unknown_0_[0xc];
    void* unknown_c_;
    char unknown_10_[0x1c - 0x10];
    Vector3i unknown_1c_;
    char unknown_28_[0x80 - 0x28];
    unsigned short unknown_80_;
    char unknown_82_[0x88 - 0x82];
};

struct Struct_0201730c_4 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    char unknown_6_[0x8 - 6];
    Struct_0201730c_3 unknown_8_;
    Struct_0201730c_2 unknown_90_;
    Struct_0201730c_3 unknown_118_[4];
    Vector3i unknown_338_[4];
};

struct Struct_02016874_3 {
    #if defined(jpn)
    char unknown_0_[0x496];
#else
    char unknown1_0_[0x476];
#endif
    unsigned char unknown_476_;
    char unknown_477_[1];
    Struct_0201730c_4* unknown_478_;
    #if defined(jpn)
    char unknown_49c_[0x2790 - 0x49c];
#else
    char unknown_47c_[0x2750 - 0x47c];
#endif
    void* unknown_2750_;
};

extern "C" void* func_0202ed74(void* arg0);
extern "C" void func_02016d8c(void* arg0);
extern "C" int func_020c56b0(int* arg0);
extern "C" void func_02047648(unsigned char* arg0, int arg1, int arg2);
extern "C" void func_0204724c(Struct_0201730c* arg0);
extern "C" void func_020472e4(Struct_0201730c_2* arg0, int arg1);

extern Vector3i data_020e6e20;
extern int data_020e6e64[4];

// USA: func_0201730c
extern "C" ARM void func_0201730c(Struct_02016874_3* arg0) {
    if (arg0->unknown_2750_ == NULL) return;

    GameState* var0 = GameState::GetInstance();
    void* var1 = func_020100bc(var0);
    if (var1 == NULL) return;
    var0->GetTickCount();
    unsigned short var2 = LightingManager::GetInstance()->maybePotBarrelDiffuseColor_;
    func_02016d8c(func_0202ed74(var1));

    for (int var3 = 0; var3 < arg0->unknown_476_; var3++) {
        Struct_0201730c_4* var4 = &arg0->unknown_478_[var3];
        if (var4->unknown_2_ == -1) continue;

        RenderConfig::SetObjectPosition(&var4->unknown_8_.unknown_1c_);

        Vector3i var5 = data_020e6e20;
        RenderConfig::SetObjectScale(&var5);
        RenderConfig::SubmitToFifo();

        union {
            struct {
                short unknown_0_;
                short unknown_2_;
                short unknown_4_;
                short unknown_6_;
                short unknown_8_;
                short unknown_a_;
            } unknown_0_;
            struct {
                unsigned int unknown_0_;
                unsigned int unknown_4_;
                unsigned int unknown_8_;
            } unknown1_0_;
        } var6;
        var6.unknown_0_.unknown_0_ = -0x800;
        var6.unknown_0_.unknown_2_ = 0;
        var6.unknown_0_.unknown_4_ = -0x800;
        var6.unknown_0_.unknown_6_ = 0x1000;
        var6.unknown_0_.unknown_8_ = 0x1000;
        var6.unknown_0_.unknown_a_ = 0x1000;
        GXFIFO_TEST_BOX = var6.unknown1_0_.unknown_0_;
        GXFIFO_TEST_BOX = var6.unknown1_0_.unknown_4_;
        GXFIFO_TEST_BOX = var6.unknown1_0_.unknown_8_;

        int var7;
        while (func_020c56b0(&var7) != 0) {}
        if (var7 == 0) continue;

        var5 = var4->unknown_8_.unknown_34_;
        RenderConfig::SetObjectScale(&var5);
        RenderConfig::SubmitToFifo();

        var4->unknown_8_.unknown_80_ = var2;
        var4->unknown_90_.unknown_80_ = var2;
        for (int var8 = 0; var8 < 4; var8++) var4->unknown_118_[var8].unknown_80_ = var2;

        if (var4->unknown_2_ != 3) {
            func_02047648((unsigned char*)&var4->unknown_8_, 0, 1);
        } else if (var4->unknown_2_ == 3) {
            if (var4->unknown_4_ < 12) {
                func_0204724c((Struct_0201730c*)&var4->unknown_90_);
                func_020472e4(&var4->unknown_90_, 1);
            }
            for (int var9 = 0; var9 < 4; var9++) {
                Struct_0201730c_3* var10 = &var4->unknown_118_[var9];
                RenderConfig::SetObjectPosition(&var10->unknown_1c_);
                Matrix3x3* var11 = (Matrix3x3*)func_0202ed74(var1);
                Matrix3x3 var12;
                Matrix3x3 var13;
                fix32_t var14 = data_020e6e64[var9];
                fix32_t var15 = fix32cos(var14);
                fix32_t var16 = fix32sin(var14);
                Mat3x3_WriteRotationY(&var12, var16, var15);
                Mat3x3_Multiply(var11, &var12, &var13);
                func_02016d8c(&var13);
                RenderConfig::SubmitToFifo();
                func_02047648((unsigned char*)var10, 0, 1);
            }
        }
    }
}
