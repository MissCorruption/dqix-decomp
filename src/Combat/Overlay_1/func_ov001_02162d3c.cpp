#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0201079c(char* arg0);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov001_02162d3c
extern "C" ARM int func_ov001_02162d3c(void* arg0) {
    int var0 = func_0201079c((char*)GameState::GetInstance());
    func_ov017_021d6134(arg0, var0 >= 0x13 ? 1 : 0);
    return 1;
}
