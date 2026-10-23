#include <globaldefs.h>

struct Struct_ov031_022063ec_2 { char unknown_0_[0x100]; unsigned short unknown_100_; unsigned short unknown_102_; };
struct Struct_ov031_022063ec { char unknown_0_[0x68]; Struct_ov031_022063ec_2* unknown_68_; };

// USA: func_ov031_022063ec
extern "C" ARM int func_ov031_022063ec(Struct_ov031_022063ec* arg0) {
    Struct_ov031_022063ec_2* var0 = arg0->unknown_68_;
    int var1 = *(int*)((char*)var0 + 0xf8);
    volatile unsigned short* var2 = &var0->unknown_100_;
    unsigned short var3 = *var2;
    int var4 = var0->unknown_102_ - var3 - 1;
    if (var4 < 0) var4 += var1;
    return var4;
}
