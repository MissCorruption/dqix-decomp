#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_02094ab0(void);

extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* obj);
extern "C" int func_02094a00(void);
extern "C" int func_020100f8(char* obj);
extern "C" void func_020a27ac(void* obj);

// USA: func_020d9ab0
extern "C" ARM void func_020d9ab0(void* param) {
    GameState* bs = GameState::GetInstance();
    func_02043204((char*)func_020421a0());
    func_02094a00();
    func_02094ab0();
    func_020a27ac((void*)func_020100f8((char*)bs));
    *((unsigned char*)param + 1) = 1;
}
