#include <globaldefs.h>

#if defined(jpn)
#define data_ov006_02160030 data_ov006_02161384
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

struct Struct_ov006_02154614;

struct Struct_ov006_02157a60 {
    int unknown_0_;
    char** unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    Struct_ov006_02154614* unknown_10_;
    void* unknown_14_;
    void* unknown_18_;
    void* unknown_1c_;
    void* unknown_20_;
    void* unknown_24_;
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
    char unknown_54_[0x20];
    char unknown_74_[0x28];
    char unknown_9c_[0xc];
    unsigned short unknown_a8_;
    unsigned char unknown_aa_;
    char unknown_ab_[0x54];
    char unknown_ff_[0x4c];
    char unknown_14b_[0xc];
    char unknown_157_[0x18];
    char unknown_16f_[0xc];
    char unknown_17b_[4][0x74];
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
    char unknown_3b8_[0x70];
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

struct Struct_ov006_02160030 {
    int unknown_0_[9];
};

extern "C" short* func_ov006_0215919c(void* arg0);
extern "C" void func_ov006_02155710(Struct_ov006_02154614* arg0, short arg1, signed char arg2);

extern "C" const Struct_ov006_02160030 data_ov006_02160030;

// USA: func_ov006_0215f740
extern "C" ARM void func_ov006_0215f740(Struct_ov006_02157a60* arg0) {
    short* var0 = func_ov006_0215919c(arg0);
    if (var0 == 0)
        return;
    unsigned short var1 = (unsigned short)(arg0->unknown_388_ * 8);
    var1 += arg0->unknown_364_ - 0x64;
    Struct_ov006_02160030 var2 = data_ov006_02160030;
    short var3 = arg0->unknown_362_ - 0x5b;
    if (var3 < 0)
        var3 = 0;
    if (var3 > 8)
        var3 = 8;
    func_ov006_02155710(*(Struct_ov006_02154614**)((char*)arg0 + LOW_REGION(8, 0x10)), var0[var1], var2.unknown_0_[var3]);
}
