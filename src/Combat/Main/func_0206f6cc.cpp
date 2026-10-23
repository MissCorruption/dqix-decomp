#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0200fb8c(int* arg0);
extern "C" void func_ov017_021bac24(int arg0);
extern "C" void func_ov017_021ba8e0(int arg0);
extern "C" void func_ov003_0217e300(int arg0);
extern "C" void func_ov017_021b2c24(int arg0);
extern "C" void func_ov017_021b65e0(int arg0, int arg1);
extern "C" void func_ov017_0218d77c(int arg0, int arg1);
extern "C" void func_ov017_021b146c(int arg0, int arg1);
extern "C" void func_ov017_021c12fc(int arg0, int arg1, int arg2);
extern "C" void func_ov017_021a8614(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

// USA: func_0206f6cc
extern "C" ARM int func_0206f6cc(unsigned char* arg0, int arg1) {
    if (arg1 < 0 || *(int*)(arg0 + 4) <= arg1) {
        return 1;
    }

    int var0 = func_0200fb8c((int*)GameState::GetInstance());
    unsigned char var1 = arg0[arg1];
    switch (var1) {
        case 1: func_ov017_021bac24(var0); break;
        case 2: func_ov017_021ba8e0(var0); break;
        case 3: func_ov003_0217e300(var0); break;
        case 4: func_ov017_021b2c24(var0); break;
        case 5: func_ov017_021b65e0(var0, 0); break;
        case 6: func_ov017_0218d77c(var0, 3); break;
        case 7: func_ov017_021b146c(var0, 0); break;
        case 8: func_ov017_021b65e0(var0, 1); break;
        case 9: func_ov017_021c12fc(var0, 0, 0); break;
        case 10: func_ov017_021c12fc(var0, 1, 0); break;
        case 11: func_ov017_021a8614(var0, 0, 1, 2, 3, 4); break;
        case 12: func_ov017_0218d77c(var0, 3); break;
        case 0:
        default:
            return 1;
    }
    return 0;
}
