#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0207c5f8(unsigned char* arg0, unsigned int arg1);

struct Struct_02054000;
extern "C" void* func_02054000(struct Struct_02054000* arg0);

extern short data_020e8a34[];

// USA: func_0207c984
extern "C" ARM int func_0207c984(unsigned char* arg0, int arg1, int arg2, short* arg3, short* arg4) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg1);
    if (var0 == 0) {
        return 1;
    }

    void* var1 = func_02054000((struct Struct_02054000*)var0);
    short var2 = -1;
    if (var1 != 0) {
        unsigned int var3 = *(unsigned int*)((char*)var1 + 0x8);
        unsigned int var4 = (var3 << 23) >> 27;
        if (var4 <= 11) {
            var2 = *(short*)((char*)var1 + 0x18);
        }
    }

    short var5 = 0;
    short var6 = data_020e8a34[arg2];
    if (var2 > 0) {
        if ((short)(var2 - var2 % 100) == var6) {
            arg3[var5++] = var2;
        }
    }

    short* var7 = (short*)func_0207c5f8(arg0, 0);
    short var8;
    for (var8 = 0; var8 < 0x110; var8++) {
        short var9 = var7[var8];
        if (var9 != var2) {
            if ((short)(var9 - var9 % 100) == var6) {
                arg3[var5] = var9;
                var5 = var5 + 1;
            }
        }
    }

    *arg4 = var5;
    return 0;
}
