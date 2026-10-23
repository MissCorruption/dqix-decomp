#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_0215f3d8 func_ov006_021607f8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_020e28dc;
struct Struct_0207fdcc_2;

struct Struct_ov006_021580b8 {
    char unknown_0_[0x28];
};

struct Struct_ov006_02156e54_2 {
    int unknown_0_[0x70 / 4];
};

struct Struct_ov006_02154614;

extern "C" int func_020e28dc(Struct_020e28dc*);
extern "C" int func_020e2984(struct Struct_020e28dc* arg0);
extern "C" int func_02080d54(Struct_0207fdcc_2*, int, int, int);

struct Struct_ov006_02157a60 {
#if !defined(jpn)
    int unknown_0_;
    char** unknown_4_;
#endif
    void* unknown_8_;
    void* unknown_c_;
    Struct_ov006_02154614* unknown_10_;
    void* unknown_14_;
    void* unknown_18_;
    void* unknown_1c_;
    void* unknown_20_;
    Struct_ov006_021580b8* unknown_24_;
    void* unknown_28_;
    void* unknown_2c_;
    void* unknown_30_;
    void* unknown_34_;
    void* unknown_38_;
    char unknown_3c_[8];
    short* unknown_44_;
    short** unknown_48_;
    unsigned char** unknown1_4c_;
    unsigned short* unknown_50_;
#if defined(jpn)
    char unknown_4c_[8];
#endif
    int unknown_54_[0x20 / 4];
    int unknown_74_[0x28 / 4];
    int unknown_9c_[0xc / 4];
    unsigned short unknown_a8_;
    unsigned char unknown_aa_;
    int unknown_ac_[0x54 / 4];
    int unknown_100_[0x4c / 4];
    int unknown_14c_[0xc / 4];
    int unknown_158_[0x18 / 4];
    char unknown_170_[0xc];
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
    Struct_ov006_02156e54_2 unknown_3b8_;
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

// USA: func_ov006_02158b78
extern "C" ARM unsigned char func_ov006_02158b78(Struct_ov006_02157a60* arg0)
{
    unsigned char var0 = 0;
    if (g_keyManager.TestKeysPressed(2))
        var0 = 1;
    if (arg0->unknown_18_ != 0 && func_020e28dc((Struct_020e28dc*)arg0->unknown_18_))
    {
        if (func_020e2984((struct Struct_020e28dc*)arg0->unknown_18_))
            var0 = 1;
    }
    else if (g_touchInput.pressed_)
    {
        int var1;
        int var2;
        g_touchInput.GetTouchPoint(&var1, &var2);
        if (!func_02080d54((Struct_0207fdcc_2*)arg0->unknown_14_, arg0->unknown_36e_, (short)var1, (short)var2))
            var0 = 1;
    }
    return var0;
}
