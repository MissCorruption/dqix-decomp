#include <globaldefs.h>

struct Struct_020421c4_2 {
    char* unknown_0_;         // 0x0
    short unknown_4_;        // 0x4
    char unknown_6_[4];        // 0x6..0x9
    unsigned char unknown_a_; // 0xa
};

// USA: func_0204aa48
extern "C" ARM int func_0204aa48(struct Struct_020421c4_2* arg0) {
    int var0 = 5;
    if (arg0->unknown_a_) {
        var0 = 6;
    }
    return arg0->unknown_4_ << var0;
}
