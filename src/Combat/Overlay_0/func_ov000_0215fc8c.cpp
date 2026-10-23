#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_0215eb1c(void* arg0, short* arg1, int arg2, int arg3);
extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern short data_ov000_02182c44[8];

struct Struct_ov000_0215fc8c { short unknown_0_[8]; };

struct Struct_ov000_0215fc8c_2 { char unknown_0_[0x10]; unsigned short unknown_10_; };

// USA: func_ov000_0215fc8c
extern "C" ARM int func_ov000_0215fc8c(void* arg0, int arg1) {
    short var0[8];
    *(struct Struct_ov000_0215fc8c*)var0 = *(struct Struct_ov000_0215fc8c*)data_ov000_02182c44;
    int var1 = (short)func_ov000_0215eb1c(arg0, var0, 8, 0);
    int var2 = 0;
    while (var2 < var1) {
        short var3 = var0[var2];
        GameState* var4 = GameState::GetInstance();
        GameObject* var5 = func_0200fea4(var4, var3);
        if (var5 != NULL) {
            struct Struct_ov000_0215fc8c_2* var6 = *(struct Struct_ov000_0215fc8c_2**)((char*)var5 + 0x144);
            if (var6 != NULL) {
                if (var6->unknown_10_ == arg1) {
                    return 1;
                }
            }
        }
        var2++;
    }
    return 0;
}
