#include <globaldefs.h>
#if defined(jpn)
#define data_020e8bec data_020e8d06
#endif
#include "GameState/GameState.h"

extern short data_020e8bec[];

extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern "C" int func_0201137c(char* arg0, int arg1);

// USA: func_020862a8
extern "C" ARM int func_020862a8(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = 0;
    unsigned char var2;
    short var3;
    for (var2 = 0; (var3 = data_020e8bec[var2]) != -1; var2++) {
        if (func_02083b00(arg0, var3)) {
            var1 += func_0201137c((char*)var0, var3);
        }
    }
    return var1;
}
