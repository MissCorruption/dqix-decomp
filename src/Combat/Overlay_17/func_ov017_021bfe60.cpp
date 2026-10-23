#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

extern "C" void func_020397c0(void* arg0);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a27ac(void* arg0);

// USA: func_ov017_021bfe60
extern "C" ARM int func_ov017_021bfe60(unsigned char* arg0) {
    GameState* var0 = GameState::GetInstance();
    int var1 = var0->GetEffectiveDeltaTime();
    unsigned short* var2 = (unsigned short*)(arg0 + 8);
    if ((unsigned int)var1 < (unsigned int)*var2) {
        *var2 = *var2 - var1;
        return 5;
    }

    *var2 = 0;
    GameObject* var3 = var0->GetUnknownGameObject();
    if (var3 != NULL) {
        func_020397c0(var3);
    }
    void* var4 = GetGameResources();
    int var5 = func_020100f8((char*)var0);
    if (var5 != 0) {
        func_020a27ac((void*)var5);
    }
    if (var4 != NULL) {
        ClearFlags04((GameResources*)var4, 0x80);
    }
    *var2 = 0x12c;
    return 6;
}
