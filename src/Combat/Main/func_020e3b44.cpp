#include <globaldefs.h>

struct Struct_020e3b44 {
    unsigned int unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};

// USA: func_020e3b44
extern "C" ARM void func_020e3b44(struct Struct_020e3b44* arg0, int arg1, struct Struct_020e3b44 arg2) {
    if (arg1 >= 0 && arg1 < 4) {
        arg0[arg1].unknown_0_ = arg2.unknown_0_;
        arg0[arg1].unknown_4_ = arg2.unknown_4_;
        arg0[arg1].unknown_5_ = arg2.unknown_5_;
        arg0[arg1].unknown_6_ = arg2.unknown_6_;
    }
}
