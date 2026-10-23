#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02085c08_2301 = 0x865 };
enum { Enum_02085c08_2293 = 0x85d };
#else
enum { Enum_02085c08_2301 = 0x8fd };
enum { Enum_02085c08_2293 = 0x8f5 };
#endif

#include "GameState/GameState.h"

extern "C" int func_0201137c(char* arg0, int arg1);

// USA: func_02085c08
extern "C" ARM int func_02085c08(unsigned char* arg0) {
    short var0 = *(short*)(arg0 + 0x2ac);
    int var1 = 0x21;
    GameState* var2;
    int var3;
    if (var0 > 0) {
        int var4 = *(int*)(arg0 + 0x29c);
        var1 = (unsigned int)(var4 << 23) >> 27;
    }
    var2 = GameState::GetInstance();
    var3 = 0;
    if (var1 != 5) {
        if (var1 == 0x21) {
            if (arg0[Enum_02085c08_2301] & 1) {
                var3 += func_0201137c((char*)var2, 0x88);
            }
        }
    } else {
        if (arg0[Enum_02085c08_2293] & 1) {
            var3 += func_0201137c((char*)var2, 0x48);
        }
    }
    return var3;
}
