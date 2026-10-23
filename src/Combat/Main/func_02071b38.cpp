#include <globaldefs.h>

struct Struct_02071874_2 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 8;
    unsigned int unknown_3_4_ : 4;
};

struct Struct_02071874_3 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 1;
    unsigned int unknown_2_5_ : 1;
    unsigned int unknown_2_6_ : 1;
    unsigned int unknown_2_7_ : 8;
    unsigned int unknown_3_7_ : 1;
};

struct Struct_02071874_5 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    unsigned short unknown_a_;
    Struct_02071874_2 unknown_c_;
    Struct_02071874_3 unknown_10_;
    short unknown_14_;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
    int unknown_1c_;
};

// USA: func_02071b38
extern "C" ARM void func_02071b38(Struct_02071874_5* arg0) {
    arg0->unknown_0_ = -1;
    arg0->unknown_2_ = -1;
    arg0->unknown_4_ = -1;
    arg0->unknown_6_ = -1;
    arg0->unknown_8_ = -1;
    unsigned short* var0 = &arg0->unknown_a_;
    *var0 &= ~0xf;
    *var0 &= ~0xf0;
    *var0 &= ~0xf00;
    *var0 = (*var0 & ~0xf000) | 0x1000;
    arg0->unknown_c_.unknown_0_0_ = 0;
    arg0->unknown_c_.unknown_1_2_ = 0;
    arg0->unknown_c_.unknown_2_4_ = 0;
    arg0->unknown_10_.unknown_0_0_ = 0;
    arg0->unknown_10_.unknown_1_2_ = 0;
    arg0->unknown_10_.unknown_2_4_ = 1;
    arg0->unknown_10_.unknown_2_5_ = 0;
    arg0->unknown_10_.unknown_2_6_ = 0;
    arg0->unknown_10_.unknown_2_7_ = 0;
    arg0->unknown_14_ = -1;
    arg0->unknown_16_ = -1;
    arg0->unknown_18_ = -1;
    arg0->unknown_1a_ = -1;
    arg0->unknown_1c_ = 0;
}
