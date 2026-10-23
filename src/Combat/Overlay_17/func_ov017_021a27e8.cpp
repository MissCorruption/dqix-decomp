#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_0200fd48(GameState* arg0, int arg1);
extern "C" void* func_02057924(void);
extern "C" void func_02057f00(void* arg0, int arg1);

// USA: func_ov017_021a27e8
extern "C" ARM void func_ov017_021a27e8(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02057924();

    int var2;
    for (var2 = 7; var2 <= 0x12; var2++) {
        func_0200fd48(var0, var2);
    }

    int var3;
    for (var3 = 0x78; var3 <= 0x8b; var3++) {
        func_02057f00(var1, var3);
    }
}
