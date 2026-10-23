#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020a63f8 {
    int unknown_0_;
    int unknown_4_;
    signed char unknown_8_;
    signed char unknown_9_;
    signed char unknown_a_;
    unsigned char unknown_b_;
};

// USA: func_020a63f8
extern "C" ARM void func_020a63f8(struct Struct_020a63f8* arg0) {
    GameState::GetInstance();
    if (arg0->unknown_b_) {
        return;
    }
    *(volatile unsigned int*)0x4001014 = (arg0->unknown_0_ & 0x1ff) | ((arg0->unknown_4_ << 16) & 0x1ff0000);

    arg0->unknown_0_ += arg0->unknown_8_;
    if (arg0->unknown_0_ >= 0x100) {
        arg0->unknown_0_ -= 0x100;
    }
    if (arg0->unknown_0_ <= -1) {
        arg0->unknown_0_ += 0x100;
    }

    arg0->unknown_4_ += arg0->unknown_9_;
    if (arg0->unknown_4_ >= 0x100) {
        arg0->unknown_4_ -= 0x100;
    }
    if (arg0->unknown_4_ <= -1) {
        arg0->unknown_4_ += 0x100;
    }
}
