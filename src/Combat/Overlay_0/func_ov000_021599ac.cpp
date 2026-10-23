#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_021599ac
extern "C" ARM int func_ov000_021599ac(GameObject* arg0) {
    return (*(int*)((char*)arg0->currentStats_ + 0x14) & 0x10000) != 0;
}
