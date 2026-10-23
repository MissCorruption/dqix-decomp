#include <globaldefs.h>
#include "std_library_functions.h"
#include "Graphics/Vector.h"
#include "GameState/GameState.h"

extern "C" void func_0203db34(unsigned char* arg0, int arg1, int arg2, int arg3);

struct Struct_ov025_021df5e4 {
    Object3D unknown_0_;
    Object3D unknown_ac_;
    Vector3fix unknown_158_;
    Vector3fix unknown_164_;
    int unknown_170_;
    unsigned char unknown_174_;
    unsigned char unknown_175_;
    unsigned char unknown_176_[0x14];
    unsigned char unknown_18a_;
    unsigned char unknown_18b_;
};

// USA: func_ov025_021df5e4
extern "C" ARM void func_ov025_021df5e4(Struct_ov025_021df5e4* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    arg0->unknown_174_ = arg1;
    arg0->unknown_175_ = arg2;
    GameObject* var1 = var0->GetGameObjectByIndex(arg0->unknown_174_);
    GameObject* var2 = var0->GetGameObjectByIndex(arg0->unknown_175_);
    if (var1 == 0 || var2 == 0) return;
    Vector3fix var3 = var1->obj3D_.position_;
    var3.y = 0;
    Vector3fix var4 = var2->obj3D_.position_;
    var4.y = 0;
    fix32_t var5 = 0xc00;
    fix32_t var6 = Vector3fix_Distance(&var3, &var4);
    fix32_t var7 = var1->obj3D_.GetRadius();
    if (var6 < var7) return;
    Vector3fix_Subtract(&var4, &var3, &arg0->unknown_158_);
    Vector3fix_Normalize(&arg0->unknown_158_, &arg0->unknown_158_);
    Vector3fix var8;
    Vector3fixMultiplyScalar(&arg0->unknown_158_, var7 >> 1, &var8);
    Vector3fix_Add(&var3, &var8, &arg0->unknown_164_);
    fix32_t var9 = Vector3fix_Distance(&arg0->unknown_164_, &var4);
    arg0->unknown_18a_ = (int)((float)fix32_Divide(var9, var5) / 4096.0f) + 1;
    if (arg0->unknown_18a_ > 10) {
        var5 = fix32_Divide(var9, 0xa000);
        arg0->unknown_18a_ = 10;
    }
    fix32_t var10 = fix32ReduceAngle0To2Pi(fix32_Atan2(arg0->unknown_158_.x, arg0->unknown_158_.z));
    func_0203db34((unsigned char*)&arg0->unknown_0_, 0, var10, 0);
    func_0203db34((unsigned char*)&arg0->unknown_ac_, 0, var10, 0);
    Vector3fixMultiplyScalar(&arg0->unknown_158_, var5, &arg0->unknown_158_);
    arg0->unknown_18b_ = 0;
    memset(arg0->unknown_176_, 0, 0x14);
    if (arg0->unknown_18a_ != 0) arg0->unknown_170_ = 0;
}
