#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_020685cc {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};

// USA: func_020685cc
extern "C" ARM int func_020685cc(GameState* arg0) {
    GameObject* var0 = arg0->GetUnknownGameObject();
    if (var0 != 0) {
        struct Struct_020685cc* var1 = *(struct Struct_020685cc**)((char*)var0 + 0x150);
        return var1->unknown_49c_0_;
    }
    return 0;
}
