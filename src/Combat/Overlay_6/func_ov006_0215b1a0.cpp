#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
enum { Enum_ov006_0215b1a0_54 = 0x2a, Enum_ov006_0215b1a0_76 = 0x48, Enum_ov006_0215b1a0_4180 = 0x1054 };
#else
enum { Enum_ov006_0215b1a0_54 = 0x36, Enum_ov006_0215b1a0_76 = 0x4c, Enum_ov006_0215b1a0_4696 = 0x1258 };
#endif

struct Struct_02081f20_2;
struct Struct_02108760;
struct Struct_0207fdcc_2;
struct Struct_02071ffc_4;
struct Struct_ov006_02158c28;
struct Struct_ov006_02154614;
struct Struct_ov006_021537d0;

struct Struct_ov000_0217ab8c {
    char unknown_0_[Enum_ov006_0215b1a0_54];
    short unknown_36_;
};

struct Struct_ov006_0215b1a0 {
    Struct_ov006_021537d0* unknown_0_;
    int unknown_4_[2];
};

struct Struct_ov006_02157a60 {
#if !defined(jpn)
    int unknown_0_;
    char** unknown_4_;
#endif
    void* unknown_8_;
    void* unknown_c_;
    Struct_ov006_02154614* unknown_10_;
    Struct_ov000_0217ab8c* unknown_14_;
    void* unknown_18_;
    void* unknown_1c_;
    void* unknown_20_;
    void* unknown_24_;
    void* unknown_28_;
    Struct_ov006_021537d0* unknown_2c_;
    Struct_ov006_021537d0* unknown_30_;
    Struct_ov006_021537d0* unknown_34_;
    void* unknown_38_;
    char unknown_3c_[8];
    short* unknown_44_;
    short** unknown_48_;
    unsigned char** unknown_4c_;
    unsigned short* unknown_50_;
    int unknown_54_[0x20 / 4];
    int unknown_74_[0x28 / 4];
    int unknown_9c_[0xc / 4];
    unsigned short unknown_a8_;
    unsigned char unknown_aa_;
    int unknown_ac_[0x54 / 4];
    int unknown_100_[Enum_ov006_0215b1a0_76 / 4];
    Struct_ov006_0215b1a0 unknown_14c_;
    int unknown_158_[0x18 / 4];
    char unknown_170_[0xc];
#if defined(jpn)
    char unknown1_170_[0xc];
#endif
    int unknown_17c_[4][0x74 / 4];
    int unknown_34c_;
    int unknown_350_;
    int unknown_354_;
    int unknown_358_;
    short unknown_35c_;
    short unknown_35e_;
    short unknown_360_;
    short unknown_362_;
    short unknown_364_;
    short unknown_366_;
    short unknown_368_;
    short unknown_36a_;
    short unknown_36c_;
    short unknown_36e_;
    short unknown_370_;
    unsigned short unknown_372_[3];
    short unknown_378_[3];
    short unknown_37e_;
    unsigned short unknown_380_;
    short unknown_382_;
    signed char unknown_384_;
    signed char unknown_385_;
    unsigned char unknown_386_;
    unsigned char unknown_387_;
    unsigned char unknown_388_;
    unsigned char unknown_389_;
    unsigned char unknown_38a_;
    unsigned char unknown_38b_;
    unsigned char unknown_38c_[3];
    unsigned char unknown_38f_;
    unsigned char unknown_390_;
    unsigned char unknown_391_;
    unsigned char unknown_392_;
    unsigned char unknown_393_;
    unsigned short unknown_394_;
    unsigned char unknown_396_;
    unsigned char unknown_397_;
    unsigned char unknown_398_[3];
    int unknown_39c_;
    int unknown_3a0_;
    int unknown_3a4_;
    unsigned int unknown_3a8_;
    int unknown_3ac_;
    int unknown_3b0_;
    int unknown_3b4_;
    int unknown_3b8_[0x70 / 4];
    int unknown_428_;
    signed char unknown_42c_;
    unsigned char unknown_42d_;
    unsigned char unknown_42e_;
    unsigned char unknown_42f_;
    unsigned char unknown_430_;
    unsigned char unknown_431_;
    unsigned char unknown_432_;
    unsigned char unknown_433_;
    unsigned char unknown_434_;
};

extern "C" void func_ov006_0215fa1c(Struct_ov006_02157a60* arg0, int arg1);
extern "C" void func_020813ec(void* arg0, int arg1);
extern "C" void func_0208203c(Struct_02081f20_2* arg0);
extern "C" unsigned char func_ov006_02158a28(Struct_ov006_02157a60* arg0);
extern "C" unsigned char func_ov006_02158b78(Struct_ov006_02157a60* arg0);
extern "C" void func_0205eaa0(Struct_02108760* arg0, int, int);
extern "C" void func_ov006_0215729c(void* arg0);
extern "C" void func_02071ffc(Struct_02071ffc_4* arg0, int arg1, int arg2, int arg3, short arg4, short* arg5);
extern "C" void func_ov006_02158cac(void* arg0);
extern "C" void func_0207fdcc(Struct_0207fdcc_2* arg0, int arg1);
extern "C" void func_ov006_0215745c(short arg0, signed char* arg1, signed char* arg2);
extern "C" void func_ov006_02158c28(Struct_ov006_02158c28* arg0);

extern "C" char data_02108760[];

// USA: func_ov006_0215b1a0
extern "C" ARM void func_ov006_0215b1a0(Struct_ov006_02157a60* arg0) {
    if (arg0->unknown_390_ == 0)
    {
        arg0->unknown_397_ = 2;
        func_ov006_0215fa1c(arg0, 1);
        arg0->unknown_36e_ = 8;
        if (arg0->unknown_366_ < 0)
            arg0->unknown_366_ = 0x24;
        arg0->unknown_14_->unknown_36_ = arg0->unknown_366_;
        func_020813ec(arg0->unknown_14_, arg0->unknown_36e_);
        func_0208203c((Struct_02081f20_2*)arg0->unknown_9c_);
        arg0->unknown_44_ = 0;
        arg0->unknown_390_++;
    }
    else if (arg0->unknown_390_ == 1)
    {
        arg0->unknown_44_ = &arg0->unknown_366_;
        if (func_ov006_02158a28(arg0))
        {
            func_0205eaa0((Struct_02108760*)data_02108760, 1, 0);
            func_0208203c((Struct_02081f20_2*)arg0->unknown_9c_);
            int var0 = 0;
            arg0->unknown_44_ = 0;
            arg0->unknown_368_ = -1;
            arg0->unknown_36a_ = -1;
            arg0->unknown_384_ = -1;
            arg0->unknown_385_ = -1;
            switch (arg0->unknown_366_)
            {
            case 0x24:
                var0 = 1;
                break;
            case 0x25:
                arg0->unknown_384_ = 0;
                arg0->unknown_390_++;
                break;
            case 0x26:
                arg0->unknown_390_++;
                break;
            case 0x27:
                arg0->unknown_384_ = 7;
                var0 = 1;
                break;
            case 0x28:
                arg0->unknown_384_ = 8;
                var0 = 1;
                break;
            }
            if (var0)
            {
                arg0->unknown_38f_ = 3;
                arg0->unknown_390_ = 0;
                func_ov006_0215729c(arg0->unknown_100_);
                arg0->unknown_394_ |= 0x80;
            }
            short var1 = 0;
            func_02071ffc((Struct_02071ffc_4*)&arg0->unknown_14c_, arg0->unknown_384_, arg0->unknown_385_, arg0->unknown_386_, 0x10, &var1);
            Struct_ov006_021537d0* var2 = arg0->unknown_14c_.unknown_0_;
            arg0->unknown_2c_ = var2;
            arg0->unknown_30_ = var2;
            func_ov006_02158cac(arg0);
            func_0207fdcc((Struct_0207fdcc_2*)arg0->unknown_14_, 8);
            return;
        }
        if (func_ov006_02158b78(arg0) || g_keyManager.TestKeysPressed(0x800))
        {
            *arg0->unknown_44_ = -1;
            arg0->unknown_44_ = 0;
            arg0->unknown_38f_ = 0xc;
            arg0->unknown_390_ = 0;
        }
    }
    else if (arg0->unknown_390_ == 2)
    {
        arg0->unknown_397_ = 2;
        func_ov006_0215fa1c(arg0, 0);
        short var3 = arg0->unknown_366_;
        if (var3 == 0x25)
        {
            arg0->unknown_36e_ = 0xc;
            if (arg0->unknown_368_ < 0)
                arg0->unknown_368_ = 0x48;
        }
        else if (var3 == 0x26)
        {
            arg0->unknown_36e_ = 0xb;
            if (arg0->unknown_368_ < 0)
                arg0->unknown_368_ = 0x40;
        }
        arg0->unknown_14_->unknown_36_ = arg0->unknown_368_;
        func_020813ec(arg0->unknown_14_, arg0->unknown_36e_);
        func_0208203c((Struct_02081f20_2*)arg0->unknown_9c_);
        arg0->unknown_44_ = 0;
        arg0->unknown_390_++;
    }
    else if (arg0->unknown_390_ == 3)
    {
        arg0->unknown_44_ = &arg0->unknown_368_;
        if (func_ov006_02158a28(arg0))
        {
            func_0205eaa0((Struct_02108760*)data_02108760, 1, 0);
            arg0->unknown_38f_ = 3;
            arg0->unknown_390_ = 0;
            arg0->unknown_44_ = 0;
            arg0->unknown_36a_ = -1;
            func_ov006_0215745c(arg0->unknown_368_, &arg0->unknown_384_, &arg0->unknown_385_);
            short var4 = 0;
            func_02071ffc((Struct_02071ffc_4*)&arg0->unknown_14c_, arg0->unknown_384_, arg0->unknown_385_, arg0->unknown_386_, 0x10, &var4);
            Struct_ov006_021537d0* var5 = arg0->unknown_14c_.unknown_0_;
            arg0->unknown_2c_ = var5;
            arg0->unknown_30_ = var5;
            func_ov006_02158cac(arg0);
            func_0207fdcc((Struct_0207fdcc_2*)arg0->unknown_14_, arg0->unknown_36e_);
            arg0->unknown_38f_ = 3;
            arg0->unknown_390_ = 0;
            func_ov006_0215729c(arg0->unknown_100_);
            arg0->unknown_394_ |= 0x80;
            return;
        }
        if (func_ov006_02158b78(arg0))
        {
            arg0->unknown_368_ = -1;
            func_0207fdcc((Struct_0207fdcc_2*)arg0->unknown_14_, arg0->unknown_36e_);
            arg0->unknown_390_ = 0;
        }
        func_ov006_02158c28((Struct_ov006_02158c28*)arg0);
    }
}
