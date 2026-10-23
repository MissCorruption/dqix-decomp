#include <globaldefs.h>

struct Struct_0209ab20_2 { unsigned short unknown_0_; unsigned short unknown_2_; };
struct Struct_0209ab20_3 {
    unsigned char unknown_0_[0xc];
    struct Struct_0209ab20_2 unknown_c_[17];
};
struct Struct_0209ab20 {
    unsigned char unknown_0_[0x100];
    struct Struct_0209ab20_3 unknown_100_[13];
    unsigned char unknown_510_[0xc];
    int unknown_51c_[16];
};
struct Struct_02086f24_7 {
    struct Struct_0209ab20* unknown_0_;
};

// USA: func_0209ab20
extern "C" ARM int func_0209ab20(struct Struct_02086f24_7* arg0, int arg1, int arg2, unsigned char* arg3) {
    int var0;
    int var1 = 0;
    for (var0 = 0; var0 < arg0->unknown_0_->unknown_51c_[arg1]; var0++) {
        unsigned short var2 = arg0->unknown_0_->unknown_100_[arg1].unknown_c_[var0].unknown_2_;
        unsigned short var3 = arg0->unknown_0_->unknown_100_[arg1].unknown_c_[var0].unknown_0_;
        if (var2 <= arg2) {
            arg3[var1] = (unsigned char)var3;
            var1++;
        }
    }
    return var1;
}
