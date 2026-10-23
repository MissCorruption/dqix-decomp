#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Graphics/Vector.h"

struct Struct_020a0e4c {
    int unknown_0_;
    Vector3i unknown_4_;
    Vector3i unknown_10_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
};

// USA: func_020a0e4c
extern "C" ARM void func_020a0e4c(struct Struct_020a0e4c* arg0) {
    float var0 = (float)GameState::GetInstance()->GetEffectiveDeltaTime() / 1000.0f;
    int var1 = (int)(arg0->unknown_24_ * var0);
    int var2 = (int)(arg0->unknown_1c_ * var0);

    Vector3i var3;
    Vector3fix_Subtract(&arg0->unknown_10_, &arg0->unknown_4_, &var3);
    Vector3fix_Normalize(&var3, &var3);
    int var4 = Vector3fix_Distance(&arg0->unknown_10_, &arg0->unknown_4_);

    float var5 = (float)var2 / 4096.0f;
    float var6 = var5 * var5;
    float var7 = (float)var1 / 4096.0f;
    float var8 = 2.0f * var7;
    float var9 = var6 / var8;

    if (var4 < var1) {
        arg0->unknown_4_ = arg0->unknown_10_;
        arg0->unknown_0_ = 0;
    } else if ((int)(4096.0f * var9) < var4 + 0x199) {
        int var10 = var2 + var1;
        int var11 = (int)(var10 / var0);
        arg0->unknown_1c_ = var11;
        int var12 = arg0->unknown_20_;
        if (var12 < var11) {
            arg0->unknown_1c_ = var12;
            var10 = (int)(var12 * var0);
        }
        Vector3i var13;
        Vector3fixMultiplyScalar(&var3, var10, &var13);
        Vector3fix_Add(&arg0->unknown_4_, &var13, &arg0->unknown_4_);
    } else {
        int var14 = var2 - var1;
        int var15 = var4 / 2;
        if (var14 > var15) {
            var14 = var15;
        }
        arg0->unknown_1c_ = (int)(var14 / var0);
        if (var14 < var1) {
            arg0->unknown_4_ = arg0->unknown_10_;
            arg0->unknown_0_ = 0;
        } else {
            Vector3i var16;
            Vector3fixMultiplyScalar(&var3, var14, &var16);
            Vector3fix_Add(&arg0->unknown_4_, &var16, &arg0->unknown_4_);
        }
    }
}
