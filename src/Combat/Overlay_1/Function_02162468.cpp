#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void func_ov017_0219ff58(void* base, int a, int b, int c);

// KEEP-NAME
// USA: func_ov001_02162468
ARM int Function_02162468(void) {
    GameResources* base = GetGameResources();
    func_ov017_0219ff58(base, 0, 1, 0);
    return 1;
}
