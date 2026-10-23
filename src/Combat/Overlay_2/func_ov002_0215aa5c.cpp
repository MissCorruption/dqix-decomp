#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02039730(void* arg0, int arg1);

// USA: func_ov002_0215aa5c
extern "C" ARM void func_ov002_0215aa5c(char* arg0) {
#if defined(jpn)
    enum { Enum_ov002_0215aa5c_3196 = 0xb40 };
#else
    enum { Enum_ov002_0215aa5c_3196 = 0xc7c };
#endif
    GameObject* var0 = GameState::GetInstance()->GetProtagonist();
    if (!var0) return;
    for (int var1 = 0; var1 < 7; var1++) {
        signed char var2 = (signed char)func_02039730(var0, var1);
        *(signed char*)(arg0 + var1 + 0x1000 + Enum_ov002_0215aa5c_3196) = var2;
    }
}
