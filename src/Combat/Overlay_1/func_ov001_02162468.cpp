#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void func_ov017_0219ff58(void* arg0, int arg1, int arg2, int arg3);

// USA: func_ov001_02162468
extern "C" ARM int func_ov001_02162468(void) {
    GameResources* var0 = GetGameResources();
    func_ov017_0219ff58(var0, 0, 1, 0);
    return 1;
}
