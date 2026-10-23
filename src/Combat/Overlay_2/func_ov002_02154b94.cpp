#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov002_02154b94
extern "C" ARM int func_ov002_02154b94(void* arg0, int arg1) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), arg1);
    if (!var0) {
        return 0;
    }
    int var1 = *(unsigned short*)((char*)var0 + 0x100
#if defined(jpn)
        + 0xa6);
#else
        + 0xb2);
#endif
    if (var1 != 0) {
        return 1;
    }
    return 0;
}
