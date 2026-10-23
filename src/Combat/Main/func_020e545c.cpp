#include <globaldefs.h>

struct Struct_020e545c {
    unsigned int unknown_0_[4];
};

struct Struct_020e53bc {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 20;
    struct Struct_020e545c* unknown_4_;
};

typedef void (*Type_020e53bc)(struct Struct_020e53bc*, struct Struct_020e545c*);

// USA: func_020e545c
extern "C" ARM int func_020e545c(struct Struct_020e53bc* arg0, Type_020e53bc arg1) {
    int var0;
    struct Struct_020e545c* var1 = arg0->unknown_4_;
    int var2;
    if (!(var1 != NULL && (var0 = arg0->unknown_0_0_) != 0 && arg1 != NULL)) {
        return 0;
    }
    var2 = 0;
    while (var2 < var0) {
        arg1(arg0, var1);
        var2++;
        var1++;
    }
    return 1;
}
