#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"
#include "Util/Random.h"

struct Struct_020a212c_2 {
    unsigned char unknown_0_[0x10];
    Vector3i unknown_10_;
    unsigned char unknown_1c_[0x200];
    Random* unknown_21c_;
    unsigned char unknown_220_[0x18];
    int unknown_238_;
    unsigned char unknown_23c_[0x3c];
    unsigned char unknown_278_;
};
struct Struct_ov000_0216e3c4 {
    Object3D unknown_0_;
    unsigned char unknown_ac_[0x16];
    unsigned char unknown_c2_0_ : 4;
    unsigned char unknown_c2_4_ : 1;
};
struct Struct_ov000_0216d368 { int unknown_0_, unknown_4_, unknown_8_; };
struct Struct_0202e6a8;
extern "C" void func_ov000_0216d370(Struct_020a212c_2*, int, int, int);
extern "C" int func_ov000_0215e9fc(Random*, short*, int, int);
extern "C" void func_0202e5d8(Struct_020a212c_2*, int, int, int);
extern "C" Struct_ov000_0216e3c4* func_0200fea4(GameState*, int);
extern "C" void func_0202e5c8(unsigned char*, int, int, int);
extern "C" void func_ov000_0216d368(Struct_ov000_0216d368*, int, int, int);
extern "C" void func_0202e6a8(Struct_0202e6a8*, int);

// USA: func_ov000_0216e3c4
extern "C" ARM void func_ov000_0216e3c4(Struct_020a212c_2* arg0) {
    if (!arg0->unknown_21c_) return;
    GameState* var0 = GameState::GetInstance();
    func_ov000_0216d370(arg0, 1, 1, 1);
    GameObject* var1 = var0->GetProtagonist();
    int var2 = -1;
    if (var1) var2 = var1->obj3D_.GetField06();
    short var3[4];
    int var4 = func_ov000_0215e9fc(arg0->unknown_21c_, var3, 4, 0);
    Vector3i var5 = {};
    int var6 = 0;
    for (int var7 = 0; var7 < var4; var7++) {
        GameObject* var8 = var0->GetGameObjectByIndex(var3[var7]);
        if (var8 && var2 == var8->obj3D_.GetField06()) {
            Vector3i var9 = var8->obj3D_.position_;
            Vector3fix_Add(&var5, &var9, &var5);
            var6++;
        }
    }
    if (var6 > 0) {
        int var10 = fix32_Divide(0x1000, var6 << 12);
        Vector3fixMultiplyScalar(&var5, var10, &var5);
    }
    int var11 = 0xc000 - Vector3fix_Length(&var5);
    if (var11 < 0x8000) {
        int var12 = fix32_Divide(var11, 0x8000);
        Vector3fixMultiplyScalar(&var5, var12, &var5);
        var11 = 0xc000;
    }
    int var13 = 0;
    var4 = func_ov000_0215e9fc(arg0->unknown_21c_, var3, 4, 1);
    if (var4 > 0) {
        int var14 = NextRandomMax(arg0->unknown_21c_, var4);
        GameObject* var15 = var0->GetGameObjectByIndex(var3[var14]);
        if (var15) var13 = var15->obj3D_.rotation_.y;
    }
    var13 = fix32ReduceAngle0To2Pi(var13 - 0x648);
    func_0202e5c8((unsigned char*)arg0, var5.x, 0x800, var5.z);
    func_0202e5d8(arg0, var13, 0x1000, var11);
    int var16 = 0;
    arg0->unknown_238_ = 14;
    arg0->unknown_278_ = 1;
    Struct_ov000_0216d368 var17;
    func_ov000_0216d368(&var17, 0, 0, 0);
    for (int var18 = 0; var18 < 8; var18++) {
        Struct_ov000_0216e3c4* var19 = func_0200fea4(var0, var18 + 0xc0);
        if (var19 && var19->unknown_c2_4_) {
            Vector3i var20;
            var20 = var19->unknown_0_.position_;
            Vector3fix_Add(&var20, (Vector3i*)&var17, (Vector3i*)&var17);
            var16++;
        }
    }
    if (var16) {
        int var21 = fix32_Divide(0x1000, var16 << 12);
        Vector3fixMultiplyScalar((Vector3i*)&var17, var21, (Vector3i*)&var17);
        Vector3i var22;
        var22 = arg0->unknown_10_;
        int var23 = func_020c3544(var17.unknown_8_ - var22.z, var17.unknown_0_ - var22.x);
        func_0202e6a8((Struct_0202e6a8*)arg0, -0x999 + ((var23 / 0xffff) << 12));
    }
}
