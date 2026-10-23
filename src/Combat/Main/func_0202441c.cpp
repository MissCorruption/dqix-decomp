#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0202441c_2492 = 0x910 };
#else
enum { Enum_0202441c_2492 = 0x9bc };
#endif
#include "GameState/GameState.h"


struct Struct_0202441c {
    char unknown_0_[Enum_0202441c_2492];
    unsigned int unknown_9bc_;
    unsigned char unknown_9c0_;
};

// USA: func_0202441c
extern "C" ARM void func_0202441c(struct Struct_0202441c* arg0) {
    arg0->unknown_9bc_ += ((GameState*)(GameState::GetInstance()))->GetTrueDeltaTime();
    if (arg0->unknown_9bc_ >= 0x4b0) {
        arg0->unknown_9c0_ = 0;
        arg0->unknown_9bc_ = 0;
        return;
    }
    if (arg0->unknown_9bc_ >= 0x1f4) {
        arg0->unknown_9c0_ = 1;
    }
}
