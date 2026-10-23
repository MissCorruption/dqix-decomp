#include <globaldefs.h>

struct Struct_0209494c {
#if defined(jpn)
    char unknown1_0_[0x139];
#else
    char unknown_0_[0x3c9];
#endif
    unsigned char unknown_3c9_0_ : 1;
    unsigned char unknown_3c9_1_ : 7;
    unsigned char unknown_3ca_;
    signed char unknown_3cb_;
};

// USA: func_0209494c
extern "C" ARM int func_0209494c(struct Struct_0209494c* arg0) {
    if (arg0->unknown_3c9_0_) {
        return arg0->unknown_3cb_ <= 0;
    }
    return 1;
}
