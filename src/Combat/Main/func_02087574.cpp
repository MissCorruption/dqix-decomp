#include <globaldefs.h>

struct Struct_02087574_2 {
    unsigned char unknown_0_[0x10];
    signed char unknown_10_;
    unsigned char unknown_11_[3];
};

struct Struct_02087574 {
    unsigned char unknown_0_[0xf2c];
    struct Struct_02087574_2 unknown_f2c_[3];
};

// USA: func_02087574
extern "C" ARM struct Struct_02087574_2* func_02087574(struct Struct_02087574* arg0, int arg1) {
    int var0;
    if (arg1 >= 0) {
        for (var0 = 0; var0 < 3; var0++) {
            if (arg1 == arg0->unknown_f2c_[var0].unknown_10_) {
                return &arg0->unknown_f2c_[var0];
            }
        }
    }
    return 0;
}
