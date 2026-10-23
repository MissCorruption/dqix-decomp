#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include <GameState/GameState.h>

struct Struct_02079ee0 {
    unsigned int unknown_0_0_ : 8;
    unsigned int unknown_1_0_ : 10;
    unsigned int unknown_2_2_ : 14;
    unsigned int unknown_4_0_ : 10;
    unsigned int unknown_5_2_ : 10;
    unsigned int unknown_6_4_ : 10;
    unsigned int unknown_7_6_ : 2;
};
struct Struct_ov024_021f8938 {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 10;
    unsigned int unknown_6_6_ : 10;
    unsigned int unknown_8_0_ : 14;
    unsigned int unknown_9_6_ : 8;
    unsigned int unknown_a_6_ : 10;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
    unsigned int unknown_14_;
    unsigned int unknown_18_0_ : 16;
    unsigned int unknown_1a_0_ : 2;
    unsigned int unknown_1a_2_ : 14;
};
extern "C" Struct_02079ee0* func_02079ee0(void*, int);

// USA: func_ov024_021f8938
extern "C" ARM void func_ov024_021f8938(void* arg0, float* arg1, float* arg2, int arg3, Struct_ov024_021f8938* arg4, GameObject* arg5) {
    Struct_02108e10* var0 = func_020797dc();
    *arg1 = 0;
    *arg2 = 0;
    Struct_02079ee0* var1 = func_02079ee0(var0, arg4->unknown_9_6_);
    if (var1) {
        if (arg4->unknown_1a_0_ == 2) {
            int var2 = arg4->unknown_5_4_;
            int var3 = arg4->unknown_6_6_;
            float var4;
            float var5;
            int var6 = 0;
            var4 = (float)var1->unknown_5_2_;
            var5 = (float)var1->unknown_6_4_;
            float var7;
            if (arg4->unknown_10_ & 0x4000) {
                var7 = (float)(unsigned short)arg5->currentStats_->primaryStats.magicalMight;
                var6 = 1;
            } else if (arg4->unknown_10_ & 0x8000) {
                var7 = (float)(unsigned short)arg5->currentStats_->primaryStats.magicalMending;
                var6 = 1;
            } else var7 = 0.5f * (var4 + var5);
            if (var6) {
                if (var7 <= var2) *arg1 = var4;
                else if (var7 >= var3) *arg1 = var5;
                else {
                    *arg1 = (var7 - var2) * ((var5 - var4) / (var3 - var2));
                    *arg1 += var4;
                }
                *arg2 = *arg1 - (float)var1->unknown_1_0_;
            } else {
                *arg1 = 0.5f * (var5 + var4);
                *arg2 = var4;
            }
        } else {
            *arg1 = 0.5f * (var1->unknown_5_2_ + var1->unknown_6_4_);
            *arg2 = (float)var1->unknown_5_2_;
        }
    } else {
        *arg1 = 0;
        *arg2 = 0;
    }
    if (*arg1 < 0) *arg1 = 0;
    else if (*arg1 >= 32767.0f) *arg1 = 32767.0f;
    if (*arg2 < 0) *arg2 = 0;
    else if (*arg2 >= 32767.0f) *arg2 = 32767.0f;
}
