#include <globaldefs.h>

extern "C" void Mat4x3_WriteIdentity(void* mtx);

struct Struct_02056b48 {
    unsigned char unknown_0_[0x04];
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_[0x04];
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    unsigned char unknown_28_[0x10];
    unsigned char unknown_38_;
    unsigned char unknown_39_[0x03];
    unsigned short unknown_3c_;
    unsigned char unknown_3e_[0x0e];
    int unknown_4c_;
    int unknown_50_;
    int unknown_54_;
    int unknown_58_;
    unsigned short unknown_5c_;
    unsigned short unknown_5e_;
    unsigned short unknown_60_;
    unsigned short unknown_62_;
    int unknown_64_[3];
    int unknown_70_[3];
    int unknown_7c_[3];
    unsigned short unknown_88_[3];
    unsigned short unknown_8e_[3];
    unsigned short unknown_94_[3];
    int unknown_9c_;
    unsigned short unknown_a0_;
    unsigned char unknown_a2_[0x02];
    int unknown_a4_[3];
    int unknown_b0_[3];
    unsigned short unknown_bc_[3];
    unsigned short unknown_c2_;
    unsigned char unknown_c4_[0x24];
    unsigned int unknown_e8_[12];
    int unknown_118_;
    int unknown_11c_;
    int unknown_120_;
    int unknown_124_;
    int unknown_128_[3];
    int unknown_134_[3];
    int unknown_140_[3];
    unsigned char unknown_14c_[0x04];
    int unknown_150_;
    unsigned char unknown_154_[0x04];
    int unknown_158_[3];
    int unknown_164_[3];
};

// USA: func_02056b48
extern "C" ARM void func_02056b48(struct Struct_02056b48* arg0) {
    arg0->unknown_38_ = 0;
    arg0->unknown_4_ = 0;
    arg0->unknown_8_ = 0;
    arg0->unknown_10_ = 0;
    arg0->unknown_14_ = 0;
    arg0->unknown_18_ = 0;
    arg0->unknown_1c_ = 0;
    arg0->unknown_20_ = 0;
    arg0->unknown_24_ = 0;
    arg0->unknown_3c_ = 0;
    arg0->unknown_4c_ = 0;
    arg0->unknown_50_ = 0;
    arg0->unknown_54_ = 0;
    arg0->unknown_58_ = 0;
    arg0->unknown_118_ = 0;
    arg0->unknown_11c_ = 0;
    arg0->unknown_120_ = 0;
    arg0->unknown_124_ = 0;
    arg0->unknown_5c_ = 0;
    arg0->unknown_5e_ = 0;
    arg0->unknown_60_ = 0;
    arg0->unknown_62_ = 0;
    arg0->unknown_9c_ = 0;
    arg0->unknown_a0_ = 0;
    arg0->unknown_150_ = 0;

    for (int var0 = 0; var0 < 3; var0++) {
        arg0->unknown_128_[var0] = 0;
        arg0->unknown_134_[var0] = 0;
        arg0->unknown_140_[var0] = 0;
        arg0->unknown_64_[var0] = 0;
        arg0->unknown_70_[var0] = 0;
        arg0->unknown_7c_[var0] = 0;
        arg0->unknown_88_[var0] = 0;
        arg0->unknown_8e_[var0] = 0;
        arg0->unknown_94_[var0] = 0;
    }

    for (int var1 = 0; var1 < 3; var1++) {
        arg0->unknown_158_[var1] = 0;
        arg0->unknown_164_[var1] = 0;
        arg0->unknown_a4_[var1] = 0;
        arg0->unknown_b0_[var1] = 0;
        arg0->unknown_bc_[var1] = 0;
    }

    arg0->unknown_c2_ = 0;
    Mat4x3_WriteIdentity(&arg0->unknown_e8_);
}