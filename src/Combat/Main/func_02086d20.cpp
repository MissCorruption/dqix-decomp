#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);

struct Struct_0207d300;
extern "C" int func_02083960(struct Struct_0207d300* arg0);

// USA: func_02086d20
extern "C" ARM int func_02086d20(unsigned char* arg0) {
    short var0 = 0;
    GameState* var1 = GameState::GetInstance();
    int var2 = 0;
    while (var2 < arg0[0xf7c]) {
        unsigned char* var3 = arg0 + var2;
        GameObject* var4 = func_0200ff1c(var1, var3[0xf78]);
        if (var4 != 0) {
            int var5 = func_02053c6c((unsigned char*)var4);
            if (var5 != 0) {
                var0 = var0 + func_02083960((struct Struct_0207d300*)var5);
            }
        }
        var2++;
    }
    return var0;
}
