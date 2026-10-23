#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_0200fd48(GameState* arg0, int arg1);

// USA: func_02057db8
extern "C" ARM void func_02057db8(void* arg0, int arg1) {
    if (arg1 < 0xd0) return;
    if (arg1 > 0xdf) return;
    func_0200fd48(GameState::GetInstance(), arg1);
}
