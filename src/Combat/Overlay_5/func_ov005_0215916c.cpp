#if defined(jpn)
#define func_ov005_02157b74 func_ov005_0215916c
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov005_02153ba4 {
    short unknown_0_;
    char unknown_2_[0x1c - 2];
};

struct Struct_ov005_02153954 {
    char unknown_0_[LOW_REGION(0x2d08, 0x2d90)];
    Struct_ov005_02153ba4 unknown_2d90_[24];
    char unknown_3030_[LOW_REGION(0x3d33 - 0x2fa8, 0x3dbb - 0x3030)];
    signed char unknown_3dbb_;
    char unknown_3dbc_[LOW_REGION(0x3d54 - 0x3d34, 0x3ddc - 0x3dbc)];
    unsigned char unknown_3ddc_;
    unsigned char unknown_3ddd_;
    signed char unknown_3dde_;
    unsigned char unknown_3ddf_;
};

extern "C" void func_ov005_02157b74(Struct_ov005_02153954* arg0, int arg1, int arg2);

// USA: func_ov005_0215916c
extern "C" ARM void
#if defined(jpn)
func_ov005_0215a688
#else
func_ov005_0215916c
#endif
(Struct_ov005_02153954* arg0) {
    if (arg0->unknown_3ddc_ == 0) {
        if (arg0->unknown_3dbb_ >= 0 && arg0->unknown_3dbb_ < 8)
            func_ov005_02157b74(arg0, 0xffff, 0);
        else if (arg0->unknown_3dbb_ >= 8 && arg0->unknown_3dbb_ < 24)
            func_ov005_02157b74(arg0, arg0->unknown_2d90_[arg0->unknown_3dbb_].unknown_0_, 0);
        arg0->unknown_3ddc_++;
    } else if (arg0->unknown_3ddc_ == 1) {
        arg0->unknown_3ddf_ = 4;
        arg0->unknown_3ddc_ = 0;
    }
}
