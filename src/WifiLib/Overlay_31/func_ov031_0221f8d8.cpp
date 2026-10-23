#include <globaldefs.h>
#include <NitroSDK/Interrupts.h>

struct Struct_ov031_0221f8d8 {
    int unknown_0_;
    unsigned char* unknown_4_;
    unsigned int unknown_8_;
    int unknown_c_;
};

struct Struct_ov031_0224f670_7 {
    char unknown_0_[8];
    Struct_ov031_0221f8d8* unknown_8_;
    char unknown_c_[0x1c];
    unsigned char* unknown_28_;
    int unknown_2c_;
    char unknown_30_[0xc];
    void* unknown_3c_;
    char unknown_40_[0xc];
    void* unknown_4c_;
};

extern Struct_ov031_0224f670_7 data_ov031_0224f670;
extern int data_ov031_0224f6f0;
extern "C" int func_ov031_0220c970(void* arg0, unsigned int arg1);
extern "C" int func_ov031_0220cae0(Struct_ov031_0221f8d8* arg0, void (*arg1)());
extern "C" void func_ov031_0221f324();

// USA: func_ov031_0221f8d8
extern "C" THUMB int func_ov031_0221f8d8(int arg0, unsigned char* arg1, unsigned int arg2) {
    int var0 = DisableIRQInterrupts();
    Struct_ov031_0221f8d8* var1 = (Struct_ov031_0221f8d8*)(((unsigned int)arg1 + 0x63) & ~3);
    unsigned int var2 = (unsigned int)var1 + 0x2f;
    data_ov031_0224f670.unknown_28_ = arg1;
    data_ov031_0224f670.unknown_8_ = var1;
    var2 &= ~0x1f;
    data_ov031_0224f670.unknown_3c_ = (void*)var2;
    var2 = (var2 + 0x231f) & ~0x1f;
    data_ov031_0224f670.unknown_4c_ = (void*)var2;
    var2 = (var2 + 0xdf) & ~0x1f;
    var1->unknown_4_ = (unsigned char*)var2;
    data_ov031_0224f670.unknown_8_->unknown_8_ = arg1 + arg2 - data_ov031_0224f670.unknown_8_->unknown_4_;
    data_ov031_0224f670.unknown_8_->unknown_c_ = 0;
    data_ov031_0224f670.unknown_8_->unknown_0_ = 3;
    data_ov031_0224f6f0 = arg0;
    if (data_ov031_0224f670.unknown_2c_ == 0) {
        if (func_ov031_0220c970(data_ov031_0224f670.unknown_3c_, 0x2300) != 0) {
            SetIRQInterruptState(var0);
            return 0;
        }
        data_ov031_0224f670.unknown_2c_ = 1;
    }
    if (data_ov031_0224f670.unknown_2c_ == 1) {
        if (func_ov031_0220cae0(data_ov031_0224f670.unknown_8_, func_ov031_0221f324) != 3) {
            SetIRQInterruptState(var0);
            return 0;
        }
        data_ov031_0224f670.unknown_2c_ = 4;
        SetIRQInterruptState(var0);
        return 1;
    }
    SetIRQInterruptState(var0);
    return 0;
}
