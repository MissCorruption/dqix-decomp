#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

extern "C" int func_02011b50(void* obj, int mask);
extern "C" void func_02011af0(void* obj);
extern "C" void* func_0205ec34(void);
extern "C" void func_0206df6c(void* unused, unsigned char* array, int bit, int value);

// USA: func_ov004_02168884
extern "C" ARM int func_ov004_02168884(void) {
    GameState* battle = GameState::GetInstance();
    func_02011b50(battle, 1);
    func_02011af0(battle);
    void* p = func_0205ec34();
    func_0206df6c(p, (unsigned char*)p + 0x8c, 3, 0);
    return 0;
}
