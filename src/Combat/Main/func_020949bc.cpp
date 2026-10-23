#include <globaldefs.h>

#if defined(jpn)
struct Struct_020949bc {
    short unknown_0_;
    char unknown_2_[0x10 - 2];
};

struct Struct_0202343c_2 {
    char unknown_0_[0x8c];
    struct Struct_020949bc unknown_1d0_[9];
    char unknown_11c_[0x13c - 0x11c];
    signed char unknown_3cc_;
};
#else
struct Struct_020949bc {
    short unknown_0_;
    char unknown_2_[0x34 - 2];
};

struct Struct_0202343c_2 {
    char unknown_0_[0x1d0];
    struct Struct_020949bc unknown_1d0_[9];
    char unknown_3a4_[0x3cc - 0x3a4];
    signed char unknown_3cc_;
};
#endif

// USA: func_020949bc
extern "C" ARM int func_020949bc(struct Struct_0202343c_2* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_3cc_; var0++) {
        short var1 = arg0->unknown_1d0_[var0].unknown_0_;
        if (var1 == arg1) {
            return 1;
        }
    }
    return 0;
}
