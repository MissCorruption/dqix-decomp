#include <globaldefs.h>

struct Struct_021117ec { unsigned char unknown_0_[0x1c]; int unknown_1c_; };
extern struct Struct_021117ec data_021117ec;

// USA: func_020ce128
extern "C" ARM int func_020ce128(void) {
    if (data_021117ec.unknown_1c_ != 0) {
        return 0;
    }
    data_021117ec.unknown_1c_ = 1;
    return 1;
}
