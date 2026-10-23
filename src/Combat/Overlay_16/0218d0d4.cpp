#include <globaldefs.h>
#include <NitroSDK/BGBases.h>

struct Struct_020e58dc_2 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; int unknown_10_; };
struct Struct_020e58dc { Struct_020e58dc_2* unknown_0_; int unknown_4_; int unknown_8_; };

struct Struct_ov016_0219d144 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[4];
    int unknown_c_;
    void* unknown_10_;
    int unknown_14_;
    int unknown_18_;
    int unknown_1c_;
    unsigned int unknown_20_;
    unsigned int unknown_24_;
    int unknown_28_;
    short* unknown_2c_;
    volatile int unknown_30_;
    unsigned int unknown_34_;
    unsigned int unknown_38_;
    unsigned int unknown_3c_;
    unsigned int unknown_40_;
    volatile unsigned int unknown_44_;
    volatile unsigned int unknown_48_;
};

#if defined(jpn)
struct Struct_ov016_0219d144_2 {
    int unknown_0_;
    int unknown_4_;
    char unknown_8_[4];
    volatile int unknown_c_;
    char unknown_10_[4];
    int unknown_14_;
    int unknown_18_;
    unsigned int unknown_1c_;
};
extern Struct_ov016_0219d144_2 data_ov016_0219d144;
#else
extern Struct_ov016_0219d144 data_ov016_0219d144;
#endif
void SleepCurrentContext(unsigned int ticks);
extern "C" Struct_020e58dc_2* func_020e58dc(Struct_020e58dc* arg0, int arg1);
extern "C" int func_ov016_0218e708(void* arg0, void* arg1, int arg2, int arg3);
extern "C" int func_ov016_0218e72c(void* arg0);
extern "C" void func_ov016_0218e240(unsigned short* arg0, char* arg1, unsigned short arg2, int arg3, int arg4, unsigned char arg5, int arg6, int arg7);

// USA: func_ov016_0218d0d4
extern "C" ARM void func_ov016_0218d0d4(void* arg0, void* arg1, int arg2) {
#if defined(jpn)
    int var0;
    while (data_ov016_0219d144.unknown_c_ == 0) {
    }
    while (data_ov016_0219d144.unknown_14_ <= (var0 = data_ov016_0219d144.unknown_18_)) {
        SleepCurrentContext(1);
    }
    data_ov016_0219d144.unknown_0_ = 0;
    if (data_ov016_0219d144.unknown_1c_ < 2 ||
        data_ov016_0219d144.unknown_14_ - var0 <= 1) {
        unsigned short* var1;
        if (data_ov016_0219d144.unknown_4_ == 0) {
            var1 = (unsigned short*)0x06820000;
        } else {
            var1 = (unsigned short*)0x06800000;
        }
        func_ov016_0218e708(arg0, var1, 0x100, 0);
        if (data_ov016_0219d144.unknown_4_ == 0) {
            var1 = (unsigned short*)0x06600000;
        } else {
            var1 = (unsigned short*)GetSubBG2ScreenBase();
        }
        func_ov016_0218e708(arg1, var1, 0x100, 0);
        data_ov016_0219d144.unknown_c_ = 0;
    } else {
        func_ov016_0218e72c(arg0);
        func_ov016_0218e72c(arg1);
        data_ov016_0219d144.unknown_4_ ^= 1;
        data_ov016_0219d144.unknown_1c_ = 0;
    }
    data_ov016_0219d144.unknown_18_++;
    data_ov016_0219d144.unknown_1c_++;
#else
    int var2;
    while (data_ov016_0219d144.unknown_30_ == 0) {
    }
    while (data_ov016_0219d144.unknown_18_ <= (var2 = data_ov016_0219d144.unknown_1c_)) {
        SleepCurrentContext(1);
    }
    data_ov016_0219d144.unknown_0_ = 0;
    if (data_ov016_0219d144.unknown_20_ < 2 ||
        data_ov016_0219d144.unknown_18_ - var2 <= 1) {
        Struct_020e58dc_2* var3 = func_020e58dc((Struct_020e58dc*)arg2, var2);
        unsigned short* var4;
        if (data_ov016_0219d144.unknown_4_ == 0) {
            var4 = (unsigned short*)0x06820000;
        } else {
            var4 = (unsigned short*)0x06800000;
        }
        func_ov016_0218e708(arg0, var4, 0x100, 0);
        if (var3 != 0 && var3->unknown_4_ == 0) {
            func_ov016_0218e240(var4, (char*)var3->unknown_10_, 0x7fff, 0, 0xa8, 1, 1, var3->unknown_0_);
            var3->unknown_0_ += 4;
        }
        if (data_ov016_0219d144.unknown_4_ == 0) {
            var4 = (unsigned short*)0x06600000;
        } else {
            var4 = (unsigned short*)GetSubBG2ScreenBase();
        }
        func_ov016_0218e708(arg1, var4, 0x100, 0);
        if (var3 != 0 && var3->unknown_4_ == 1) {
            func_ov016_0218e240(var4, (char*)var3->unknown_10_, 0xffff, 0, 0xa8, 1, 1, var3->unknown_0_);
            var3->unknown_0_ += 4;
        }
        data_ov016_0219d144.unknown_30_ = 0;
    } else {
        func_ov016_0218e72c(arg0);
        func_ov016_0218e72c(arg1);
        data_ov016_0219d144.unknown_20_ = 0;
    }
    data_ov016_0219d144.unknown_1c_++;
    data_ov016_0219d144.unknown_20_++;
#endif
}
