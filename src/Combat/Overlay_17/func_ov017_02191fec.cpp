#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_ov017_0219219c(char* arg0, int arg1);
extern "C" int func_ov017_021920dc(int arg0, int arg1);

// USA: func_ov017_02191fec
extern "C" ARM int func_ov017_02191fec(int arg0, int arg1) {
    int var0 = 1;
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = var1->GetCombatantByIndex(arg1);
    if (var2 != NULL && (*(int*)((char*)var2->currentStats_ + 0x14) & 0x1000000)) {
        if (func_ov017_0219219c((char*)arg0, arg1) != 0) {
            unsigned char* var3 = (unsigned char*)func_ov017_0219219c((char*)arg0, arg1);
            if (var3) *var3 |= 1;
            unsigned char* var4 = (unsigned char*)func_ov017_0219219c((char*)arg0, arg1);
            if (var4) *var4 |= 4;
        }
        var0 = 0;
    }
    if (func_ov017_021920dc(arg0, arg1) != 0) {
        if (func_ov017_0219219c((char*)arg0, arg1) != 0) {
            unsigned char* var5 = (unsigned char*)func_ov017_0219219c((char*)arg0, arg1);
            if (var5) *var5 |= 1;
            unsigned char* var6 = (unsigned char*)func_ov017_0219219c((char*)arg0, arg1);
            if (var6) *var6 |= 2;
        }
        var0 = 0;
    }
    return var0;
}
