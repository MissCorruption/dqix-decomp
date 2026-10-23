#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"
#include "World/Zone3D.h"

struct Struct_ov017_02197e2c { Object3D unknown_0_; char unknown_ac_[0x12]; unsigned char unknown_be_; };
struct Struct_ov017_02197e2c_2 {
#if defined(jpn)
    char unknown_0_[0xf0];
#else
    char unknown1_0_[0x150];
#endif
    unsigned char unknown_150_0_ : 6;
    unsigned char unknown_150_6_ : 2;
};
struct Struct_ov017_02197e2c_3 { unsigned char unknown_0_; char unknown_1_; short unknown_2_; int unknown_4_; Struct_020133fc* unknown_8_; int unknown_c_; short unknown_10_; short unknown_12_; };
struct Struct_02046b1c;
struct Struct_ov009_0218aa28;
extern "C" Zone3D* func_02012fe4();
extern "C" void* func_020421a0();
extern "C" void* func_020100bc(GameState*);
extern "C" bool func_020535c8(signed char*);
extern "C" void* func_02046b1c(Struct_02046b1c*);
extern "C" Struct_020133fc* func_020177a8(unsigned char*, int);
int fix32abs(int);
extern "C" int func_020c32f8(int);
extern "C" int func_020c3260(int);
extern "C" float func_0200c700(int);
extern "C" int func_ov017_021a4754(Vector3fix*, int, Vector3fix*);
extern "C" Struct_ov017_02197e2c_2* func_020d7a50();
extern "C" void func_ov017_0219a674(unsigned char*);
extern "C" void func_ov017_0219b33c(GameResources*, Struct_ov017_02197e2c_3*);

static inline int inline_ov017_02197e2c(int arg0, int arg1) { return (int)(((long long)arg0 * arg1 + 0x800) >> 12); }

// USA: func_ov017_02197e2c
extern "C" ARM void func_ov017_02197e2c(GameResources* arg0) {
    GameState* var0 = GameState::GetInstance();
    Zone3D* var1 = func_02012fe4();
    func_020421a0();
    func_020100bc(var0);
    Struct_ov017_02197e2c* var2 = (Struct_ov017_02197e2c*)var0->GetUnknownGameObject();
    Vector3i* var3 = &var2->unknown_0_.position_;
    if (func_020535c8((signed char*)var2)) return;
    if (!var1->numChests_) return;
    int var4 = 0;
    int var5 = 0;
    void* var6 = func_02046b1c((Struct_02046b1c*)arg0->unknown_ptr_array_36fc[0]);
    if (var6) var5 = 1;
    int var7 = 0x3244;
    Struct_020133fc* var8 = 0;
    Struct_020133fc* var9 = 0;
    int var10 = -1;
    for (int var11 = 0; var11 < var1->numChests_; var11++) {
        var8 = func_020177a8((unsigned char*)var1, var11);
        if (!var8) continue;
        Vector3i var12;
        Vector3i var13 = *var3;
        Vector3i var14 = var8->unknown_0_;
        if (fix32abs(var13.y - var14.y) > 0x1000) continue;
        var13.y = 0;
        var14.y = 0;
        Vector3fix_Subtract(&var13, &var14, &var13);
        var12 = var13;
        int var15 = inline_ov017_02197e2c(var13.x, var13.x) + inline_ov017_02197e2c(var13.z, var13.z);
        if (var15 > 0x1800) continue;
        Vector3i var16 = *var3;
        var16.y = 0;
        Vector3fix_Subtract(&var16, &var14, &var16);
        int var17 = -(var8->unknown_c_ - 0x6487);
        int var18 = (int)(4096.0f * (func_0200c700(func_020c32f8(var17)) / 4294967296.0f));
        int var19 = (int)(4096.0f * (func_0200c700(func_020c3260(var17)) / 4294967296.0f));
        Matrix3x3 var20;
        Mat3x3_WriteRotationY(&var20, var19, var18);
        Mat3x3_ApplyToVector(&var16, &var20, &var16);
        int var21 = func_ov017_021a4754(var3, (short)var2->unknown_0_.rotation_.y, &var14);
        if (var21 >= var7) continue;
        var7 = var21;
        var10 = var11;
        var9 = var8;
        var4 = fix32_Atan2(var12.x, var12.z);
    }
    if (var5 || var10 < 0 || !var8 || !var9) return;
    if (var2->unknown_be_ != 0 && var2->unknown_be_ != 1) return;
    if ((var9->unknown_17_ == 1 || var9->unknown_17_ == 2) && var9->unknown_16_ != 1) return;
    Struct_ov017_02197e2c_2* var22 = func_020d7a50();
    int var23 = var9->unknown_16_ == 1 ? 1 : 0;
    if (!var23) return;
    if (var22->unknown_150_0_ > 1) return;
    Struct_ov017_02197e2c_3 var24;
    func_ov017_0219a674((unsigned char*)&var24);
    var24.unknown_0_ = 2;
    var24.unknown_10_ = func_ov017_021a4754(&var2->unknown_0_.position_, (short)var2->unknown_0_.rotation_.y, &var9->unknown_0_);
    var24.unknown_8_ = var9;
    var24.unknown_2_ = var10;
    var24.unknown_12_ = var4;
    if (var24.unknown_10_ >= 0xc91) return;
    func_ov017_0219b33c(arg0, &var24);
}
