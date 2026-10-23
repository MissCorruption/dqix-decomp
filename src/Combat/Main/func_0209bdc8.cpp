#include <globaldefs.h>

struct Struct_0209bdc8_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_0_ : 3;
    unsigned int : 10;
    unsigned int unknown_5_5_ : 8;
    unsigned int : 11;
    char unknown_8_[0x18];
};

struct Struct_0209bdc8 {
    struct Struct_0209bdc8_2 unknown_0_[6];
    int unknown_c0_;
};

// USA: func_0209bdc8
extern "C" ARM struct Struct_0209bdc8_2* func_0209bdc8(struct Struct_0209bdc8* arg0, int arg1, unsigned int arg2) {
    unsigned int var0 = (arg1 == 0);
    int var1;
    for (var1 = 0; var1 < arg0->unknown_c0_; var1++) {
        struct Struct_0209bdc8_2* var2 = &arg0->unknown_0_[var1];
        if (var0 == var2->unknown_4_0_ || var2->unknown_4_0_ == 2) {
            if (arg2 & var2->unknown_5_5_) {
                return var2;
            }
        }
    }
    return 0;
}
