#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_020397c0(void* arg0);

// USA: func_ov017_021ab67c
extern "C" ARM void func_ov017_021ab67c(unsigned char* arg0) {
    arg0[1] = 1;
    func_020397c0(GameState::GetInstance()->GetUnknownGameObject());
}
