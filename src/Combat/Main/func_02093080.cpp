#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_0200fb40(void* arg0);
extern "C" void func_02092d60(void* arg0, int arg1);

struct Struct_02093080 {
    char unknown_0_[0x34];
    unsigned char unknown_34_;
    unsigned char unknown_35_;
};

// USA: func_02093080
extern "C" ARM void func_02093080(struct Struct_02093080* arg0) {
    GameState* var0 = GameState::GetInstance();
    unsigned char var1 = arg0->unknown_35_;
    if (var1 == 0) {
        func_0200fb40(var0);
        func_02092d60(arg0, 1);
        arg0->unknown_35_++;
        return;
    }
    if (var1 == 1) {
        arg0->unknown_34_ = 2;
        arg0->unknown_35_ = 0;
    }
}
