#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"

struct Struct_ov031_0221f26c {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
};
typedef void (*Type_01ff8300)();
struct Struct_ov031_0224f620_7 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    Struct_ov031_0221f26c* unknown_8_;
    char unknown_c_[0xc];
    int unknown_18_;
    void* unknown_1c_;
    unsigned int unknown_20_;
    unsigned int unknown_24_;
};
extern Struct_ov031_0224f620_7 data_ov031_0224f620;
extern "C" int func_ov031_0220c970(unsigned int, unsigned int);
extern "C" int func_ov031_0220cae0(Struct_ov031_0221f26c*, Type_01ff8300);
extern "C" void func_ov031_0221ecc8();

// USA: func_ov031_0221f26c
extern "C" THUMB int func_ov031_0221f26c(void* arg0, unsigned int arg1, unsigned int arg2) {
    int var0 = DisableIRQInterrupts();
    Struct_ov031_0221f26c* var1 = (Struct_ov031_0221f26c*)((arg1 + 0x53) & ~3u);
    data_ov031_0224f620.unknown_24_ = arg1;
    data_ov031_0224f620.unknown_8_ = var1;
    unsigned int var2 = ((unsigned int)var1 + 0x2f) & ~31u;
    data_ov031_0224f620.unknown_0_ = var2;
    var2 = (var2 + 0x231f) & ~31u;
    data_ov031_0224f620.unknown_20_ = var2;
    var2 = (var2 + 0xdf) & ~31u;
    var1->unknown_4_ = var2;
    data_ov031_0224f620.unknown_8_->unknown_8_ = arg1 + arg2 - data_ov031_0224f620.unknown_8_->unknown_4_;
    data_ov031_0224f620.unknown_8_->unknown_c_ = 0;
    data_ov031_0224f620.unknown_8_->unknown_0_ = 3;
    data_ov031_0224f620.unknown_1c_ = arg0;
    if (data_ov031_0224f620.unknown_18_ == 0) {
        if (func_ov031_0220c970(data_ov031_0224f620.unknown_0_, 0x2300) != 0) {
            SetIRQInterruptState(var0);
            return 0;
        }
        data_ov031_0224f620.unknown_18_ = 1;
    }
    if (data_ov031_0224f620.unknown_18_ == 1) {
        if (func_ov031_0220cae0(data_ov031_0224f620.unknown_8_, func_ov031_0221ecc8) != 3) {
            SetIRQInterruptState(var0);
            return 0;
        }
        data_ov031_0224f620.unknown_18_ = 4;
        SetIRQInterruptState(var0);
        return 1;
    }
    SetIRQInterruptState(var0);
    return 0;
}
