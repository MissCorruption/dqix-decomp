#include <globaldefs.h>

typedef int (*Type_020a8fd0)(void*);

struct Struct_020a8fd0_2 {
    unsigned int unknown_0_0_ : 12;
    char* unknown_4_;
};

// USA: func_020a9288
extern "C" ARM void* func_020a9288(struct Struct_020a8fd0_2* arg0, int arg1, Type_020a8fd0 arg2) {
    char* var0 = arg0->unknown_4_;
    int var1;
    int var2, var3, var4, var5;
    if (var0 == 0 || arg2 == 0) {
        return 0;
    }
    var1 = arg0->unknown_0_0_;
    if (var1 == 0) {
        return 0;
    }
    var2 = 0;
    var3 = var1 - 1;
    while (var2 <= var3) {
        var4 = var2 + ((var3 - var2 + 1) >> 1);
        var5 = arg2(var0 + var4 * 64);
        if (var5 == arg1) {
            return var0 + var4 * 64;
        }
        if (var5 > arg1) {
            var3 = var4 - 1;
        } else {
            var2 = var4 + 1;
        }
    }
    return 0;
}
