#include <globaldefs.h>

struct Struct_0203e5d8_2 {
    char unknown_0_[0x50];
    int unknown_50_;
};

struct Struct_0203e5d8_3 {
    char unknown_0_[0x14];
    struct Struct_0203e5d8_2* unknown_14_;
};

struct Struct_0203e5d8 {
    char unknown_0_[0xc];
    struct Struct_0203e5d8_3* unknown_c_[0x20];
};

// USA: func_0203e5d8
extern "C" ARM void func_0203e5d8(struct Struct_0203e5d8* arg0, int arg1) {
    struct Struct_0203e5d8_3** var0 = arg0->unknown_c_;
    int var1;
    for (var1 = 0; var1 < 0x20; var1++, var0++) {
        struct Struct_0203e5d8_3* var2 = *var0;
        if (var2 != 0) {
            struct Struct_0203e5d8_2* var3 = var2->unknown_14_;
            if (var3 != 0) {
                if (arg1) {
                    var3->unknown_50_ &= ~0x10;
                } else {
                    var3->unknown_50_ |= 0x10;
                }
            }
        }
    }
}
