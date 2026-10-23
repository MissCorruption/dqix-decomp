#include <globaldefs.h>

struct Struct_ov017_021bd2f0 {
    unsigned short unknown_0_[4];
};

struct Struct_ov017_021bd2f0_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    Struct_ov017_021bd2f0 unknown_a_;
};

struct Struct_ov017_021bd2f0_2 {
#if defined(jpn)
    unsigned char unknown_0_[0xf8];
#else
    unsigned char unknown1_0_[0xfc];
#endif
    unsigned char unknown_fc_;
    unsigned char unknown_fd_[0x13c - 0xfd];
    unsigned char unknown_13c_;
    unsigned char unknown_13d_;
    unsigned char unknown_13e_;
    unsigned char unknown_13f_;
    unsigned short unknown_140_;
    unsigned short unknown_142_;
    unsigned char unknown_144_;
    unsigned char unknown_145_;
    Struct_ov017_021bd2f0 unknown_146_;
};

// USA: func_ov017_021bd2f0
extern "C" ARM void func_ov017_021bd2f0(Struct_ov017_021bd2f0_2* arg0, Struct_ov017_021bd2f0_3* arg1) {
    arg0->unknown_13c_ = arg1->unknown_0_;
    arg0->unknown_13d_ = arg1->unknown_1_;
    arg0->unknown_13e_ = arg1->unknown_2_;
    arg0->unknown_13f_ = arg1->unknown_3_;
    arg0->unknown_140_ = arg1->unknown_4_;
    arg0->unknown_142_ = arg1->unknown_6_;
    arg0->unknown_144_ = arg1->unknown_8_;
    arg0->unknown_146_ = arg1->unknown_a_;
    arg0->unknown_fc_ = 1;
}
