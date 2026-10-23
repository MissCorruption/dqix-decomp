#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02026b7c_150 = 0xca };
enum { Enum_02026b7c_2560 = 0x900 };
#else
enum { Enum_02026b7c_150 = 0x96 };
enum { Enum_02026b7c_2560 = 0xa00 };
#endif

#include "GameState/GameState.h"


// USA: func_02026b7c
extern "C" ARM void func_02026b7c(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1;
    arg0 += Enum_02026b7c_150;
    for (var1 = 0; var1 < 4; var1++) {
        if (var0->GetGameObjectByIndex(var1)) {
            arg0[Enum_02026b7c_2560] |= (1 << var1);
        }
    }
}
