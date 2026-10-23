#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021c6a9c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_[8];
};

struct Struct_ov017_021c6a9c_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    struct Struct_ov017_021c6a9c unknown_4_;
};

// USA: func_ov017_021c6a9c
extern "C" ARM void func_ov017_021c6a9c(unsigned short arg0, int arg1, int arg2, unsigned char arg3, unsigned char arg4, signed char arg5) {
    void* var0 = func_0202ae24();
    Struct_ov017_021c6a9c_2 var1;
    struct Struct_ov017_021c6a9c* var2 = &var1.unknown_4_;
    GameState::GetInstance();
    unsigned char var3 = arg4;
    signed char var4 = arg5;
    var2->unknown_5_ = var3;
    var1.unknown_0_ = 0x43;
    var2->unknown_0_ = arg0;
    var2->unknown_2_ = arg2;
    var2->unknown_4_ = arg3;
    var2->unknown_6_ = arg1;
    var2->unknown_7_ = var4;
    func_0205e330(var0, &var1, 0);
}
