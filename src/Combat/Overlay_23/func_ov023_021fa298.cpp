#include <globaldefs.h>

struct Struct_ov011_0218563c_3 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    char unknown_c_[4];
    int unknown_10_;
    char unknown_14_[0x14];
    int unknown_28_;
    unsigned char unknown_2c_;
};

extern "C" void func_ov023_021f6ed8(void*);
extern "C" int func_ov023_021fa5a0(void*, int);

// USA: func_ov023_021fa298
#if defined(jpn)
struct Struct_ov023_021f9724 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    char unknown_c_[4];
    int unknown_10_;
    char unknown_14_[0x14];
    unsigned char unknown_28_;
};

extern "C" ARM int func_ov023_021f9724(struct Struct_ov023_021f9724* arg0, int arg1, int arg2, int arg3, int arg4, int arg5) {
    func_ov023_021f6ed8(arg0);
    arg0->unknown_4_ = 4;
    arg0->unknown_6_ = arg2;
    arg0->unknown_8_ = arg3;
    arg0->unknown_a_ = 0;
    arg0->unknown_10_ = arg4;
    arg0->unknown_28_ = arg5;
    func_ov023_021fa5a0(arg0, arg1);
    return 1;
}
#else
extern "C" ARM int func_ov023_021fa298(struct Struct_ov011_0218563c_3* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
    func_ov023_021f6ed8(arg0);
    arg0->unknown_4_ = 4;
    arg0->unknown_6_ = arg2;
    arg0->unknown_8_ = arg3;
    arg0->unknown_a_ = 0;
    arg0->unknown_28_ = arg4;
    arg0->unknown_10_ = arg5;
    arg0->unknown_2c_ = arg6;
    func_ov023_021fa5a0(arg0, arg1);
    return 1;
}
#endif
