#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_02061c04_23;
extern "C" int func_020a0a08(struct Struct_02061c04_23* arg0, int arg1, int arg2);

extern "C" int func_0207c894(void* arg0, int arg1, int arg2);

extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_020838c4;
extern "C" int func_020838c4(struct Struct_020838c4* arg0, int arg1);

// USA: func_02086d88
extern "C" ARM int func_02086d88(unsigned char* arg0, int arg1) {
    if (arg1 < 0) {
        return 0;
    }
    if (func_020a0a08((struct Struct_02061c04_23*)arg0, arg1, 1) != 0) {
        return 1;
    }
    if (func_0207c894(arg0 + 0x1d4, arg1, 9) != 0) {
        return 1;
    }
    if (func_020a0a08((struct Struct_02061c04_23*)(arg0 + 0xe04), arg1, 1) != 0) {
        return 1;
    }
    GameState* var0 = GameState::GetInstance();
    GameObject* var1;
    unsigned char var2;
    for (var2 = 0; var2 < arg0[0xf7c]; var2++) {
        unsigned char* var3 = arg0 + var2;
        var1 = func_0200ff1c(var0, var3[0xf78]);
        if (var1 != 0) {
            int var4 = func_02053c6c((unsigned char*)var1);
            if (var4 != 0) {
                if (func_020838c4((struct Struct_020838c4*)var4, arg1) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
