#include <globaldefs.h>

struct Struct_020c2f18 { int unknown_0_, unknown_4_, unknown_8_; };

struct Struct_020c2f18_2 {
    volatile unsigned short unknown_0_;
    unsigned char unknown_2_[0xe];
    unsigned int unknown_10_;
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    unsigned int unknown_1c_;
    unsigned char unknown_20_[0x30 - 0x20];
    volatile unsigned short unknown_30_;
    unsigned char unknown_32_[0x38 - 0x32];
    unsigned int unknown_38_;
    unsigned int unknown_3c_;
};

// USA: func_020c2f18
extern "C" ARM void Vector3fix_Normalize(struct Struct_020c2f18* arg0, struct Struct_020c2f18* arg1) {
    long long var0 = (long long)arg0->unknown_0_ * arg0->unknown_0_;
    int var1 = arg0->unknown_4_;
    var0 += (long long)var1 * var1;
    var0 += (long long)arg0->unknown_8_ * arg0->unknown_8_;

    struct Struct_020c2f18_2* var2 = (struct Struct_020c2f18_2*)0x4000280;
    var2->unknown_0_ = 2;
    var2->unknown_10_ = 0;
    var2->unknown_14_ = 0x1000000;
    var2->unknown_18_ = (unsigned int)var0;
    var2->unknown_1c_ = (unsigned int)(var0 >> 32);
    var2->unknown_30_ = 1;
    var2->unknown_38_ = (unsigned int)var0 << 2;
    var2->unknown_3c_ = (unsigned int)(((unsigned long long)var0 << 2) >> 32);

    while (var2->unknown_30_ & 0x8000) {}
    int var3 = *(volatile int*)0x40002b4;

    while (*(volatile unsigned short*)0x4000280 & 0x8000) {}
    long long var4 = *(volatile long long*)0x40002a0;

    long long var5 = var4 * (long long)var3;
    arg1->unknown_0_ = (int)((var5 * (long long)arg0->unknown_0_ + (1LL << 44)) >> 45);
    arg1->unknown_4_ = (int)((var5 * (long long)arg0->unknown_4_ + (1LL << 44)) >> 45);
    arg1->unknown_8_ = (int)((var5 * (long long)arg0->unknown_8_ + (1LL << 44)) >> 45);
}
