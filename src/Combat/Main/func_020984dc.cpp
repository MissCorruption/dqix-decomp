#include <globaldefs.h>

struct Struct_02064e88_2 {
    unsigned char unknown_0_[0xc];
    unsigned int unknown_c_0_ : 4;
    unsigned int unknown_c_4_ : 4;
    unsigned int unknown_d_0_ : 24;
    unsigned int unknown_10_;
    unsigned char unknown_14_[0xe8 - 0x14];
};

// USA: func_020984dc
extern "C" ARM int func_020984dc(struct Struct_02064e88_2* arg0, int arg1, struct Struct_02064e88_2** arg2) {
    int var0;
    int var1;
    if (arg2 == NULL) {
        return 0;
    }
    if (arg1 >= 0xb) {
        return 0;
    }
    var0 = 0;
    for (var1 = 0; var1 < 0x1e; var1++) {
        struct Struct_02064e88_2* var2 = &arg0[var1];
        if (var2->unknown_10_ >> 2) {
            if (var2->unknown_c_4_ == arg1) {
                arg2[var0] = var2;
                var0++;
                if (var0 >= 6) {
                    break;
                }
            }
        }
    }
    return var0;
}
