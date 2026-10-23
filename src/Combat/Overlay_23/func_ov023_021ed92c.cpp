#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);
struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);

// USA: func_ov023_021ed92c
extern "C" ARM int func_ov023_021ed92c(void) {
    GameState* var0 = GameState::GetInstance();
    unsigned char* var1 = (unsigned char*)func_02010828(var0);
    for (int var2 = 0; var2 < var1[0xf7c]; var2++) {
        unsigned char* var3 = var1 + var2;
        GameObject* var4 = func_0200ff1c(var0, var3[0xf78]);
        if (var4) {
            if (!func_02010088((struct Struct_02010088*)var4)) return 0;
        }
    }
    return 1;
}
