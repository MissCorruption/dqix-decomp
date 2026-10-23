#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov003_02160bf8
extern "C" ARM void* func_ov003_02160bf8(void* arg0, int arg1) {
    signed char* var0;
    unsigned char* var1;
    unsigned char var2;
    if (arg1 < 0) {
        return 0;
    }
    var1 = (unsigned char*)func_02010828(GameState::GetInstance());
    var0 = (signed char*)var1 + 0xf80;
    var1 += 0x2000;
    var2 = 0;
    while (var2 < var1[0xc8c]) {
        signed char* var3 = var0 + var2 * 0x23c;
        int var4 = (*var3 << 26) >> 26;
        if (arg1 == var4) {
            return var3;
        }
        var2 = (unsigned char)(var2 + 1);
    }
    return 0;
}
