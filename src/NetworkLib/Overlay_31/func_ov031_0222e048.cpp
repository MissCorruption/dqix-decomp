#include <globaldefs.h>

struct Struct_ov031_0222e048 {
    unsigned int unknown_0_;
    unsigned int* unknown_4_;
    unsigned char unknown_8_[12];
    unsigned char unknown_14_;
    unsigned char unknown_15_;
};
extern Struct_ov031_0222e048* data_ov031_02290c98;
extern unsigned char data_ov031_02248f20[];

// USA: func_ov031_0222e048
extern "C" ARM void func_ov031_0222e048() {
    Struct_ov031_0222e048* var0 = data_ov031_02290c98;
    int var1 = var0->unknown_14_;
    if (var1 > 3) var1 = 3;
    unsigned int* var2 = var0->unknown_4_;
    unsigned int var3 = data_ov031_02248f20[var1 * 3 + 2];
    unsigned int var4 = (*var2 & 0xfe00ff00) | 0x28;
    var3 = (var3 & 0x1ff) << 16;
    *var2 = var3 | var4;
}
