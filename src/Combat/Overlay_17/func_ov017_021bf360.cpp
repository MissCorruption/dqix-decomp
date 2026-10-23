#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020421a0();
extern "C" void func_0204359c(void* arg0, int arg1);
extern "C" void func_020439b0(void* arg0, int arg1);

// USA: func_ov017_021bf360
extern "C" ARM void func_ov017_021bf360(void*) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = (void*)func_020421a0();
    int var2 = var0->GetTickCount();
    func_0204359c(var1, var2);
    func_020439b0(var1, 0);
}
