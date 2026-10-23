#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020dd3cc_336 = 0x144, Enum_020dd3cc_2384 = 0x8b8 };
#else
enum { Enum_020dd3cc_336 = 0x150, Enum_020dd3cc_2384 = 0x950 };
#endif
#include "GameState/GameState.h"

extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern "C" int func_020dd11c(unsigned int arg0, unsigned int arg1);
extern "C" int func_020dd300(int arg0);
extern unsigned short data_020f29f4[];

// USA: func_020dd3cc
extern "C" ARM int func_020dd3cc(int arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff1c(var0, arg0);
    if (var1 == 0) {
        return 0;
    }
    unsigned int var2 = 0;
    for (unsigned short var3 = 0; var3 <= 0xb; var3++) {
        if (func_02083b00(*(unsigned char**)((char*)var1 + Enum_020dd3cc_336), data_020f29f4[var3])) {
            var2 |= 1u << var3;
        }
    }
    unsigned char* var4 = *(unsigned char**)((char*)var1 + Enum_020dd3cc_336);
    unsigned char var5 = (unsigned char)*(int*)(var4 + Enum_020dd3cc_2384);
    for (unsigned char var6 = 0; var6 < 4; var6++) {
        unsigned int var7 = func_020dd11c(var5, var6);
        if (var7 == 0) {
            continue;
        }
        if (var7 >= 1 && var7 <= 12) {
            var2 |= 1u << (unsigned char)(var7 - 1);
        }
    }
    for (unsigned int var8 = 0; var8 <= 0xb; var8++) {
        unsigned int var9 = 1u << var8;
        if (var2 & var9) {
            unsigned int var10 = func_020dd300(var9);
            if (var10 == 0) {
                var2 &= ~var9;
            }
        }
    }
    return var2;
}
