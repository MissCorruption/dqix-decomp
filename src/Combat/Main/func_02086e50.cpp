#include <globaldefs.h>

struct Struct_02086e50_2 {
    signed char unknown_0_0_ : 6;
    char unknown_1_[0x23c - 1];
};

struct Struct_02086e50 {
    char unknown_0_[0xf80];
    struct Struct_02086e50_2 unknown_f80_[13];
    unsigned char unknown_2c8c_;
};

// USA: func_02086e50
extern "C" ARM struct Struct_02086e50_2* func_02086e50(struct Struct_02086e50* arg0, int arg1) {
    unsigned char var0;
    for (var0 = 0; var0 < arg0->unknown_2c8c_; var0++) {
        struct Struct_02086e50_2* var1 = &arg0->unknown_f80_[var0];
        if (arg1 == var1->unknown_0_0_) {
            return var1;
        }
    }
    return NULL;
}
