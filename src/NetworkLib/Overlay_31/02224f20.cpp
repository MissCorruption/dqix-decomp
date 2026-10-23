#include <globaldefs.h>

struct Struct_ov031_02224f20 {
    unsigned char unknown_0_[0x11d];
    unsigned char unknown_11d_;
};
struct Struct_ov031_02248a0c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};
extern Struct_ov031_02224f20* data_ov031_02250bfc;
extern const Struct_ov031_02248a0c data_ov031_02248a0c[];
static inline const Struct_ov031_02248a0c* inline_ov031_02224f20(int arg0) {
    return &data_ov031_02248a0c[arg0];
}
extern "C" void func_ov031_02224ca4(int, int, int);
extern "C" void func_ov031_02224fa4(int, int);

// USA: func_ov031_02224f20
extern "C" ARM void func_ov031_02224f20(int arg0) {
    int var0;
    int var1 = 0;
    int var2 = 0;
    var0 = 0;
    int var3 = 0;
    data_ov031_02250bfc->unknown_11d_ = arg0;
    do {
        func_ov031_02224ca4(arg0, var0, inline_ov031_02224f20(var3)->unknown_2_);
        ++var0;
        var3 += 12;
    } while (var0 < 4);
    if (arg0 == 2) var1 = 1;
    else if (arg0 == 1) var2 = 1;
    func_ov031_02224fa4(47, var1);
    func_ov031_02224fa4(48, var2);
}
