#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0207c5f8(unsigned char* arg0, unsigned int arg1);
extern "C" signed short func_0207c620(unsigned char* arg0, unsigned int arg1);
extern short data_020f29dc[];

// USA: func_020dd300
extern "C" ARM int func_020dd300(int arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_02010828(var0);
    signed short* var2 = (signed short*)func_0207c5f8(var1 + 0x1d4, 0);
    short var3 = func_0207c620(var1 + 0x1d4, 0);
    short var4 = 0;
    for (short var5 = 0; var5 < var3; var5++) {
        signed short var6 = var2[var5];
        if (var6 > 0) {
            var6 -= var6 % 100;
            for (unsigned char var7 = 0; var7 < 12; var7++) {
                if (arg0 & (1 << var7)) {
                    if (var6 == data_020f29dc[var7]) {
                        var4++;
                        break;
                    }
                }
            }
        }
    }
    return var4;
}
