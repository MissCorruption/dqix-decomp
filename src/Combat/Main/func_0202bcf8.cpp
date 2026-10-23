#include <globaldefs.h>

struct Struct_0202bcf8 {
    char unknown_0_[0x1048];
    signed char unknown_1048_[16];
};

// USA: func_0202bcf8
extern "C" ARM signed char func_0202bcf8(struct Struct_0202bcf8* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < 16; var0++) {
        if (arg0->unknown_1048_[var0] == arg1) {
            break;
        }
    }
    if (var0 == 16) {
        return -1;
    }
    return var0;
}
