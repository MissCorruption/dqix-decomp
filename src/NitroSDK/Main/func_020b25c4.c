#include <globaldefs.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Struct_020b27c8 Struct_020b27c8;
typedef struct Struct_020b1540_3 Struct_020b1540_3;

typedef struct Struct_020b1020 {
    Struct_020b27c8* unknown_0_;
} Struct_020b1020;

typedef struct Struct_020b23a8 {
    const Struct_020b1540_3* unknown_0_;
    const Struct_020b1020* unknown_4_;
    int unknown_8_;
    int unknown_c_;
} Struct_020b23a8;

typedef struct Struct_020b23a8_2 {
    signed char unknown_0_;
    signed char unknown_1_;
} Struct_020b23a8_2;

typedef struct Struct_020b1020_2 {
    int unknown_0_;
    int unknown_4_;
} Struct_020b1020_2;

typedef char Type_020b1020;

enum {
    Enum_020b25c4_2 = 0x2,
    Enum_020b25c4_4 = 0x4,
    Enum_020b25c4_16 = 0x10,
    Enum_020b25c4_32 = 0x20
};

Struct_020b1020_2 func_020b1020(const Struct_020b1020* arg0, int arg1, int arg2, const void* arg3);
void func_020b245c(const Struct_020b23a8* arg0, int arg1, int arg2, int arg3, int arg4, unsigned int arg5, const void* arg6, Struct_020b23a8_2 arg7);

static inline Struct_020b1020_2 inline_020b25c4(const Struct_020b1020* arg0, int arg1, int arg2, const Type_020b1020* arg3) {
    Struct_020b1020_2 var0 = func_020b1020(arg0, arg1, arg2, arg3);
    return var0;
}

static inline Struct_020b1020_2 inline_020b25c4_2(const Struct_020b23a8* arg0, const Type_020b1020* arg1) {
    return inline_020b25c4(arg0->unknown_4_, arg0->unknown_8_, arg0->unknown_c_, arg1);
}

// USA: func_020b25c4
ARM void func_020b25c4(const Struct_020b23a8* arg0, int arg1, int arg2, int arg3, unsigned int arg4, const void* arg5, Struct_020b23a8_2 arg6) {
    Struct_020b1020_2 var0;

    {
        var0 = inline_020b25c4_2(arg0, arg5);

        if (arg4 & Enum_020b25c4_16) {
            const int var1 = -(var0.unknown_0_ + 1) / 2;
            arg1 += var1 * arg6.unknown_0_;
            arg2 += var1 * arg6.unknown_1_;
        } else if (arg4 & Enum_020b25c4_32) {
            const int var2 = -var0.unknown_0_;
            arg1 += var2 * arg6.unknown_0_;
            arg2 += var2 * arg6.unknown_1_;
        }

        if (arg4 & Enum_020b25c4_2) {
            const int var3 = -(var0.unknown_4_ + 1) / 2;
            arg1 += var3 * -arg6.unknown_1_;
            arg2 += var3 * arg6.unknown_0_;
        } else if (arg4 & Enum_020b25c4_4) {
            const int var4 = -var0.unknown_4_;
            arg1 += var4 * -arg6.unknown_1_;
            arg2 += var4 * arg6.unknown_0_;
        }
    }

    func_020b245c(arg0, arg1, arg2, var0.unknown_0_, arg3, arg4, arg5, arg6);
}

#ifdef __cplusplus
}
#endif
