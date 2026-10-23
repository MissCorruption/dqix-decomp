#include <globaldefs.h>

struct Struct_02098a84 {
    char unknown_0_[0x1b68];
    unsigned int unknown_1b68_[3];
};

// USA: func_02098e3c
extern "C" ARM int func_02098e3c(struct Struct_02098a84* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < 3; var0++) {
        if (arg1 == arg0->unknown_1b68_[var0]) {
            return 1;
        }
    }
    return 0;
}
