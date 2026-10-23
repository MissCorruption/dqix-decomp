#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02155f40_336 = 0x144 };
enum { Enum_ov003_02155f40_2384 = 0x8b8 };
#else
enum { Enum_ov003_02155f40_336 = 0x150 };
enum { Enum_ov003_02155f40_2384 = 0x950 };
#endif
#include "GameState/GameState.h"

extern "C" void* func_ov003_02156034(void* arg0);

// USA: func_ov003_02155f40
extern "C" ARM int func_ov003_02155f40(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetPartyMemberByIndex(arg1);
    int var2;
    if (var1 != NULL) {
        void* var3 = *(void**)((char*)var1 + Enum_ov003_02155f40_336);
        int var4 = *(int*)((char*)var3 + Enum_ov003_02155f40_2384);
        var2 = (var4 == (int)func_ov003_02156034(arg0)) ? 1 : 0;
    } else {
        var2 = 0;
    }
    return var2;
}
