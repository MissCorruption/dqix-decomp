#include <globaldefs.h>

struct Struct_0204693c;
extern "C" void func_0204693c(struct Struct_0204693c* arg0);

struct Struct_02046a8c {
    char unknown_0_[2];
    unsigned char unknown_2_;
    char unknown_3_;
    struct Struct_02046a8c* unknown_4_;
};

struct Struct_02046a8c_2 {
    struct Struct_02046a8c* unknown_0_;
    struct Struct_02046a8c* unknown_4_;
};

// USA: func_02046a8c
extern "C" ARM void func_02046a8c(struct Struct_02046a8c_2* arg0, struct Struct_02046a8c* arg1) {
    struct Struct_02046a8c* var0 = arg0->unknown_0_;
    if (var0 == 0) return;
    if (var0 == arg1) {
        arg0->unknown_0_ = arg1->unknown_4_;
    } else {
        struct Struct_02046a8c* var1 = var0->unknown_4_;
        if (var1 == 0) return;
        while (var1 != arg1) {
            if (var1 == 0) return;
            var0 = var1;
            var1 = var1->unknown_4_;
        }
        var0->unknown_4_ = var1->unknown_4_;
    }
    var0 = arg0->unknown_0_;
    arg0->unknown_4_ = 0;
    while (var0 != 0) {
        arg0->unknown_4_ = var0;
        var0 = var0->unknown_4_;
    }
    func_0204693c((struct Struct_0204693c*)arg1);
}
