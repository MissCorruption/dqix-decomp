#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02085c80_2291 = 0x85b };
#else
enum { Enum_02085c80_2291 = 0x8f3 };
#endif

#include "GameState/GameState.h"

extern "C" int func_0201137c(char* arg0, int arg1);

struct Struct_02085c80 {
    char unknown_0_[Enum_02085c80_2291];
    unsigned char unknown_8f3_;
};

// USA: func_02085c80
extern "C" ARM int func_02085c80(struct Struct_02085c80* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = 0;
    if (arg0->unknown_8f3_ & 0x2) {
        var1 += func_0201137c((char*)var0, 0x39);
    }
    if (arg0->unknown_8f3_ & 0x20) {
        var1 += func_0201137c((char*)var0, 0x3d);
    }
    return var1;
}
