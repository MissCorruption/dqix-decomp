#if defined(jpn)
#define R(j,u) (j)
#define data_0210a00c data_02109cc4
#define data_ov005_0215cd74 data_ov005_0215e154
#define data_ov006_0215ff6c data_ov006_021612d0
#define func_ov005_021556e4 func_ov005_02156cd4
#define func_ov005_02158878 func_ov005_02159e70
#define func_ov005_0215cb4c func_ov005_0215df2c
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "World/Object3D.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "GameState/GameState.h"

struct Struct_ov006_02154a60 {
    char unknown_0_[0x14];
    void* unknown_14_;
    char unknown_18_[0x2c];
    int unknown_44_;
    char unknown_48_[4];
    int unknown_4c_;
    char unknown_50_[0x26];
    short unknown_76_;
    short unknown_78_;
    char unknown_7a_[2];
};
struct Struct_ov006_02154a60_2 {
    char unknown_0_[R(0x54, 0x1d4)];
    void* unknown_1d4_;
    char unknown_1d8_[0x130];
    int unknown_308_;
    char unknown_30c_[0x1c];
    Vector3fix unknown_328_;
    char unknown_334_[0x560];
    Struct_ov006_02154a60 unknown_894_[4];
    char unknown_a84_[0x58];
    unsigned char unknown_adc_;
    char unknown_add_[5];
    unsigned short unknown_ae2_;
    char unknown_ae4_[R(0x717, 0x79b)];
    unsigned char unknown_127f_0_ : 1;
    unsigned char unknown_127f_1_ : 1;
    unsigned char unknown_127f_2_ : 6;
    char unknown_1280_[0x3b];
    unsigned char unknown_12bb_;
};
extern "C" {
void func_0207fcb8(void*);
void func_0207fd44(void*);
void func_020c5414();
extern Matrix4x3* data_ov006_0216038c[3];
struct Struct_ov006_0215ff6c { unsigned char unknown_0_[4][4]; };
extern Struct_ov006_0215ff6c data_ov006_0215ff6c;
extern int data_0210a00c;
void* func_020100bc(GameState*);
void func_0202ec84(void*, const Vector3fix*, int*, int*);
void func_0203bd08();
void* func_0203be40();
void func_02076988(Struct_ov006_02154a60*, int, int);
void func_02075db0(Struct_ov006_02154a60*, short, short);
}
inline int inline_ov006_02154a60(int arg0, int arg1)
{
    return (int)(((int64_t)arg0 * arg1 + 0x800) >> 12);
}
extern "C" ARM void func_ov006_02154a60(Struct_ov006_02154a60_2* arg0)
{
    if (arg0->unknown_127f_1_) return;
    if (!arg0->unknown_adc_) return;
    void* var0 = arg0->unknown_1d4_;
    func_0207fcb8(var0);
    func_0207fd44(var0);
    if (arg0->unknown_ae2_ & 8) return;
    Matrix4x3 var1[3];
    for (int var2 = 0; var2 < 3; var2++) data_ov006_0216038c[var2] = &var1[var2];
    func_020c5414();
    RenderConfig::SubmitToFifo();
    ((Object3D*)((char*)arg0 + R(0x368, 0x4e8)))->MaybeUpdateBonePositions();
    for (int var3 = 0; var3 < 3; var3++) data_ov006_0216038c[var3] = NULL;
    Vector3fix var4[3] = {
        {var1[0].translation.x, var1[0].translation.y, var1[0].translation.z},
        {var1[1].translation.x, var1[1].translation.y, var1[1].translation.z},
        {var1[2].translation.x, var1[2].translation.y, var1[2].translation.z}};
    int var5[3] = {var1[0].entries[0], var1[1].entries[0], var1[2].entries[0]};
    int var6[3] = {var1[0].entries[4], var1[1].entries[4], var1[2].entries[4]};
    for (int var7 = 0; var7 < 3; var7++) {
        if (var5[var7] < 40) var5[var7] = 40;
        if (var6[var7] < 40) var6[var7] = 40;
    }
    unsigned char var8 = arg0->unknown_12bb_;
    Struct_ov006_0215ff6c var9 = data_ov006_0215ff6c;
    void* var10 = func_020100bc(GameState::GetInstance());
    if (var10) {
        Struct_ov006_02154a60* var11 = arg0->unknown_894_;
        for (unsigned char var12 = 0; var12 < 4; var12++, var11++) {
            Vector3fix var13 = var4[var9.unknown_0_[var8][var12]];
            var13.x = inline_ov006_02154a60(var13.x, ((Object3D*)((char*)arg0 + R(0x164, 0x2e4)))->GetScale().x);
            var13.y = inline_ov006_02154a60(var13.y, ((Object3D*)((char*)arg0 + R(0x164, 0x2e4)))->GetScale().y);
            var13.z = inline_ov006_02154a60(var13.z, ((Object3D*)((char*)arg0 + R(0x164, 0x2e4)))->GetScale().z);
            Vector3fix var14;
            Vector3fix var15 = arg0->unknown_328_;
            Vector3fix_Add(&var13, &var15, &var14);
            int var16, var17;
            func_0202ec84(var10, &var14, &var16, &var17);
            var11->unknown_76_ = var16 - 18;
            var11->unknown_78_ = var17 - 12;
        }
    }
    func_0203bd08();
    void* var18 = func_0203be40();
    Struct_ov006_02154a60* var19;
    unsigned char var20;
    int var21 = arg0->unknown_308_;
    if ((arg0->unknown_ae2_ & 0x2000) || (arg0->unknown_ae2_ & 0x80)) {
        if (!((Object3D*)((char*)arg0 + R(0x368, 0x4e8)))->HasAnimationStopped()) {
            var20 = 1;
            var19 = &arg0->unknown_894_[1];
            for (; var20 < 4; var20++) {
                int var22 = var9.unknown_0_[var8][var20];
                int var23 = var20 * 4 + 0x20;
                var19->unknown_4c_ = 0x300;
                var19->unknown_14_ = (char*)var18 + var23 * 8;
                var19->unknown_44_ = var23 / 4;
                func_02076988(var19, var5[var22], var6[var22]);
                func_02075db0(var19, var19->unknown_76_, var19->unknown_78_);
                var19++;
            }
        }
    }
    if (arg0->unknown_ae2_ & 0x200) {
        data_0210a00c = 0;
        Struct_ov006_02154a60* var24 = &arg0->unknown_894_[0];
        if (var21 > 983 && var24->unknown_78_ < 192) {
            var24->unknown_4c_ = 0x300;
            var24->unknown_14_ = (char*)var18 + 0x120;
            var24->unknown_44_ = 9;
            func_02076988(var24, var5[0], var6[0]);
            func_02075db0(var24, var24->unknown_76_, var24->unknown_78_);
        }
    }
}
