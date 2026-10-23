#include <globaldefs.h>
#include "Util/Random.h"
#include "GameState/GameState.h"
#include "Combat/Main/CombatCalculations.h"

struct Struct_ov002_021538e4 {
    unsigned int : 8;
    unsigned int unknown_1_0_ : 10;
    unsigned int : 14;
    unsigned int : 10;
    unsigned int unknown_5_2_ : 10;
    unsigned int unknown_6_4_ : 10;
    unsigned int : 2;
};

struct Struct_ov002_021538e4_2 {
    int unknown_0_;
    unsigned int : 12;
    unsigned int unknown_5_4_ : 10;
    unsigned int unknown_6_6_ : 10;
    char unknown_8_[0x10 - 0x8];
    unsigned int unknown_10_;
    char unknown_14_[0x18 - 0x14];
    unsigned int : 16;
    unsigned int unknown_1a_0_ : 2;
    unsigned int : 14;
};

// USA: func_ov002_021538e4
extern "C" ARM int func_ov002_021538e4(void* arg0, struct Struct_ov002_021538e4_2* arg1, struct Struct_ov002_021538e4* arg2, int arg3) {
    struct Random* var0 = GetBTRandom();
    float var1 = 0.0f;

    if (arg2 != 0) {
    if (arg1->unknown_1a_0_ == 2) {
        GameState* var2 = GameState::GetInstance();
        GameObject* var3 = func_0200ff1c(var2, arg3);
        if (var3 == 0) {
            return 0;
        }
        if ((arg1->unknown_10_ & 0x8000) != 0) {
            unsigned short var4 = var3->baseStats_->primaryStats.magicalMending;
            unsigned int var5 = arg1->unknown_5_4_;
            if (var4 <= var5) {
                unsigned int var6 = arg2->unknown_1_0_;
                float var7 = NextRandomFloatBetween(var0, (float)var6 * -1.0f, (float)var6);
                unsigned int var8 = arg2->unknown_5_2_;
                var1 = (float)var8 + var7;
            } else {
                unsigned int var9 = arg1->unknown_6_6_;
                if (var4 >= var9) {
                    unsigned int var10 = arg2->unknown_1_0_;
                    float var11 = NextRandomFloatBetween(var0, (float)var10 * -1.0f, (float)var10);
                    unsigned int var12 = arg2->unknown_6_4_;
                    var1 = (float)var12 + var11;
                } else {
                    unsigned int var13 = arg2->unknown_6_4_;
                    unsigned int var14 = arg2->unknown_5_2_;
                    float var15 = (float)(var13 - var14) / (float)(arg1->unknown_6_6_ - var5);
                    unsigned int var16 = (unsigned int)(int)(var15 * (float)(var4 - var5)) + var14;
                    float var17 = (float)var16;
                    unsigned int var18 = arg2->unknown_1_0_;
                    var1 = var17 + NextRandomFloatBetween(var0, (float)var18 * -1.0f, (float)var18);
                }
            }
        } else {
            unsigned int var19 = arg2->unknown_5_2_;
            unsigned int var20 = arg2->unknown_6_4_;
            float var21 = NextRandomFloatBetween(var0, (float)var19, (float)var20);
            unsigned int var22 = arg2->unknown_1_0_;
            float var23 = NextRandomFloatBetween(var0, (float)var22 * -1.0f, (float)var22);
            var1 = var21 + var23;
        }
    } else {
        unsigned int var24 = arg2->unknown_5_2_;
        unsigned int var25 = arg2->unknown_6_4_;
        float var26 = NextRandomFloatBetween(var0, (float)var24, (float)var25);
        unsigned int var27 = arg2->unknown_1_0_;
        float var28 = NextRandomFloatBetween(var0, (float)var27 * -1.0f, (float)var27);
        var1 = var26 + var28;
    }
    }

    return RoundUp(var1);
}
