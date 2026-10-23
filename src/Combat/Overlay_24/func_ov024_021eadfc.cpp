#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov024_021eadfc
extern "C" ARM int func_ov024_021eadfc(GameObject* arg0) {
    return (*(unsigned int*)((char*)arg0->currentStats_ + 0x18) & 0x200) != 0;
}
