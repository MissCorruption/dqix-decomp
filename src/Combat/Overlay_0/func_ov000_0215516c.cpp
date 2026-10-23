#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_0215516c
extern "C" ARM int func_ov000_0215516c(GameObject* arg0) {
    return (*(unsigned int*)(arg0->currentStats_->unk1 + 0) & 0x8000000) != 0;
}
