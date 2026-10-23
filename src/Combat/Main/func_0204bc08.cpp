#include <globaldefs.h>

void CleanInvalidateCacheRange(const void* p, unsigned int size);
typedef void (*Type_0204bc08)(void*, int, unsigned int);
extern Type_0204bc08 data_020f01b0[];

struct Struct_0204bc08 { char unknown_0_[0xc]; unsigned char unknown_c_; char unknown_d_[0x1c - 0xc - 1]; unsigned char unknown_1c_0_ : 4; unsigned char unknown_1c_4_ : 4; };

// USA: func_0204bc08
extern "C" ARM void func_0204bc08(Struct_0204bc08* arg0, int arg1, unsigned char arg2, void* arg3, unsigned int arg4) {
    unsigned char var0 = arg0->unknown_1c_0_;
    Type_0204bc08 var1 = arg0->unknown_c_ ? data_020f01b0[var0] : data_020f01b0[var0];
    int var2 = 5;
    if (arg0->unknown_c_ != 0) {
        arg2 = 0xff;
        var2 = 9;
    }
    int var3 = (arg1 & 0xf) << var2;
    var3 += (arg2 & 0xf) << 1;
    arg4 &= ~1u;
    CleanInvalidateCacheRange(arg3, arg4);
    var1(arg3, var3, arg4);
}
