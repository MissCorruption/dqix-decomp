#include <globaldefs.h>

#include "Combat/Overlay15ViewerContext.h"

struct Struct_ov015_0218ef7c_3 { char unknown_0_[0x1a4]; int unknown_1a4_; };
struct Struct_ov015_0218ef7c { char unknown_0_[8]; unsigned short unknown_8_; };
struct Struct_ov015_0218ef7c_2 { void* unknown_0_; char unknown_4_[0x18]; unsigned char unknown_1c_; };

// USA: func_ov015_0218ef7c
extern "C" ARM int func_ov015_0218ef7c(Struct_ov015_0218ef7c_2* arg0, Struct_ov015_0218ef7c_3* arg1, Struct_ov015_0218ef7c* arg2) {
    arg0->unknown_0_ = arg1;
    int var0 = arg1->unknown_1a4_ - 4;
    switch (var0) {
    case 0:
        if (arg2->unknown_8_ == 0) {
            var0 = 0;
            arg0->unknown_1c_ = 0;
        } else {
            var0 = 1;
            arg0->unknown_1c_ = 1;
        }
        break;
    case 7:
        var0 = 2;
        arg0->unknown_1c_ = var0;
        break;
    case 8:
        var0 = 2;
        arg0->unknown_1c_ = var0;
        break;
    case 2:
        var0 = 3;
        arg0->unknown_1c_ = var0;
        break;
    case 3:
        var0 = 4;
        arg0->unknown_1c_ = var0;
        break;
    case 9:
        var0 = 5;
        arg0->unknown_1c_ = var0;
        break;
    case 10:
        var0 = 6;
        arg0->unknown_1c_ = var0;
        break;
    }
    return func_ov015_0218bcb0(arg0);
}
