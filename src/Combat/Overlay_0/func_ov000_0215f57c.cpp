#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Util/Random.h"

struct Struct_020891b0 {
    unsigned char unknown_0_[0x3c];
    unsigned char unknown_3c_0_ : 1;
};

struct Struct_ov000_0215f57c {
    char unknown_0_[0x10];
    unsigned int unknown_10_0_ : 8;
    unsigned int unknown_11_0_ : 3;
    unsigned int unknown_11_3_ : 21;
};

struct Struct_ov000_0215f57c_2 {
    char unknown_0_[0x138];
    struct Struct_020891b0* unknown_138_;
    char unknown_13c_[0x148 - 0x13c];
    struct Struct_ov000_0215f57c* unknown_148_;
};

struct Struct_ov000_02182a6c {
    signed char unknown_0_[8];
};

extern "C" GameObject* func_0200fea4(GameState* arg0, int arg1);
extern "C" void func_020891b0(struct Struct_020891b0* arg0);

extern struct Struct_ov000_02182a6c data_ov000_02182a6c;

static inline int inline_ov000_0215f57c(int arg0) { return arg0 >= 0 && arg0 <= 3; }

// USA: func_ov000_0215f57c
extern "C" ARM int func_ov000_0215f57c(struct Random* arg0, int arg1) {
    if (inline_ov000_0215f57c(arg1)) {
        return 0;
    }
    struct Struct_ov000_0215f57c_2* var0 = (struct Struct_ov000_0215f57c_2*)func_0200fea4(GameState::GetInstance(), arg1);
    struct Struct_ov000_0215f57c* var1 = var0->unknown_148_;
    int var2 = var0->unknown_138_->unknown_3c_0_ ? 1 : 0;
    int var3 = NextRandomMax(arg0, 2);
    struct Struct_ov000_02182a6c var4 = data_ov000_02182a6c;
    var4.unknown_0_[1] = var3 != 0;
    var4.unknown_0_[4] = var2 != 0 ? 1 : 0;
    var4.unknown_0_[5] = var2 == 0 ? 0 : 2;
    var4.unknown_0_[6] = var2 != 0 ? 0 : 1;
    var4.unknown_0_[7] = var2 == 0 ? 2 : 0;
    int var5 = var4.unknown_0_[var1->unknown_11_0_];
    func_020891b0(var0->unknown_138_);
    return var5;
}
