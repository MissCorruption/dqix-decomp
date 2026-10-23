#include <globaldefs.h>

struct Struct_0200173c {
    unsigned int unknown_0_0_ : 2;
    unsigned int unknown_0_2_ : 3;
    unsigned int unknown_0_5_ : 2;
    unsigned int unknown_0_7_ : 3;
    unsigned int unknown_1_2_ : 2;
    unsigned int unknown_1_4_ : 1;
};

struct Struct_020eebe0 {
    unsigned long unknown_0_;
    Struct_0200173c unknown_4_;
    unsigned char unknown_8_[0x44];
};

extern Struct_020eebe0 data_020eebe0[];
extern "C" int func_02001878(Struct_020eebe0* arg0);

// USA: func_0200173c
extern "C" ARM int func_0200173c(void) {
    int var0 = 0;
    Struct_020eebe0* var1 = &data_020eebe0[0];
    int var2 = 1;

    do {
        if (var1->unknown_4_.unknown_0_7_ != 0) {
            if (func_02001878(var1) != 0) {
                var0 = -1;
            }
        }
        if (var2 < 3) {
            var1 = &data_020eebe0[var2++];
        } else {
            var1 = 0;
        }
    } while (var1 != 0);

    return var0;
}
