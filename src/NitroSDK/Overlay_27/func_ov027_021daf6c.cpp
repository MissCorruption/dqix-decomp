#include <globaldefs.h>

struct Struct_ov027_021dd940_6 {
    unsigned char unknown_0_[0x1c];
    void* unknown_1c_;
    void* unknown_20_;
    unsigned char unknown_24_;
    unsigned char unknown_25_[0x28 - 0x25];
    unsigned char unknown_28_;
};

extern Struct_ov027_021dd940_6 data_ov027_021dd940;

// USA: func_ov027_021daf6c
extern "C" ARM void func_ov027_021daf6c(void) {
    if (data_ov027_021dd940.unknown_24_ != 2) return;
    void* var0 = data_ov027_021dd940.unknown_1c_;
    switch (*((unsigned char*)var0 + 0x4b2)) {
        case 0:
            data_ov027_021dd940.unknown_28_ = 9;
            data_ov027_021dd940.unknown_20_ = var0;
            break;
        default:
            data_ov027_021dd940.unknown_28_ = 4;
            data_ov027_021dd940.unknown_20_ = (char*)var0 + 0x220;
            break;
    }
    data_ov027_021dd940.unknown_24_ = 3;
}
