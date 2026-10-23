#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_0200ffe0
extern "C" ARM GameObject* func_0200ffe0(GameState* arg0, int arg1) {
    GameObject* var0;
    int var1;
    if (arg1 < 0) {
        return 0;
    }
    for (var1 = 0x70; var1 <= 0x9f; var1++) {
        var0 = arg0->objects_[var1];
        if (var0 != 0 && (var0->obj3D_.unknown_0_ & 0x20) && arg1 == *(unsigned short*)((char*)var0 + 0x16a)) {
            return var0;
        }
    }
    return 0;
}
