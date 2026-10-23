#include <globaldefs.h>

#if defined(jpn)
#define func_02046c78 func_02047a98
#endif

struct Struct_02046c78_2 {
    char unknown_0_[4];
    struct Struct_02046c78_2* unknown_4_;
};

struct Struct_02046c78 {
    struct Struct_02046c78_2* unknown_0_;
};

// USA: func_02046c78
extern "C" ARM int func_02046c78(struct Struct_02046c78* arg0) {
    int var0 = 0;
    struct Struct_02046c78_2* var1 = arg0->unknown_0_;
    while (var1 != 0) {
        var1 = var1->unknown_4_;
        var0++;
    }
    return var0;
}
