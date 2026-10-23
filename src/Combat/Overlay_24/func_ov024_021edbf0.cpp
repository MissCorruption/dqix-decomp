#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov024_021edbf0
extern "C" ARM int func_ov024_021edbf0(GameObject* arg0) {
    return (*(unsigned int*)((char*)arg0->currentStats_ + 0x14) & 0x20000000) != 0;
}
