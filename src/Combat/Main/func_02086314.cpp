#include <globaldefs.h>
#if defined(jpn)
#define data_020e8a9e data_020e8bc4
#endif
#include "GameState/GameState.h"

extern short data_020e8a9e[];

extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern "C" int func_0201137c(char* arg0, int arg1);

// USA: func_02086314
extern "C" ARM int func_02086314(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = 0;
    unsigned char var2;
    short var3;
    for (var2 = 0; (var3 = data_020e8a9e[var2]) != -1; var2++) {
        if (func_02083b00(arg0, var3)) {
            var1 += func_0201137c((char*)var0, var3);
        }
    }
    return var1;
}
