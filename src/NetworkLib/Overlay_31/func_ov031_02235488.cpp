#include <globaldefs.h>

extern "C" int FastIntDivide(int arg0, unsigned int arg1);
extern "C" void func_ov031_0223689c(int arg0);
extern "C" void func_ov031_022368bc(int arg0, int arg1);

struct Struct_ov031_02235488 { unsigned char unknown_0_[0x1a]; unsigned char unknown_1a_; };
extern Struct_ov031_02235488* data_ov031_02290cf4;

// USA: func_ov031_02235488
extern "C" ARM void func_ov031_02235488(int arg0) {
    int var0 = data_ov031_02290cf4->unknown_1a_ - arg0;
    int var1 = var0 < 0 ? -var0 : var0;
    int var2;
    if (var1 < 2) {
        var2 = 0;
    } else if (var1 >= 6) {
        var2 = 0x7f;
    } else {
        var2 = FastIntDivide(0x7f, 6 - var1);
    }
    func_ov031_0223689c(var2);

    int var3;
    if (var1 < 2) {
        var3 = -256;
    } else if (var1 >= 6) {
        var3 = 256;
    } else {
        var3 = FastIntDivide(0x200, 6 - var1) - 0x100;
    }
    func_ov031_022368bc(0xffff, var3);
}
