#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov017_021bff2c(void);

struct Struct_ov017_021bfee8 { unsigned char unknown_0_[8]; unsigned short unknown_8_; };

// USA: func_ov017_021bfee8
extern "C" ARM int func_ov017_021bfee8(Struct_ov017_021bfee8* arg0) {
    unsigned int var0 = (unsigned int)GameState::GetInstance()->GetEffectiveDeltaTime();
    if (var0 < arg0->unknown_8_) {
        arg0->unknown_8_ = (unsigned short)(arg0->unknown_8_ - var0);
        return 6;
    }
    arg0->unknown_8_ = 0;
    func_ov017_021bff2c();
    return 8;
}
