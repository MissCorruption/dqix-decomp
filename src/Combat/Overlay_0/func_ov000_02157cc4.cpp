#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_02157cc4
extern "C" ARM int func_ov000_02157cc4(GameObject* arg0) {
    return (*(unsigned int*)(arg0->currentStats_->unk1 + 0) & 0x800000) != 0;
}
