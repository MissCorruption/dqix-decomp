#include <globaldefs.h>
#if defined(jpn)
#define data_020e8b02 data_020e8bfc
#endif
#include "GameState/GameState.h"

extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern "C" int func_0201137c(char* arg0, int arg1);
extern short data_020e8b02[];

// USA: func_02086020
extern "C" ARM int func_02086020(unsigned char* arg0) {
    short* var0;
    GameState* var1 = GameState::GetInstance();
    int var2 = 0;
    unsigned char var3 = 0;
    var0 = data_020e8b02;
    short var4;
    while ((var4 = var0[var3]) != -1) {
        if (func_02083b00(arg0, var4)) {
            var2 += func_0201137c((char*)var1, var4);
        }
        var3 = (var3 + 1) & 0xff;
    }
    return var2;
}
