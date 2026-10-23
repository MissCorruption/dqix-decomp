#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02049ee8(unsigned char* arg0);

#if defined(jpn)
enum { Enum_ov000_02167bb4_668 = 0x218 };
#else
enum { Enum_ov000_02167bb4_668 = 0x29c };
#endif

// USA: func_ov000_02167bb4
extern "C" ARM int func_ov000_02167bb4(unsigned char* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = *(void**)(arg0 + Enum_ov000_02167bb4_668);
    int var2 = *(int*)((char*)var1 + arg1 * 4 + 0x8000 + 0xde0) & 0xff;
    GameObject* var3 = var0->GetCombatantByIndex(var2);
    int var4 = var3 ? (func_02049ee8((unsigned char*)var3) != 0) : 0;
    if (var4) return 0;
    if (arg1 < 0 || arg1 >= 8) return 0;
    return 0x7fffffff;
}
