#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/FormationPosition.h"
#include "Graphics/Vector.h"
#include "std_library_functions.h"

struct Struct_0204956c {
    unsigned char unknown_0_[0x20];
    unsigned int unknown_20_;
    unsigned char unknown_24_[0x2a];
    unsigned char unknown_4e_, unknown_4f_;
    short unknown_50_;
    unsigned short unknown_52_;
    unsigned char unknown_54_, unknown_55_, unknown_56_;
};
struct Struct_0204956c_2 { GameObject unknown_0_; Struct_0204956c* unknown_13c_; };
struct Struct_02107850 { Vector3i unknown_0_, unknown_c_; int unknown_18_; unsigned char unknown_1c_; };
struct Struct_02010088;
struct Struct_02048f64_2;
extern "C" int func_02048c68(unsigned char*);
extern "C" int func_02010088(Struct_02010088*);
extern "C" void func_02049ae4(unsigned char*);
extern "C" int func_02049ee8(unsigned char*);
extern "C" int func_020494a0(unsigned char*);
extern "C" int func_020493a4(unsigned char*);
extern "C" void func_020494c0(Struct_02048f64_2*);
extern "C" int func_02031468(Vector3i*, Vector3i*, Vector3i*, Vector3i*);
extern "C" Struct_02107850 data_02107850;
namespace ClipAlias0204956c { extern "C" Struct_02107850 data_02107850; }
extern const Vector3i data_020e7b3c;
extern const Vector3i data_020e7b30;
struct Struct_020e7b54 { int unknown_0_[3]; };
extern const Struct_020e7b54 data_020e7b54;
extern const char data_020f01a4[];
void Vector3fixMultiplyScalar(const Vector3i*, int, Vector3i*);

static inline Struct_02048cf0 inline_0204956c(const int& arg0) {
    return func_ov000_0216f74c(const_cast<int*>(&arg0));
}

// USA: func_0204956c
extern "C" ARM void func_0204956c(Struct_0204956c_2* arg0) {
    unsigned char* var0 = reinterpret_cast<unsigned char*>(arg0);
    if (!(arg0->unknown_13c_->unknown_20_ & 4)) return;
    if (!arg0->unknown_13c_->unknown_56_ || func_02048c68(var0) || func_02010088(reinterpret_cast<Struct_02010088*>(arg0))) {
        func_02049ae4(var0);
        return;
    }
    if (!func_02049ee8(var0)) return;
    GameState* var1 = GameState::GetInstance();
    Struct_0204956c* var2 = arg0->unknown_13c_;
    Object3D* var3 = &arg0->unknown_0_.obj3D_;
    if (var2->unknown_52_) {
        int var4 = var1->GetEffectiveDeltaTime();
        if (var4 < var2->unknown_52_) {
            var2->unknown_52_ -= var4;
            return;
        }
        var2->unknown_52_ = 0;
    }
    if (!var2->unknown_4f_) {
        int var5 = var3->unknown_4_;
        int var6 = var5 + func_020494a0(var0) + var2->unknown_54_;
        int var7 = func_020494a0(var0);
        if (var7 == 0xff) { func_02049ae4(var0); return; }
        GameObject* var8 = var1->GetCombatantByIndex(var7);
        if (!var8) { func_02049ae4(var0); return; }
        Struct_02107850* var9 = &ClipAlias0204956c::data_02107850;
        if (data_02107850.unknown_1c_) {
            Vector3i var10 = var9->unknown_0_;
            Vector3i var11 = var9->unknown_c_;
            Vector3i var12 = var3->position_;
            Vector3i var13;
            int var14 = func_02031468(&var10, &var11, &var12, &var13);
            if (var14 < var9->unknown_18_ + (var3->GetRadius() >> 1) + 0x2000) {
                func_02049ae4(var0);
                return;
            }
        }
        Struct_02048cf0 var15 = inline_0204956c(func_020493a4(var0));
        Vector3i var16 = data_020e7b3c;
        var16.x = var15.unknown_0_;
        var16.z = var15.unknown_4_;
        Vector3i var17 = var8->obj3D_.position_;
        Vector3i var18 = var3->position_;
        Vector3i var19, var20;
        Vector3fix_Subtract(&var18, &var16, &var19);
        Vector3fix_Subtract(&var17, &var16, &var20);
        Vector3fix_Normalize(&var19, &var19);
        Vector3fix_Normalize(&var20, &var20);
        int var21 = var6 % 2;
        if (var21) {
            if (Vector3fix_InnerProduct(&var19, &var20) > 0) var2->unknown_4e_ = 1;
            else var2->unknown_4e_ = 0;
        } else {
            Vector3i var22;
            Vector3fix_CrossProduct(&var19, &var20, &var22);
            if (var22.y > 0) var2->unknown_4e_ = 2;
            else var2->unknown_4e_ = 3;
        }
        var2->unknown_4f_ = var21 + 1;
        BCFG::AnimationRecord* var23 = var3->GetLoadedAnimationRecord(data_020f01a4);
        if (var23) {
            unsigned int var24 = (unsigned int)((float)fix32_Divide(var23->endTime - var23->startTime, var23->frameRate) / 4096.0f);
            var2->unknown_50_ = 0xc00 / (var24 * 17);
        }
        var3->MaybeSetRegularAnimation(data_020f01a4, 1);
        func_020494c0(reinterpret_cast<Struct_02048f64_2*>(arg0));
        return;
    }
    int var25 = func_020494a0(var0);
    if (var25 == 0xff) { func_02049ae4(var0); return; }
    GameObject* var26 = var1->GetCombatantByIndex(var25);
    if (!var26) { func_02049ae4(var0); return; }
    Vector3i var27 = var3->position_;
    Vector3i var28 = var26->obj3D_.position_;
    Vector3i var29;
    Vector3fix_Subtract(&var28, &var27, &var29);
    Vector3i var30 = data_020e7b30;
    switch (var2->unknown_4e_) {
    case 0: Vector3fix_Normalize(&var29, &var29); break;
    case 1:
        Vector3fixMultiplyScalar(&var29, -0x1000, &var29);
        Vector3fix_Normalize(&var29, &var29);
        break;
    case 2:
        Vector3fix_Normalize(&var29, &var29);
        Vector3fix_CrossProduct(&var29, &var30, &var29);
        Vector3fixMultiplyScalar(&var29, -0x1000, &var29);
        break;
    case 3:
        Vector3fix_Normalize(&var29, &var29);
        Vector3fix_CrossProduct(&var29, &var30, &var29);
        break;
    default: func_02049ae4(var0); break;
    }
    int var31 = var1->GetEffectiveDeltaTime();
    Vector3i var32;
    Vector3fixMultiplyScalar(&var29, var2->unknown_50_ * var31, &var32);
    Vector3fix_Add(&var27, &var32, &var27);
    var3->position_ = var27;
    if (var3->HasAnimationStopped()) {
        --var2->unknown_4f_;
        if (!var2->unknown_4f_) {
            int var33 = var3->unknown_4_;
            int var34 = var33 + func_020494a0(var0) + var2->unknown_54_;
            Struct_020e7b54 var35 = data_020e7b54;
            var2->unknown_52_ = var35.unknown_0_[var34 % 3];
            ++var2->unknown_54_;
        } else {
            var3->StopCurrentAnimation();
            var3->MaybeSetRegularAnimation(data_020f01a4, 1);
            func_020494c0(reinterpret_cast<Struct_02048f64_2*>(arg0));
        }
    } else if (var3->activeAnimationRecord_ && strcmp(var3->activeAnimationRecord_->name, data_020f01a4)) {
        func_02049ae4(var0);
    }
}
