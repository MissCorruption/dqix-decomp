#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" ARM int func_02094a00(void);
extern "C" ARM void func_02094ab0(void* arg0);
extern "C" ARM int func_020421a0();
extern "C" ARM void func_02043204(char* arg0);
extern "C" ARM void func_0200fb40(void* arg0);

// USA: func_020936b0
extern "C" ARM void func_020936b0(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
    func_02094ab0((void*)func_02094a00());
    var0[0x37] &= ~4;
    func_02043204((char*)func_020421a0());
    *(short*)(var0 + 0x30) = -1;
    var0[0x34] = 4;
    var0[0x35] = 0;
    func_0200fb40(GameState::GetInstance());
}
