#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);
struct Struct_02083994;
extern "C" int func_02083994(struct Struct_02083994* arg0, int arg1);
struct Struct_0207cf30_3;
extern "C" signed char func_020a0b3c(struct Struct_0207cf30_3* arg0, int arg1);
extern "C" short func_0207c7a0(void* arg0, int arg1, int arg2);

// USA: func_02086c4c
extern "C" ARM short func_02086c4c(unsigned char* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    short var1 = 0;
    int var2;
    if (arg1 < 0) {
        goto zero;
    }
    if (arg1 <= 3) {
        var2 = 1;
        goto after;
    }
zero:
    var2 = 0;
after:
    if (var2) {
        GameObject* var3 = func_0200ff1c(var0, arg1);
        if (var3 == NULL) {
            return 0;
        }
        void* var4 = (void*)func_02053c6c((unsigned char*)var3);
        if (var4 == NULL) {
            return 0;
        }
        var1 += func_02083994((struct Struct_02083994*)var4, arg2);
    } else if (arg1 == 4) {
        var1 = func_020a0b3c((struct Struct_0207cf30_3*)arg0, arg2);
    } else if (arg1 == 5) {
        var1 = func_0207c7a0(arg0 + 0x1d4, arg2, 9);
    } else if (arg1 == 6) {
        var1 = func_020a0b3c((struct Struct_0207cf30_3*)(arg0 + 0xe04), arg2);
    }
    return var1;
}
