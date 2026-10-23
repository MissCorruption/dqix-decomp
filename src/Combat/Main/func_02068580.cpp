#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02068580 {
    char unknown_0_[0x49c];
    unsigned char unknown_49c_0_ : 1;
};

// USA: func_02068580
extern "C" ARM int func_02068580(GameState* arg0) {
    GameObject* var0 = arg0->GetProtagonist();
    if (var0 != 0) {
        struct Struct_02068580* var1 = *(struct Struct_02068580**)((char*)var0 + 0x150);
        return var1->unknown_49c_0_;
    }
    return 0;
}
