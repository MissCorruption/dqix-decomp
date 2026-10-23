#include <globaldefs.h>

struct Struct_020130e0 {
    char unknown_0_[0x30];
    struct Struct_020130e0* unknown_30_;
};

// USA: func_020130e0
extern "C" ARM void func_020130e0(struct Struct_020130e0* arg0, struct Struct_020130e0* arg1) {
    struct Struct_020130e0* var0 = arg0->unknown_30_;
    if (var0 == 0) {
        arg0->unknown_30_ = arg1;
        return;
    }
    while (var0->unknown_30_ != 0) {
        var0 = var0->unknown_30_;
    }
    var0->unknown_30_ = arg1;
}
