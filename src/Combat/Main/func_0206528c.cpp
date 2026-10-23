#include <globaldefs.h>

struct Struct_0206528c_2 {
    unsigned short unknown_0_;
#if defined(jpn)
    char unknown1_2_[0x1a];
#else
    char unknown_2_[0xe];
#endif
    struct Struct_0206528c_2* unknown_10_;
};

struct Struct_0206528c {
    struct Struct_0206528c_2* unknown_0_;
};

// USA: func_0206528c
extern "C" ARM struct Struct_0206528c_2* func_0206528c(struct Struct_0206528c* arg0, int arg1) {
    struct Struct_0206528c_2* var0 = arg0->unknown_0_;
    while (var0 != 0) {
        if (var0->unknown_0_ == arg1) {
            return var0;
        }
        var0 = var0->unknown_10_;
    }
    return 0;
}
