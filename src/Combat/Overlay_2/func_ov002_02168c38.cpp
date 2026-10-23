#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov002_021688f8 {
    unsigned int unknown_0_;
    void* unknown_4_;
    unsigned int unknown_8_;
    char unknown_c_[0x38];
#if defined(jpn)
    char unknown_44_[0x118];
#else
    char unknown_44_[0x200];
#endif
};

// USA: func_ov002_02168c38
extern "C" ARM void func_ov002_02168c38(struct Struct_ov002_021688f8* arg0) {
    arg0->unknown_0_ &= ~0x1ff;
    arg0->unknown_0_ &= 0xfffc01ff;
    arg0->unknown_0_ &= 0xf803ffff;
    arg0->unknown_0_ &= ~0x38000000;
    arg0->unknown_0_ &= ~0xc0000000;
    arg0->unknown_4_ = NULL;
    arg0->unknown_8_ = 0;
    memset(arg0->unknown_c_, 0, 0x38);
    memset(arg0->unknown_44_, 0, sizeof(arg0->unknown_44_));
    arg0->unknown_4_ = arg0->unknown_44_;
}
