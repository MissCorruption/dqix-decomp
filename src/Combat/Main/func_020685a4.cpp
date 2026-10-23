#include <globaldefs.h>
#include "GameState/GameState.h"


struct Struct_020685a4 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};

// USA: func_020685a4
extern "C" ARM int func_020685a4(GameState* arg0) {
    GameObject* var0 = arg0->GetPartyMemberByIndex(0);
    if (var0 != 0) {
        struct Struct_020685a4* var1 = *(struct Struct_020685a4**)((char*)var0 + 0x150);
        return var1->unknown_49c_0_;
    }
    return 0;
}
