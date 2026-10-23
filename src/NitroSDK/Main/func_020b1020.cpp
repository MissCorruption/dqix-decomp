#include <globaldefs.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Struct_020b27c8 {
    unsigned char unknown_0_;
    signed char unknown_1_;
} Struct_020b27c8;

typedef struct Struct_020b1020 {
    Struct_020b27c8* unknown_0_;
} Struct_020b1020;

typedef struct Struct_020b1020_2 {
    int unknown_0_;
    int unknown_4_;
} Struct_020b1020_2;

int func_020b0f00(const Struct_020b1020* arg0, int arg1, const void* arg2, const void** arg3);

static inline int inline_020b1020(const Struct_020b1020* arg0) {
    return arg0->unknown_0_->unknown_1_;
}

// USA: func_020b1020
ARM Struct_020b1020_2 func_020b1020(const Struct_020b1020* arg0, int arg1, int arg2, const void* arg3) {
    int var0 = 1;
    Struct_020b1020_2 var1 = {0, 0};

    while (arg3 != NULL) {
        const int var2 = func_020b0f00(arg0, arg1, arg3, &arg3);
        if (var2 > var1.unknown_0_) {
            var1.unknown_0_ = var2;
        }
        var0++;
    }

    var1.unknown_4_ = (var0 - 1) * (inline_020b1020(arg0) + arg2) - arg2;

    return var1;
}

#ifdef __cplusplus
}
#endif
