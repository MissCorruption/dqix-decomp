#include <globaldefs.h>

struct Struct_ov003_0215e9a4 {
    char unknown_0_;
    signed char unknown_1_;
    signed char unknown_2_;
    char unknown_3_;
    short* unknown_4_;
};

// USA: func_ov003_0215e9a4
#pragma optimize_for_size off
extern "C" ARM int func_ov003_0215e9a4(Struct_ov003_0215e9a4* arg0, int arg1, int arg2) {
    if (arg1 < 0) goto fail;
    if (arg1 >= arg0->unknown_1_) goto fail;
    if (arg2 < 0) goto fail;
    if (arg2 >= arg0->unknown_2_) goto fail;
    return (arg0->unknown_4_ + arg0->unknown_1_ * arg2)[arg1];
fail:
    return -1;
}
