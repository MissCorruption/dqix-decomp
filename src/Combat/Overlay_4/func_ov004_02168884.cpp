#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

extern "C" int func_02011b50(void* arg0, int arg1);
extern "C" void func_02011af0(void* arg0);
extern "C" void* func_0205ec34(void);
extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);

// USA: func_ov004_02168884
extern "C" ARM int func_ov004_02168884(void) {
    GameState* var0 = GameState::GetInstance();
    func_02011b50(var0, 1);
    func_02011af0(var0);
    void* var1 = func_0205ec34();
    func_0206df6c(var1, (unsigned char*)var1 + 0x8c, 3, 0);
    return 0;
}
