#include <globaldefs.h>
#include "GameState/GameState.h"
extern "C" int func_020100a8(GameState*);

struct Struct_020a36a8 {
    char unknown_0_[0x2a];
    signed char unknown_2a_;
};

// USA: func_020a36a8
extern "C" ARM int func_020a36a8(struct Struct_020a36a8* arg0) {
    return arg0->unknown_2a_ == func_020100a8((GameState*)(GameState::GetInstance()));
}
