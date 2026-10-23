#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02011430;

extern "C" ARM int func_02011430(Struct_02011430* arg0, int arg1, int arg2) {
    GameState* var0 = reinterpret_cast<GameState*>(arg0);
    const unsigned char* var1 = reinterpret_cast<const unsigned char*>(
        &var0->unk_397d[0x5cd0 - 0x397d]);
    unsigned int var2 = arg2 + (arg1 - 1) * 5;
    unsigned int var3 = var2 / 8;
    unsigned char var4 = 1 << (var2 - var3 * 8);
    return (var1[var3] & var4) != 0;
}
