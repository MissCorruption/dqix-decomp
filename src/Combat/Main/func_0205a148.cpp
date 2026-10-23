#include <globaldefs.h>

#include "Combat/DistanceSort.h"

extern "C" void _ZN8Object3D4DrawEb(void* arg0, int arg1);

struct Struct_0205a148 {
    unsigned char unknown_0_[0xac];
    int unknown_ac_;
    short unknown_b0_;
    unsigned char unknown_b2_[0x1a];
    unsigned char unknown_cc_;
};

// USA: func_0205a148
extern "C" ARM void func_0205a148(struct Struct_0205a148* arg0) {
    if (arg0->unknown_b0_ > 0) return;
    if (arg0->unknown_ac_ == 0) {
        _ZN8Object3D4DrawEb(arg0, ((unsigned int)arg0->unknown_cc_ << 29) >> 31);
        return;
    }
    func_0205578c((int*)arg0);
}
