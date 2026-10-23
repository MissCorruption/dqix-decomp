#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_0200fb8c(int*);
struct GameResources;
void SetSubBrightness(GameResources*, int, int);

// USA: func_ov001_0215b408
extern "C" ARM int func_ov001_0215b408(void* self, int mode) {
    int frames = func_ov017_021d60f4(self);
    if (mode >= 2) {
        func_ov017_021d60f4((char*)self + 0x8);
    }
    void* battle = GameState::GetInstance();
    void* obj = func_0200fb8c((int*)battle);
    if (obj != NULL) {
        SetSubBrightness((GameResources*)obj, 0, frames);
        GetGameResources();
    }
    return 1;
}
