#include <globaldefs.h>

struct Struct_02098eac {
    char unknown_0_[0xc];
    unsigned int unknown_c_0_ : 4;
    unsigned int unknown_c_4_ : 4;
    char unknown_d_[0xe8 - 0x10];
};

// USA: func_02098eac
extern "C" ARM int func_02098eac(struct Struct_02098eac* arg0) {
    int var0 = 0;
    int var1;
    for (var1 = 0; var1 < 30; var1++) {
        if (arg0[var1].unknown_c_4_ == 0xa) {
            var0++;
        }
    }
    return var0;
}
