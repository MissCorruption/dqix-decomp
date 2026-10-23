#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" void func_ov017_021d6134(void*, int);
extern "C" void* func_ov023_021e8f28(int);

// USA: func_ov023_021e9864
extern "C" ARM int func_ov023_021e9864(void* arg0) {
    GameState::GetInstance();
    void* var0 = func_ov023_021e8f28(func_ov017_021d60f4(arg0));
    if (var0 == NULL) return 0;
    void* var1 = *(void**)((char*)var0 + 0x130);
    unsigned short var2 = *(unsigned short*)((char*)var1 + 0x4);
    func_ov017_021d6134((char*)arg0 + 0x8, var2);
    return 1;
}
