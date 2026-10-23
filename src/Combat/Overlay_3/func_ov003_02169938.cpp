#include <globaldefs.h>
#include "GameState/GameState.h"

// USA: func_ov003_02169938
extern "C" ARM int func_ov003_02169938(int arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02010828(var0);
    int var2 = *(int*)((char*)var1 + 0xf6c);
    if (var2 < -arg1) {
        return 0;
    }
    var2 += arg1;
    *(int*)((char*)var1 + 0xf6c) = var2;
    if ((unsigned int)var2 > 0x98967f) {
        *(int*)((char*)var1 + 0xf6c) = 0x98967f;
    }
    return 1;
}
