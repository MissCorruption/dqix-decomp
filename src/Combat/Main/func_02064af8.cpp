#include <globaldefs.h>

struct Struct_02061c04_27 {
    char unknown_0_[0x2c];
    struct Struct_02061c04_27* unknown_2c_;
};

struct Struct_02061c04_28 {
    char unknown_0_[0x494];
    struct Struct_02061c04_27* unknown_494_;
};

// USA: func_02064af8
extern "C" ARM void func_02064af8(struct Struct_02061c04_28* arg0, struct Struct_02061c04_27* arg1) {
    struct Struct_02061c04_27* var0 = arg0->unknown_494_;
    if (var0 == 0) {
        arg0->unknown_494_ = arg1;
        return;
    }
    while (var0->unknown_2c_ != 0) {
        var0 = var0->unknown_2c_;
    }
    var0->unknown_2c_ = arg1;
}
