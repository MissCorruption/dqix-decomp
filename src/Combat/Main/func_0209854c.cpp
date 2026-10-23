#include <globaldefs.h>

extern "C" int func_02098268(int arg0, int arg1);

struct Struct_0203d028_12 {
    char unknown_0_[0xc];
    unsigned int unknown_c_0_ : 24;
    unsigned int unknown_f_0_ : 6;
    unsigned int unknown_f_6_ : 2;
    char unknown_10_[0xe8 - 0x10];
};

// USA: func_0209854c
extern "C" ARM struct Struct_0203d028_12* func_0209854c(struct Struct_0203d028_12* arg0, int arg1) {
    int var0;
    if (func_02098268((int)arg0, arg1) == 0) return 0;
    for (var0 = 0; var0 < 0x1e; var0++) {
        if (arg1 == arg0[var0].unknown_f_0_) return &arg0[var0];
    }
    return 0;
}
