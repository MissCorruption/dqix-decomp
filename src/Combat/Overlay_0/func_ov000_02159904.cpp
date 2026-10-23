#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_02159904
extern "C" ARM int func_ov000_02159904(GameObject* arg0) {
    return (*(unsigned int*)((char*)arg0->currentStats_ + 0x18) & 0x4) != 0;
}
