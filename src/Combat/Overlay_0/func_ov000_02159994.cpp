#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_02159994
extern "C" ARM int func_ov000_02159994(GameObject* arg0) {
    return (*(unsigned int*)((char*)arg0->currentStats_ + 0x14) & 0x8000) != 0;
}
