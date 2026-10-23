#include <globaldefs.h>

struct Struct_ov027_021dcc8c {
    char unknown_0_[0x50d];
    unsigned char unknown_50d_;
    char unknown_50e_[0x526 - 0x50e];
    unsigned short unknown_526_;
    char unknown_528_[0x5e4 - 0x528];
    unsigned int unknown_5e4_;
};

struct Struct_ov027_021e33e0_12 {
    char unknown_0_[0x8];
    Struct_ov027_021dcc8c *unknown_8_;
};

extern "C" void func_ov027_021dcc80(void);
extern Struct_ov027_021e33e0_12 data_ov027_021e33e0;
unsigned int DisableIRQInterrupts();
unsigned int SetIRQInterruptState(int);
extern "C" unsigned int func_ov027_021dd55c(int);
extern "C" void func_ov027_021db4e0(int arg0);
extern "C" int func_ov027_021dcc48(void);
extern "C" int func_ov027_021dd3b0(void);

// USA: func_ov027_021dcc8c
extern "C" ARM int func_ov027_021dcc8c(void) {
    int var0 = 1;
    unsigned int var1 = DisableIRQInterrupts();
    Struct_ov027_021dcc8c *var2 = data_ov027_021e33e0.unknown_8_;
    if (var2->unknown_50d_ == 0) {
        func_ov027_021db4e0(0);
    } else if (var2->unknown_526_ == 0) {
        var2->unknown_5e4_ = 0;
        data_ov027_021e33e0.unknown_8_->unknown_526_ = 1;
        if (func_ov027_021dd3b0()) {
            func_ov027_021dd55c((unsigned int)func_ov027_021dcc80);
            var0 = 0;
        } else {
            var0 = func_ov027_021dcc48();
        }
    }
    SetIRQInterruptState(var1);
    return var0;
}
