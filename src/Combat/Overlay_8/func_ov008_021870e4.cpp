#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_ov008_021870e4 {
    unsigned char unknown_0_[0x40];
    unsigned char unknown_40_0_ : 1;
    unsigned char unknown_40_1_ : 1;
    unsigned char unknown_40_2_ : 1;
};
extern int data_ov008_0218b495;

struct Struct_ov008_02184754 { char unknown_0_[0xb18]; unsigned int unknown_b18_; };

// USA: func_ov008_021870e4
extern "C" ARM void func_ov008_021870e4(struct Struct_ov008_02184754* arg0, unsigned int arg1) {
    if (!(arg0->unknown_b18_ & 0x4000)) return;
    if (!((Object3D*)((struct Struct_ov008_021870e4*)((char*)arg0 + 0x790)))->HasAnimationReachedEnd()) return;
    ((Object3D*)((char*)arg0 + 0x790))->MaybeSetRegularAnimation((char const*)&data_ov008_0218b495, 0);
    arg0->unknown_b18_ &= ~0x4000;
}
