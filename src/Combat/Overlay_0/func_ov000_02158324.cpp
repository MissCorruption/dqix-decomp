#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_02158324
extern "C" ARM int func_ov000_02158324(GameObject* arg0) {
    return (*(unsigned int*)((char*)arg0->currentStats_ + 0x14) & 0x80000000) != 0;
}
