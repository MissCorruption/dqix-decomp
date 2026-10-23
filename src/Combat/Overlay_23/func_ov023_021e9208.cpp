#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_0201079c(char* obj);
extern "C" int func_020107d0(char* obj);
extern "C" void func_ov017_021d6134(void*, unsigned int);

// USA: func_ov023_021e9208
extern "C" ARM int func_ov023_021e9208(void* obj) {
    char* bs = (char*)GameState::GetInstance();
    func_ov017_021d6134(obj, func_0201079c(bs));
    func_ov017_021d6134((char*)obj + 0x8, func_020107d0(bs));
    return 1;
}
