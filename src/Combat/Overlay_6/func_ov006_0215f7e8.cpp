#include <globaldefs.h>

struct Struct_ov006_02154614;
struct Struct_ov006_02158d50_2;
struct Struct_02080fa8;
struct Struct_0201099c_3;
struct Struct_02080f8c;
struct Struct_02080cc0;
struct Struct_0207fdcc_2;

struct Struct_ov006_021537d0 {
    short unknown_0_;
    short unknown_2_;
    char unknown_4_[0x18];
    Struct_ov006_021537d0* unknown_1c_;
};

struct Struct_ov006_021555b0 {
    short unknown_0_;
    unsigned short unknown_2_0_ : 1;
    unsigned short unknown_2_1_ : 1;
    unsigned short unknown_2_2_ : 14;
};

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
#if defined(jpn)
    int unknown_f8_[0x48 / 4];
#else
    int unknown_100_[0x4c / 4];
#endif
    int unknown_14c_[0xc / 4];
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

extern "C" Struct_ov006_021537d0* func_ov006_02158d50(Struct_ov006_02158d50_2* arg0, short arg1);
extern "C" void func_02080bac(void* arg0, int arg1);
extern "C" void func_0208065c(void* arg0, int arg1);
extern "C" void func_02080fa8(Struct_02080fa8* arg0, int arg1, int arg2);
extern "C" const char* func_020e0434(Struct_0201099c_3* arg0, int arg1);
extern "C" void func_02080f8c(Struct_02080f8c* arg0, int arg1, int arg2);
extern "C" void func_02080cc0(Struct_02080cc0* arg0, int arg1, int arg2);
extern "C" Struct_ov006_021555b0* func_ov006_02153c6c(void* arg0, short arg1);
extern "C" const char** func_020e5294(void* arg0, int arg1);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" void func_020e4864(const char* arg0, char* arg1, int, int, int, int);
extern "C" void func_020805f4(void* arg0, int arg1);
extern "C" void func_020806b0(void* arg0, int arg1);
extern "C" void func_02080b2c(void* arg0, int arg1);
extern "C" void func_02080c68(void* arg0, int arg1, int arg2);
extern "C" void func_02081ea4(Struct_0207fdcc_2* arg0, int arg1, int arg2);
extern "C" void func_02081130(void* arg0, int arg1, int arg2);
extern "C" void func_020813ec(void* arg0, int arg1);

// USA: func_ov006_0215f7e8
extern "C" ARM void func_ov006_0215f7e8(Struct_ov006_02157a60* arg0) {
    Struct_ov006_021537d0* var0 = func_ov006_02158d50((Struct_ov006_02158d50_2*)arg0, arg0->unknown_388_);
    arg0->unknown_30_ = var0;
    if (var0 == 0)
        return;
    arg0->unknown_394_ &= ~4;
    if (arg0->unknown_389_ > 1)
        arg0->unknown_394_ |= 4;
    void* var1 = arg0->unknown_14_;
    func_02080bac(var1, 9);
    func_0208065c(var1, 9);
    func_02080fa8((Struct_02080fa8*)var1, 0x3a, arg0->unknown_388_ + 1);
    func_02080fa8((Struct_02080fa8*)var1, 0x3b, arg0->unknown_389_);
    Struct_ov006_021537d0* var2 = arg0->unknown_30_;
    const char* var3 = func_020e0434((Struct_0201099c_3*)arg0->unknown_158_, 0x25);
    short var4 = 0x29;
    for (unsigned char var5 = 0; var5 < 0x10; var5++)
    {
        if (var2 != 0)
        {
            func_02080f8c((Struct_02080f8c*)var1, var4, (int)var3);
            func_02080cc0((Struct_02080cc0*)var1, var4, 3);
            Struct_ov006_021555b0* var6 = func_ov006_02153c6c(arg0->unknown_74_, var2->unknown_0_);
            if (var6 != 0)
            {
                const char* var7 = var3;
#if defined(jpn)
                if (var6->unknown_2_1_)
                    var7 = func_020e0434((Struct_0201099c_3*)arg0->unknown_170_, var2->unknown_2_);
                func_02080f8c((Struct_02080f8c*)var1, var4, (int)var7);
#else
                if (var6->unknown_2_1_)
                {
                    const char** var8 = func_020e5294(arg0->unknown_170_, var2->unknown_2_);
                    if (var8 != 0)
                    {
                        memset(arg0->unknown_4_[var5], 0, 4);
                        func_020e4864(*var8, arg0->unknown_4_[var5], 1, 0, 0, 0);
                        var7 = arg0->unknown_4_[var5];
                    }
                }
                func_02080f8c((Struct_02080f8c*)var1, var4, (int)var7);
                func_020805f4(var1, var4);
#endif
                func_02080cc0((Struct_02080cc0*)var1, var4, 0xf);
            }
            var2 = var2->unknown_1c_;
        }
        else
        {
            func_020806b0(var1, var4);
            func_02080b2c(var1, var4);
        }
        var4++;
    }
    func_02080c68(var1, 9, 0);
    func_02081ea4((Struct_0207fdcc_2*)var1, 9, 0);
    func_02081130(var1, 9, (arg0->unknown_394_ & 4) ? 1 : 0);
    func_020813ec(var1, 9);
}
