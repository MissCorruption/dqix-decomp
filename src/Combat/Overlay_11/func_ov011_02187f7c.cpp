#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02011b50(void* arg0, int arg1);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" int func_0202ba00(int* arg0);
extern "C" int func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov011_02187f7c
extern "C" ARM int func_ov011_02187f7c(void* arg0) {
    int var0 = 0;
    GameState* var1 = GameState::GetInstance();
    if (func_02011b50(var1, 1)) {
        if (func_02011b50(var1, 2)) var0 = 1;
        if (func_02011b50(var1, 4)) var0 = 2;
        if (func_02011b50(var1, 8)) var0 = 3;
        int* var2 = (int*)func_0202ae18();
        if (func_0202b7d8(var2)) {
            if (func_0202ba00(var2) == 6) var0 = 4;
        }
    }
    func_ov017_021d6134(arg0, var0);
    return 1;
}
