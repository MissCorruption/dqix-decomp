#include <globaldefs.h>
#include "World/Object3D.h"

extern "C" void func_020412f4(void* arg0);
extern "C" void func_02041378(void* arg0);

struct Struct_02040c2c_4 {
    char unknown_0_[0xac];
    unsigned short unknown_ac_;
    char unknown_ae_[0x12];
    int unknown_c0_;
    char unknown_c4_[0x10];
    unsigned char unknown_d4_0_ : 1;
};

// USA: func_02041298
extern "C" ARM void func_02041298(struct Struct_02040c2c_4* arg0, int arg1) {
    if (arg0->unknown_d4_0_) return;
    ((Object3D*)arg0)->AdvanceEffects();
    if (arg0->unknown_ac_ & 0x1) func_020412f4(arg0);
    func_02041378(arg0);
    if ((arg0->unknown_ac_ & 0x1) == 0) {
        arg0->unknown_c0_ = arg0->unknown_c0_ + arg1;
    } else {
        arg0->unknown_c0_ = 0;
    }
}
