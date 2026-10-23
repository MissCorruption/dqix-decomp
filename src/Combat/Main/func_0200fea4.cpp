#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_0200fea4
extern "C" ARM GameObject* func_0200fea4(GameState* arg0, int arg1) {
    GameObject* var0;
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 >= 0xE9) {
        return 0;
    }
    var0 = arg0->objects_[arg1];
    if (var0 == 0) {
        return 0;
    }
    if ((var0->obj3D_.unknown_0_ & 0x400) == 0) {
        var0 = 0;
    }
    return var0;
}
