#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_021598d4
extern "C" ARM int func_ov000_021598d4(GameObject* arg0) {
    return (*(unsigned int*)((char*)arg0->currentStats_ + 0x14) & 0x400000) != 0;
}
