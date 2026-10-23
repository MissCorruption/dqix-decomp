#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);

struct Struct_ov000_02159d94 {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 3;
    unsigned int unknown_10_3_ : 2;
    unsigned int unknown_10_5_ : 27;
};

// USA: func_ov000_02159d94
extern "C" ARM int func_ov000_02159d94(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200fea4(var0, arg1);
    struct Struct_ov000_02159d94* var2 = *(struct Struct_ov000_02159d94**)((char*)var1 + 0x148);
    return var2->unknown_10_3_;
}
