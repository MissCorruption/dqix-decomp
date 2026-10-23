#include <globaldefs.h>

struct Struct_02019508_3;
extern "C" struct Struct_02019508* func_02019508(struct Struct_02019508_3* arg0, int arg1, int arg2);

struct Struct_0201ba1c {
    unsigned char unknown_0_[0x2];
    unsigned short unknown_2_;
    unsigned char unknown_4_[0x20];
    short* unknown_24_;
    unsigned char unknown_28_[0xc];
    unsigned short unknown_34_;
    unsigned short unknown_36_;
    unsigned char unknown_38_[0x1c];
    int unknown_54_;
};

// USA: func_0201ba1c
extern "C" ARM void func_0201ba1c(struct Struct_02019508_3* arg0, int arg1, int arg2) {
    struct Struct_0201ba1c* var0 = (struct Struct_0201ba1c*)func_02019508(arg0, arg1, arg2);
    if (var0 == NULL || var0->unknown_54_ == 0) return;
    if (var0->unknown_24_ == NULL) return;
    if (*var0->unknown_24_ != 2) return;
    var0->unknown_34_ = 0;
    var0->unknown_36_ = 0;
    var0->unknown_2_ |= 0x100;
}
