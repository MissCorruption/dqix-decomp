#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_ov000_02153c0c(GameObject* arg0);

struct Struct_ov000_0215ec80 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[8];
    unsigned char unknown_a_0_ : 4;
    unsigned char unknown_a_4_ : 4;
    unsigned char unknown_b_[0x18 - 0xb];
};

struct Struct_ov000_0215ec80_2 {
    unsigned char unknown_0_[0x81b4];
    struct Struct_ov000_0215ec80 unknown_81b4_[1];
};

// USA: func_ov000_0215ec80
extern "C" ARM int func_ov000_0215ec80(struct Struct_ov000_0215ec80_2* arg0, short* arg1, int arg2, int arg3, int arg4) {
    int var0 = 0;
    int var1;
    for (var1 = 0; var1 < arg0->unknown_81b4_[arg3].unknown_a_0_; var1++) {
        short var2 = (short)(arg0->unknown_81b4_[arg3].unknown_2_[var1] + 0xc0);
        GameObject* var3 = GameState::GetInstance()->GetCombatantByIndex(var2);
        if (var3 == NULL) continue;
        if (func_ov000_02153c0c(var3)) continue;
        if ((arg4 & 1) && func_02010088((struct Struct_02010088*)var3)) continue;
        arg1[var0++] = var2;
        if (var0 == arg2) return var0;
    }
    return var0;
}
