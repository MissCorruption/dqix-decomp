#include <globaldefs.h>

struct Struct_02061c04_25 {
    char unknown_0_[0x18];
    struct Struct_02061c04_25* unknown_18_;
};

struct Struct_02061c04_26 {
    char unknown_0_[0x30];
    struct Struct_02061c04_25* unknown_30_;
};

// USA: func_0206445c
extern "C" ARM void func_0206445c(int arg0, struct Struct_02061c04_25* arg1, struct Struct_02061c04_26* arg2) {
    struct Struct_02061c04_25* var0;
    arg1->unknown_18_ = 0;
    var0 = arg2->unknown_30_;
    if (var0 == 0) {
        arg2->unknown_30_ = arg1;
        return;
    }
    while (var0->unknown_18_ != 0) {
        var0 = var0->unknown_18_;
    }
    var0->unknown_18_ = arg1;
}
