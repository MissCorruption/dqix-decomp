#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021c9d2c(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);

// USA: func_ov000_0217616c
extern "C" ARM void func_ov000_0217616c(char* arg0) {
    GameObject* var0 = func_0200ff1c(GameState::GetInstance(), *(int*)(arg0 + 0x4c));
    if (var0 == 0) {
        return;
    }
    func_ov017_021c9d2c(*(int*)(arg0 + 0x4c), *(short*)(arg0 + 0xc), *(short*)(arg0 + 0x8), *(short*)(arg0 + 0xe),
                         *(short*)(arg0 + 0xa), *(int*)(arg0 + 0x28), 0, 0, 0);
}
