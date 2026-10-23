#include <globaldefs.h>

struct Struct_ov031_0220f728_2 {
    unsigned char unknown_0_[0xc];
    int* unknown_c_;
    unsigned char unknown_10_[0x20 - 0x10];
    int unknown_20_;
    int unknown_24_;
};

struct Struct_ov031_0220f728 {
    unsigned char unknown_0_[0x24];
    struct Struct_ov031_0220f728_2* unknown_24_;
};

extern struct Struct_ov031_0220f728* data_ov031_0224e580;

extern "C" int func_ov031_0220fe44(int arg0);
extern "C" void func_ov031_0220fed8(void);

// USA: func_ov031_0220f728
extern "C" ARM void func_ov031_0220f728(void) {
    if (func_ov031_0220fe44(0)) {
        struct Struct_ov031_0220f728_2* var0 = data_ov031_0224e580->unknown_24_;
        var0->unknown_24_ = *var0->unknown_c_;
        var0 = data_ov031_0224e580->unknown_24_;
        var0->unknown_20_ = 1;
    }
    func_ov031_0220fed8();
}
