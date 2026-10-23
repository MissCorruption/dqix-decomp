#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov017_021923e0(void* arg0, unsigned int arg1);
extern unsigned short data_ov017_021d618e[8];

// USA: func_ov017_0219230c
extern "C" ARM void func_ov017_0219230c(int arg0, int arg1, unsigned int arg2) {
    int var0;
    if (arg1 >= 0 && arg1 <= 3) {
        var0 = 1;
    } else {
        var0 = 0;
    }
    if (!var0) {
        return;
    }

    GameState* var1 = GameState::GetInstance();
    short var2[8];
    int var3;
    int var4 = 8;
    unsigned short* var5 = (unsigned short*)var2;
    unsigned short* var6 = data_ov017_021d618e;
    do {
        unsigned short var7 = *var6;
        var6++;
        var4--;
        *var5 = var7;
        var5++;
    } while (var4);

    var2[0] = arg1;
    var2[1] = arg1 * 0xc + 0x13;
    var2[2] = arg1 * 0xc + 0x14;
    var2[3] = arg1 * 0xc + 0x15;
    var2[4] = arg1 * 0xc + 0x1b;
    var2[5] = arg1 * 0xc + 0x1c;
    var2[6] = arg1 * 0xc + 0x1d;

    for (var3 = 0; var2[var3] > -1; var3++) {
        GameObject* var8 = var1->GetGameObjectByIndex(var2[var3]);
        if (var8) {
            func_ov017_021923e0(var8, arg2);
        }
    }
}
