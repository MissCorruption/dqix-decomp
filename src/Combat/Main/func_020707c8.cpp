#include <globaldefs.h>
#include "GameState/GameState.h"


extern "C" void func_0207051c(void* arg0, unsigned short arg1, int arg2);

struct Struct_020707c8 {
    unsigned char unknown_0_;
    char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    char unknown_5_[3];
    int unknown_8_;
    float unknown_c_;
    int unknown_10_;
};

// USA: func_020707c8
extern "C" ARM void func_020707c8(struct Struct_020707c8* arg0) {
    int var0 = GameState::GetInstance()->GetEffectiveDeltaTime();
    int var1 = arg0->unknown_8_;
    if (var1 > 0) {
        arg0->unknown_c_ += (float)var0 * (((float)arg0->unknown_4_ - arg0->unknown_c_) / (float)var1);
    }
    arg0->unknown_8_ -= var0;
    if (arg0->unknown_8_ <= 0) {
        arg0->unknown_c_ = (float)arg0->unknown_4_;
        arg0->unknown_8_ = 0;
        if (arg0->unknown_4_ == 1) arg0->unknown_0_ = 0;
    }
    func_0207051c(arg0, arg0->unknown_2_, (int)arg0->unknown_c_);
    if (arg0->unknown_8_ > 0) return;
    if (arg0->unknown_10_ <= 0) return;
    arg0->unknown_8_ = (int)((float)arg0->unknown_10_ * 16.66699981689453f);
    arg0->unknown_4_ = 1;
    arg0->unknown_10_ = 0;
}
