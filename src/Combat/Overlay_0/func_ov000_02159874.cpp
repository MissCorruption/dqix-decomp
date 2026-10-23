#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov000_02159874
extern "C" ARM int func_ov000_02159874(GameObject* arg0) {
    return (*(unsigned int*)((char*)arg0->currentStats_ + 0x14) & 0x200) != 0;
}
