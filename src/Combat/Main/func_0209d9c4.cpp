#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);
struct Struct_0207cf30_3;
extern "C" signed char func_020a0b3c(struct Struct_0207cf30_3* arg0, int arg1);

extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_0209d9c4
extern "C" ARM int func_0209d9c4(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02010828(var0);
    int var2 = func_ov017_021d60f4(arg0);
    struct Struct_0207cf30_3* var3 = (struct Struct_0207cf30_3*)((char*)var1 + 0x204 + 0xc00);
    signed char var4 = func_020a0b3c(var3, (short)var2);
    func_ov017_021d6134((char*)arg0 + 0x8, var4);
    return 1;
}
