#include <globaldefs.h>

struct Struct_020421c4;
struct Struct_02020cb8_7 { unsigned char unknown_0_[0x10]; };
extern "C" void func_0204a82c(struct Struct_020421c4* arg0);
extern "C" void func_0204acb0(struct Struct_02020cb8_7* arg0);

struct Struct_02020cb8_3 {
    unsigned char unknown_0_[0xc];
    unsigned char unknown_c_;              // 0xc
    unsigned char unknown_d_;           // 0xd
    unsigned short unknown_e_;             // 0xe
    struct Struct_02020cb8_7* unknown_10_;    // 0x10
    int unknown_14_;                       // 0x14
    unsigned char unknown_18_[0x5];      // 0x18..0x1c
    unsigned char unknown_1d_;             // 0x1d
};

// USA: func_0204afb4
extern "C" ARM void func_0204afb4(struct Struct_02020cb8_3* arg0) {
    unsigned char var0;
    arg0->unknown_14_ = 0;
    func_0204a82c((struct Struct_020421c4*)arg0);
    arg0->unknown_c_ = 0;
    arg0->unknown_e_ = 0xffff;
    if (arg0->unknown_10_ == 0) return;
    var0 = 0;
    while (var0 < arg0->unknown_1d_) {
        func_0204acb0(&arg0->unknown_10_[var0]);
        var0++;
    }
}
