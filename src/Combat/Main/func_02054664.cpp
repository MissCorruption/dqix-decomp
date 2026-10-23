#include <globaldefs.h>
#include "World/Object3D.h"

extern "C" void func_02037d10(void *arg0);

struct Struct_02054664 {
    unsigned short unknown_0_;
    #if defined(jpn)
    char unknown_2_[0x2c2];
#else
    char unknown1_2_[0x2ce];
#endif
    signed char unknown_2d0_;
    signed char unknown_2d1_;
    signed char unknown_2d2_;
};

// USA: func_02054664
extern "C" ARM void func_02054664(struct Struct_02054664 *arg0) {
    func_02037d10(arg0);
    arg0->unknown_0_ |= 0x1000;
    arg0->unknown_2d0_ = -1;
    arg0->unknown_2d1_ = -1;
    arg0->unknown_2d2_ = 0;
    ((Object3D*)((unsigned char *)arg0))->EnableFlag(0x80);
}
