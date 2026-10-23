#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_0215997c
extern "C" ARM int func_ov000_0215997c(GameObject* arg0) {
    return (*(unsigned int*)((char*)arg0->currentStats_ + 0x14) & 0x4000) != 0;
}
