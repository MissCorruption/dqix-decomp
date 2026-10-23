#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_0200fb8c(int*);
struct GameResources;
void SetMainBrightness(GameResources*, int, int);

// USA: func_ov001_0215b50c
extern "C" ARM int func_ov001_0215b50c(void* arg0, int arg1) {
    int var0;
    int var1 = func_ov017_021d60f4(arg0);
    var0 = -16;
    if (arg1 >= 2) {
        var0 = func_ov017_021d60f4((char*)arg0 + 0x8);
    }
    void* var2 = GameState::GetInstance();
    void* var3 = func_0200fb8c((int*)var2);
    if (var3 != NULL) {
        SetMainBrightness((GameResources*)var3, var0, var1);
        GetGameResources();
    }
    return 1;
}
