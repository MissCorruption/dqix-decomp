#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_02156b20
extern "C" ARM int func_ov000_02156b20(GameObject* arg0) {
    return (*(unsigned int*)(arg0->currentStats_->unk1 + 0) & 0x40) != 0;
}
