#include <globaldefs.h>
#include "Util/Random.h"

struct Struct_ov000_0215ce80_3 { char unknown_0_[0x40]; };
struct Struct_ov000_0215ce80_4 { char unknown_0_[0x18]; };
struct Struct_ov000_0215ce80 { char unknown_0_[10]; };

struct Struct_ov000_0215ce80_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    short unknown_2_;
    int unknown_4_;
};

struct Struct_ov000_0215767c_2 {
    struct Random unknown_0_;
    char unknown_20_[0x5c60 - sizeof(struct Random)];
    Struct_ov000_0215ce80_3 unknown_5c60_[16];
    char unknown_6060_[0x81b0 - 0x6060];
    unsigned char unknown_81b0_;
    unsigned char unknown_81b1_0_ : 4;
    unsigned char unknown_81b1_4_ : 2;
    unsigned char unknown_81b1_6_ : 2;
    short unknown_81b2_;
    Struct_ov000_0215ce80_4 unknown_81b4_[3];
    Struct_ov000_0215ce80_2 unknown_81fc_[4];
    char unknown_821c_[0x8d5c - 0x821c];
    unsigned char unknown_8d5c_[10];
    Struct_ov000_0215ce80 unknown_8d66_[12];
    char unknown_8dde_[0x8de0 - 0x8dde];
    signed char unknown_8de0_[0x20];
    char unknown_8e00_[4];
    short unknown_8e04_;
    signed char unknown_8e06_;
    unsigned char unknown_8e07_;
    char unknown_8e08_[0x8e14 - 0x8e08];
    signed char unknown_8e14_;
    unsigned char unknown_8e15_;
    char unknown_8e16_[2];
    int unknown_8e18_;
    int unknown_8e1c_;
    int unknown_8e20_;
    char unknown_8e24_[4];
    int unknown_8e28_;
    int unknown_8e2c_;
    int unknown_8e30_;
    int unknown_8e34_;
    char unknown_8e38_[4];
    float unknown_8e3c_;
    float unknown_8e40_;
    unsigned char unknown_8e44_[3];
    unsigned char unknown_8e47_;
    signed char unknown_8e48_;
    unsigned char unknown_8e49_;
    short unknown_8e4a_;
    short unknown_8e4c_;
    short unknown_8e4e_;
    char unknown_8e50_[0x8e84 - 0x8e50];
    unsigned char unknown_8e84_[0x10];
    unsigned char unknown_8e94_;
    char unknown_8e95_[2];
    unsigned char unknown_8e97_;
    char unknown_8e98_[0x8eb0 - 0x8e98];
    int unknown_8eb0_;
};

extern char data_ov000_021838c1[];

extern "C" void func_ov000_0215d090(Struct_ov000_0215767c_2* arg0);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
unsigned long long GetCurrentTimestamp(void);

// USA: func_ov000_0215ce80
extern "C" ARM void func_ov000_0215ce80(Struct_ov000_0215767c_2* arg0) {
    func_ov000_0215d090(arg0);
    arg0->unknown_8e18_ = 0;
    arg0->unknown_8e1c_ = 0;
    arg0->unknown_8e20_ = 0;
    arg0->unknown_8e47_ = 0;
    arg0->unknown_8e48_ = -1;
    arg0->unknown_8e28_ = 0;
    arg0->unknown_8e2c_ = 0;
    arg0->unknown_8e30_ = 0;
    arg0->unknown_8e14_ = 0;
    arg0->unknown_8e34_ = 0;
    arg0->unknown_8e15_ = 0;
    arg0->unknown_8e3c_ = 1.0f;
    arg0->unknown_8e40_ = 1.0f;
    arg0->unknown_8e49_ = 0;
    memset(arg0->unknown_8e44_, 0, sizeof(arg0->unknown_8e44_));
    memset(arg0->unknown_8e84_, 0, sizeof(arg0->unknown_8e84_));
    arg0->unknown_81b0_ = 0;
    arg0->unknown_81b1_0_ = 0;
    arg0->unknown_81b1_4_ = 0;
    arg0->unknown_81b1_6_ = 0;
    arg0->unknown_81b2_ = 0;
    for (int var0 = 0; var0 < 3; var0++) {
        memset(&arg0->unknown_81b4_[var0], 0, sizeof(Struct_ov000_0215ce80_4));
    }
    for (int var1 = 0; var1 < 4; var1++) {
        arg0->unknown_81fc_[var1].unknown_2_ = 0;
        arg0->unknown_81fc_[var1].unknown_0_ = 0;
        arg0->unknown_81fc_[var1].unknown_1_ = 0;
        arg0->unknown_81fc_[var1].unknown_4_ = 0;
    }
    memset(arg0->unknown_8d5c_, 0, sizeof(arg0->unknown_8d5c_));
    arg0->unknown_8e07_ = 0;
    arg0->unknown_8e04_ = -1;
    arg0->unknown_8e06_ = -1;
    arg0->unknown_8e4a_ = 0;
    arg0->unknown_8e4c_ = 0;
    arg0->unknown_8e4e_ = 0;
    arg0->unknown_8e97_ = 0;
    for (int var2 = 0; var2 < 16; var2++) {
        memset(&arg0->unknown_5c60_[var2], 0, sizeof(Struct_ov000_0215ce80_3));
    }
    for (int var3 = 0; var3 < 12; var3++) {
        memset(&arg0->unknown_8d66_[var3], 0, sizeof(Struct_ov000_0215ce80));
    }
    arg0->unknown_8e94_ = 0;
    arg0->unknown_8eb0_ = 1;
    InitRandom(&arg0->unknown_0_, GetCurrentTimestamp(), data_ov000_021838c1, 1);
    memset(arg0->unknown_8de0_, -1, sizeof(arg0->unknown_8de0_));
}
