#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02072d58_14076 = 0x34ec, Enum_02072d58_336 = 0x144 };
#else
enum { Enum_02072d58_14076 = 0x36fc, Enum_02072d58_336 = 0x150 };
#endif
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void func_02072c9c(int arg0, char* arg1);

struct Struct_02015438;
extern "C" int func_02046b24(struct Struct_02015438** arg0);

extern char data_020f0cff[];

// USA: func_02072d58
extern "C" ARM void func_02072d58(int arg0, char* arg1, char* arg2) {
    func_02072c9c(arg0, arg1);

    int var0 = ((int)GetGameResources());
    struct Struct_02015438** var1 = *(struct Struct_02015438***)((char*)var0 + Enum_02072d58_14076);
    int var2 = 0;

    if (func_02046b24(var1) == 0xa) {
        GameObject* var3 = GameState::GetInstance()->GetCombatantByIndex(arg0);
        if (var3 != NULL) {
            var2 = *(unsigned char*)(*(int*)((char*)var3 + 0x138) + 0x26);
        }
    }

    if (var2 != 0) {
        sprintf(arg2, data_020f0cff, arg1, 0x62);
        sprintf(arg1, data_020f0cff, arg1, 0x66);
    } else {
        sprintf(arg1, data_020f0cff, arg1, 0x6e);
        sprintf(arg2, data_020f0cff, arg1, 0x65);
    }

    GameObject* var4 = func_0200ff1c(GameState::GetInstance(), arg0);
    if (var4 == NULL) {
        return;
    }

    int var5 = *(int*)((char*)var4 + Enum_02072d58_336);
    struct Struct_02072d58 {
        unsigned char unknown_0_0_ : 1;
        unsigned char unknown_0_1_ : 7;
    };
    struct Struct_02072d58* var6 = (struct Struct_02072d58*)(var5 + 0x49c);

    if (var6->unknown_0_0_ == 1) {
        arg1[0] = 0x77;
    }
}
