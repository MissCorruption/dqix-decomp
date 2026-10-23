#include <globaldefs.h>

struct Struct_020989cc {
    char unknown_0_[0xb38];
    unsigned int unknown_b38_;
    unsigned int unknown_b3c_;
    unsigned char unknown_b40_;
    unsigned char unknown_b41_;
};

struct Struct_02097cac_2 {
    char unknown_0_[0x1000];
    struct Struct_020989cc unknown_1000_;
};

// USA: func_020989cc
extern "C" ARM void func_020989cc(struct Struct_02097cac_2* arg0) {
    unsigned int var0;
    unsigned char var1;
    if (arg0->unknown_1000_.unknown_b3c_ == 6) return;
    var0 = arg0->unknown_1000_.unknown_b38_;
    if (var0 < 7) arg0->unknown_1000_.unknown_b41_ = 1;
    else if (var0 >= 7 && var0 < 0xd) arg0->unknown_1000_.unknown_b41_ = 2;
    else if (var0 >= 0xd && var0 < 0x13) arg0->unknown_1000_.unknown_b41_ = 3;
    else if (var0 >= 0x13 && var0 < 0x19) arg0->unknown_1000_.unknown_b41_ = 4;
    else if (var0 >= 0x19 && var0 < 0x1e) arg0->unknown_1000_.unknown_b41_ = 5;
    else if (var0 >= 0x1e) arg0->unknown_1000_.unknown_b41_ = 6;
    var1 = arg0->unknown_1000_.unknown_b41_;
    if (var1 > arg0->unknown_1000_.unknown_b3c_) arg0->unknown_1000_.unknown_b3c_ = arg0->unknown_1000_.unknown_b3c_ + 1;
}
