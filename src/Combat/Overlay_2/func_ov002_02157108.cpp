#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);

struct Struct_020a0b8c;
extern "C" int func_020a0b8c(struct Struct_020a0b8c* arg0);
extern "C" int func_02053c6c(unsigned char* arg0);
struct Struct_0207d300;
extern "C" int func_02083960(struct Struct_0207d300* arg0);

// USA: func_ov002_02157108
extern "C" ARM int func_ov002_02157108(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    int var1 = 0;
    if (arg1 == 5) {
        void* var2 = (char*)func_02010828(var0) + 0xe04;
        var1 = func_020a0b8c((struct Struct_020a0b8c*)var2);
    } else if (arg1 == 4) {
        void* var3 = func_02010828(var0);
        var1 = func_020a0b8c((struct Struct_020a0b8c*)var3);
    } else {
        GameObject* var4 = func_0200ff1c(var0, arg1);
        if (var4 != NULL) {
            int var5 = func_02053c6c((unsigned char*)var4);
            var1 = func_02083960((struct Struct_0207d300*)var5);
        }
    }
    return var1;
}
