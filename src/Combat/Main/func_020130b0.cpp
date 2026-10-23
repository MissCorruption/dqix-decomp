#include <globaldefs.h>

struct Struct_020130b0 {
    char unknown_0_[0x28];
    struct Struct_020130b0* unknown_28_;
    struct Struct_020130b0* unknown_2c_;
    struct Struct_020130b0* unknown_30_;
};

// USA: func_020130b0
extern "C" ARM void func_020130b0(struct Struct_020130b0* arg0, struct Struct_020130b0* arg1) {
    struct Struct_020130b0* var0;
    arg1->unknown_28_ = arg0;
    var0 = arg0->unknown_2c_;
    if (var0 == 0) {
        arg0->unknown_2c_ = arg1;
        return;
    }
    while (var0->unknown_30_ != 0) {
        var0 = var0->unknown_30_;
    }
    var0->unknown_30_ = arg1;
}
