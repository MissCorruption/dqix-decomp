#include <globaldefs.h>
extern "C" void func_020a0a08(struct KeyMap020a0a08*, int, int);
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void* p);

// USA: func_0209d974
extern "C" ARM int func_0209d974(void* combatant) {
    GameState* battleStruct = GameState::GetInstance();
    void* table = func_02010828(battleStruct);
    int v1 = func_ov017_021d60f4(combatant);
    int v2 = func_ov017_021d60f4((char*)combatant + 8);
    func_020a0a08((struct KeyMap020a0a08*)((char*)table + 0xe04), (int)((short)v1), (int)((signed char)v2));
    return 1;
}
