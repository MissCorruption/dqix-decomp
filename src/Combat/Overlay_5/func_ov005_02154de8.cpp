#if defined(jpn)
#define R(j,u) (j)
#define data_0210a00c data_02109cc4
#define data_ov005_0215cd74 data_ov005_0215e154
#define data_ov006_0215ff6c data_ov006_021612d0
#define func_ov005_02158878 func_ov005_02159e70
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#if defined(jpn)
#define func_ov005_0215cb4c func_ov005_0215df2c
#endif
#include <GameState/GameState.h>

struct Struct_ov005_02153954 {
    char unknown_0_[R(0x1240, 0x1244)];
    char unknown_1244_[R(0x19ac - 0x1240, 0x1a34 - 0x1244)];
    char unknown_1a34_[0x3db8 - 0x1a34];
    unsigned char unknown_3db8_;
    char unknown_3db9_[0x3dd1 - 0x3db9];
    unsigned char unknown_3dd1_;
    char unknown_3dd2_[0x3de4 - 0x3dd2];
    int unknown_3de4_;
    char unknown_3de8_[0x3e06 - 0x3de8];
    signed char unknown_3e06_;
    signed char unknown_3e07_;
};

typedef void (Struct_ov005_02153954::*Type_02000c9c_5)();

extern "C" Type_02000c9c_5 data_ov005_0215cd74[8];

extern "C" void func_ov005_02153728(void* arg0, int arg1);
extern "C" void func_ov023_021dc488(void* arg0);
extern "C" int func_ov005_0215cb4c(Struct_ov005_02153954* arg0);
extern "C" void func_ov005_021556e4(Struct_ov005_02153954* arg0);
extern "C" void func_ov005_02158878(Struct_ov005_02153954* arg0, int arg1);

// USA: func_ov005_02154de8
extern "C" ARM void func_ov005_02154de8(Struct_ov005_02153954* arg0) {
    int var0 = GameState::GetInstance()->GetTickCount();
    if (var0 == 0)
        var0 = 1;
    arg0->unknown_3de4_ = var0;
    func_ov005_02153728(arg0->unknown_1a34_, 1);
    func_ov023_021dc488(arg0->unknown_1244_);
    if (func_ov005_0215cb4c(arg0)) {
        func_ov005_021556e4(arg0);
        return;
    }
    if (arg0->unknown_3dd1_ != 0 && arg0->unknown_3dd1_ != 8 && arg0->unknown_3dd1_ != 9) {
        func_ov005_02158878(arg0, var0);
        func_ov005_021556e4(arg0);
        return;
    }
    if (arg0->unknown_3e06_ > 0) {
        arg0->unknown_3e06_ -= var0;
        if (arg0->unknown_3e06_ <= 0) {
            arg0->unknown_3e06_ = 0;
            arg0->unknown_3e07_ = -2;
        }
    }
    if (data_ov005_0215cd74[arg0->unknown_3db8_] == NULL)
        return;
    (arg0->*data_ov005_0215cd74[arg0->unknown_3db8_])();
    func_ov005_021556e4(arg0);
}
