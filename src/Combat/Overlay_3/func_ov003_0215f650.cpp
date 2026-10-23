#include <globaldefs.h>

struct Struct_ov003_0215f650_3 {
#if defined(jpn)
    char unknown1_0_[0x14];
#else
    char unknown_0_[0x30];
#endif
};

struct Struct_ov003_0215f650 {
    char unknown_0_[6];
};

struct Struct_ov003_0215f650_2 {
    unsigned char unknown_0_;
    Struct_ov003_0215f650_3 unknown_1_;
    Struct_ov003_0215f650 unknown_31_;
};

// USA: func_ov003_0215f650
extern "C" ARM Struct_ov003_0215f650_2* func_ov003_0215f650(Struct_ov003_0215f650_2* arg0, const Struct_ov003_0215f650_2* arg1) {
    arg0->unknown_0_ = arg1->unknown_0_;
    arg0->unknown_1_ = arg1->unknown_1_;
    arg0->unknown_31_ = arg1->unknown_31_;
    return arg0;
}
