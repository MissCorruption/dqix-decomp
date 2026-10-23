#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_02040bcc {
    char unknown_0_[0x14];
    void* unknown_14_;
    char unknown_18_[0x18 - 0x14 - 4];
    signed char unknown1_18_;
    char unknown_19_[0xac - 0x18 - 1];
    unsigned short unknown_ac_;
    char unknown_ae_[0xc4 - 0xac - 2];
    unsigned char unknown_c4_;
    char unknown_c5_[0xcc - 0xc4 - 1];
    void* unknown_cc_;
    int unknown_d0_;
    unsigned char unknown_d4_0_ : 1;
};

// USA: func_02041538
extern "C" ARM void func_02041538(struct Struct_02040bcc* arg0) {
    if (arg0->unknown_d4_0_) return;
    arg0->unknown_ac_ &= ~1;
    if (arg0->unknown_cc_ != NULL) {
        if (arg0->unknown_14_ == arg0->unknown_cc_) return;
        ((Object3D*)arg0)->MaybeSetRegularAnimation((char const*)arg0->unknown_cc_, arg0->unknown_d0_);
    } else {
        if (arg0->unknown_c4_ == arg0->unknown1_18_) return;
        ((Object3D*)arg0)->MaybeSetBCFGAnimation(arg0->unknown_c4_, arg0->unknown_d0_);
    }
}
