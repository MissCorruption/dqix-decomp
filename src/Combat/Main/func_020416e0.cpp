#include <globaldefs.h>
#if defined(jpn)
#include "Resource/MessageGlyphSlot.h"

// JPN: func_02041c10
extern "C" ARM void func_02041c10(Struct_0204166c* arg0, const char* arg1, unsigned char* arg2, int arg3, unsigned int arg4, unsigned char arg5) {
    if (!arg2) return;
    func_0204166c(arg0);
    arg0->unknown_18_[0] = arg1[0];
    arg0->unknown_18_[1] = arg1[1];
    arg0->unknown_8_ = arg3;
    arg0->unknown_0_ = arg2;
    arg0->unknown_4_ = arg4;
    arg0->unknown_1a_ = arg5;
    arg0->unknown_16_0_ = 1;
    arg0->unknown_16_1_ = 0;
    arg0->unknown_16_2_ = 0;
}
#else

struct Struct_0204166c {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    unsigned short unknown_14_;
    unsigned char unknown_16_0_ : 1;
    unsigned char unknown_16_1_ : 1;
    unsigned char unknown_16_2_ : 1;
    unsigned char unknown_16_3_ : 1;
    unsigned char unknown_16_4_ : 4;
    unsigned char unknown_17_;
    int unknown_18_;
};

extern "C" void func_0204166c(struct Struct_0204166c* arg0);

// USA: func_020416e0
extern "C" ARM void func_020416e0(struct Struct_0204166c* arg0, unsigned char arg1, int arg2, int arg3, int arg4, int arg5, unsigned char arg6) {
    if (arg3 == 0) return;
    func_0204166c(arg0);
    arg0->unknown_17_ = arg1;
    arg0->unknown_18_ = arg2;
    arg0->unknown_8_ = arg4;
    arg0->unknown_0_ = arg3;
    arg0->unknown_4_ = arg5;
    arg0->unknown_16_0_ = 1;
    arg0->unknown_16_1_ = 0;
    arg0->unknown_16_2_ = 0;
    arg0->unknown_16_3_ = arg6;
}

#endif
