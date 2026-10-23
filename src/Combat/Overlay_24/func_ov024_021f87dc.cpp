#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov024_021f87dc {
    char unknown_0_[4];
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 24;
    char unknown_c_[0x18 - 0xc];
    unsigned int unknown_18_0_ : 12;
    unsigned int unknown_19_4_ : 4;
    unsigned int unknown_1a_0_ : 16;
};

extern "C" int func_ov024_021eadfc(GameObject* arg0);
extern "C" unsigned int func_020dd290(void* arg0, unsigned int arg1);

// USA: func_ov024_021f87dc
extern "C" ARM int func_ov024_021f87dc(GameObject* arg0, Struct_ov024_021f87dc* arg1, int* arg2) {
    *arg2 = arg1->unknown_8_0_;
    if (arg1->unknown_19_4_ == 2) {
        if (arg0 != 0 && func_ov024_021eadfc(arg0)) {
            *arg2 = 0;
        } else if (arg1->unknown_4_0_ == 0x28) {
            *arg2 = 0x14;
            if (arg0->currentStats_->primaryStats.currMP > *arg2) {
                *arg2 = arg0->currentStats_->primaryStats.currMP;
            }
        } else {
            *arg2 = func_020dd290(arg0, *arg2);
        }
    }
    return *arg2;
}
