#include <globaldefs.h>

#include "Combat/Overlay15ViewerContext.h"

struct Struct_ov015_0218f02c {
    int unknown_0_;
    unsigned char unknown_4_[0x1c - 4];
    unsigned char unknown_1c_;
};

// USA: func_ov015_0218f02c
extern "C" ARM void func_ov015_0218f02c(struct Struct_ov015_0218f02c* arg0, int arg1, int arg2) {
    arg0->unknown_0_ = arg1;
    switch (arg2) {
        case 0: arg0->unknown_1c_ = 0; break;
        case 1: arg0->unknown_1c_ = 1; break;
        case 2: arg0->unknown_1c_ = 3; break;
        case 3: arg0->unknown_1c_ = 2; break;
        case 4: arg0->unknown_1c_ = 2; break;
        case 5: arg0->unknown_1c_ = 5; break;
        case 6: arg0->unknown_1c_ = 6; break;
        case 7: arg0->unknown_1c_ = 4; break;
    }
    func_ov015_0218bcb0(arg0);
}
