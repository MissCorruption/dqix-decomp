#include <globaldefs.h>
#if defined(jpn)
#include "std_library_functions.h"
#endif

struct Struct_0203c0cc {
#if defined(jpn)
    char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
    int unknown_2c_;
    unsigned int unknown_30_0_ : 16;
    unsigned int unknown_32_0_ : 8;
    unsigned int unknown_33_0_ : 8;
    int unknown_34_;
#else
    int unknown1_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    short unknown1_14_;
#endif
};

// USA: func_0203c0cc
extern "C" ARM void func_0203c0cc(struct Struct_0203c0cc* arg0) {
#if defined(jpn)
    memset(arg0->unknown_0_, -1, sizeof(arg0->unknown_0_));
    arg0->unknown_18_ = 0;
    arg0->unknown_14_ = 0;
    arg0->unknown_1c_ = 16;
    arg0->unknown_20_ = 12;
    arg0->unknown_24_ = 0;
    arg0->unknown_2c_ = 0;
    arg0->unknown_30_0_ = 0;
    arg0->unknown_32_0_ = 0;
    arg0->unknown_34_ = 0;
    arg0->unknown_28_ = 0;
#else
    arg0->unknown_4_ = 0;
    arg0->unknown1_0_ = 0;
    arg0->unknown_8_ = 0;
    arg0->unknown_10_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown1_14_ = -1;
#endif
}
