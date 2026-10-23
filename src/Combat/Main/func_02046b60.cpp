#include <globaldefs.h>

struct Struct_02046b60 {
    signed char unknown_0_;
    char unknown_1_[3];
    struct Struct_02046b60* unknown_4_;
};

struct Struct_02038598_5 {
    struct Struct_02046b60* unknown_0_;
};

// USA: func_02046b60
extern "C" ARM int func_02046b60(struct Struct_02038598_5* arg0, int arg1) {
    struct Struct_02046b60* var0 = arg0->unknown_0_;
    while (var0 != 0) {
        if (var0->unknown_0_ == arg1) {
            return 1;
        }
        var0 = var0->unknown_4_;
    }
    return 0;
}
