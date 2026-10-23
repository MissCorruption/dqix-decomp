#include <globaldefs.h>

struct Struct_02046b38_2 {
    char unknown_0_[4];
    struct Struct_02046b38_2* unknown_4_;
};

struct Struct_02046b38 {
    struct Struct_02046b38_2* unknown_0_;
};

// USA: func_02046b38
extern "C" ARM int func_02046b38(struct Struct_02046b38* arg0, struct Struct_02046b38_2* arg1) {
    struct Struct_02046b38_2* var0 = arg0->unknown_0_;
    while (var0 != 0) {
        if (var0 == arg1) {
            return 1;
        }
        var0 = var0->unknown_4_;
    }
    return 0;
}
