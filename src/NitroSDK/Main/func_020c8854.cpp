#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

struct Struct_020c8784;
extern "C" Struct_020c8784* func_020c8784(Struct_020c8784* arg0, Struct_020c8784* arg1);

struct Struct_020c8768;
extern "C" Struct_020c8768* func_020c8768(Struct_020c8768* arg0, Struct_020c8768* arg1);

struct Struct_020c87ac {
    struct Struct_020c87ac* unknown_0_;
    struct Struct_020c87ac* unknown_4_;
    unsigned int unknown_8_;
};

struct Struct_020c8854 {
    int unknown_0_;
    struct Struct_020c87ac* unknown_4_;
    struct Struct_020c8784* unknown_8_;
};

struct Struct_020c8854_2 {
    int unknown_0_;
    char unknown_4_[0xc];
    struct Struct_020c8854* unknown_10_;
};

extern struct Struct_020c8854_2* data_02111564[];

// USA: func_020c8854
extern "C" ARM void* func_020c8854(int arg0, int arg1, int arg2) {
    struct Struct_020c8854_2* var0;
    struct Struct_020c8854* var1;
    struct Struct_020c87ac* var2;
    int var3;
    var3 = DisableIRQInterrupts();
    var0 = data_02111564[arg0];
    if (var0 == 0) {
        SetIRQInterruptState(var3);
        return 0;
    }
    if (arg1 < 0) {
        arg1 = var0->unknown_0_;
    }
    var1 = &var0->unknown_10_[arg1];
    var2 = var1->unknown_4_;
    arg2 = (arg2 + 0x3f) & ~0x1f;
    if (var2 != 0) {
        do {
            if (arg2 <= (int)var2->unknown_8_) break;
            var2 = var2->unknown_4_;
        } while (var2 != 0);
    }
    if (var2 == 0) {
        SetIRQInterruptState(var3);
        return 0;
    }
    unsigned int var4 = var2->unknown_8_ - arg2;
    if (var4 < 0x40) {
        var1->unknown_4_ = (struct Struct_020c87ac*)func_020c8784((struct Struct_020c8784*)var1->unknown_4_, (struct Struct_020c8784*)var2);
    } else {
        var2->unknown_8_ = arg2;
        struct Struct_020c87ac* var5 = (struct Struct_020c87ac*)((char*)var2 + arg2);
        var5->unknown_8_ = var4;
        var5->unknown_0_ = var2->unknown_0_;
        var5->unknown_4_ = var2->unknown_4_;
        if (var5->unknown_4_ != 0) {
            var5->unknown_4_->unknown_0_ = var5;
        }
        if (var5->unknown_0_ != 0) {
            var5->unknown_0_->unknown_4_ = var5;
        } else {
            var1->unknown_4_ = var5;
        }
    }
    var1->unknown_8_ = (struct Struct_020c8784*)func_020c8768((struct Struct_020c8768*)var1->unknown_8_, (struct Struct_020c8768*)var2);
    SetIRQInterruptState(var3);
    return (char*)var2 + 0x20;
}
