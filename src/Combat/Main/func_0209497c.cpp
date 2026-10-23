#include <globaldefs.h>

#if defined(jpn)
struct Struct_0209497c {
    char unknown_0_[0xc];
    short unknown_30_;
    char unknown_e_[0x10 - 0xe];
};

struct Struct_0202343c {
    struct Struct_0209497c unknown_0_[18];
    char unknown_120_[0x13b - 0x120];
    signed char unknown_3cb_;
};
#else
struct Struct_0209497c {
    char unknown_0_[0x30];
    short unknown_30_;
    char unknown_32_[0x34 - 0x32];
};

struct Struct_0202343c {
    struct Struct_0209497c unknown_0_[18];
    char unknown_3a8_[0x3cb - 0x3a8];
    signed char unknown_3cb_;
};
#endif

// USA: func_0209497c
extern "C" ARM int func_0209497c(struct Struct_0202343c* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_3cb_; var0++) {
        short var1 = arg0->unknown_0_[var0].unknown_30_;
        if (var1 == arg1) {
            return 1;
        }
    }
    return 0;
}
