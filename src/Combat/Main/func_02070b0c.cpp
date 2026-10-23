#include <globaldefs.h>

struct Struct_02070b0c_2 {
    unsigned char unknown_0_[0x84];
};

struct Struct_02070b0c {
    unsigned int unknown_0_0_ : 12;
    struct Struct_02070b0c_2 *unknown_4_;
};

typedef void (*Type_02070b0c)(struct Struct_02070b0c *, struct Struct_02070b0c_2 *);

// USA: func_02070b0c
extern "C" ARM int func_02070b0c(struct Struct_02070b0c *arg0, Type_02070b0c arg1) {
    int var0;
    struct Struct_02070b0c_2 *var1 = arg0->unknown_4_;
    int var2;
    if (var1 == NULL) goto ret_zero;
    var0 = arg0->unknown_0_0_;
    if (var0 != 0 && arg1 != NULL) goto run_loop;
ret_zero:
    return 0;
run_loop:
    var2 = 0;
    while (var2 < var0) {
        arg1(arg0, var1);
        var2++;
        var1++;
    }
    return 1;
}
