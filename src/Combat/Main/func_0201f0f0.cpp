#include <globaldefs.h>

struct Struct_0201ec00_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_0201f0f0 {
    struct Struct_0201ec00_2* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_0201f0f0
extern "C" ARM void func_0201f0f0(struct Struct_0201f0f0* arg0, struct Struct_0201ec00_2* arg1) {
    int var0 = arg0->unknown_4_;
    struct Struct_0201ec00_2* var1;
    if (arg0->unknown_8_ <= var0) {
        return;
    }
    arg0->unknown_4_ = var0 + 1;
    var1 = &arg0->unknown_0_[var0];
    var1->unknown_0_ = arg1->unknown_0_;
    var1->unknown_2_ = arg1->unknown_2_;
    var1->unknown_3_ = arg1->unknown_3_;
    var1->unknown_4_ = arg1->unknown_4_;
    var1->unknown_8_ = arg1->unknown_8_;
}
