#include <globaldefs.h>

struct Struct_020dafd4 {
    char unknown_0_[0x50];
    unsigned char unknown_50_;
    unsigned char unknown_51_;
    unsigned char unknown_52_;
    unsigned char unknown_53_;
    char unknown_54_[0x64 - 0x54];
    unsigned char unknown_64_;
    char unknown_65_[0x68 - 0x65];
    short unknown_68_;
    short unknown_6a_;
};

// USA: func_020db0c4
extern "C" ARM void func_020db0c4(struct Struct_020dafd4* arg0) {
    arg0->unknown_68_ = -1;
    arg0->unknown_6a_ = 0;
    arg0->unknown_50_ = 0;
    arg0->unknown_52_ = 0;
    arg0->unknown_53_ = 1;
    arg0->unknown_51_ = 0;
    arg0->unknown_64_ = 0;
}
