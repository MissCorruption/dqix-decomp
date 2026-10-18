#include <globaldefs.h>
#include "GameState/GameState.h"
#include "GameState/Field3b0.h"
#include "Input/Input.h"

void SetField0x238True_020a2794(void* obj);
void SetField0x238False_020a27a0(void* obj);

// USA: func_ov015_021925a8  (semantic: UpdateField238FlagStateC00_021925a8)
extern "C" ARM int func_ov015_021925a8() {
    GameState* battle = GameState::GetInstance();
    if (!battle) return 0;
    void* field = GetField0x3b0Value_020100bc(battle);
    if (!field) return 0;
    if (g_keyManager.TestKeysHeld(0xc00)) {
        SetField0x238True_020a2794(field);
        return 1;
    }
    SetField0x238False_020a27a0(field);
    return 0;
}
