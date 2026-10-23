#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_020c39a0 func_020c546c
#endif

extern "C" void func_020c39a0(short* arg0, int arg1);

struct Struct_ov020_0218d644 {
#if defined(jpn)
    char unknown_0_[0x478];
#else
    char unknown1_0_[0x4e8];
#endif

    float unknown_4e8_;
    int unknown_4ec_;
    int unknown_4f0_;
    float unknown_4f4_;
    int unknown_4f8_;
    int unknown_4fc_;
};

// USA: func_ov020_0218d644
extern "C" ARM void func_ov020_0218d644(struct Struct_ov020_0218d644* arg0) {
    int var0 = GameState::GetInstance()->GetEffectiveDeltaTime();
    int var1 = arg0->unknown_4f0_ > 0;
    if (var1) {
        arg0->unknown_4e8_ = arg0->unknown_4e8_ + (float)var0 * (((float)arg0->unknown_4ec_ - arg0->unknown_4e8_) / (float)arg0->unknown_4f0_);
        arg0->unknown_4f0_ -= var0;
        if (arg0->unknown_4f0_ <= 0) {
            arg0->unknown_4e8_ = (float)arg0->unknown_4ec_;
            arg0->unknown_4f0_ = 0;
        }
        func_020c39a0((short*)0x400006c, (int)arg0->unknown_4e8_);
    }
    int var2 = arg0->unknown_4fc_ > 0;
    if (!var2) return;
    arg0->unknown_4f4_ = arg0->unknown_4f4_ + (float)var0 * (((float)arg0->unknown_4f8_ - arg0->unknown_4f4_) / (float)arg0->unknown_4fc_);
    arg0->unknown_4fc_ -= var0;
    if (arg0->unknown_4fc_ <= 0) {
        arg0->unknown_4f4_ = (float)arg0->unknown_4f8_;
        arg0->unknown_4fc_ = 0;
    }
    func_020c39a0((short*)0x400106c, (int)arg0->unknown_4f4_);
}
