#include <globaldefs.h>

struct Struct_ov011_02188184_3 {
    char unknown_0_[0x4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    char unknown_a_[0x1c - 0xa];
    int unknown_1c_;
    unsigned short unknown_20_;
    unsigned short unknown_22_;
    unsigned short unknown_24_;
    unsigned short unknown_26_;
    unsigned short unknown_28_;
    unsigned short unknown_2a_;
    unsigned char unknown_2c_;
};

extern "C" void func_ov023_021f6ed8(void*);

// USA: func_ov023_021fd320
extern "C" ARM int func_ov023_021fd320(struct Struct_ov011_02188184_3* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8) {
    func_ov023_021f6ed8(arg0);
    arg0->unknown_4_ = 0x13;
    arg0->unknown_6_ = (unsigned short)arg2;
    arg0->unknown_8_ = (unsigned short)arg3;
    arg0->unknown_1c_ = 2;
    arg0->unknown_20_ = (unsigned short)arg2;
    arg0->unknown_22_ = (unsigned short)arg4;
    arg0->unknown_24_ = (unsigned short)arg5;
    arg0->unknown_26_ = (unsigned short)arg6;
    arg0->unknown_28_ = (unsigned short)arg7;
    arg0->unknown_2a_ = 0;
    arg0->unknown_2c_ = (unsigned char)arg8;
    return 1;
}
