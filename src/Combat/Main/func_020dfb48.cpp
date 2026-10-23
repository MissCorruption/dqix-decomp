#include <globaldefs.h>

typedef int (*Type_020df850_2)(void *elem);

struct Struct_020dfb48 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_020df850_5 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    struct Struct_020dfb48 *unknown_8_;
};

// USA: func_020dfb48
extern "C" ARM void *func_020dfb48(struct Struct_020df850_5 *arg0, int arg1, Type_020df850_2 arg2) {
    struct Struct_020dfb48 *var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;

    var0 = arg0->unknown_8_;
    if (var0 == NULL || arg2 == NULL) return NULL;
    var1 = arg0->unknown_0_;
    if (var1 == 0) return NULL;
    var2 = 0;
    var3 = var1 - 1;
    while (var2 <= var3) {
        var4 = var2 + ((var3 - var2 + 1) >> 1);
        var5 = arg2(&var0[var4]);
        if (var5 == arg1) return &var0[var4];
        if (var5 > arg1) var3 = var4 - 1;
        else var2 = var4 + 1;
    }
    return NULL;
}
