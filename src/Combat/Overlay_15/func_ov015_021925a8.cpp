#include <globaldefs.h>
#include "GameState/GameState.h"
#include "GameState/Field3b0.h"
#include "Input/Input.h"

extern "C" void func_020a2794(void* obj);
extern "C" void func_020a27a0(void* obj);

// USA: func_ov015_021925a8
extern "C" ARM int func_ov015_021925a8() {
    GameState* battle = GameState::GetInstance();
    if (!battle) return 0;
    void* field = func_020100bc(battle);
    if (!field) return 0;
    if (g_keyManager.TestKeysHeld(0xc00)) {
        func_020a2794(field);
        return 1;
    }
    func_020a27a0(field);
    return 0;
}
