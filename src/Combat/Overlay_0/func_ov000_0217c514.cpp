#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02054000;
extern "C" void* func_02054000(struct Struct_02054000* arg0);

struct Struct_ov000_0217c514 {
    unsigned int unknown_0_0_ : 4;
    unsigned int unknown_0_4_ : 5;
    unsigned int unknown_1_1_ : 23;
};

struct Struct_ov000_0217c514_2 {
    char unknown_0_[8];
    struct Struct_ov000_0217c514 unknown_8_;
    char unknown_c_[0x18 - 0xc];
    short unknown_18_;
};

// USA: func_ov000_0217c514
extern "C" ARM int func_ov000_0217c514(int arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff1c(var0, arg0);
    if (!var1) return arg1;
    struct Struct_ov000_0217c514_2* var2 = (struct Struct_ov000_0217c514_2*)func_02054000((struct Struct_02054000*)var1);
    if (!var2) return arg1;
    if (var2->unknown_18_ > 0) {
        int var3 = (var2->unknown_8_.unknown_0_0_ <= 7);
        if (var3) {
            if (var2->unknown_8_.unknown_0_4_ <= 11) {
                arg1 |= 1 << var2->unknown_8_.unknown_0_4_;
            }
        }
    }
    return arg1;
}
