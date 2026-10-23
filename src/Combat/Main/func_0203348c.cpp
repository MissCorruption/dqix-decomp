#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

extern "C" float _fflt(int v);

struct Struct_0203348c {
    char unknown_0_[0x24];
    int unknown_24_;
    int unknown_28_;
    unsigned short unknown_2c_;
};

struct Struct_0203348c_2 {
    unsigned short unknown_0_0_ : 15;
    unsigned short unknown_1_7_ : 1;
};

struct Struct_020332ac : Object3D {
    short unknown_ac_, unknown_ae_, unknown_b0_;
    short unknown_b2_, unknown_b4_, unknown_b6_;
    char unknown_b8_[6];
    unsigned char unknown_be_, unknown_bf_;
    char unknown_c0_;
    unsigned char unknown_c1_0_ : 2;
    unsigned char unknown_c1_2_ : 1;
    unsigned char unknown_c1_3_ : 5;
    unsigned char unknown_c2_0_ : 5;
    unsigned char unknown_c2_5_ : 1;
    unsigned char unknown_c2_6_ : 2;
    unsigned char unknown_c3_;
    Struct_0203348c_2 unknown_c4_;
    short unknown_c6_;
    Vector3fix unknown_c8_;
    Vector3fix unknown_d4_;
    unsigned char unknown_e0_0_ : 1;
    unsigned char unknown_e0_1_ : 7;
    char unknown_e1_[0x1f];
    Struct_0203348c unknown_100_;
};

// USA: func_0203348c
extern "C" ARM void func_0203348c(Struct_020332ac* arg0) {
    if (arg0->unknown_e0_0_ || arg0->unknown_c2_5_ || arg0->unknown_c1_2_) {
        return;
    }
    GameState* var0 = GameState::GetInstance();
    unsigned int var1 = var0->GetEffectiveDeltaTime();
    int var2 = var0->GetTickCount();
    int var3 = arg0->unknown_c4_.unknown_0_0_ != 0;
    if (var3) {
        if (var1 >= arg0->unknown_c4_.unknown_0_0_) {
            arg0->unknown_c4_.unknown_0_0_ = 0;
        } else {
            arg0->unknown_c4_.unknown_0_0_ -= var1;
        }
    }
    int var4 = arg0->unknown_b2_;
    int var5 = arg0->unknown_b6_ * var2;
    if (arg0->unknown_be_ == 1) {
        if (var4 < arg0->unknown_b4_) {
            arg0->unknown_b2_ = var5 + var4;
        } else if (var4 - arg0->unknown_b4_ < var5) {
            arg0->unknown_b2_ = arg0->unknown_b4_;
        } else {
            arg0->unknown_b2_ = var4 - var5;
        }
    } else if (var4 > 0) {
        arg0->unknown_b2_ = var4 - var5;
    } else {
        arg0->unknown_b2_ = 0;
    }
    int var6 = arg0->unknown_c4_.unknown_0_0_ != 0;
    if (var6 || arg0->unknown_100_.unknown_24_ != 0) {
        var4 = 0;
    }
    if (0.0f < _fflt(var4)) {
        int var7 = arg0->rotation_.y;
        int var8 = arg0->unknown_b4_;
        int var9 = fix32SignedAngleDistance(var7, arg0->unknown_ae_);
        int var10 = fix32abs(var9);
        int var11 = FIX32_MULTIPLY(var8, 0x1000 - fix32_Divide(var10, 0x3244));
        if (var11 < var4) {
            var4 = var11;
        }
        var4 = var4 * var2;
        int var12 = var7;
        if (arg0->unknown_0_ & 0x100) {
            var12 = arg0->unknown_ae_;
        }
        Vector3fix var13;
        var13.x = fix32sin(var12);
        var13.y = 0;
        var13.z = fix32cos(var12);
        Vector3fixMultiplyScalar(&var13, var4, &var13);
        Vector3fix var14;
        Vector3fix_Add(&arg0->position_, &var13, &var14);
        arg0->position_ = var14;
    }
    Vector3fix var15 = arg0->position_;
    var15.y = var15.y - arg0->unknown_ac_;
    if (var15.y < -0x32000) {
        var15.y = 0x32000;
    }
    arg0->position_ = var15;
    if (arg0->unknown_100_.unknown_24_ != 0) {
        arg0->unknown_100_.unknown_2c_++;
        arg0->unknown_100_.unknown_24_ -= arg0->unknown_100_.unknown_2c_ * 0x51;
        if (arg0->unknown_100_.unknown_24_ < arg0->unknown_100_.unknown_28_) {
            arg0->unknown_100_.unknown_2c_ = 0;
            arg0->unknown_100_.unknown_24_ = 0;
            arg0->unknown_100_.unknown_28_ = 0;
        }
    }
}
