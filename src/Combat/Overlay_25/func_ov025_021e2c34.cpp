#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov025_021e2c34_28 = 0xc };
#else
enum { Enum_ov025_021e2c34_28 = 0x1c };
#endif

#include "GameState/GameState.h"

struct Struct_ov000_0215440c_2;
struct Struct_ov000_02160094;
struct Struct_02059cfc_4;
struct Struct_ov025_021e2c34;

extern "C" struct Struct_ov000_02160094* func_ov000_02160094(struct Struct_ov000_0215440c_2* arg0, int arg1);
extern int data_ov025_021ef988;

// USA: func_ov025_021e2c34
extern "C" ARM int func_ov025_021e2c34(void* arg0, struct Struct_ov000_0215440c_2* arg1) {
    struct Struct_ov000_02160094* var0 = func_ov000_02160094(arg1, 0);
    if (!var0) return 0;
    int var1 = *(unsigned short*)((char*)var0 + 0x20);
    GameState* var2 = GameState::GetInstance();
    GameObject* var3 = var2->GetGameObjectByIndex(var1);
    int var4 = *(int*)((char*)&data_ov025_021ef988 + Enum_ov025_021e2c34_28);
    if (var4 & 4) return 0;
    if (((Object3D*)((struct Struct_02059cfc_4*)var3))->HasAnimationStopped()) return 1;
    return ((Object3D*)((struct Struct_ov025_021e2c34*)var3))->GetOffset40Bit1() != 0;
}
