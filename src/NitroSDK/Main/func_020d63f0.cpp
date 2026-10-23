#include <globaldefs.h>

#include "NitroSDK/Interrupts.h"

struct Struct_020d5fd0;

struct Struct_020d63f0_3 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[0x1fe];
};

struct Struct_020d63f0 {
    unsigned short unknown_0_[4];
    unsigned short unknown_8_;
    unsigned char unknown_a_[0xe];
    unsigned short unknown_18_;
    unsigned char unknown_1a_[2];
    unsigned short unknown_1c_;
};

struct Struct_020d5fd0_2 {
    Struct_020d63f0_3 unknown_0_[4];
    Struct_020d63f0 unknown_800_;
};

struct Struct_020d63f0_2 {
    unsigned char unknown_0_[2];
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned char unknown_6_[6];
    int unknown_c_;
    unsigned char unknown_10_[2];
    unsigned short unknown_12_;
    unsigned char unknown_14_[8];
    Struct_020d5fd0_2* unknown_1c_;
};

extern "C" void func_020d6610(Struct_020d5fd0* arg0, int arg1, int arg2);
extern "C" void func_020d66dc(Struct_020d5fd0_2* arg0, int arg1);

// USA: func_020d63f0
extern "C" ARM void func_020d63f0(Struct_020d63f0_2* arg0) {
    Struct_020d5fd0_2* var0 = arg0->unknown_1c_;
    if (var0 == 0) return;
    if (arg0->unknown_2_ == 0) {
        switch (arg0->unknown_4_) {
        case 0x15:
            func_020d6610((Struct_020d5fd0*)var0, arg0->unknown_12_, arg0->unknown_c_);
            func_020d66dc(var0, 0);
            break;
        case 7:
            func_020d66dc(var0, 0);
            break;
        case 0x19:
            break;
        case 9:
        case 0x1a: {
            unsigned short var1 = arg0->unknown_12_;
            unsigned int var2 = 1U << var1;
            int var3 = DisableIRQInterrupts();
            unsigned short var4 = var0->unknown_800_.unknown_8_;
            var2 = ~var2;
            var0->unknown_0_[var4].unknown_0_ &= var2;
            if (var0->unknown_800_.unknown_18_ == 1) {
                unsigned short var5 = (var4 + 1) & 3;
                var0->unknown_0_[var5].unknown_0_ &= var2;
            }
            SetIRQInterruptState(var3);
            func_020d66dc(var0, 0);
            if (var0->unknown_800_.unknown_18_ == 1) {
                func_020d66dc(var0, 0);
            }
            break;
        }
        }
    } else {
        var0->unknown_800_.unknown_1c_ = 5;
    }
}
