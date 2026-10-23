#include <globaldefs.h>

struct Struct_0208e7a4_2 {
    unsigned int unknown_0_;              // 0x0
    char unknown_4_[0x6c - 4];               // 0x4..0x6b
    struct Struct_0208e7a4_2* unknown_6c_;        // 0x6c
};

struct Struct_0208e7a4 {
    char unknown_0_[4];                      // 0x0..0x3
    struct Struct_0208e7a4_2* unknown_4_;        // 0x4
};

// USA: func_0208e7a4
extern "C" ARM struct Struct_0208e7a4_2* func_0208e7a4(struct Struct_0208e7a4* arg0, unsigned int arg1) {
    struct Struct_0208e7a4_2* var0 = arg0->unknown_4_;
    while (var0 != NULL) {
        if (arg1 == ((var0->unknown_0_ << 9) >> 25)) {
            return var0;
        }
        var0 = var0->unknown_6c_;
    }
    return NULL;
}
