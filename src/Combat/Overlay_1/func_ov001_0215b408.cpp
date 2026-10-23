#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_0200fb8c(int*);
struct GameResources;
void SetSubBrightness(GameResources*, int, int);

// USA: func_ov001_0215b408
extern "C" ARM int func_ov001_0215b408(void* arg0, int arg1) {
    int var0 = func_ov017_021d60f4(arg0);
    if (arg1 >= 2) {
        func_ov017_021d60f4((char*)arg0 + 0x8);
    }
    void* var1 = GameState::GetInstance();
    void* var2 = func_0200fb8c((int*)var1);
    if (var2 != NULL) {
        SetSubBrightness((GameResources*)var2, 0, var0);
        GetGameResources();
    }
    return 1;
}
