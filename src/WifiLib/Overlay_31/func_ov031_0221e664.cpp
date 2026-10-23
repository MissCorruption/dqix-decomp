#include <globaldefs.h>

extern "C" void func_ov031_0221e52c(void* arg0, int arg1, int arg2);
extern "C" int func_020cf1a8(int arg0);

struct Struct_ov031_0224e6e0_10 {
    char unknown_0_[8];
    int unknown_8_;
    char unknown_c_[12];
    unsigned int unknown_18_;
    unsigned int unknown_1c_;
    unsigned int unknown_20_;
};

extern Struct_ov031_0224e6e0_10 data_ov031_0224e6e0;

// USA: func_ov031_0221e664
extern "C" THUMB unsigned short func_ov031_0221e664() {
    if (data_ov031_0224e6e0.unknown_8_ == 0) {
        int var0 = 0;
        int var1[3];
        func_ov031_0221e52c(var1, 0, 12);
        if (func_020cf1a8((int)var1) == 0) {
            var0 += var1[0] << 10;
            var0 += var1[1] << 3;
            var0 += var1[2];
        }
        data_ov031_0224e6e0.unknown_18_ = var0;
        data_ov031_0224e6e0.unknown_1c_ = 0x5d588b65;
        data_ov031_0224e6e0.unknown_20_ = 0x269ec3;
        data_ov031_0224e6e0.unknown_8_ = 1;
    }
    data_ov031_0224e6e0.unknown_18_ = data_ov031_0224e6e0.unknown_1c_ * data_ov031_0224e6e0.unknown_18_ + data_ov031_0224e6e0.unknown_20_;
    return ((data_ov031_0224e6e0.unknown_18_ >> 16) * 0x7fff) >> 16;
}
