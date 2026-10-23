#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_0203d028_10 {
    char unknown_0_[0xac];
    unsigned short unknown_ac_;
    char unknown_ae_[2];
    int unknown_b0_;
    char unknown_b4_[0xc];
    int unknown_c0_;
    unsigned char unknown_c4_;
    char unknown_c5_[3];
    int unknown_c8_;
    int unknown_cc_;
    int unknown_d0_;
    unsigned char unknown_d4_;
};

// USA: func_02041244
extern "C" ARM void func_02041244(struct Struct_0203d028_10* arg0) {
    ((Object3D*)arg0)->Initialize();
    arg0->unknown_ac_ = 0;
    arg0->unknown_b0_ = 0;
    arg0->unknown_c0_ = 0;
    arg0->unknown_c4_ = 0;
    arg0->unknown_cc_ = 0;
    arg0->unknown_c8_ = 0x7a;
    arg0->unknown_d4_ &= ~1;
    arg0->unknown_d4_ &= ~2;
    arg0->unknown_d0_ = 0;
}
