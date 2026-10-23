#include <globaldefs.h>

extern "C" void func_020dd7ac(void*);
extern "C" void func_020dd8b4(int, int, int, int);

struct Struct_ov023_021dbc58 {
    char unknown_0_[0x3e];
    unsigned short unknown_3e_;
    char unknown_40_[0x42 - 0x40];
    unsigned short unknown_42_;
    char unknown_44_[0x48 - 0x44];
    int unknown_48_;
    char unknown_4c_[0x50 - 0x4c];
    int unknown_50_;
    char unknown_54_[0x58 - 0x54];
    int unknown_58_;
    char unknown_5c_[0x66 - 0x5c];
    unsigned short unknown_66_;
    char unknown_68_[0x6a - 0x68];
    unsigned short unknown_6a_;
    char unknown_6c_[0x6e - 0x6c];
    unsigned short unknown_6e_;
    char unknown_70_[0x72 - 0x70];
    unsigned short unknown_72_;
    char unknown_74_[0x76 - 0x74];
    unsigned short unknown_76_;
    char unknown_78_[0x7a - 0x78];
    unsigned short unknown_7a_;
};

struct Struct_ov023_021dbc58_2 {
    float unknown_0_;
    float unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    float unknown_18_;
    float unknown_1c_;
    float unknown_20_;
    float unknown_24_;
    float unknown_28_;
    float unknown_2c_;
};

// USA: func_ov023_021dbc58
extern "C" ARM void func_ov023_021dbc58(void* arg0, Struct_ov023_021dbc58_2* arg1, int arg2) {
    Struct_ov023_021dbc58 var0;
    func_020dd7ac(&var0);
    func_020dd8b4((int)&var0, (int)arg0, arg2, 1);

    arg1->unknown_0_ = var0.unknown_3e_;
    arg1->unknown_4_ = var0.unknown_42_;
    arg1->unknown_8_ = var0.unknown_48_;
    arg1->unknown_c_ = var0.unknown_50_;
    arg1->unknown_10_ = var0.unknown_58_;
    arg1->unknown_14_ = 0;
    arg1->unknown_18_ = var0.unknown_66_;
    arg1->unknown_1c_ = var0.unknown_6a_;
    arg1->unknown_20_ = var0.unknown_6e_;
    arg1->unknown_24_ = var0.unknown_72_;
    arg1->unknown_28_ = var0.unknown_76_;
    arg1->unknown_2c_ = var0.unknown_7a_;
}
