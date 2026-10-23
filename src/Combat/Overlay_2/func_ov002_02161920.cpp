#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" void* func_02010828(GameState* arg0);

// USA: func_ov002_02161920
extern "C" ARM int func_ov002_02161920(void) {
    if (func_0202b7d8((int*)func_0202ae18())) {
        GameState* var0 = GameState::GetInstance();
        unsigned char* var1 = (unsigned char*)func_02010828(var0);
        unsigned char var2 = 0;
        while (var2 < var1[0xf7c]) {
            unsigned char* var3 = var1 + var2;
            if (var3[0xf78] == 0) {
                return 2;
            }
            var2++;
        }
        return 1;
    }
    return 0;
}
