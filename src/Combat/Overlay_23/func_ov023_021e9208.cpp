#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0201079c(char* arg0);
extern "C" int func_020107d0(char* arg0);
extern "C" void func_ov017_021d6134(void*, unsigned int);

// USA: func_ov023_021e9208
extern "C" ARM int func_ov023_021e9208(void* arg0) {
    char* var0 = (char*)GameState::GetInstance();
    func_ov017_021d6134(arg0, func_0201079c(var0));
    func_ov017_021d6134((char*)arg0 + 0x8, func_020107d0(var0));
    return 1;
}
