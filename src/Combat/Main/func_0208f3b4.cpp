#include <globaldefs.h>

struct Struct_0208f3b4_2 {
    int unknown_0_;
    char unknown_4_[0x10];
    struct Struct_0208f3b4_2* unknown_14_;
};

struct Struct_0208f3b4 {
    char unknown_0_[0xc];
    struct Struct_0208f3b4_2* unknown_c_;
};

// USA: func_0208f3b4
extern "C" ARM void func_0208f3b4(struct Struct_0208f3b4 *arg0, int arg1) {
    struct Struct_0208f3b4_2 *var0 = arg0->unknown_c_;
    struct Struct_0208f3b4_2 *var1 = NULL;
    while (var0 != NULL) {
        if (var0->unknown_0_ == arg1) {
            if (var0 == arg0->unknown_c_) {
                arg0->unknown_c_ = var0->unknown_14_;
            } else if (var0->unknown_14_ == NULL) {
                var1->unknown_14_ = NULL;
            } else {
                var1->unknown_14_ = var0->unknown_14_;
            }
            return;
        }
        var1 = var0;
        var0 = var0->unknown_14_;
    }
}
