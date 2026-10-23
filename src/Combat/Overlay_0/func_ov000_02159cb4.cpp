#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x144
#define REGION_OFFSET_1 0x8b8
#else
#define REGION_OFFSET_0 0x150
#define REGION_OFFSET_1 0x950
#endif

#include "GameState/GameState.h"

extern short data_ov000_02182d54;
extern short data_ov000_02182d56[];

// USA: func_ov000_02159cb4
extern "C" ARM int func_ov000_02159cb4(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff1c(var0, arg1);
    if (!var1) return 0;

    int var2 = 0;
    while (*(short*)((char*)&data_ov000_02182d54 + var2 * 4) != -1) {
        void* var3 = *(void**)((char*)var1 + REGION_OFFSET_0);
        short var4 = *(short*)((char*)&data_ov000_02182d54 + var2 * 4);
        if (var4 == *(int*)((char*)var3 + REGION_OFFSET_1)) {
            return data_ov000_02182d56[var2 * 2];
        }
        var2++;
    }
    return 0;
}
