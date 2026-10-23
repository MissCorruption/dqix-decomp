#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov000_02161318(void* arg0, int arg1);

struct Struct_ov000_0217fe30 {
    char unknown_0_[0x24];
    unsigned char unknown_24_;
    char unknown_25_[0x448 - 0x25];
};

// USA: func_ov000_0217fe30
extern "C" ARM int func_ov000_0217fe30(char* arg0) {
    int var0 = 0;
    GameState* var1 = GameState::GetInstance();
    char* var2 = (char*)func_02010828(var1);
    unsigned char var3 = *(unsigned char*)(var2 + 0xf7c);
    unsigned char var4;
    for (var4 = 0; var4 < var3; var4++) {
        signed char var5 = *((signed char*)(var2 + var4 + 0xf00) + 0x78);
        struct Struct_ov000_0217fe30* var6 = (struct Struct_ov000_0217fe30*)func_ov000_02161318(arg0, var5);
        if (var6) {
            int var7 = (var6->unknown_24_ & 1) ? 1 : 0;
            var0 = (var0 | var7) ? 1 : 0;
        }
    }
    return var0;
}
