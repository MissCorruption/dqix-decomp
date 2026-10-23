#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_02033920(void* arg0, int arg1, int arg2);

struct Struct_020494c0 {
    char unknown_0_[0x4c];
    unsigned char unknown_4c_;
    unsigned char unknown_4d_;
};

struct Struct_02048f64_2 {
    char unknown_0_[0x13c];
    struct Struct_020494c0* unknown_13c_;
};

// USA: func_020494c0
extern "C" ARM void func_020494c0(struct Struct_02048f64_2* arg0) {
    struct Struct_020494c0* var0;
    unsigned char var1;
    if (arg0->unknown_13c_ == NULL) return;
    GameState::GetInstance();
    var0 = arg0->unknown_13c_;
    var1 = var0->unknown_4c_;
    if (var1 == 0xff) var1 = var0->unknown_4d_;
    func_02033920(arg0, var1, 0);
}
