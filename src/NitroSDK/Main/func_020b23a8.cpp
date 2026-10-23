#include <globaldefs.h>

typedef unsigned short Type_020b0a1c;
typedef signed char Type_ov002_0215ab60;

struct Struct_020b1d70;
struct Struct_020b1d70_2;
extern "C" int func_020b1d70(struct Struct_020b1d70* arg0, struct Struct_020b1d70_2** arg1, int arg2, int arg3, int arg4, unsigned short arg5);

typedef Type_020b0a1c (*Type_020b23a8)(const void** ppChar);

struct Struct_020b1020 {
    void* unknown_0_;
    Type_020b23a8 unknown_4_;
};

struct Struct_020b23a8 {
    struct Struct_020b1d70* unknown_0_;
    const Struct_020b1020* unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

struct Struct_020b23a8_2 {
    Type_ov002_0215ab60 unknown_0_;
    Type_ov002_0215ab60 unknown_1_;
};

static inline Type_020b23a8 inline_020b23a8(const Struct_020b1020* arg0) {
    return arg0->unknown_4_;
}

// USA: func_020b23a8
extern "C" ARM void func_020b23a8(const Struct_020b23a8* arg0, int arg1, int arg2, int arg3, const void* arg4, const void** arg5, Struct_020b23a8_2 arg6) {
    const void* var0;
    int var1;
    const Struct_020b1020* var2;
    Type_020b0a1c var3;
    Type_020b23a8 var4;

    var1 = arg0->unknown_8_;
    var2 = arg0->unknown_4_;
    var0 = arg4;
    var4 = inline_020b23a8(var2);

    while ((var3 = var4((const void**)&var0)) != 0) {
        if (var3 == '\n') {
            break;
        }

        {
            int var5 = func_020b1d70(arg0->unknown_0_, (struct Struct_020b1d70_2**)var2, arg1, arg2, arg3, var3) + var1;
            arg1 += var5 * arg6.unknown_0_;
            arg2 += var5 * arg6.unknown_1_;
        }
    }

    if (arg5 != NULL) {
        *arg5 = (var3 == '\n') ? var0 : NULL;
    }
}
