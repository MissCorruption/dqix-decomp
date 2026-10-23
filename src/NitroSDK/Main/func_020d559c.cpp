#include <globaldefs.h>
#include "NitroSDK/Cache.h"

extern "C" int func_020d424c(int, int, int, int, int, int);
extern "C" int func_020d40bc(int, int, int);
extern "C" void func_020d404c(int arg0, int arg1);
extern "C" void* func_020d41d8(void);

struct Struct_020d559c {
    unsigned short unknown_0_;
    unsigned char unknown_2_[0x180];
    unsigned short unknown_182_;
};

struct Struct_020d559c_2 {
    int unknown_0_;
    Struct_020d559c* unknown_4_;
};


// USA: func_020d559c
extern "C" ARM int func_020d559c(int arg0, unsigned int arg1) {
    Struct_020d559c_2* var0 = (Struct_020d559c_2*)func_020d41d8();
    int var1 = func_020d424c(5, 7, 9, 8, 0xa, 0xb);
    if (var1 != 0) {
        return var1;
    }
    unsigned short var2 = var0->unknown_4_->unknown_0_;
    if (var2 == 7 || var2 == 9) {
        if (arg1 < 1 || arg1 > 0xf) {
            return 6;
        }
        InvalidateDataCacheRange(&var0->unknown_4_->unknown_182_, 2);
        if (!(var0->unknown_4_->unknown_182_ & (1 << arg1))) {
            return 7;
        }
    } else {
        if (arg1 != 0) {
            return 6;
        }
    }
    func_020d404c(0xd, arg0);
    var1 = func_020d40bc(0xd, 1, 1 << arg1);
    if (var1 == 0) {
        var1 = 2;
    }
    return var1;
}
