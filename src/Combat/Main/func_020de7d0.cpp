#include <globaldefs.h>

struct Struct_020de7d0 {
    unsigned int unknown_0_[8];
};

struct Struct_020de714 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[10];
    struct Struct_020de7d0* unknown_c_;
};

typedef void (*Type_020de714)(struct Struct_020de714*, struct Struct_020de7d0*);

// USA: func_020de7d0
extern "C" ARM int func_020de7d0(struct Struct_020de714* arg0, Type_020de714 arg1) {
    int var0;
    struct Struct_020de7d0* var1;
    int var2;

    var1 = arg0->unknown_c_;
    if (var1 == NULL || (var0 = arg0->unknown_0_) == 0 || arg1 == NULL) return 0;
    for (var2 = 0; var2 < var0; var2++, var1++) {
        arg1(arg0, var1);
    }
    return 1;
}
