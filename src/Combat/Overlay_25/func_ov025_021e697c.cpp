#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_021820bc(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_02049f3c(unsigned char* arg0);
extern "C" void* func_ov000_02160130(void);
extern "C" void func_ov000_02167434(unsigned char* arg0, int arg1);

struct Struct_ov025_021e697c {
    char unknown_0_[8];
    unsigned char unknown_8_;
};

// USA: func_ov025_021e697c
extern "C" ARM int func_ov025_021e697c(struct Struct_ov025_021e697c* arg0, int arg1, int arg2, void* arg3) {
    int var0[8];
    GameState* var1 = GameState::GetInstance();
    int var2 = func_ov000_021820bc(arg3, arg1, arg0->unknown_8_, (int)&var0[0]);
    int var3;
    for (var3 = 0; var3 < var2; var3++) {
        GameObject* var4 = var1->GetCombatantByIndex(var0[var3]);
        if (var4 != NULL) {
            func_02049f3c((unsigned char*)var4);
            {
                void* var5 = func_ov000_02160130();
                int var6 = ((Object3D*)((unsigned char*)var4))->GetTexturePaletteOffset();
                func_ov000_02167434((unsigned char*)var5, var6);
            }
        }
    }
    return 1;
}
