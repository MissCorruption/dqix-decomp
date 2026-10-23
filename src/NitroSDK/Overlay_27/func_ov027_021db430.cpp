#include <globaldefs.h>

struct Struct_ov027_021db430 {
    unsigned char unknown_0_[0x50c];
    unsigned char unknown_50c_;
    unsigned char unknown_50d_[0x526 - 0x50d];
    unsigned short unknown_526_;
    unsigned short unknown_528_;
    unsigned short unknown_52a_;
};

struct Struct_ov027_021e33e0_2 {
    unsigned char unknown_0_[8];
    Struct_ov027_021db430* unknown_8_;
};

extern Struct_ov027_021e33e0_2 data_ov027_021e33e0;

// USA: func_ov027_021db430
extern "C" ARM int func_ov027_021db430(void) {
    int var0 = 0;
    int var1 = 0;
    int var2 = 0;
    Struct_ov027_021db430* var3 = data_ov027_021e33e0.unknown_8_;
    if (var3->unknown_528_ == 1 && var3->unknown_50c_ == 0) {
        var2 = 1;
    }
    if (var2) {
        if (var3->unknown_526_ == 0) {
            var1 = 1;
        }
    }
    if (var1) {
        if (var3->unknown_52a_ != 0) {
            var0 = 1;
        }
    }
    return var0;
}
