#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_020421c4_4 {
    int unknown_0_, unknown_4_, unknown_8_, unknown_c_, unknown_10_;
    int unknown_14_[8];
    int unknown_34_, unknown_38_, unknown_3c_, unknown_40_;
    unsigned char unknown_44_[0x10];
    unsigned char unknown_54_, unknown_55_, unknown_56_, unknown_57_;
    unsigned char unknown_58_[9];
    unsigned char unknown_61_, unknown_62_, unknown_63_, unknown_64_;
};

// USA: func_02094a24
extern "C" ARM void func_02094a24(struct Struct_020421c4_4* arg0) {
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_10_ = 0;
    for (int var0 = 0; var0 < 8; var0++) {
        arg0->unknown_14_[var0] = -1;
    }
    arg0->unknown_3c_ = -1;
    arg0->unknown_40_ = -1;
    arg0->unknown_38_ = -1;
    arg0->unknown_34_ = -1;
    memset(arg0->unknown_44_, 0, 0x10);
    arg0->unknown_55_ = 0;
    arg0->unknown_54_ = 0;
    arg0->unknown_56_ = 1;
    arg0->unknown_57_ = 0;
    arg0->unknown_62_ = 0;
    arg0->unknown_61_ = 0;
    arg0->unknown_63_ = 0;
    arg0->unknown_64_ = 0;
}
