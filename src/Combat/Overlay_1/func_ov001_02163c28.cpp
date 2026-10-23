#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010768(void* arg0);
extern "C" int func_ov017_021d6134(void* arg0, int arg1);

// USA: func_ov001_02163c28
extern "C" ARM int func_ov001_02163c28(void* arg0) {
#if defined(jpn)
    enum { Enum_ov001_02163c28_1060 = 0x444 };
#else
    enum { Enum_ov001_02163c28_1060 = 0x424 };
#endif
    void* var0 = *(void**)func_02010768(GameState::GetInstance());
    int var1 = 0;
    if (var0 != NULL) {
        var1 = *(void**)((char*)var0 + Enum_ov001_02163c28_1060) != NULL;
    }
    func_ov017_021d6134(arg0, var1);
    return 1;
}
