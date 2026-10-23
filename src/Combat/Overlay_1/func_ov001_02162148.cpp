#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void*);

// USA: func_ov001_02162148
extern "C" ARM int func_ov001_02162148(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = func_ov017_021d60f4(arg0);
    ((GameState*)((char*)var0))->SetTimeOfDay((TimeOfDay)(var1));
    return 1;
}
