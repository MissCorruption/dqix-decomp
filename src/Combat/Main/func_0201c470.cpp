#include <globaldefs.h>

struct Struct_0201c470 { unsigned char unknown_0_[31]; };
struct Struct_0201c3a4_2 { struct Struct_0201c470 unknown_0_; unsigned char unknown_1f_; };
struct Struct_0201c470_2 {
    struct Struct_0201c3a4_2* unknown_0_;   // 0x0
    int unknown_4_;                     // 0x4
    int unknown_8_;                   // 0x8
};

// USA: func_0201c470
extern "C" ARM void func_0201c470(struct Struct_0201c470_2* arg0, struct Struct_0201c3a4_2* arg1) {
    struct Struct_0201c3a4_2* var0 = arg0->unknown_0_;
    if (var0 != NULL) {
        struct Struct_0201c3a4_2* var1;
        if (arg0->unknown_8_ >= arg0->unknown_4_) return;
        var1 = &var0[arg0->unknown_8_];
        var1->unknown_0_ = arg1->unknown_0_;
        var1->unknown_1f_ = arg1->unknown_1f_;
        arg0->unknown_8_++;
        return;
    }
    arg0->unknown_8_++;
}
