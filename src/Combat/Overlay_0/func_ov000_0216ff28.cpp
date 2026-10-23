#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0203c0cc {
#if defined(jpn)
    char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    int unknown_20_;
    int unknown_24_;
    int unknown_28_;
    int unknown_2c_;
    unsigned int unknown_30_0_ : 16;
    unsigned int unknown_32_0_ : 8;
    unsigned int unknown_33_0_ : 8;
    int unknown_34_;
#else
    int unknown1_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    short unknown1_14_;
#endif
};

extern "C" void func_0203c0cc(struct Struct_0203c0cc* arg0);

struct Struct_020200c0 {
    char unknown_0_[0x1c];
    unsigned char unknown_1c_0_ : 1;
    unsigned char unknown_1c_1_ : 7;
    char unknown_1d_[0x28 - 0x1d];
};

extern "C" void func_ov000_0216fe9c(struct Struct_020200c0* arg0);

struct Struct_ov000_0215ab88 {
    int unknown_0_;
    int unknown_4_;
    struct Struct_020200c0 unknown_8_;
    int unknown_30_;
    int unknown_34_;
    int unknown_38_;
    int unknown_3c_;
    int unknown_40_;
    int unknown_44_;
    int unknown_48_;
    int unknown_4c_;
    struct Struct_0203c0cc unknown_50_;
    struct Struct_0203c0cc unknown_68_;
    short unknown_80_;
    short unknown_82_;
    char unknown_84_[2];
    unsigned char unknown_86_;
    unsigned char unknown_87_;
    unsigned char unknown_88_[0x13];
    int unknown_9c_[0x42];
    int unknown_1a4_[0x93];
    int unknown_3f0_[0x10];
    short unknown_430_;
    short unknown_432_;
    int unknown_434_;
    int unknown_438_;
    unsigned char unknown_43c_;
    signed char unknown_43d_;
    unsigned char unknown_43e_;
    unsigned char unknown_43f_;
    unsigned char unknown_440_;
    unsigned char unknown_441_;
    signed char unknown_442_;
    unsigned char unknown_443_;
    unsigned char unknown_444_;
    unsigned char unknown_445_;
};

// USA: func_ov000_0216ff28
extern "C" ARM void func_ov000_0216ff28(struct Struct_ov000_0215ab88* arg0) {
    int var0;
    arg0->unknown_0_ = 0;
    arg0->unknown_4_ = 0;
    func_ov000_0216fe9c(&arg0->unknown_8_);
    arg0->unknown_87_ = 0;
    arg0->unknown_30_ = 0;
    arg0->unknown_38_ = 0;
    arg0->unknown_3c_ = 0;
    arg0->unknown_40_ = 0;
    arg0->unknown_48_ = 0;
    arg0->unknown_44_ = 0;
    arg0->unknown_4c_ = -1;
    arg0->unknown_82_ = 0;
    arg0->unknown_86_ = 0;
    arg0->unknown_80_ = 0x7fff;
    arg0->unknown_438_ = 0;
    arg0->unknown_43c_ = 0;
    arg0->unknown_430_ = 0x7fff;
    arg0->unknown_432_ = 0x7fff;
    arg0->unknown_434_ = 0;
    arg0->unknown_43d_ = -1;
    arg0->unknown_43e_ = 0;
    arg0->unknown_440_ = 0;
    arg0->unknown_43f_ = 0;
    arg0->unknown_441_ = 0;
    arg0->unknown_442_ = -1;
    arg0->unknown_443_ = 5;
    arg0->unknown_444_ = 0;
    arg0->unknown_445_ = 1;
    func_0203c0cc(&arg0->unknown_68_);
    func_0203c0cc(&arg0->unknown_50_);
    memset(arg0->unknown_88_, 0, sizeof(arg0->unknown_88_));
    for (var0 = 0; var0 < 0x42; var0++) {
        arg0->unknown_9c_[var0] = 0;
    }
    for (var0 = 0; var0 < 0x93; var0++) {
        arg0->unknown_1a4_[var0] = 0;
    }
    for (var0 = 0; var0 < 0x10; var0++) {
        arg0->unknown_3f0_[var0] = 0;
    }
    arg0->unknown_8_.unknown_1c_0_ = 0;
}
