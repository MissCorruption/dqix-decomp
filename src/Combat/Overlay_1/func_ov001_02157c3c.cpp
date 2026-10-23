#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

struct Struct_ov001_02157c3c {
    int unknown_0_;
    Vector3fix unknown_4_;
    Vector3fix unknown_10_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
};

struct Struct_ov001_02157c3c_2 {
    char unknown_0_[0x38];
    int unknown_38_;
    char unknown_3c_[0x10];
    Vector3fix unknown_4c_;
    Vector3fix unknown_58_;
    char unknown_64_[0x50];
    Vector3fix unknown_b4_;
    Vector3fix unknown_c0_;
    char unknown_cc_[0x44];
    Vector3fix unknown_110_;
    Vector3fix unknown_11c_;
    char unknown_128_[0x8fc];
    int unknown_a24_;
};

// USA: func_ov001_02157c3c
extern "C" ARM int func_ov001_02157c3c(Struct_ov001_02157c3c* arg0, Struct_ov001_02157c3c_2* arg1) {
    GameState* var0 = GameState::GetInstance();
    int var1 = var0->GetTickCount() << 12;
    int var2 = arg0->unknown_1c_;
    if (var2 == 0) {
        memcpy(&arg1->unknown_4c_, &arg0->unknown_4_, sizeof(Vector3fix));
        memcpy(&arg1->unknown_58_, &arg0->unknown_10_, sizeof(Vector3fix));
        arg1->unknown_38_ = 0;
        return 0;
    }
    if (arg1->unknown_38_ <= 0) {
        Vector3fix var3;
        int var4 = var2 << 13;
        Vector3fix_Subtract(&arg0->unknown_4_, &arg1->unknown_4c_, &var3);
        arg1->unknown_b4_.x = fix32_Divide(var3.x, var4);
        arg1->unknown_b4_.y = fix32_Divide(var3.y, var4);
        arg1->unknown_b4_.z = fix32_Divide(var3.z, var4);
        Vector3fix_Subtract(&arg0->unknown_10_, &arg1->unknown_58_, &var3);
        arg1->unknown_c0_.x = fix32_Divide(var3.x, var4);
        arg1->unknown_c0_.y = fix32_Divide(var3.y, var4);
        arg1->unknown_c0_.z = fix32_Divide(var3.z, var4);
        memcpy(&arg1->unknown_110_, &arg1->unknown_b4_, sizeof(Vector3fix));
        memcpy(&arg1->unknown_11c_, &arg1->unknown_c0_, sizeof(Vector3fix));
        arg1->unknown_a24_ = arg0->unknown_20_;
    }
    Vector3fix var5 = arg1->unknown_b4_;
    Vector3fix var6 = arg1->unknown_c0_;
    Vector3fixMultiplyScalar(&var5, var1, &var5);
    Vector3fixMultiplyScalar(&var6, var1, &var6);
    Vector3fix_Add(&arg1->unknown_4c_, &var5, &arg1->unknown_4c_);
    Vector3fix_Add(&arg1->unknown_58_, &var6, &arg1->unknown_58_);
    arg1->unknown_a24_ = arg0->unknown_20_;
    arg1->unknown_38_ += var0->GetTickCount();
    if (arg1->unknown_38_ >= arg0->unknown_1c_ << 1) {
        if (arg0->unknown_24_ != 0) {
            memcpy(&arg1->unknown_4c_, &arg0->unknown_4_, sizeof(Vector3fix));
            memcpy(&arg1->unknown_58_, &arg0->unknown_10_, sizeof(Vector3fix));
        }
        arg1->unknown_38_ = 0;
        return 0;
    }
    return 1;
}
