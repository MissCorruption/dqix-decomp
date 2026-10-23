#include <globaldefs.h>
#include <NitroSDK/Interrupts.h>

struct Struct_020d22f4 {
    Struct_020d22f4* unknown_0_;
};

struct Struct_02112780_2 {
    Struct_020d22f4* unknown_0_;
    unsigned long unknown_4_;
    unsigned char unknown_8_[8];
    Struct_020d22f4* unknown_10_;
    int unknown_14_;
    unsigned char unknown_18_[4];
    int unknown_1c_;
};

extern Struct_02112780_2 data_02112780;
extern Struct_020d22f4* const data_021127a4[9];

extern "C" unsigned long func_020d2a20();
extern "C" void func_020c976c(unsigned long cycles);

// USA: func_020d22f4
extern "C" ARM void* func_020d22f4(unsigned long arg0) {
    int var0 = DisableIRQInterrupts();
    Struct_020d22f4* var1;
    Struct_020d22f4* var2;
    if (arg0 & 1) {
        if (data_02112780.unknown_4_ == func_020d2a20()) {
            do {
                SetIRQInterruptState(var0);
                func_020c976c(100);
                var0 = DisableIRQInterrupts();
            } while (data_02112780.unknown_4_ == func_020d2a20());
        }
    } else if (data_02112780.unknown_4_ == func_020d2a20()) {
        SetIRQInterruptState(var0);
        return NULL;
    }
    var1 = data_021127a4[data_02112780.unknown_14_];
    if (++data_02112780.unknown_14_ > 8)
        data_02112780.unknown_14_ = 0;
    var2 = var1;
    if (var2->unknown_0_ != NULL) {
        do {
            var2 = var2->unknown_0_;
        } while (var2->unknown_0_ != NULL);
    }
    if (data_02112780.unknown_10_ != NULL)
        data_02112780.unknown_10_->unknown_0_ = var1;
    else
        data_02112780.unknown_0_ = var1;
    data_02112780.unknown_10_ = var2;
    data_02112780.unknown_1c_--;
    data_02112780.unknown_4_++;
    SetIRQInterruptState(var0);
    return var1;
}
