#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020ad4c4_14076 = 0x34ec, Enum_020ad4c4_10164 = 0x27f4 };
#else
enum { Enum_020ad4c4_14076 = 0x36fc, Enum_020ad4c4_10164 = 0x27b4 };
#endif

#include "GameState/GameState.h"
#include "Resource/GameResources.h"

struct Struct_02038598_5;
extern "C" int func_02046b60(struct Struct_02038598_5* arg0, int arg1);
extern "C" int func_0201079c(char* arg0);
extern "C" int func_0201bd74(void* arg0, int arg1, int arg2);

struct Struct_020ad4c4 {
    unsigned short unknown_0_;
};

// USA: func_020ad4c4
extern "C" ARM int func_020ad4c4(struct Struct_020ad4c4* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = ((int)GetGameResources());
    struct Struct_02038598_5* var2 = *(struct Struct_02038598_5**)(var1 + Enum_020ad4c4_14076);
    if (func_02046b60(var2, 4)) {
        return 0;
    }

    int var3 = 0;
    int var4 = 0;
    if (arg0->unknown_0_ == 0x1198) {
        var3 = 1;
        var4 = 7;
    } else if (arg0->unknown_0_ == 0x1198 - 0xcb) {
        var3 = 3;
        var4 = 2;
    } else if (arg0->unknown_0_ == 0x1198 - 0x68) {
        if (func_0201079c((char*)var0) >= 0x13) {
            return 0;
        }
        var3 = 5;
        var4 = 0x17;
    }

    if (var3 == 0 || var4 == 0) {
        goto ret0;
    }
    if (*(unsigned short*)((char*)arg0 + Enum_020ad4c4_10164) == var3) {
        return (func_0201bd74(arg0, var4, 0) == 0) ? 1 : 0;
    }
    return func_0201bd74(arg0, var4, 0);

ret0:
    return 0;
}
