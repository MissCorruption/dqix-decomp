#include <globaldefs.h>

struct Struct_ov025_021eee48 { unsigned int unknown_0_[4]; };

struct Struct_ov025_021dcf14_8 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    struct Struct_ov025_021eee48 unknown_8_;
    struct Struct_ov025_021dcf14_8* unknown_18_;
};

struct Struct_ov025_021dcf14_7 {
    char unknown_0_[0xe0];
    struct Struct_ov025_021dcf14_8* unknown_e0_;
    struct Struct_ov025_021dcf14_8* unknown_e4_;
};

// USA: func_ov025_021eee48
extern "C" ARM void func_ov025_021eee48(struct Struct_ov025_021dcf14_7* arg0, struct Struct_ov025_021dcf14_8* arg1) {
    struct Struct_ov025_021dcf14_8* var0 = arg0->unknown_e4_;
    if (var0 == NULL) {
        return;
    }
    struct Struct_ov025_021dcf14_8* var1 = var0->unknown_18_;
    var0->unknown_0_ = arg1->unknown_0_;
    var0->unknown_4_ = arg1->unknown_4_;
    var0->unknown_8_ = arg1->unknown_8_;
    var0->unknown_18_ = arg1->unknown_18_;
    arg0->unknown_e4_ = var1;
    var0->unknown_18_ = arg0->unknown_e0_;
    arg0->unknown_e0_ = var0;
}
