#include <globaldefs.h>

extern "C" int FastIntModulus(int, int);

struct Struct_ov031_0222c870;
struct Struct_ov031_02290c8c_16 {
    unsigned char unknown_0_[2];
    unsigned short unknown_2_;
    Struct_ov031_0222c870* unknown_4_;
};
struct Struct_ov031_0222c870 { unsigned char unknown_0_[0x56]; unsigned char unknown_56_; };
extern Struct_ov031_02290c8c_16 data_ov031_02290c8c;

// USA: func_ov031_0222c870
extern "C" ARM void func_ov031_0222c870(void) {
    if (data_ov031_02290c8c.unknown_4_->unknown_56_ == 0) return;
    int var0 = FastIntModulus(data_ov031_02290c8c.unknown_2_, 0x1c);
    unsigned int var1 = ((var0 - 0x32) << 16) & 0x1ff0000;
    *(volatile unsigned int*)0x4000010 = var1;
    *(volatile unsigned int*)0x4000018 = var1;
    data_ov031_02290c8c.unknown_4_->unknown_56_ = 0;
}
