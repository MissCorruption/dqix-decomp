#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0204693c {
    signed char unknown_0_;
    signed char unknown_1_;
    signed char unknown_2_;
    signed char unknown_3_;
};
extern "C" void func_0204693c(struct Struct_0204693c* arg0);

struct Struct_ov003_0217e300 {
    struct Struct_0204693c unknown_0_;
    char unknown_4_[4];
    int unknown_8_;
    class SafeAllocator unknown_c_;
    int unknown_20_;
    unsigned char unknown_24_;
};

// USA: func_ov003_0217e334
extern "C" ARM void func_ov003_0217e334(struct Struct_ov003_0217e300* arg0) {
    func_0204693c(&arg0->unknown_0_);
    arg0->unknown_0_.unknown_0_ = 0x11;
    arg0->unknown_8_ = 0;
    arg0->unknown_c_.ResetAllocatorPointer();
    arg0->unknown_20_ = 0;
    arg0->unknown_24_ = 0xff;
}
