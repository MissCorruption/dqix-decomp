#include <globaldefs.h>

struct Struct_020dffc8 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_020dfec0 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 20;
    struct Struct_020dffc8 *unknown_4_;
};

typedef int (*Type_020dfec0)(struct Struct_020dfec0 *, struct Struct_020dffc8 *);

// USA: func_020dffc8
extern "C" ARM int func_020dffc8(struct Struct_020dfec0 *arg0, Type_020dfec0 arg1) {
    int var0;
    struct Struct_020dffc8 *var1;
    int var2;

    var1 = arg0->unknown_4_;
    if (var1 == NULL || (var0 = arg0->unknown_0_0_) == 0 || arg1 == NULL) return 0;
    for (var2 = 0; var2 < var0; var2++, var1++) {
        arg1(arg0, var1);
    }
    return 1;
}
