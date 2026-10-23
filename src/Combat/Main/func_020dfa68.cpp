#include <globaldefs.h>

struct Struct_020dfa68 {
    int unknown_0_;
    int unknown_4_;
};

struct Struct_020df850 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    struct Struct_020dfa68 *unknown_8_;
};

typedef int (*Type_020df850)(struct Struct_020df850 *, struct Struct_020dfa68 *);

// USA: func_020dfa68
extern "C" ARM int func_020dfa68(struct Struct_020df850 *arg0, Type_020df850 arg1) {
    int var0;
    struct Struct_020dfa68 *var1;
    int var2;

    var1 = arg0->unknown_8_;
    if (var1 == NULL || (var0 = arg0->unknown_0_) == 0 || arg1 == NULL) return 0;
    for (var2 = 0; var2 < var0; var2++, var1++) {
        arg1(arg0, var1);
    }
    return 1;
}
