#include <globaldefs.h>

struct Struct_0208e0c4_2 {
    char unknown_0_[0x6c];
    struct Struct_0208e0c4_2* unknown_6c_;
};

struct Struct_0208e0c4 {
    char unknown_0_[4];
    struct Struct_0208e0c4_2* unknown_4_;
    unsigned short unknown_8_;
};

// USA: func_0208e778
extern "C" ARM void func_0208e778(struct Struct_0208e0c4* arg0, struct Struct_0208e0c4_2* arg1) {
    struct Struct_0208e0c4_2** var0 = &arg0->unknown_4_;
    while (*var0 != 0) {
        var0 = &(*var0)->unknown_6c_;
    }
    *var0 = arg1;
    arg0->unknown_8_++;
}
