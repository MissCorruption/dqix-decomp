#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_02094ab0(void);

extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* arg0);
extern "C" int func_02094a00(void);
extern "C" int func_020100f8(char* arg0);
extern "C" void func_020a27ac(void* arg0);

// USA: func_020d9ab0
extern "C" ARM void func_020d9ab0(void* arg0) {
    GameState* var0 = GameState::GetInstance();
    func_02043204((char*)func_020421a0());
    func_02094a00();
    func_02094ab0();
    func_020a27ac((void*)func_020100f8((char*)var0));
    *((unsigned char*)arg0 + 1) = 1;
}
