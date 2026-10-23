#include <globaldefs.h>
#include "Resource/ActionDataTables.h"
#include "GameState/GameState.h"

extern "C" int func_ov000_021537b8(char* arg0, short arg1, void* arg2);

extern "C" int func_ov000_021543f4(GameObject* arg0);
extern "C" void* func_02079e2c(char* arg0, int arg1);

// USA: func_ov000_0215f110
extern "C" ARM void func_ov000_0215f110(char* arg0) {
    char* var0 = arg0;
    Struct_02108e10* var1 = func_020797dc();
    int var2 = 0;
    while (var2 < *(int*)(var0 + 0x8000 + 0xe7c)) {
        char* var3 = (char*)(*(int**)(var0 + 0x8000 + 0xe78)) + var2 * 0x28;
        short var4 = *(short*)((char*)(*(void**)(var3 + 0x10)) + 0x20);
        GameState* var5 = GameState::GetInstance();
        GameObject* var6 = var5->GetCombatantByIndex(var4);
        if (var6 == NULL) {
            return;
        }
        if (!func_ov000_021543f4(var6)) {
            short var7 = *(short*)var3;
            void* var8 = func_02079e2c((char*)var1, var7);
            if (var8 != NULL) {
                unsigned int var9 = *(unsigned int*)((char*)var8 + 8);
                if (((var9 << 3) >> 31) != 0) {
                    short var10 = *(short*)((char*)(*(void**)(var3 + 0x10)) + 0x20);
                    func_ov000_021537b8(var0, var10, var3);
                }
            }
        }
        var2++;
    }
}
