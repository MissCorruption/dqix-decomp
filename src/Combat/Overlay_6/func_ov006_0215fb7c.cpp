#include <globaldefs.h>

struct Struct_ov006_02154614;
struct Struct_02081164;
struct Struct_0207fdcc_2;

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

extern "C" void func_0208103c(void* arg0, int arg1, int arg2);
extern "C" void func_0208108c(void* arg0, int arg1);
extern "C" void func_02081164(Struct_02081164* arg0, int arg1, int arg2);
extern "C" void func_020813ec(void* arg0, int arg1);
extern "C" void func_02080c68(void* arg0, int arg1, int arg2);
extern "C" void func_02080c20(Struct_0207fdcc_2* arg0, int arg1);

// USA: func_ov006_0215fb7c
extern "C" ARM void func_ov006_0215fb7c(Struct_ov006_02157a60* arg0) {
#if defined(jpn)
    void* var0 = *(void**)((char*)arg0 + 0xc);
#else
    void* var0 = arg0->unknown_14_;
#endif
    short var1 = 0x2f;
    switch (arg0->unknown_366_)
    {
    case 0x28:
        var1 = 0x15;
        break;
    case 0x27:
        var1 = 0x14;
        break;
    }
    switch (arg0->unknown_368_)
    {
    case 0x48:
        var1 = 0x1d;
        break;
    case 0x49:
        var1 = 0x1e;
        break;
    case 0x4a:
        var1 = 0x1f;
        break;
    case 0x4b:
        var1 = 0x20;
        break;
    case 0x4c:
        var1 = 0x21;
        break;
    case 0x4d:
        var1 = 0x22;
        break;
    case 0x4e:
        var1 = 0x23;
        break;
    case 0x4f:
        var1 = 0x24;
        break;
    case 0x50:
        var1 = 0x25;
        break;
    case 0x51:
        var1 = 0x26;
        break;
    case 0x52:
        var1 = 0x27;
        break;
    case 0x53:
        var1 = 0x28;
        break;
    case 0x40:
        var1 = 0x17;
        break;
    case 0x41:
        var1 = 0x18;
        break;
    case 0x42:
        var1 = 0x19;
        break;
    case 0x43:
        var1 = 0x1a;
        break;
    case 0x44:
        var1 = 0x1b;
        break;
    case 0x45:
        var1 = 0x1c;
        break;
    }
    func_0208103c(var0, 0x59, var1);
    func_0208108c(var0, 0x59);
    func_02081164((Struct_02081164*)var0, 0xe, 1);
    func_020813ec(var0, 0xe);
    func_02080c68(var0, 0xe, 2);
    func_02080c20((Struct_0207fdcc_2*)var0, 0xe);
}
