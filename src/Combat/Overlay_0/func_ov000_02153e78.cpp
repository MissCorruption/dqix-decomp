#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_ov000_02153c0c(GameObject* arg0);
extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);

struct Struct_ov000_02153e78 {
    char unknown_0_[0x17c];
    unsigned char unknown_17c_;
};

struct Struct_ov000_02153e78_2 {
    char unknown_0_[2];
    unsigned char unknown_2_[8];
    unsigned char unknown_a_0_ : 4;
    char unknown_b_[0x18 - 0xb];
};

struct Struct_ov000_02153e78_3 {
    char unknown_0_[0x81b1];
    unsigned char : 4;
    unsigned char unknown_81b1_4_ : 2;
    char unknown_81b2_[0x81b4 - 0x81b2];
    struct Struct_ov000_02153e78_2 unknown_81b4_[1];
};

// USA: func_ov000_02153e78
extern "C" ARM int func_ov000_02153e78(struct Struct_ov000_02153e78_3* arg0, short* arg1, int arg2, int arg3, int arg4) {
    GameState* var0 = GameState::GetInstance();
    int var1 = 0;
    struct Struct_ov000_02153e78_2* var2 = arg0->unknown_81b4_;
    int var3;
    for (var3 = 0; var3 < arg0->unknown_81b1_4_; var3++) {
        unsigned char* var4 = var2[var3].unknown_2_;
        int var5;
        for (var5 = 0; var5 < var2[var3].unknown_a_0_; var5++) {
            GameObject* var6 = func_0200fea4(var0, var4[var5] + 0xc0);
            if (var6 == NULL) continue;
            if (arg3 != ((struct Struct_ov000_02153e78*)var6)->unknown_17c_) continue;
            if (!(arg4 & 0x10) && func_ov000_02153c0c(var6)) continue;
            if ((arg4 & 1) && func_02010088((struct Struct_02010088*)var6)) continue;
            arg1[var1] = var4[var5] + 0xc0;
            var1++;
            if (var1 == arg2) return var1;
        }
    }
    return var1;
}
