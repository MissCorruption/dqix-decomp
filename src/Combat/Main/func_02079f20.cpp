#include <globaldefs.h>

struct Struct_02079ee0 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_02079ee0_2 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 20;
    struct Struct_02079ee0* unknown_4_;
};

typedef int (*Type_02079ee0)(struct Struct_02079ee0*);

// USA: func_02079f20
extern "C" ARM struct Struct_02079ee0* func_02079f20(struct Struct_02079ee0_2* arg0, int arg1, Type_02079ee0 arg2) {
    struct Struct_02079ee0* var0;
    int var1;
    int var2;
    int var3;
    int var4;
    struct Struct_02079ee0* var5;
    int var6;

    var0 = arg0->unknown_4_;
    if (var0 == NULL || arg2 == NULL) return NULL;
    var1 = arg0->unknown_0_0_;
    if (var1 == 0) return NULL;
    var3 = var1 - 1;
    var2 = 0;
    while (var2 <= var3) {
        var4 = var2 + ((var3 - var2 + 1) >> 1);
        var5 = var0 + var4;
        var6 = arg2(var5);
        if (var6 == arg1) return var5;
        if (var6 > arg1) var3 = var4 - 1;
        else var2 = var4 + 1;
    }
    return NULL;
}
