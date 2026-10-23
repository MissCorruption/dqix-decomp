#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_02010828(GameState* arg0);
extern "C" unsigned int _u32_div_f(unsigned int arg0, unsigned int arg1);

struct Struct_ov003_02179e18 {
    char unknown_0_[0x1a];
    unsigned short unknown_1a_;
};

// USA: func_ov003_02179e18
extern "C" ARM unsigned int func_ov003_02179e18(struct Struct_ov003_02179e18* arg0) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02010828(var0);
    unsigned int var2 = *(unsigned int*)((char*)var1 + 0xf6c);
    return _u32_div_f(0x98967f - var2, arg0->unknown_1a_);
}
