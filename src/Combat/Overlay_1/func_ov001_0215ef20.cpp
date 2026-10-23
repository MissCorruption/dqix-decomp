#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov017_021d6134(void*, int);
extern "C" int func_020100a8(GameState* battleStruct);

// USA: func_ov001_0215ef20
extern "C" ARM int func_ov001_0215ef20(void* self) {
    GameState* battle = GameState::GetInstance();
    int v = func_020100a8(battle);
    func_ov017_021d6134(self, v);
    return 1;
}
