#include <globaldefs.h>
#include "GameState/GameState.h"


// USA: func_02058618
extern "C" ARM int func_02058618(void*) {
    GameState* var0 = GameState::GetInstance();
    int var1 = 0;
    int var2;
    for (var2 = 0; var2 < 0x10; var2++) {
        if (var0->GetGameObjectByIndex(var2 + 0xd0)) {
            var1++;
        }
    }
    return var1;
}
