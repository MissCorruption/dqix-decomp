#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_02161544_1024 = 0x200 };
enum { Enum_ov003_02161544_130 = 0xaa };
#else
enum { Enum_ov003_02161544_1024 = 0x400 };
enum { Enum_ov003_02161544_130 = 0x82 };
#endif

extern "C" void* func_02010828(GameState* arg0);

// USA: func_ov003_02161544
extern "C" ARM int func_ov003_02161544(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_02010828(var0);
    unsigned char var2 = 0;
    unsigned char var3 = 0;
    while (var3 < var1[0xf7c]) {
        unsigned char* var4 = var1 + var3;
        unsigned char var5 = var4[0xf78];
        if (var5 != *(short*)((char*)arg0 + Enum_ov003_02161544_1024 + Enum_ov003_02161544_130)) {
            GameObject* var6 = var0->GetCombatantByIndex(var5);
            if (var6 != NULL) {
                int* var7 = *(int**)((char*)var6 + 0x130);
                if (*(unsigned short*)((char*)var7 + 4) != 0) {
                    var2 = var2 + 1;
                }
            }
        }
        var3 = var3 + 1;
    }
    return var2;
}
