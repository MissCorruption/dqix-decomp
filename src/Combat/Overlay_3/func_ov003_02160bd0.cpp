#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov003_02160bd0
extern "C" ARM void* func_ov003_02160bd0(void* arg0, int arg1) {
    if (arg1 < 0) return NULL;
    void* var0 = func_02010828(GameState::GetInstance());
    return (char*)var0 + 0xf80 + arg1 * 0x23c;
}
