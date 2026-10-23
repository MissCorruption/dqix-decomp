#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

struct Struct_02032fdc_2 {
    unsigned short unknown_0_0_ : 15;
    unsigned short unknown_1_7_ : 1;
};

struct Struct_02032fdc : Object3D {
    char unknown_ac_[0xe];
    short unknown_ba_;
    unsigned short unknown_bc_;
    char unknown_be_[6];
    struct Struct_02032fdc_2 unknown_c4_;
    char unknown_c6_[0x5e];
    int unknown_124_;
};

extern int data_0210a05c[];

// USA: func_02032fdc
extern "C" ARM bool func_02032fdc(Struct_02032fdc* arg0, bool arg1, Vector3fix* arg2) {
    int var0;
    int var1;
    unsigned int var2 = arg0->unknown_c4_.unknown_0_0_;
    int var3 = var2 != 0;
    var1 = arg0->position_.y;
    if (var3) {
        var0 = 0x1000;
        if (var2 > 0x1324) {
            var0 = (int)(4096.0f * ((float)(int)(0x1388 - var2) / 100.0f));
        } else if (var2 < 100) {
            var0 = (int)(4096.0f * ((float)var2 / 100.0f));
        }
        Vector3fix var4 = arg0->position_;
        int var5 = (arg0->GetHeight() / 3) * 2;
        var0 = (int)((((long long)var5) * var0 + 0x800) >> 12);
        var4.y -= var0;
        arg0->position_ = var4;
    }
    if (arg0->unknown_124_ != 0) {
        Vector3fix var6 = arg0->position_;
        var6.y = arg0->unknown_124_;
        arg0->position_ = var6;
    }
    bool var7;
    if (arg0->unknown_bc_ != 0) {
        GameState* var8 = GameState::GetInstance();
        unsigned int var9 = var8->GetEffectiveDeltaTime();
        Vector3fix var10 = {data_0210a05c[0], data_0210a05c[3], data_0210a05c[6]};
        Vector3fixMultiplyScalar(&var10, arg0->unknown_ba_, &var10);
        Vector3fix var11;
        Vector3fix_Add(&arg0->position_, &var10, &var11);
        arg0->position_ = var11;
        if (arg2) *arg2 = var11;
        var7 = arg0->Draw(arg1);
        arg0->position_ = arg0->position_;
        if (arg0->unknown_bc_ < var9) {
            arg0->unknown_bc_ = 0;
            arg0->unknown_ba_ = 0;
        } else {
            short var12 = (short)fix32abs(arg0->unknown_ba_);
            float var13 = (float)var9 * (((float)var12 / 4096.0f) / (float)arg0->unknown_bc_);
            int var14 = (int)(4096.0f * var13);
            short var15 = (short)(var12 - var14);
            if (arg0->unknown_ba_ > 0) {
                arg0->unknown_ba_ = -var15;
            } else {
                arg0->unknown_ba_ = var15;
            }
            arg0->unknown_bc_ = arg0->unknown_bc_ - var9;
        }
    } else {
        var7 = arg0->Draw(arg1);
        if (arg2) *arg2 = arg0->position_;
    }
    int var16 = arg0->unknown_c4_.unknown_0_0_ != 0;
    if (var16 || arg0->unknown_124_ != 0) {
        Vector3fix var17 = arg0->position_;
        var17.y = var1;
        arg0->position_ = var17;
    }
    return var7;
}
