#include <globaldefs.h>
#if defined(jpn)
#define data_020e8ab6 data_020e8bd0
#endif
#include "GameState/GameState.h"

extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern "C" int func_0201137c(char* arg0, int arg1);
extern short data_020e8ab6[];

// USA: func_02085fb4
extern "C" ARM int func_02085fb4(unsigned char* arg0) {
    short* var0;
    GameState* var1 = GameState::GetInstance();
    int var2 = 0;
    unsigned char var3 = 0;
    var0 = data_020e8ab6;
    short var4;
    while ((var4 = var0[var3]) != -1) {
        if (func_02083b00(arg0, var4)) {
            var2 += func_0201137c((char*)var1, var4);
        }
        var3 = (var3 + 1) & 0xff;
    }
    return var2;
}
