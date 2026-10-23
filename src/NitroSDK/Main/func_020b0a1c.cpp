#include <globaldefs.h>

typedef unsigned short Type_020b0a1c;
typedef unsigned long Type_020b11c8;
typedef short Type_ov003_021666c4;
typedef signed long Type_0205ac40;
typedef long long Type_0205ac40_2;
typedef Type_0205ac40 Type_0205ac40_3;
typedef int Type_020b0a1c_2;

#define FX32_SHIFT 12
#define FX32_ONE (1 << FX32_SHIFT)

#define GX_OAM_ATTR01_Y_SHIFT 0
#define GX_OAM_ATTR01_Y_MASK 0x000000ff
#define GX_OAM_ATTR01_RSENABLE_MASK 0x00000300
#define GX_OAM_ATTR01_SHAPE_SHIFT 14
#define GX_OAM_ATTR01_SHAPE_MASK 0x0000c000
#define GX_OAM_ATTR01_X_SHIFT 16
#define GX_OAM_ATTR01_X_MASK 0x01ff0000
#define GX_OAM_ATTR01_RS_SHIFT 25
#define GX_OAM_ATTR01_RS_MASK 0x3e000000
#define GX_OAM_ATTR01_FLIP_MASK 0x30000000
#define GX_OAM_ATTR01_SIZE_SHIFT 30
#define GX_OAM_ATTR01_SIZE_MASK 0xc0000000

typedef enum {
    Enum_020b0a1c_0_2 = 0,
    Enum_020b0a1c_268435456_2 = 0x10000000,
    Enum_020b0a1c_536870912_2 = 0x20000000,
    Enum_020b0a1c_805306368_2 = 0x30000000,
    Enum_020b0a1c_256_2 = 0x100,
    Enum_020b0a1c_512_2 = 0x200,
    Enum_020b0a1c_768_2 = 0x300
} Enum_020b0a1c;

#define GX_OAM_SHAPE_ENUM(shape, size) (((shape) << GX_OAM_ATTR01_SHAPE_SHIFT) | ((size) << GX_OAM_ATTR01_SIZE_SHIFT))

typedef enum {
    Enum_0205ac40_0 = GX_OAM_SHAPE_ENUM(0, 0),
    Enum_0205ac40_1073741824 = GX_OAM_SHAPE_ENUM(0, 1),
    Enum_0205ac40_m2147483648 = GX_OAM_SHAPE_ENUM(0, 2),
    Enum_0205ac40_m1073741824 = GX_OAM_SHAPE_ENUM(0, 3),
    Enum_0205ac40_16384 = GX_OAM_SHAPE_ENUM(1, 0),
    Enum_0205ac40_1073758208 = GX_OAM_SHAPE_ENUM(1, 1),
    Enum_0205ac40_m2147467264 = GX_OAM_SHAPE_ENUM(1, 2),
    Enum_0205ac40_m1073725440 = GX_OAM_SHAPE_ENUM(1, 3),
    Enum_0205ac40_32768 = GX_OAM_SHAPE_ENUM(2, 0),
    Enum_0205ac40_1073774592 = GX_OAM_SHAPE_ENUM(2, 1),
    Enum_0205ac40_m2147450880 = GX_OAM_SHAPE_ENUM(2, 2),
    Enum_0205ac40_m1073709056 = GX_OAM_SHAPE_ENUM(2, 3)
} Type_020b20b0;

typedef union {
    Type_020b0a1c unknown_0_[4];
    struct {
        Type_020b0a1c unknown1_0_;
        Type_020b0a1c unknown_2_;
        Type_020b0a1c unknown_4_;
        Type_020b0a1c unknown_6_;
    };
    struct {
        Type_020b11c8 unknown2_0_;
        Type_020b0a1c unknown1_4_;
        Type_020b0a1c unknown1_6_;
    };
} Struct_020b0a1c_2;

struct Struct_020b0a1c_3 {
    Type_0205ac40_3 unknown_0_;
    Type_0205ac40_3 unknown_4_;
    Type_0205ac40_3 unknown_8_;
    Type_0205ac40_3 unknown_c_;
};

struct Struct_020b0a1c_4 {
    Type_0205ac40_3 unknown_0_;
    Type_0205ac40_3 unknown_4_;
};

struct Struct_0205ac40_5 {
    Type_020b0a1c unknown_0_;
    Type_020b0a1c unknown_2_;
    Type_020b0a1c unknown_4_;
};

struct Struct_020b0a1c_5 {
    Type_020b0a1c unknown_0_;
    Type_020b0a1c unknown_2_;
    Struct_0205ac40_5* unknown_4_;
};

extern const Type_020b0a1c data_020e9198[3][4];
extern const Type_020b0a1c data_020e9180[3][4];

static inline void inline_020b0a1c_2(const Struct_020b0a1c_5* arg0, Type_020b0a1c arg1, Struct_020b0a1c_2* arg2) {
    const Struct_0205ac40_5* var0 = arg0->unknown_4_ + arg1;
    arg2->unknown1_0_ = var0->unknown_0_;
    arg2->unknown_2_ = var0->unknown_2_;
    arg2->unknown_4_ = var0->unknown_4_;
}

static inline Type_ov003_021666c4 inline_020b0a1c_3(const Struct_020b0a1c_2* arg0) {
    return (Type_ov003_021666c4)((GX_OAM_ATTR01_X_MASK & arg0->unknown2_0_) >> GX_OAM_ATTR01_X_SHIFT);
}

static inline Type_ov003_021666c4 inline_020b0a1c_4(const Struct_020b0a1c_2* arg0) {
    return (Type_ov003_021666c4)((GX_OAM_ATTR01_Y_MASK & arg0->unknown2_0_) >> GX_OAM_ATTR01_Y_SHIFT);
}

static inline Type_ov003_021666c4 inline_020b0a1c_5(Type_ov003_021666c4 arg0) {
    if (arg0 > 255) {
        arg0 |= 0xff00;
    }
    return arg0;
}

static inline Type_ov003_021666c4 inline_020b0a1c_6(Type_ov003_021666c4 arg0) {
    if (arg0 > 127) {
        arg0 |= 0xff00;
    }
    return arg0;
}

static inline void inline_020b0a1c_7(const Struct_020b0a1c_2* arg0, Struct_020b0a1c_4* arg1) {
    arg1->unknown_0_ = (Type_0205ac40_3)(inline_020b0a1c_5(inline_020b0a1c_3(arg0)) * FX32_ONE);
    arg1->unknown_4_ = (Type_0205ac40_3)(inline_020b0a1c_6(inline_020b0a1c_4(arg0)) * FX32_ONE);
}

static inline Enum_020b0a1c inline_020b0a1c_8(const Struct_020b0a1c_2* arg0) {
    Enum_020b0a1c var0;
    var0 = (Enum_020b0a1c)(arg0->unknown2_0_ & GX_OAM_ATTR01_RSENABLE_MASK);
    if (var0 == Enum_020b0a1c_256_2 || var0 == Enum_020b0a1c_768_2) {
        return var0;
    }
    return (Enum_020b0a1c)(var0 | (arg0->unknown2_0_ & GX_OAM_ATTR01_FLIP_MASK));
}

static inline Type_020b20b0 inline_020b0a1c_9(const Struct_020b0a1c_2* arg0) {
    return (Type_020b20b0)((GX_OAM_ATTR01_SHAPE_MASK | GX_OAM_ATTR01_SIZE_MASK) & arg0->unknown2_0_);
}

static inline int inline_020b0a1c_10(const Type_020b20b0* arg0) {
    return data_020e9198[(*arg0 & GX_OAM_ATTR01_SHAPE_MASK) >> GX_OAM_ATTR01_SHAPE_SHIFT]
                        [(*arg0 & GX_OAM_ATTR01_SIZE_MASK) >> GX_OAM_ATTR01_SIZE_SHIFT];
}

static inline int inline_020b0a1c_11(const Type_020b20b0* arg0) {
    return data_020e9180[(*arg0 & GX_OAM_ATTR01_SHAPE_MASK) >> GX_OAM_ATTR01_SHAPE_SHIFT]
                        [(*arg0 & GX_OAM_ATTR01_SIZE_MASK) >> GX_OAM_ATTR01_SIZE_SHIFT];
}

static inline void inline_020b0a1c_12(const Struct_020b0a1c_2* arg0, Struct_020b0a1c_4* arg1) {
    if (inline_020b0a1c_8(arg0) == Enum_020b0a1c_768_2) {
        const Type_020b20b0 var0 = inline_020b0a1c_9(arg0);
        const int var1 = inline_020b0a1c_10(&var0) << (FX32_SHIFT - 1);
        const int var2 = inline_020b0a1c_11(&var0) << (FX32_SHIFT - 1);
        arg1->unknown_0_ += var1;
        arg1->unknown_4_ += var2;
    }
}

static inline void inline_020b0a1c_13(const Struct_020b0a1c_3* arg0, const Struct_020b0a1c_4* arg1, Struct_020b0a1c_4* arg2) {
    Struct_020b0a1c_4 var0;
    Struct_020b0a1c_4* var1 = arg2;
    if (arg2 == arg1) {
        var1 = &var0;
    }
    var1->unknown_0_ = (Type_0205ac40_3)((((Type_0205ac40_2)(arg0->unknown_0_) * arg1->unknown_0_ + 0x800LL) + ((Type_0205ac40_2)(arg0->unknown_8_) * arg1->unknown_4_ + 0x800LL)) >> FX32_SHIFT);
    var1->unknown_4_ = (Type_0205ac40_3)((((Type_0205ac40_2)(arg0->unknown_4_) * arg1->unknown_0_ + 0x800LL) + ((Type_0205ac40_2)(arg0->unknown_c_) * arg1->unknown_4_ + 0x800LL)) >> FX32_SHIFT);
    if (var1 == &var0) {
        *arg2 = var0;
    }
}

static inline void inline_020b0a1c(Struct_020b0a1c_2* arg0, Enum_020b0a1c arg1, int arg2) {
    if (Enum_020b0a1c_256_2 != arg1 && Enum_020b0a1c_768_2 != arg1) {
        arg0->unknown2_0_ = ((arg0->unknown2_0_ & ~(GX_OAM_ATTR01_RSENABLE_MASK | GX_OAM_ATTR01_RS_MASK)) | arg1);
    } else {
        arg0->unknown2_0_ = ((arg0->unknown2_0_ & ~(GX_OAM_ATTR01_RSENABLE_MASK | GX_OAM_ATTR01_RS_MASK)) | arg1 | (arg2 << GX_OAM_ATTR01_RS_SHIFT));
    }
}

static inline void inline_020b0a1c_14(const Struct_020b0a1c_2* arg0, const Struct_020b0a1c_3* arg1, Struct_020b0a1c_4* arg2, Type_020b0a1c_2 arg3) {
    const Type_020b20b0 var0 = inline_020b0a1c_9(arg0);
    const int var1 = inline_020b0a1c_10(&var0) >> 1;
    const int var2 = inline_020b0a1c_11(&var0) >> 1;
    arg2->unknown_0_ += -(var1 << FX32_SHIFT) + arg1->unknown_0_ * var1 + arg1->unknown_8_ * var2;
    arg2->unknown_4_ += -(var2 << FX32_SHIFT) + arg1->unknown_4_ * var1 + arg1->unknown_c_ * var2;
    if (arg3) {
        arg2->unknown_0_ -= var1 << FX32_SHIFT;
        arg2->unknown_4_ -= var2 << FX32_SHIFT;
    }
}

static inline void inline_020b0a1c_15(Struct_020b0a1c_2* arg0, int arg1, int arg2) {
    arg0->unknown2_0_ = ((arg0->unknown2_0_ & ~(GX_OAM_ATTR01_Y_MASK | GX_OAM_ATTR01_X_MASK)) | (arg2 & GX_OAM_ATTR01_Y_MASK) |
                   ((arg1 & (GX_OAM_ATTR01_X_MASK >> GX_OAM_ATTR01_X_SHIFT)) << GX_OAM_ATTR01_X_SHIFT));
}

// USA: func_020b0a1c
extern "C" ARM Type_020b0a1c func_020b0a1c(Struct_020b0a1c_2* arg0, Type_020b0a1c arg1, const Struct_020b0a1c_5* arg2, const Struct_020b0a1c_3* arg3,
                                 const Struct_020b0a1c_4* arg4, Type_020b0a1c arg5, Type_020b0a1c_2 arg6) {
    Type_020b0a1c var0 = 0;
    Struct_020b0a1c_4 var1;
    Struct_020b0a1c_2* var2 = NULL;
    const Type_020b0a1c var3 = (arg1 < arg2->unknown_0_) ? arg1 : arg2->unknown_0_;

    for (var0 = 0; var0 < var3; var0++) {
        var2 = &arg0[var0];
        inline_020b0a1c_2(arg2, var0, var2);
        if (arg3 != NULL || arg4 != NULL) {
            inline_020b0a1c_7(var2, &var1);
            if (arg3 != NULL) {
                inline_020b0a1c_12(var2, &var1);
                {
                    const Enum_020b0a1c var4 = (arg6) ? Enum_020b0a1c_768_2 : Enum_020b0a1c_256_2;
                    const Type_020b0a1c_2 var5 = (var4 == Enum_020b0a1c_768_2);
                    inline_020b0a1c_13(arg3, &var1, &var1);
                    inline_020b0a1c(var2, var4, arg5);
                    inline_020b0a1c_14(var2, arg3, &var1, var5);
                }
            }
            if (arg4 != NULL) {
                var1.unknown_0_ += arg4->unknown_0_;
                var1.unknown_4_ += arg4->unknown_4_;
            }
            inline_020b0a1c_15(var2, (var1.unknown_0_ + 0x800) >> FX32_SHIFT, (var1.unknown_4_ + 0x800) >> FX32_SHIFT);
        }
    }
    return var3;
}
