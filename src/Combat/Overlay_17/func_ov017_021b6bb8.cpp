#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);
extern "C" GameObject* func_0200ff1c(GameState* arg0, int arg1);
extern "C" int func_02053c6c(unsigned char* arg0);
struct Struct_0207cf30_4;
extern "C" int func_020a095c(struct Struct_0207cf30_4* arg0, int arg1, int arg2);

// USA: func_ov017_021b6bb8
extern "C" ARM void func_ov017_021b6bb8(int arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02010828(var0);
    GameObject* var2 = func_0200ff1c(var0, arg0);
    if (var2 == NULL) {
        return;
    }

    char* var3 = (char*)func_02053c6c((unsigned char*)var2);
    unsigned char var4 = 0;
    while (var4 < 8) {
        char* var5 = var3 + var4 * 2 + 0x400;
        short var6 = *(short*)(var5 + 0x54);
        if (var6 > 0) {
            func_020a095c((struct Struct_0207cf30_4*)var1, var6, 1);
        }
        var4 = (var4 + 1) & 0xff;
    }
}
