#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_02156258
extern "C" ARM int func_ov000_02156258(GameObject* arg0) {
    return (*(unsigned int*)(arg0->currentStats_->unk1 + 4) & 0x1) != 0;
}
