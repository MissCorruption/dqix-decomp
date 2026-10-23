#include <globaldefs.h>
#include "GameState/GameState.h"
#include "GameState/Field3b0.h"
#include "Input/Input.h"

extern "C" void func_020a2794(void* arg0);
extern "C" void func_020a27a0(void* arg0);

// USA: func_ov015_021925a8
extern "C" ARM int func_ov015_021925a8() {
    GameState* var0 = GameState::GetInstance();
    if (!var0) return 0;
    void* var1 = func_020100bc(var0);
    if (!var1) return 0;
    if (g_keyManager.TestKeysHeld(0xc00)) {
        func_020a2794(var1);
        return 1;
    }
    func_020a27a0(var1);
    return 0;
}
