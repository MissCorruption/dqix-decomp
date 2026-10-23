#include <globaldefs.h>

struct Struct_020b1540 {
    signed char unknown_0_;
    unsigned char unknown_1_;
    signed char unknown_2_;
};

struct Struct_020b27c8 {
    unsigned char unknown_0_;
    signed char unknown_1_;
    unsigned short unknown_2_;
    Struct_020b1540 unknown_4_;
    unsigned char unknown_7_;
};

struct Struct_020b1020 {
    Struct_020b27c8* unknown_0_;
};

struct Struct_020b23a8 {
    const void* unknown_0_;
    const Struct_020b1020* unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

struct Struct_020b245c {
    signed char unknown_0_;
    signed char unknown_1_;
};

enum {
    Enum_020b245c_1024 = 0x400,
    Enum_020b245c_2048 = 0x800
};

extern "C" int func_020b0f00(const Struct_020b1020* arg0, int arg1, const void* arg2, const void** arg3);
extern "C" void func_020b23a8(const Struct_020b23a8* arg0, int arg1, int arg2, int arg3, const void* arg4, const void** arg5, Struct_020b245c arg6);

static inline int inline_020b1020(const Struct_020b1020* arg0) {
    return arg0->unknown_0_->unknown_1_;
}

static inline int inline_020b245c(const Struct_020b23a8* arg0, const void* arg1, const void** arg2) {
    return func_020b0f00(arg0->unknown_4_, arg0->unknown_8_, arg1, arg2);
}

// USA: func_020b245c
extern "C" ARM void func_020b245c(const Struct_020b23a8* arg0, int arg1, int arg2, int arg3, int arg4, unsigned int arg5, const void* arg6, Struct_020b245c arg7) {
    const void* var0;
    int var1;
    int var2;
    int var3;
    int var4;

    var1 = inline_020b1020(arg0->unknown_4_) + arg0->unknown_c_;
    var2 = var1 * -arg7.unknown_1_;
    var3 = var1 * arg7.unknown_0_;
    var0 = arg6;

    var4 = 0;

    while (var0 != NULL) {
        int var5 = arg1 + var4 * var2;
        int var6 = arg2 + var4 * var3;

        if (arg5 & Enum_020b245c_2048) {
            int var7 = inline_020b245c(arg0, var0, NULL);
            int var8 = arg3 - var7;
            var5 += var8 * arg7.unknown_0_;
            var6 += var8 * arg7.unknown_1_;
        } else if (arg5 & Enum_020b245c_1024) {
            int var9 = inline_020b245c(arg0, var0, NULL);
            int var10 = (arg3 + 1) / 2 - (var9 + 1) / 2;
            var5 += var10 * arg7.unknown_0_;
            var6 += var10 * arg7.unknown_1_;
        }

        func_020b23a8(arg0, var5, var6, arg4, var0, &var0, arg7);
        var4++;
    }
}
