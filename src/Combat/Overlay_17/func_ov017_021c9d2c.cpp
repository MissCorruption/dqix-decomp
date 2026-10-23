#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c9d2c {
    unsigned char unknown_0_0_ : 3;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 1;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned int unknown_c_;
};

struct Struct_ov017_021c9d2c_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    Struct_ov017_021c9d2c unknown_4_;
};

static inline int inline_ov017_021c9d2c(int arg0) {
    return arg0 >= 0 && arg0 <= 3;
}

// USA: func_ov017_021c9d2c
extern "C" ARM void func_ov017_021c9d2c(int arg0, unsigned short arg1, unsigned short arg2, unsigned short arg3, int arg4, unsigned int arg5, unsigned char arg6, int arg7, int arg8) {
    void* var0 = func_0202ae24();
    GameState::GetInstance();
    if (inline_ov017_021c9d2c(arg0)) {
        Struct_ov017_021c9d2c_2 var1;
        var1.unknown_0_ = 4;
        Struct_ov017_021c9d2c* var2 = &var1.unknown_4_;
        var2->unknown_0_0_ = arg0;
        var2->unknown_2_ = arg1;
        var2->unknown_6_ = arg3;
        var2->unknown_4_ = arg2;
        var2->unknown_8_ = arg4;
        var2->unknown_1_ = arg6;
        var2->unknown_c_ = arg5;
        var2->unknown_0_3_ = arg7;
        var2->unknown_0_4_ = arg8;
        func_0205e330(var0, &var1, 0);
    }
}
