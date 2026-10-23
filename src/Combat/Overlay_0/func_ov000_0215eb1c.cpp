#include <globaldefs.h>
#include <GameState/GameState.h>

struct Struct_ov000_0215eb1c_2 {
    char unknown_0_[6];
    unsigned char unknown_6_[8];
    unsigned char unknown_e_0_ : 4;
    unsigned char unknown_e_4_ : 4;
    char unknown_f_[9];
};
struct Struct_ov000_0215eb1c {
    char unknown_0_[0x81b0];
    union {
        struct {
            unsigned char unknown_81b0_;
            unsigned char unknown_81b1_0_ : 4;
            unsigned char unknown_81b1_4_ : 2;
            unsigned char unknown_81b1_6_ : 2;
        };
        Struct_ov000_0215eb1c_2 unknown1_81b0_[3];
    };
};
struct Struct_02010088;
extern "C" int func_ov000_02153c0c(GameObject*);
extern "C" int func_02010088(Struct_02010088*);

// USA: func_ov000_0215eb1c
extern "C" ARM int func_ov000_0215eb1c(Struct_ov000_0215eb1c* arg0, short* arg1, int arg2, int arg3) {
    int var0 = 0;
    for (int var1 = 0; var1 < arg0->unknown_81b1_4_; var1++) {
        for (int var2 = 0; var2 < arg0->unknown1_81b0_[var1].unknown_e_0_; var2++) {
            short var3 = arg0->unknown1_81b0_[var1].unknown_6_[var2] + 0xc0;
            GameObject* var4 = GameState::GetInstance()->GetCombatantByIndex(var3);
            if (!var4) continue;
            if (!(arg3 & 0x10) && func_ov000_02153c0c(var4)) continue;
            if ((arg3 & 1) && func_02010088((Struct_02010088*)var4)) continue;
            arg1[var0++] = var3;
            if (var0 == arg2) return var0;
        }
    }
    return var0;
}
