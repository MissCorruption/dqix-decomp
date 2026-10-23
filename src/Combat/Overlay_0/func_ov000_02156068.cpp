#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);

struct Struct_ov000_02156068 {
    char unknown_0_[0xa];
    unsigned short unknown_a_0_ : 7;
    unsigned short unknown_a_7_ : 4;
    unsigned short unknown_b_3_ : 1;
    unsigned short unknown_b_4_ : 1;
    unsigned short unknown_b_5_ : 3;
};

// USA: func_ov000_02156068
extern "C" ARM int func_ov000_02156068(int arg0, int arg1, int arg2, int arg3) {
    int var0 = (arg1 >= 0 && arg1 <= 3);
    if (var0) {
        return 0;
    }
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = func_0200fea4(var1, arg1);
    if (var2 == NULL) {
        return 0;
    }
    struct Struct_ov000_02156068* var3 = *(struct Struct_ov000_02156068**)((char*)var2 + 0x144);
    if (var3 == NULL) {
        return 0;
    }
    if (arg3 > 0) {
        if (arg3 == 1) {
            if (var3->unknown_b_4_) return 1;
        } else {
            if (var3->unknown_b_3_) return 1;
        }
    } else {
        if (var3->unknown_a_7_ == arg2) return 1;
    }
    return 0;
}
