#include <globaldefs.h>

struct Struct_02070b6c_4 {
    unsigned char unknown_0_[0x84];
};

struct Struct_02070b6c_3 {
    unsigned int unknown_0_0_ : 12;
    struct Struct_02070b6c_4 *unknown_4_;
};

typedef int (*Type_02070e60)(struct Struct_02070b6c_4 *);

// USA: func_02070e60
extern "C" ARM struct Struct_02070b6c_4 *func_02070e60(struct Struct_02070b6c_3 *arg0, int arg1, Type_02070e60 arg2) {
    struct Struct_02070b6c_4 *var0 = arg0->unknown_4_;
    int var1;
    int var2, var3;
    if (var0 == NULL || arg2 == NULL) return NULL;
    var1 = arg0->unknown_0_0_;
    if (var1 == 0) return NULL;
    var2 = 0;
    var3 = var1 - 1;
    while (var2 <= var3) {
        int var4 = var2 + ((var3 - var2 + 1) >> 1);
        struct Struct_02070b6c_4 *var5 = var0 + var4;
        int var6 = arg2(var5);
        if (var6 == arg1) return var5;
        if (var6 > arg1) var3 = var4 - 1;
        else var2 = var4 + 1;
    }
    return NULL;
}
