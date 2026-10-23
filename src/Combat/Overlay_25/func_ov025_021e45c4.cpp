#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov000_0215440c_2;
struct Struct_ov000_02160094;
struct Struct_ov000_0215440c;
struct Struct_ov000_021600f8;

extern "C" struct Struct_ov000_02160094* func_ov000_02160094(struct Struct_ov000_0215440c_2* arg0, int arg1);
extern "C" struct Struct_ov000_021600f8* func_ov000_021600f8(struct Struct_ov000_0215440c* arg0, int arg1);
extern "C" void func_02033920(void* arg0, int arg1, int arg2);

// USA: func_ov025_021e45c4
extern "C" ARM int func_ov025_021e45c4(void* arg0, void* arg1) {
    struct Struct_ov000_02160094* var0 = func_ov000_02160094((struct Struct_ov000_0215440c_2*)arg1, 0);
    struct Struct_ov000_021600f8* var1 = func_ov000_021600f8((struct Struct_ov000_0215440c*)arg1, 0);
    if (var0 == 0 || var1 == 0) return 1;
    GameState* var2 = GameState::GetInstance();
    GameObject* var3 = var2->GetCombatantByIndex(*(unsigned short*)((char*)var0 + 0x20));
    if (var3 != 0) {
        func_02033920(var3, *(short*)((char*)var1 + 0xe), 0);
    }
    return 1;
}
