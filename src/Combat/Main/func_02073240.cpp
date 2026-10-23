#include <globaldefs.h>

#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void func_020730e0(int arg0, int arg1);
extern "C" int func_ov017_0218fcf8(int arg0, int arg1, int arg2);

extern short data_020e8846[];

// USA: func_02073240
extern "C" ARM void func_02073240(int arg0) {
    GameState* var0 = GameState::GetInstance();
    GameObject* var1 = var0->GetGameObjectByIndex(arg0);
    if (!var1) return;

    short var2;
    int var3 = 0;
    while ((var2 = data_020e8846[var3]) >= 0) {
        func_020730e0(arg0, var2);
        var3++;
    }

    if (*(unsigned short*)((char*)var1 + 0x9c) == 0) return;

    int var4 = (int)GetGameResources();
    func_ov017_0218fcf8(var4, arg0, *(unsigned short*)((char*)var1 + 0x9c));
}
