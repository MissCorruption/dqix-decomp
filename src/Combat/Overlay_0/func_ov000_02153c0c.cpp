#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_02153c0c
extern "C" ARM int func_ov000_02153c0c(GameObject* arg0) {
    return (*(unsigned int*)(arg0->currentStats_->unk1 + 4) & 0x2000) != 0;
}
