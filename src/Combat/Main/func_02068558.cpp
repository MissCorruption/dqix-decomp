#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02068558 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};

// USA: func_02068558
extern "C" ARM int func_02068558(GameState* arg0) {
    GameObject* var0 = arg0->GetPartyMemberByIndex(0);
    if (var0 != 0) {
        struct Struct_02068558* var1 = *(struct Struct_02068558**)((char*)var0 + 0x150);
        return var1->unknown_49c_0_;
    }
    return 0;
}
