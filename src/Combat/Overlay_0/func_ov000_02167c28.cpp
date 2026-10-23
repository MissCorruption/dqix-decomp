#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_02167c28_668 = 0x218 };
#else
enum { Enum_ov000_02167c28_668 = 0x29c };
#endif
#include "GameState/GameState.h"

extern "C" int func_ov000_02167bb4(unsigned char* arg0, int arg1);

// USA: func_ov000_02167c28
extern "C" ARM int func_ov000_02167c28(unsigned char* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetCombatantByIndex(arg1);
    if (!var1) return -1;

    for (int var2 = 0; var2 < 8; var2++) {
        int* var3 = (int*)((char*)*(void**)(arg0 + Enum_ov000_02167c28_668) + 0x8000 + 0xde0);
        int var4 = var3[var2] & 0xff;
        if (var4 == arg1) {
            var3[var2] = -1;
            break;
        }
    }

    int var5 = ((Object3D*)((unsigned char*)var1))->GetRadius();
    for (int var6 = 0; var6 < 8; var6++) {
        if (func_ov000_02167bb4(arg0, var6) < var5) continue;
        *(int*)((char*)*(void**)(arg0 + Enum_ov000_02167c28_668) + var6 * 4 + 0x8000 + 0xde0) = arg1;
        return var6;
    }
    return -1;
}
