#include <globaldefs.h>

struct Struct_0202b2f0 {
    char unknown_0_[0x1038];
    signed char unknown_1038_[16];
};

// USA: func_0202bcbc
extern "C" ARM signed char func_0202bcbc(struct Struct_0202b2f0* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < 16; var0++) {
        if (arg0->unknown_1038_[var0] == arg1) {
            break;
        }
    }
    if (var0 == 16) {
        return -1;
    }
    return var0;
}
