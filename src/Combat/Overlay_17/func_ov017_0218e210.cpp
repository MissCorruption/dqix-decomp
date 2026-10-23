#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

struct Struct_02033834_2;
struct Struct_02033f44;
struct Struct_ov017_0218e210 { char unknown_0_[0x24]; Vector3fix unknown_24_; };
struct Struct_ov017_0218e210_2 { char unknown_0_[0xae]; short unknown_ae_; };
extern "C" void func_02037d88(GameObject*);
extern "C" int func_020100b0(GameState*);
extern "C" int func_ov017_0218df50(void*, void*);
extern "C" int func_ov017_0218dfd8(GameObject*);
extern "C" void func_ov017_0219344c(GameObject*, int, const Vector3fix*, int, int*, int*);
extern "C" Struct_ov017_0218e210* func_02033f44(Struct_02033f44*);
extern "C" int func_02039dcc(unsigned char*);
extern "C" void func_02039dbc(unsigned char*);
extern "C" void func_02033834(Struct_02033834_2*, int);

// USA: func_ov017_0218e210
extern "C" ARM void func_ov017_0218e210(int arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetGameObjectByIndex(arg0);
    if (!var1 || var1->obj3D_.GetFlag(0x200)) return;
    Vector3fix var2 = var1->obj3D_.position_;
    func_02037d88(var1);
    if (!arg1) return;
    Vector3fix var3 = var1->obj3D_.position_;
    int var4 = Vector3fix_Distance(&var2, &var3);
    int var5 = var1->obj3D_.unknown_4_;
    int var6 = 1;
    if (var5 == func_020100b0(var0) && !(var1->obj3D_.unknown_0_ & 0x8000) && var4 > 0x333) var6 = 2;
    int var7 = 0;
    int var8 = 0;
    if (var6 == 1 && arg0 == func_020100b0(var0)) {
        var7 |= func_ov017_0218df50(var1, 0);
        var8 |= var7;
        var8 |= func_ov017_0218dfd8(var1);
    }
    func_ov017_0219344c(var1, 1, &var2, var6, &var7, &var8);
    Struct_ov017_0218e210* var9 = func_02033f44((Struct_02033f44*)var1);
    int var10 = 0;
    int var11 = 0;
    if (var8 && var9) {
        if (!func_02039dcc((unsigned char*)var1)) {
            int var12 = 0;
            var11 |= func_ov017_0218df50(var1, 0);
            var12 |= var11;
            var12 |= func_ov017_0218dfd8(var1);
            var1->obj3D_.position_ = var1->obj3D_.position_;
            if (var12) var10 = 1;
            if (var10) {
                var1->obj3D_.position_ = var2;
                if (var10 && var7 && var11) {
                    int var13 = func_ov017_0218df50(var1, 0);
                    var1->obj3D_.position_ = var2;
                    if (var13) func_ov017_0218df50(var1, (void*)1);
                }
            }
        }
    } else {
        if (!var9) func_02039dbc((unsigned char*)var1);
        if (var9 && !func_02039dcc((unsigned char*)var1)) {
            int var14 = 0;
            var11 |= func_ov017_0218df50(var1, 0);
            var14 |= var11;
            var14 |= func_ov017_0218dfd8(var1);
            var1->obj3D_.position_ = var1->obj3D_.position_;
            if (var14) {
                var10 = 1;
                var1->obj3D_.position_ = var2;
            }
        }
        if (var9 && !var10) {
            int var15 = 0;
            int var16;
            if (Vector3fix_Distance(&var2, &var1->obj3D_.position_) >= 0x28) {
                Vector3fix var17;
                Vector3fix_Subtract(&var1->obj3D_.position_, &var2, &var17);
                Vector3fix_Normalize(&var17, &var17);
                var15 = 1;
                var16 = fix32_Atan2(var17.x, var17.z);
            }
            if (var15) {
                Vector3fix var18 = var9->unknown_24_;
                var18.y = 0;
                Vector3fix_Normalize(&var18, &var18);
                int var19 = fix32_Atan2(var18.x, var18.z);
                int var20 = ((Struct_ov017_0218e210_2*)var1)->unknown_ae_;
                int var21 = fix32SignedAngleDistance(var19, var20);
                int var22 = fix32abs(var21);
                if ((float)var22 < 10294.4f) {
                    if (var22 > 0x1922) {
                        if (var21 > 0) var20 = fix32ReduceAngle0To2Pi((int)(6772.632f + (float)var19));
                        else var20 = fix32ReduceAngle0To2Pi((int)((float)var19 - 6772.632f));
                    }
                    if ((float)fix32abs(fix32SignedAngleDistance(var20, var16)) < 643.4f) func_02033834((Struct_02033834_2*)var1, var20);
                }
            }
        }
    }
    Vector3fix var23;
    Vector3fix_Subtract(&var1->obj3D_.position_, &var2, &var23);
    if (fix32abs(var23.x) <= 4 && fix32abs(var23.y) <= 4 && fix32abs(var23.z) <= 4) var1->obj3D_.position_ = var2;
    int var24 = Vector3fix_Distance(&var2, &var1->obj3D_.position_);
    if (var4 > 0 && var4 < var24) {
        Vector3fix var25;
        Vector3fix_Subtract(&var1->obj3D_.position_, &var2, &var25);
        Vector3fix_Normalize(&var25, &var25);
        Vector3fixMultiplyScalar(&var25, var4, &var25);
        Vector3fix var26;
        Vector3fix_Add(&var2, &var25, &var26);
        var1->obj3D_.position_ = var26;
    }
}
