#include <globaldefs.h>
extern "C" void func_020a0a08(struct Struct_02061c04_23*, int, int);
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void* arg0);

// USA: func_0209d974
extern "C" ARM int func_0209d974(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02010828(var0);
    int var2 = func_ov017_021d60f4(arg0);
    int var3 = func_ov017_021d60f4((char*)arg0 + 8);
    func_020a0a08((struct Struct_02061c04_23*)((char*)var1 + 0xe04), (int)((short)var2), (int)((signed char)var3));
    return 1;
}
