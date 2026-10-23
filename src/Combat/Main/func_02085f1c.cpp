#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02085f1c_2290 = 0x85a, Enum_02085f1c_2291 = 0x85b };
#else
enum { Enum_02085f1c_2290 = 0x8f2, Enum_02085f1c_2291 = 0x8f3 };
#endif

#include "GameState/GameState.h"

extern "C" int func_0201137c(char* arg0, int arg1);

// USA: func_02085f1c
extern "C" ARM int func_02085f1c(unsigned char* arg0, int arg1) {
    GameState* var0;
    int var1;
    if (arg1 < 0) {
        short var2 = *(short*)(arg0 + 0x2ac);
        if (var2 > 0) {
            int var3 = *(int*)(arg0 + 0x29c);
            arg1 = (unsigned int)(var3 << 23) >> 27;
        } else {
            arg1 = 0x21;
        }
    }
    var0 = GameState::GetInstance();
    var1 = 0;
    if (arg1 == 3) {
        if (arg0[Enum_02085f1c_2290] & 0x80) {
            var1 += func_0201137c((char*)var0, 0x37);
        }
        if (arg0[Enum_02085f1c_2291] & 0x8) {
            var1 += func_0201137c((char*)var0, 0x3b);
        }
        if (arg0[Enum_02085f1c_2291] & 0x40) {
            var1 += func_0201137c((char*)var0, 0x3e);
        }
    }
    return var1;
}
