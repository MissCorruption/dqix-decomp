#include <globaldefs.h>
#include "Graphics/LightingManager.h"
#include "GameState/GameState.h"

struct Struct_02000c9c_39 {
    char unknown_0_[0x20];
    short unknown_20_;
    short unknown_22_;
    short unknown_24_;
    short unknown_26_;
    short unknown_28_;
};

extern "C" float func_ov017_021d6110(void* arg0);
extern "C" unsigned int func_ov017_021d60f4(void* arg0);

// USA: func_ov001_02164004
extern "C" ARM int func_ov001_02164004(void* arg0, int arg1) {
    float var0 = func_ov017_021d6110(arg0);
    unsigned int var1 = 0;
    GameState* var2 = GameState::GetInstance();
    if (arg1 >= 2) {
        var1 = func_ov017_021d60f4((char*)arg0 + 8);
    }
    unsigned short var3 = var1 * var2->GetEffectiveDeltaTime();
    LightingManager::GetInstance()->BeginFade(4096.0f * var0, var3);
    return 1;
}
