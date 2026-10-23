#include <globaldefs.h>

#include "GameState/GameState.h"

struct Struct_0202b2f0;

extern "C" void* func_0202ae18(void);

extern "C" int func_0202c1c0(struct Struct_0202b2f0* arg0, int arg1);
extern "C" GameObject* func_0200ff58(GameState* arg0, int arg1);
extern "C" void func_02079710(unsigned char* arg0, int arg1, int arg2);

// USA: func_0207973c
extern "C" ARM int func_0207973c(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    struct Struct_0202b2f0* var1 = (struct Struct_0202b2f0*)func_0202ae18();
    int var2;
    for (var2 = 0; var2 < 4; var2++) {
        if (!func_0202c1c0(var1, var2) || func_0200ff58(var0, var2) != 0) {
            func_02079710(arg0, var2, 1);
        }
    }
    return (arg0[0x17e] & 0xf) == 0xf ? 1 : 0;
}
