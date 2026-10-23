#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void*);

// USA: func_ov001_021605d4
extern "C" ARM int func_ov001_021605d4(void* arg0) {
    int var0 = func_ov017_021d60f4(arg0);
    int var1 = func_ov017_021d60f4((char*)arg0 + 0x8);
    GameState* var2 = GameState::GetInstance();
    int var3 = var0 * 0xc;
    GameObject* var4 = var2->GetGameObjectByIndex(var3 + 0x1c);
    if (var4 != NULL && var4->obj3D_.unknown_2_ >= 0) {
        if (var1 != 0) {
            var4->obj3D_.MakeVisible();
        } else {
            var4->obj3D_.MakeHidden();
        }
    }
    GameObject* var5 = var2->GetGameObjectByIndex(var3 + 0x1d);
    if (var5 != NULL && var5->obj3D_.unknown_2_ >= 0) {
        if (var1 != 0) {
            var5->obj3D_.MakeVisible();
        } else {
            var5->obj3D_.MakeHidden();
        }
    }
    return 1;
}
