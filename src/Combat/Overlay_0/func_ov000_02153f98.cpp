#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "GameState/GameState.h"
#include "Combat/Main/BattleList.h"
#include "Util/Random.h"

struct Struct_ov000_02153f98 {
    char unknown_0_[0x14];
    unsigned int : 28;
    unsigned int unknown_17_4_ : 4;
};

struct Struct_ov000_02182b24 {
    short unknown_0_[8];
};

extern "C" struct Struct_ov000_02153f98* func_02079e2c(char* arg0, int arg1);
extern "C" int func_ov000_0215e9fc(struct Random* arg0, short* arg1, int arg2, int arg3);

extern struct Struct_ov000_02182b24 data_ov000_02182b24;

// USA: func_ov000_02153f98
extern "C" ARM int func_ov000_02153f98(struct Random* arg0, int arg1, int arg2, short* arg3) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_ov000_02153f98* var1 = func_02079e2c((char*)func_020797dc(), (short)arg2);
    if (var1 == NULL) {
        return 0;
    }
    if (func_0200ff1c(var0, arg1) == NULL) {
        return 0;
    }
    unsigned int var2 = var1->unknown_17_4_;
    int var3 = func_ov000_0215e9fc(arg0, arg3, 8, 1);
    if (var2 == 2) {
        *arg3 = arg3[NextRandomMax(arg0, var3)];
        var3 = 1;
    } else if (var2 == 8) {
        struct Struct_ov000_02182b24 var4 = data_ov000_02182b24;
        short var5 = 0;
        short* var6 = var4.unknown_0_;
        for (int var7 = 0; var7 < var3; var7++) {
            if (arg1 != arg3[var7]) {
                var6[var5] = arg3[var7];
                var5++;
            }
        }
        *arg3 = var6[NextRandomMax(arg0, var5)];
        var3 = 1;
    } else {
        *arg3 = arg1;
        var3 = 1;
    }
    return var3;
}
