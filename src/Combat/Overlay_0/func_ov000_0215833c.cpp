#include <globaldefs.h>
#include "GameState/GameState.h"

struct Random;

struct Struct_ov000_0215833c {
    char unknown_0_[0x3c];
    unsigned char unknown_3c_0_ : 6;
    unsigned char unknown_3c_6_ : 1;
    unsigned char unknown_3c_7_ : 1;
    char unknown_3d_[0x7f - 0x3d];
    unsigned char unknown_7f_[3];
};

struct Struct_ov000_0215767c_10 {
    unsigned short unknown_0_;
    char unknown_2_[7];
    unsigned char unknown_9_;
    char unknown_a_;
    unsigned char unknown_b_0_ : 1;
    unsigned char unknown_b_1_ : 7;
};

#define SLEEP(combatant) ((struct Struct_ov000_0215833c*)(combatant)->currentStats_)

extern float data_ov000_02182ad4[];
extern float data_ov000_02182bd4[];

int NextRandomMax(struct Random* random, int max);
extern "C" int func_ov000_02156038(GameObject* arg0);
extern "C" void func_020882dc(void* arg0);
extern "C" int func_020882f8(unsigned char* arg0);
extern "C" void func_02088390(void* arg0);
extern "C" int func_ov000_021543f4(GameObject* arg0);
extern "C" void func_020883fc(void* arg0);

// USA: func_ov000_0215833c
extern "C" ARM int func_ov000_0215833c(struct Random* arg0, int arg1, Struct_ov000_0215767c_10* arg2) {
    unsigned char* var0;
    GameObject* var1 = GameState::GetInstance()->GetCombatantByIndex(arg1);
    if (var1 == 0) {
        return 0;
    }
    if (SLEEP(var1)->unknown_3c_6_) {
        arg2->unknown_b_0_ = 1;
    }
    float var2 = (float)NextRandomMax(arg0, 100) / 100.0f;
    var0 = SLEEP(var1)->unknown_7f_;

    if (func_ov000_02156038(var1)) {
        if (var0[0] != 0) {
            int var3 = var0[0] - 1;
            float var4 = data_ov000_02182ad4[var3 & 0xff];
            var0[0] = var3;
            if (var4 > var2) {
                var0[0] = 0;
                func_020882dc(var1->currentStats_);
                arg2->unknown_0_ = 0x384;
                arg2->unknown_9_ = 0;
                return 1;
            }
        }
    } else if (func_020882f8((unsigned char*)var1->currentStats_)) {
        if (var0[1] != 0) {
            int var5 = var0[1] - 1;
            float var6 = data_ov000_02182bd4[var5 & 0xff];
            var0[1] = var5;
            if (var6 > var2) {
                var0[1] = 0;
                func_02088390(var1->currentStats_);
                arg2->unknown_0_ = 0x385;
                arg2->unknown_9_ = 0;
                return 1;
            }
        }
    } else if (func_ov000_021543f4(var1) && var0[2] != 0) {
        int var7 = var0[2] - 1;
        float var8 = data_ov000_02182ad4[var7 & 0xff];
        var0[2] = var7;
        if (var8 > var2) {
            var0[2] = 0;
            func_020883fc(var1->currentStats_);
            arg2->unknown_0_ = 0x3aa;
            arg2->unknown_9_ = 0;
            return 1;
        }
    }
    return 0;
}
