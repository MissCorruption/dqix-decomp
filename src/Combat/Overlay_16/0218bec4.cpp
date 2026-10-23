#include <globaldefs.h>

struct Struct_020e58dc_2 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; int unknown_10_; };
struct Struct_020e58dc { Struct_020e58dc_2* unknown_0_; int unknown_4_; int unknown_8_; };

struct Struct_0200f374_2 {
    char unknown_0_[0x10];
    unsigned char unknown_10_;
    char unknown_11_;
    short unknown_12_;
    unsigned int unknown_14_;
};

struct Struct_ov016_0219d0c0 {
    int unknown_0_;
    int unknown_4_;
    void* unknown_8_;
    char unknown_c_[4];
    int unknown_10_;
    volatile int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    unsigned int unknown_20_;
    unsigned int unknown_24_;
    int unknown_28_;
    short* unknown_2c_;
    short* unknown_30_;
    Struct_0200f374_2* unknown_34_;
    int unknown_38_;
    int unknown_3c_;
    unsigned long long unknown_40_;
    volatile long long unknown_48_;
    long long unknown_50_;
};

#if defined(jpn)
struct Struct_ov016_0219d0c0_2 {
    char unknown_0_[4];
    int unknown_4_;
    volatile int unknown_8_;
    char unknown_c_[0x1c - 0xc];
    unsigned int unknown_1c_;
    char unknown_20_[0x30 - 0x20];
    int unknown_30_;
    int unknown_34_;
    int unknown_38_;
};
extern Struct_ov016_0219d0c0_2 data_ov016_0219d0c0;
#else
extern Struct_ov016_0219d0c0 data_ov016_0219d0c0;
#endif
void SleepCurrentContext(unsigned int ticks);
extern "C" Struct_020e58dc_2* func_020e58dc(Struct_020e58dc* arg0, int arg1);
extern "C" int func_ov016_0218be5c();
extern "C" int func_ov016_0218e708(void* arg0, void* arg1, int arg2, int arg3);
extern "C" int func_ov016_0218e72c(void* arg0);
extern "C" void* __clear(void* arg0, int arg1);
extern "C" int func_020421a0();
extern "C" void func_02046608(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
extern "C" void func_ov016_0218e240(unsigned short* arg0, char* arg1, unsigned short arg2, int arg3, int arg4, unsigned char arg5, int arg6, int arg7);

// USA: func_ov016_0218bec4
extern "C" ARM void func_ov016_0218bec4(void* arg0, int arg1) {
#if defined(jpn)
    int var0;
    while (data_ov016_0219d0c0.unknown_8_ == 0) {
    }
    while (data_ov016_0219d0c0.unknown_30_ <= (var0 = data_ov016_0219d0c0.unknown_38_)) {
        SleepCurrentContext(1);
    }
    data_ov016_0219d0c0.unknown_4_ = 0;
    if (data_ov016_0219d0c0.unknown_1c_ < 2 ||
        data_ov016_0219d0c0.unknown_30_ - var0 <= 1) {
        func_ov016_0218e708(arg0, (void*)func_ov016_0218be5c(), 0x100, 0);
        data_ov016_0219d0c0.unknown_8_ = 0;
    } else {
        func_ov016_0218e72c(arg0);
        data_ov016_0219d0c0.unknown_1c_ = 0;
        data_ov016_0219d0c0.unknown_34_ ^= 1;
    }
    data_ov016_0219d0c0.unknown_38_++;
    data_ov016_0219d0c0.unknown_1c_++;
#else
    char var1[0x200];
    int var2;
    while (data_ov016_0219d0c0.unknown_14_ == 0) {
    }
    while (data_ov016_0219d0c0.unknown_3c_ <= (var2 = data_ov016_0219d0c0.unknown_1c_)) {
        SleepCurrentContext(1);
    }
    data_ov016_0219d0c0.unknown_4_ = 0;
    if (data_ov016_0219d0c0.unknown_20_ < 2 ||
        data_ov016_0219d0c0.unknown_3c_ - var2 <= 1) {
        Struct_020e58dc_2* var3 = func_020e58dc((Struct_020e58dc*)arg1, var2);
        func_ov016_0218e708(arg0, (void*)func_ov016_0218be5c(), 0x100, 0);
        if (var3 != 0 && var3->unknown_4_ == 0) {
            __clear(var1, 0x200);
            func_02046608((void*)func_020421a0(), 0xc, var3->unknown_10_, (int)var1, 0xe3, 0, 1);
            func_ov016_0218e240((unsigned short*)func_ov016_0218be5c(), var1, 0x7fff, 0, 0xa8, 1, 1, var3->unknown_0_);
            var3->unknown_0_ += 4;
        }
        data_ov016_0219d0c0.unknown_14_ = 0;
    } else {
        func_ov016_0218e72c(arg0);
        data_ov016_0219d0c0.unknown_20_ = 0;
    }
    data_ov016_0219d0c0.unknown_1c_++;
    data_ov016_0219d0c0.unknown_20_++;
#endif
}
