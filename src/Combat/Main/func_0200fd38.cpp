#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0200fd38 {
    char unknown_0_[4];
    unsigned short unknown_4_;
};

// USA: func_0200fd38
extern "C" ARM void func_0200fd38(GameState* arg0, int arg1, GameObject* arg2) {
    arg0->objects_[arg1] = arg2;
    ((struct Struct_0200fd38*)arg2)->unknown_4_ = arg1;
}
