#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020ac864_3272 = 0xa68, Enum_020ac864_25472 = 0x6120 };
#else
enum { Enum_020ac864_3272 = 0xcc8, Enum_020ac864_25472 = 0x6380 };
#endif

#include "GameState/GameState.h"
#include "std_library_functions.h"

extern "C" int func_02075910(int arg0, void* arg1, unsigned int arg2, int arg3);
extern "C" int func_01ff85b8(void* arg0, int arg1);

struct Struct_020ac864 {
    int unknown_0_;
    char unknown_4_[0x5c];
};

// USA: func_020ac864
extern "C" ARM int func_020ac864(int arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)var0 + 0x5000;
    var1[Enum_020ac864_3272] = 0;
    int var2 = 1;
    int var3 = arg0 ? 0x8024 : 0x24;
    struct Struct_020ac864 var4;
    if (!func_02075910(var3, &var4, 0x60, 0)) {
        var2 = 0;
    }
    if (var2) {
        if (func_01ff85b8((char*)&var4 + 4, 0x5c) != var4.unknown_0_) {
            ((unsigned char*)var0 + 0x5000)[Enum_020ac864_3272] = arg0 ? 3 : 2;
            var2 = 0;
        } else {
            memcpy((char*)var0 + Enum_020ac864_25472, &var4, 0x54);
        }
    }
    return var2;
}
