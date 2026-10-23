#include <globaldefs.h>

struct Struct_020e38e4 {
    unsigned int unknown_0_;
    unsigned char unknown_4_;
};

// USA: func_020e38e4
extern "C" ARM int func_020e38e4(struct Struct_020e38e4* arg0, int arg1, int arg2) {
    int var0;
    for (var0 = 0; var0 < 4; var0++, arg0++) {
        if (arg0->unknown_4_ == arg1) {
            if (arg0->unknown_0_ == arg2 || arg2 == -1) {
                return var0;
            }
        }
    }
    return -1;
}
