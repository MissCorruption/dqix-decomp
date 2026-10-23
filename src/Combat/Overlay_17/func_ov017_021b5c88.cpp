#include <globaldefs.h>

struct Struct_02015ef4_4 {
    int unknown_0_, unknown_4_, unknown_8_, unknown_c_;
    unsigned int unknown_10_0_ : 10;
    unsigned int unknown_11_2_ : 10;
    unsigned int unknown_12_4_ : 8;
    unsigned int unknown_13_4_ : 4;
    short unknown_14_, unknown_16_, unknown_18_, unknown_1a_, unknown_1c_;
};

struct Struct_0201099c_10 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[10];
    Struct_02015ef4_4* unknown_c_;
    unsigned char unknown_10_[4];
    unsigned char unknown_14_;
};

struct Struct_ov017_021b5c88 {
#if defined(jpn)
    unsigned char unknown_0_[0x2794];
#else
    unsigned char unknown1_0_[0x2754];
#endif
    Struct_0201099c_10 unknown_2754_;
};

struct Struct_ov017_021b5c88_2 {
    unsigned short unknown_0_[2];
    unsigned short unknown_4_0_ : 2;
    unsigned short unknown_4_2_ : 2;
    unsigned short unknown_4_4_ : 12;
};

struct Struct_ov017_021b5c88_3 {
    unsigned char unknown_0_[0x12];
    short unknown_12_;
    unsigned short unknown_14_;
    unsigned char unknown_16_;
    signed char unknown_17_;
    unsigned char unknown_18_[0x24 - 0x18];
    Struct_ov017_021b5c88_2* unknown_24_;
};

extern "C" Struct_ov017_021b5c88* func_02012fe4(void);
extern "C" Struct_02015ef4_4* func_020dedd0(Struct_0201099c_10* arg0, int arg1);
extern "C" unsigned short func_020de234(Struct_02015ef4_4* arg0, int arg1);

// USA: func_ov017_021b5c88
extern "C" ARM int func_ov017_021b5c88(Struct_ov017_021b5c88_3* arg0) {
    Struct_0201099c_10* var0 = &func_02012fe4()->unknown_2754_;
    if (arg0->unknown_24_->unknown_4_2_ == 1) {
        arg0->unknown_17_ = 0x69;
        arg0->unknown_14_ = 0x7f;
    } else {
        Struct_02015ef4_4* var1 = func_020dedd0(var0, arg0->unknown_12_);
        if (var1 != NULL) {
            arg0->unknown_17_ = var1->unknown_12_4_;
            arg0->unknown_14_ = func_020de234(var1, 0);
        }
    }
    return 2;
}
