#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov024_021f8bd8 {
    int unknown_0_;
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 10;
    unsigned int unknown_6_6_ : 10;
    char unknown_8_[8];
    unsigned int unknown_10_;
    unsigned int unknown_14_0_ : 7;
    unsigned int unknown_14_7_ : 7;
    unsigned int unknown_15_6_ : 7;
    unsigned int unknown_16_5_ : 11;
    unsigned int unknown_18_0_ : 16;
    unsigned int unknown_1a_0_ : 2;
    unsigned int unknown_1a_2_ : 14;
};

// USA: func_ov024_021f8bd8
extern "C" ARM void func_ov024_021f8bd8(void* arg0, float* arg1, GameObject* arg2, Struct_ov024_021f8bd8* arg3) {
    unsigned short var0 = arg2->currentStats_->primaryStats.magicalMight;
    unsigned short var1 = arg2->currentStats_->primaryStats.magicalMending;
    float var2 = 100.0f;
    if (arg3->unknown_1a_0_ == 1) {
        if (arg3->unknown_10_ & 0x4000) {
            if (var0 <= arg3->unknown_5_4_) {
                var2 = arg3->unknown_14_7_;
            } else if (var0 >= arg3->unknown_6_6_) {
                var2 = arg3->unknown_15_6_;
            } else {
                var2 = (unsigned int)(int)((float)(var0 - arg3->unknown_5_4_) * ((float)(arg3->unknown_15_6_ - arg3->unknown_14_7_) / (float)(arg3->unknown_6_6_ - arg3->unknown_5_4_))) + arg3->unknown_14_7_;
            }
        } else if (arg3->unknown_10_ & 0x8000) {
            if (var1 <= arg3->unknown_5_4_) {
                var2 = arg3->unknown_14_7_;
            } else if (var1 >= arg3->unknown_6_6_) {
                var2 = arg3->unknown_15_6_;
            } else {
                var2 = (unsigned int)(int)((float)(var1 - arg3->unknown_5_4_) * ((float)(arg3->unknown_15_6_ - arg3->unknown_14_7_) / (float)(arg3->unknown_6_6_ - arg3->unknown_5_4_))) + arg3->unknown_14_7_;
            }
        }
    }
    *arg1 = var2;
}
