#include <globaldefs.h>

struct Struct_ov000_02161c0c_3 {
#if defined(jpn)
    char unknown1_0_[0x5ff0];
#else
    char unknown_0_[0x5e00];
#endif
    unsigned char unknown_5e00_;
    unsigned char unknown_5e01_;
    char unknown_5e02_[2];
    int unknown_5e04_[1];
};

// USA: func_ov000_021673e0
extern "C" ARM int func_ov000_021673e0(struct Struct_ov000_02161c0c_3* arg0) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_5e00_; var0++) {
        if (!(arg0->unknown_5e01_ & (1 << var0))) {
            arg0->unknown_5e01_ |= (1 << var0);
            return arg0->unknown_5e04_[var0];
        }
    }
    return 0;
}
