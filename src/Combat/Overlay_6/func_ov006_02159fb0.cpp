#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov006_02159fb0 {
    char unknown_0_[0x3a8];
    unsigned int unknown_3a8_;
    int unknown_3ac_;
    int unknown_3b0_;
};

extern "C" void func_ov006_02159f94(struct Struct_ov006_02159fb0* arg0);
extern "C" void func_ov006_02159f0c(struct Struct_ov006_02159fb0* arg0);

// USA: func_ov006_02159fb0
extern "C" ARM void func_ov006_02159fb0(struct Struct_ov006_02159fb0* arg0) {
    if (arg0->unknown_3b0_ < 0) {
        arg0->unknown_3a8_ = 0;
        func_ov006_02159f94(arg0);
        return;
    }
    if (arg0->unknown_3a8_ > 0x3c) {
        arg0->unknown_3a8_ = 0;
        func_ov006_02159f94(arg0);
        func_ov006_02159f0c(arg0);
    }
    arg0->unknown_3a8_ += GameState::GetInstance()->GetEffectiveDeltaTime();
}
