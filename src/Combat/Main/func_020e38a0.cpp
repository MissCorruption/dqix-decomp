#include <globaldefs.h>

struct Struct_020e3814 {
    int unknown_0_;
    unsigned char unknown_4_, unknown_5_, unknown_6_;
};
extern "C" void func_020e3840(struct Struct_020e3814* arg0);

// USA: func_020e38a0
extern "C" ARM struct Struct_020e3814* func_020e38a0(struct Struct_020e3814 *arg0) {
    int var0;
    for (var0 = 0; var0 < 4; ) {
        if (arg0->unknown_4_ == 0) {
            func_020e3840(arg0);
            return arg0;
        }
        var0++;
        arg0++;
    }
    return NULL;
}
