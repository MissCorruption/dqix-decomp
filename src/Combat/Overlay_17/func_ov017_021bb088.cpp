#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov017_021baedc {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_[0x1c];
    int unknown_24_;
    unsigned int unknown_28_;
};

// USA: func_ov017_021bb088
extern "C" ARM void func_ov017_021bb088(Struct_ov017_021baedc* arg0) {
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;
    memset(&arg0->unknown_8_, 0, 0x1c);
    arg0->unknown_24_ = -1;
    arg0->unknown_28_ &= 0xf8000000;
    arg0->unknown_28_ &= ~0xf8000000;
}
