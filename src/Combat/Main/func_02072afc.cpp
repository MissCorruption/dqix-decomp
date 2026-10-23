#include <globaldefs.h>

#include "GameState/GameState.h"
#include "Combat/Main/BattleList.h"

struct Struct_02052e2c;
struct Struct_02052e14;
extern "C" short* func_02052e2c(Struct_02052e2c* arg0);
extern "C" short* func_02052e14(Struct_02052e14* arg0);

struct Struct_020e8878 {
    int unknown_0_[11];
};
extern Struct_020e8878 data_020e8878;

// USA: func_02072afc
extern "C" ARM void func_02072afc(int arg0, int* arg1, short* arg2) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg0);
    if (var0 == NULL) return;
    short* var1 = func_02052e2c((Struct_02052e2c*)var0);
    if (var1 == NULL) return;
    short* var2 = func_02052e14((Struct_02052e14*)var0);
    Struct_020e8878 var3 = data_020e8878;
    int var4 = arg0 * 12;
    var3.unknown_0_[0] = arg0;
    var3.unknown_0_[1] = var4 + 19;
    var3.unknown_0_[2] = var4 + 20;
    var3.unknown_0_[3] = var4 + 21;
    var3.unknown_0_[4] = var4 + 22;
    var3.unknown_0_[5] = var4 + 23;
    var3.unknown_0_[6] = var4 + 25;
    var3.unknown_0_[7] = var4 + 27;
    var3.unknown_0_[8] = var4 + 28;
    var3.unknown_0_[9] = var4 + 29;
    short var5[11] = {
        var2[0], var2[1], var2[2], var2[3], var2[3],
        var2[4], var2[5], var2[6], var2[7], var2[8], var2[9]
    };
    for (int var6 = 0; var6 < 11; var6++) {
        arg1[var6] = var3.unknown_0_[var6];
        arg2[var6] = var5[var6];
    }
    if (arg2[0] < 0) arg2[0] = 1000;
    if (arg2[1] < 0) arg2[1] = 8001;
    if (arg2[6] < 0) arg2[6] = 994;
    if (arg2[5] < 0) {
        arg2[5] = var1[11];
        if (arg2[5] < 0) arg2[5] = 8010;
    }
}
