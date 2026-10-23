#include <globaldefs.h>

struct Struct_0201edf0 { unsigned int unknown_0_[3]; };

struct Struct_0201edf0_2 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    unsigned short unknown_6_;
    struct Struct_0201edf0 unknown_8_;
    unsigned short unknown_14_;
    unsigned short unknown_16_;
    unsigned short unknown_18_;
    unsigned short unknown_1a_;
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
};

struct Struct_0201f214 {
    char unknown_0_[0xc];
    struct Struct_0201edf0_2* unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

// USA: func_0201f214
extern "C" ARM void func_0201f214(struct Struct_0201f214* arg0, struct Struct_0201edf0_2* arg1) {
    int var0 = arg0->unknown_10_;
    struct Struct_0201edf0_2* var1;
    if (arg0->unknown_14_ <= var0) {
        return;
    }
    arg0->unknown_10_ = var0 + 1;
    var1 = &arg0->unknown_c_[var0];
    var1->unknown_0_ = arg1->unknown_0_;
    var1->unknown_2_ = arg1->unknown_2_;
    var1->unknown_4_ = arg1->unknown_4_;
    var1->unknown_6_ = arg1->unknown_6_;
    var1->unknown_8_ = arg1->unknown_8_;
    var1->unknown_14_ = arg1->unknown_14_;
    var1->unknown_16_ = arg1->unknown_16_;
    var1->unknown_18_ = arg1->unknown_18_;
    var1->unknown_1a_ = arg1->unknown_1a_;
    var1->unknown_1c_ = arg1->unknown_1c_;
    var1->unknown_1e_ = arg1->unknown_1e_;
}
