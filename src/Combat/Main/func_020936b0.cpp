#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" ARM int func_02094a00(void);
extern "C" ARM void func_02094ab0(void* obj);
extern "C" ARM int func_020421a0();
extern "C" ARM void func_02043204(char* obj);
extern "C" ARM void func_0200fb40(void* obj);

// USA: func_020936b0
extern "C" ARM void func_020936b0(void* obj) {
    unsigned char* self = (unsigned char*)obj;
    func_02094ab0((void*)func_02094a00());
    self[0x37] &= ~4;
    func_02043204((char*)func_020421a0());
    *(short*)(self + 0x30) = -1;
    self[0x34] = 4;
    self[0x35] = 0;
    func_0200fb40(GameState::GetInstance());
}
