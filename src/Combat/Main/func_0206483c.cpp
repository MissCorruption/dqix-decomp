#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);

// USA: func_0206483c
extern "C" ARM int func_0206483c(void* arg0, char* arg1) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = func_0200ff1c(var0, 0);
    char* var2 = (char*)func_02053c6c((unsigned char*)var1) + 0x3c;
    int var3 = strlen(var2);
    int var4;
    int var5;

    for (var4 = 0; var4 < var3; arg1++, var2++, var4++) {
        if ((var4 % 2) == 0) {
            if (*arg1 == *var2) {
                var5 = 1;
            } else {
                var5 = 0;
            }
        } else if (var5) {
            if (*arg1 != *var2) {
                return 0;
            }
        } else {
            unsigned char var6 = *(unsigned char*)arg1;
            unsigned char var7 = *(unsigned char*)var2;
            int var8 = 0x5f;
            if (var6 > 0x7f) {
                var8 = 0x5e;
            }
            int var9 = (var6 + var8) & 0xff;
            if (var9 != var7) {
                return 0;
            }
        }
    }
    return 1;
}
