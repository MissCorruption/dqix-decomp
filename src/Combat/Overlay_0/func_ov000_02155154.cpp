#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_02155154
extern "C" ARM int func_ov000_02155154(GameObject* arg0) {
    return (*(unsigned int*)(arg0->currentStats_->unk1 + 4) & 0x1000) != 0;
}
