#if defined(jpn)
#define R(j,u) (j)
#define data_ov006_02160010 data_ov006_02161364
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_020e28dc;

struct Struct_ov006_021580b8 {
    char unknown_0_[0x28];
};

struct Struct_ov006_02156e54_2 {
    int unknown_0_[0x70 / 4];
};

struct Struct_ov006_02154614;

struct Struct_ov000_0217ab8c {
    char unknown_0_[R(0x2a, 0x36)];
    short unknown_36_;
};

extern "C" {
void func_020813ec(Struct_ov000_0217ab8c*, int);
}

extern "C" int func_020e28dc(Struct_020e28dc*);
extern "C" int func_020e2918(signed char*);
extern "C" int func_02080dd4(void*, int, int, int, unsigned char*, unsigned char);

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
    unsigned char** unknown_4c_;
    unsigned short* unknown_50_;
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
#if defined(jpn)
    char unknown_344_[8];
#endif
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

// USA: func_ov006_02158a28
extern "C" ARM unsigned char func_ov006_02158a28(Struct_ov006_02157a60* arg0)
{
    unsigned char var0 = 0;
    if (g_keyManager.TestKeysPressed(1))
        var0 = 1;
    if ((arg0->unknown_394_ & 2) && g_keyManager.TestKeysPressed(0x400))
        var0 = 1;
    if (arg0->unknown_18_ != 0 && func_020e28dc((Struct_020e28dc*)arg0->unknown_18_))
    {
        int var1 = func_020e2918((signed char*)arg0->unknown_18_);
        if (var1 >= 0)
        {
            var0 = 1;
            *arg0->unknown_44_ = var1 + 0x22;
        }
    }
    else if (g_touchInput.pressed_ && arg0->unknown_44_ != 0)
    {
        int var2;
        int var3;
        g_touchInput.GetTouchPoint(&var2, &var3);
        arg0->unknown_35e_ = *arg0->unknown_44_;
        int var4 = func_02080dd4(arg0->unknown_14_, arg0->unknown_36e_, (short)var2, (short)var3, &var0, 1);
        if (var4 < 0)
            return 0;
        *arg0->unknown_44_ = var4;
        short var5 = *arg0->unknown_44_;
        if (arg0->unknown_35e_ != var5)
        {
            ((Struct_ov000_0217ab8c*)arg0->unknown_14_)->unknown_36_ = var5;
            func_020813ec((Struct_ov000_0217ab8c*)arg0->unknown_14_, arg0->unknown_36e_);
        }
    }
    return var0;
}
