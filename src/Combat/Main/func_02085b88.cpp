#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02085b88_2288 = 0x858 };
#else
enum { Enum_02085b88_2288 = 0x8f0 };
#endif

#include "GameState/GameState.h"

extern "C" int func_0201137c(char* arg0, int arg1);

// USA: func_02085b88
extern "C" ARM int func_02085b88(unsigned char* arg0) {
    GameState* var0;
    int var1;
    if (*(short*)(arg0 + 0x2cc) <= 0) {
        return 0;
    }
    var0 = GameState::GetInstance();
    var1 = 0;
    if (arg0[Enum_02085b88_2288] & 4) {
        var1 += func_0201137c((char*)var0, 0x22);
    }
    if (arg0[Enum_02085b88_2288] & 0x10) {
        var1 += func_0201137c((char*)var0, 0x24);
    }
    if (arg0[Enum_02085b88_2288] & 0x40) {
        var1 += func_0201137c((char*)var0, 0x26);
    }
    return var1;
}
