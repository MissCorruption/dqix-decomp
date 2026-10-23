#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" ARM void func_020113a8(void* arg0, int arg1, int arg2) {
    GameState* var0 = static_cast<GameState*>(arg0);
    unsigned int var1 = (arg1 - 1) * 5 + arg2;
    unsigned int var2 = var1 / 8;
    unsigned char* var3 = reinterpret_cast<unsigned char*>(
        &var0->unk_397d[0x5cd0 - 0x397d]);
    var3[var2] |= static_cast<unsigned char>(1 << (var1 - var2 * 8));
}
