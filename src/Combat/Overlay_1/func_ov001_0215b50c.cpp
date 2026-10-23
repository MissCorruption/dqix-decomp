#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_0200fb8c(int*);
struct GameResources;
void SetMainBrightness(GameResources*, int, int);

// USA: func_ov001_0215b50c
extern "C" ARM int func_ov001_0215b50c(void* self, int mode) {
    int value;
    int frames = func_ov017_021d60f4(self);
    value = -16;
    if (mode >= 2) {
        value = func_ov017_021d60f4((char*)self + 0x8);
    }
    void* battle = GameState::GetInstance();
    void* obj = func_0200fb8c((int*)battle);
    if (obj != NULL) {
        SetMainBrightness((GameResources*)obj, value, frames);
        GetGameResources();
    }
    return 1;
}
