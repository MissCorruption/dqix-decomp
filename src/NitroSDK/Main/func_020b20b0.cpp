#include <globaldefs.h>

typedef unsigned int Type_020b11c8;
typedef unsigned short Type_020b0a1c;
typedef unsigned char Type_020b1300;

#define CHARACTER_WIDTH  8
#define CHARACTER_HEIGHT 8

#define GX_OAM_ATTR01_Y_MASK     0x000000ff
#define GX_OAM_ATTR01_X_SHIFT    16
#define GX_OAM_ATTR01_X_MASK     0x01ff0000
#define GX_OAM_ATTR01_CM_SHIFT   13
#define GX_OAM_ATTR01_CM_MASK    0x00002000
#define GX_OAM_ATTR01_SHAPE_MASK 0x0000c000
#define GX_OAM_ATTR01_SIZE_MASK  0xc0000000
#define GX_OAM_ATTR2_NAME_MASK   0x000003ff

enum Enum_020b20b0 {
    Enum_020b20b0_0 = 0,
    Enum_020b20b0_1 = 1
};

typedef int Type_020b20b0;
typedef int Type_020b20b0_2;

struct Struct_020b0a1c_2 {
    union {
        Type_020b11c8 unknown_0_;
        struct {
            Type_020b0a1c unknown1_0_;
            Type_020b0a1c unknown_2_;
        };
    };
    union {
        struct {
            Type_020b0a1c unknown_4_;
            Type_020b0a1c unknown_6_;
        };
        Type_020b11c8 unknown1_4_;
    };
};

struct Struct_020e91e0 {
    Type_020b1300 unknown_0_;
    Type_020b1300 unknown_1_;
};

extern Struct_020e91e0 data_020e91e0[4][4];

extern "C" Type_020b20b0 func_020b11ac(Type_020b1300 *arg0);

static inline Type_020b11c8 inline_020b20b0(Type_020b11c8 arg0) {
    asm {
        clz arg0, arg0
    }
    return arg0;
}

static inline int inline_020b20b0_2(Type_020b11c8 arg0) {
    return (int)(31 - inline_020b20b0(arg0));
}

static inline Struct_020e91e0 *inline_020b20b0_3(int arg0, int arg1) {
    int var0 = (arg0 >= 8) ? 3 : inline_020b20b0_2((unsigned long)arg0);
    int var1 = (arg1 >= 8) ? 3 : inline_020b20b0_2((unsigned long)arg1);

    return &data_020e91e0[var1][var0];
}

static inline void inline_020b0a1c_15(Struct_020b0a1c_2 *arg0, int arg1, int arg2) {
    arg0->unknown_0_ = ((arg0->unknown_0_ & ~(GX_OAM_ATTR01_Y_MASK | GX_OAM_ATTR01_X_MASK)) | (arg2 & GX_OAM_ATTR01_Y_MASK)
                   | ((arg1 & (GX_OAM_ATTR01_X_MASK >> GX_OAM_ATTR01_X_SHIFT)) << GX_OAM_ATTR01_X_SHIFT));
}

static inline void inline_020b20b0_4(Struct_020b0a1c_2 *arg0, Type_020b20b0 arg1) {
    arg0->unknown_0_ = ((arg0->unknown_0_ & ~(GX_OAM_ATTR01_SHAPE_MASK | GX_OAM_ATTR01_SIZE_MASK)) | arg1);
}

static inline void inline_020b20b0_5(Struct_020b0a1c_2 *arg0, int arg1) {
    arg0->unknown_4_ = (Type_020b0a1c)((arg0->unknown_4_ & ~GX_OAM_ATTR2_NAME_MASK) | arg1);
}

static inline void inline_020b20b0_6(Struct_020b0a1c_2 *arg0, Enum_020b20b0 arg1) {
    arg0->unknown_0_ = ((arg0->unknown_0_ & ~GX_OAM_ATTR01_CM_MASK) | (arg1 << GX_OAM_ATTR01_CM_SHIFT));
}

// USA: func_020b20b0
extern "C" ARM int func_020b20b0(Struct_020b0a1c_2 *arg0, int arg1, int arg2, int arg3, int arg4, Enum_020b20b0 arg5, int arg6, Type_020b20b0_2 arg7) {
    Struct_020e91e0 *const var0    = inline_020b20b0_3(arg1, arg2);
    const int var1    = var0->unknown_0_;
    const int var2   = var0->unknown_1_;
    const Type_020b11c8 var3  = (Type_020b11c8)(~0) << var1;
    const Type_020b11c8 var4 = (Type_020b11c8)(~0) << var2;
    const Type_020b11c8 var5       = arg1 & var3;
    const Type_020b11c8 var6      = arg2 & var4;
    const int var7     = (arg5 == Enum_020b20b0_0) ? 1 : 2;
    int var8               = 0;

    {
        const Type_020b20b0 var9 = func_020b11ac(&var0->unknown_0_);
        const int var10         = arg1 >> var1;
        const int var11         = arg2 >> var2;
        const int var12 = ((var7 << var1) << var2) >> arg7;
        int var13, var14;

        for (var14 = 0; var14 < var11; ++var14) {
            const int var15 = arg4 + (var14 << var2) * CHARACTER_HEIGHT;

            for (var13 = 0; var13 < var10; ++var13) {
                const int var16 = arg3 + (var13 << var1) * CHARACTER_WIDTH;

                inline_020b0a1c_15(arg0, var16, var15);
                inline_020b20b0_4(arg0, var9);
                inline_020b20b0_5(arg0, arg6);
                inline_020b20b0_6(arg0, arg5);

                arg0++;
                arg6 += var12;
            }
        }

        var8 += var10 * var11;
    }

    if (var5 < arg1) {
        const unsigned int var17  = arg1 - var5;
        const unsigned int var18 = var6;
        const int var19                   = arg3 + (int)var5 * CHARACTER_WIDTH;
        const int var20                   = arg4;

        const int var21 = func_020b20b0(arg0, (int)var17, (int)var18, var19, var20, arg5, arg6, arg7);

        arg0 += var21;
        var8 += var21;
        arg6 += (var7 * var17 * var18) >> arg7;
    }

    if (var6 < arg2) {
        const unsigned int var22  = var5;
        const unsigned int var23 = arg2 - var6;
        const int var24                   = arg3;
        const int var25                   = arg4 + (int)var6 * CHARACTER_HEIGHT;

        const int var26 = func_020b20b0(arg0, (int)var22, (int)var23, var24, var25, arg5, arg6, arg7);

        arg0 += var26;
        var8 += var26;
        arg6 += (var7 * var22 * var23) >> arg7;
    }

    if (var5 < arg1 && var6 < arg2) {
        const unsigned int var27  = arg1 - var5;
        const unsigned int var28 = arg2 - var6;
        const int var29                   = arg3 + (int)var5 * CHARACTER_WIDTH;
        const int var30                   = arg4 + (int)var6 * CHARACTER_HEIGHT;

        const int var31 = func_020b20b0(arg0, (int)var27, (int)var28, var29, var30, arg5, arg6, arg7);

        var8 += var31;
    }

    return var8;
}
