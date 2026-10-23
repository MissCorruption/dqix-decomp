#include <globaldefs.h>

struct Struct_02001878_2 {
    unsigned int unknown_0_0_ : 2;
    unsigned int unknown_0_2_ : 3;
    unsigned int unknown_0_5_ : 2;
    unsigned int unknown_0_7_ : 3;
    unsigned int unknown_1_2_ : 2;
    unsigned int unknown_1_4_ : 1;
};

struct Struct_02001878 {
    unsigned int unknown_0_0_ : 3;
    unsigned int unknown_0_3_ : 1;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
};

struct Struct_02001878_3 {
    unsigned long unknown_0_;
    Struct_02001878_2 unknown_4_;
    Struct_02001878 unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_[2];
    unsigned short unknown_10_[2];
    unsigned int unknown_14_;
    unsigned char* unknown_18_;
    unsigned int unknown_1c_;
    unsigned char* unknown_20_;
    unsigned int unknown_24_;
    unsigned int unknown_28_;
    unsigned int unknown_2c_;
    unsigned int unknown_30_;
    void* unknown_34_;
    void* unknown_38_;
    void* unknown_3c_;
    void* unknown_40_;
    void* unknown_44_;
};

extern "C" int func_0200173c(void);
extern "C" int func_020017f0(Struct_02001878_3* arg0, unsigned int* arg1);

// USA: func_02001878
extern "C" ARM int func_02001878(Struct_02001878_3* arg0) {
    if (arg0 == 0) {
        return func_0200173c();
    }

    if (arg0->unknown_8_.unknown_2_ != 0 || arg0->unknown_4_.unknown_0_7_ == 0) {
        return -1;
    }

    if (arg0->unknown_4_.unknown_0_2_ == 1) {
        return 0;
    }

    if (arg0->unknown_8_.unknown_0_0_ >= 3) {
        arg0->unknown_8_.unknown_0_0_ = 2;
    }

    if (arg0->unknown_8_.unknown_0_0_ == 2) {
        arg0->unknown_24_ = 0;
    }

    if (arg0->unknown_8_.unknown_0_0_ != 1) {
        arg0->unknown_8_.unknown_0_0_ = 0;
        return 0;
    }

    if (func_020017f0(arg0, 0) != 0) {
        arg0->unknown_8_.unknown_2_ = 1;
        arg0->unknown_24_ = 0;
        return -1;
    }

    arg0->unknown_8_.unknown_0_0_ = 0;
    arg0->unknown_14_ = 0;
    arg0->unknown_24_ = 0;
    return 0;
}
