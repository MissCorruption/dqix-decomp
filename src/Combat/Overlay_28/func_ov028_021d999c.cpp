#include <globaldefs.h>

struct Struct_ov028_021d97d8 {
    short unknown_0_;
    short unknown_2_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov028_021d97d8_2 {
    char unknown_0_[4];
    Struct_ov028_021d97d8* unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

// USA: func_ov028_021d999c
extern "C" ARM void func_ov028_021d999c(Struct_ov028_021d97d8_2* arg0, Struct_ov028_021d97d8* arg1) {
    if (arg0->unknown_a_ <= arg0->unknown_8_) {
        return;
    }
    if (arg1 == NULL) {
        return;
    }
    Struct_ov028_021d97d8* var0 = &arg0->unknown_4_[arg0->unknown_8_];
    var0->unknown_0_ = arg1->unknown_0_;
    var0->unknown_2_ = arg1->unknown_2_;
    var0->unknown_4_ = arg1->unknown_4_;
    var0->unknown_8_ = arg1->unknown_8_;
    arg0->unknown_8_ = arg0->unknown_8_ + 1;
}
