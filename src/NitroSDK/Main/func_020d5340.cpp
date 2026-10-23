#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" int func_020d424c(int arg0, int arg1, int arg2, int arg3);
extern "C" void func_020d404c(int arg0, int arg1);
extern "C" int func_020d4168(void* arg0, unsigned int arg1);

struct Struct_02101680 {
    int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned char unknown_a_[6];
    unsigned short unknown_10_;
    unsigned short unknown_12_;
    unsigned char unknown_14_[0x20];
    unsigned short unknown_34_;
};

struct Struct_020d5340 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned char unknown_c_[6];
    unsigned short unknown_12_;
    unsigned short unknown_14_;
    unsigned char unknown_16_[0x20];
    unsigned short unknown_36_;
    unsigned char unknown_38_[4];
};


// USA: func_020d5340
extern "C" ARM int func_020d5340(int arg0, struct Struct_02101680* arg1) {
    int var0 = func_020d424c(3, 2, 3, 5);
    if (var0 != 0) {
        return var0;
    }
    if (arg1 == NULL) {
        return 6;
    }
    if (arg1->unknown_0_ == 0) {
        return 6;
    }
    if (arg1->unknown_4_ > 0x400) {
        return 6;
    }
    if (arg1->unknown_12_ > 0x20) {
        return 6;
    }
    if (arg1->unknown_10_ != 0 && arg1->unknown_10_ != 1 && arg1->unknown_10_ != 2 && arg1->unknown_10_ != 3) {
        return 6;
    }
    if ((unsigned short)(arg1->unknown_10_ + 0xfffe) <= 1) {
        if (arg1->unknown_34_ > 0x20) {
            return 6;
        }
    }
    func_020d404c(0x26, arg0);
    struct Struct_020d5340 var1;
    var1.unknown_0_ = 0x26;
    var1.unknown_2_ = arg1->unknown_6_;
    var1.unknown_4_ = arg1->unknown_0_;
    var1.unknown_8_ = arg1->unknown_4_;
    var1.unknown_a_ = arg1->unknown_8_;
    VectorizedInvertedMemcpy(arg1->unknown_a_, var1.unknown_c_, 6);
    var1.unknown_12_ = arg1->unknown_10_;
    var1.unknown_36_ = arg1->unknown_34_;
    var1.unknown_14_ = arg1->unknown_12_;
    VectorizedInvertedMemcpy(arg1->unknown_14_, var1.unknown_16_, 0x20);
    var0 = func_020d4168(&var1, 0x3c);
    return (var0 == 0) ? 2 : var0;
}
