#include <globaldefs.h>

struct Struct_021e12cc {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned char unknown_e_0_ : 1;
    unsigned char unknown_e_1_ : 1;
    unsigned char unknown_e_2_ : 6;
    unsigned char unknown_f_;
};

struct Struct_ov023_021e1410 {
    char unknown_0_[4];
    struct Struct_021e12cc* unknown_4_;
    short unknown_8_;
    short unknown_a_;
};

// USA: func_ov023_021e1410
extern "C" ARM void func_ov023_021e1410(Struct_ov023_021e1410* arg0, struct Struct_021e12cc* arg1) {
    if (arg0->unknown_a_ <= arg0->unknown_8_) return;
    struct Struct_021e12cc* var0 = &arg0->unknown_4_[arg0->unknown_8_];
    var0->unknown_0_ = arg1->unknown_0_;
    var0->unknown_4_ = arg1->unknown_4_;
    var0->unknown_8_ = arg1->unknown_8_;
    var0->unknown_a_ = arg1->unknown_a_;
    var0->unknown_c_ = arg1->unknown_c_;
    *(unsigned char*)((char*)var0 + 0xe) = *(unsigned char*)((char*)arg1 + 0xe);
    var0->unknown_f_ = arg1->unknown_f_;
    arg0->unknown_8_ = arg0->unknown_8_ + 1;
}
