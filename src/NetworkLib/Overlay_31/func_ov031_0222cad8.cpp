#include <globaldefs.h>

extern "C" void func_ov031_02236878(int);
extern "C" void func_ov031_0222c7d8(void);
extern "C" void* func_ov031_0223e218(void*, void*, void*, int);

struct Struct_ov031_0222cad8 {
    unsigned char unknown_0_[0x38];
    int unknown_38_;
    unsigned char unknown_3c_[4];
    unsigned short unknown_40_;
    unsigned char unknown_42_[15];
    unsigned char unknown_51_;
    unsigned char unknown_52_[7];
    unsigned char unknown_59_;
};

struct Struct_ov031_02290c8c_19 {
    short unknown_0_;
    unsigned short unknown_2_;
    Struct_ov031_0222cad8* unknown_4_;
};
extern Struct_ov031_02290c8c_19 data_ov031_02290c8c;

// USA: func_ov031_0222cad8
extern "C" ARM void func_ov031_0222cad8(void) {
    Struct_ov031_0222cad8* var0 = data_ov031_02290c8c.unknown_4_;
    if (data_ov031_02290c8c.unknown_2_ == var0->unknown_40_ || var0->unknown_51_ <= 4) {
        if (var0->unknown_59_ != 0) return;
        func_ov031_02236878(9);
        data_ov031_02290c8c.unknown_4_->unknown_59_ = 1;
    } else {
        func_ov031_02236878(0x13);
        void* var1 = func_ov031_0223e218((void*)0, (void*)func_ov031_0222c7d8, (void*)0, 0x78);
        data_ov031_02290c8c.unknown_4_->unknown_38_ = (int)var1;
    }
}
