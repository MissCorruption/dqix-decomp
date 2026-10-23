#include <globaldefs.h>

struct Struct_ov016_0218f16c_2 {
    const unsigned char* unknown_0_;
    const unsigned char* unknown_4_;
    unsigned short* unknown_8_;
    unsigned int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    const unsigned char* unknown_18_;
};
struct Struct_ov016_0218f16c {
    char unknown_0_[0x10];
    unsigned int unknown_10_;
    unsigned int unknown_14_;
    char unknown_18_[0x24];
    Struct_ov016_0218f16c_2 unknown_3c_;
    char unknown_58_[4];
    const unsigned char** unknown_5c_;
    const unsigned char** unknown_60_;
    unsigned int* unknown_64_;
    unsigned char* unknown_68_;
    unsigned char* unknown_6c_;
    char unknown_70_[0x2c];
    unsigned int unknown_9c_;
    unsigned int unknown_a0_;
#if !defined(jpn)
    int unknown_a4_;
#endif
    unsigned int unknown_a8_;
    unsigned int unknown_ac_[6];
    unsigned int unknown_c4_;
};
struct Struct_ov016_0218f16c_3 {
    const unsigned char* unknown_0_;
    const unsigned char* unknown_4_;
    unsigned char* unknown_8_;
    unsigned char* unknown_c_;
    int unknown_10_;
    int unknown_14_;
    unsigned int unknown_18_;
    void* unknown_1c_;
    int unknown_20_;
};
extern "C" void* func_ov016_0218bc8c(unsigned int);
extern "C" void* func_ov016_0218fe30();
extern "C" void func_ov016_0219c514_unk(Struct_ov016_0218f16c_3*);
extern "C" void func_ov016_0218f6b8(Struct_ov016_0218f16c_2*);

// USA: func_ov016_0218f16c
extern "C" ARM int func_ov016_0218f16c(Struct_ov016_0218f16c* arg0, unsigned short* arg1, int arg2, int arg3) {
    if (arg0->unknown_9c_ >= arg0->unknown_a0_) return 0;
    if (arg3) {
        if (!arg0->unknown_68_) {
            arg0->unknown_68_ = (unsigned char*)func_ov016_0218bc8c(arg0->unknown_14_ << 8);
            if (!arg0->unknown_68_) return 0;
        }
        if (!arg0->unknown_6c_) {
            arg0->unknown_6c_ = (unsigned char*)func_ov016_0218bc8c((arg0->unknown_14_ >> 1) << 8);
            if (!arg0->unknown_6c_) return 0;
        }
        Struct_ov016_0218f16c_3 var0;
        var0.unknown_0_ = arg0->unknown_5c_[arg0->unknown_c4_];
        var0.unknown_4_ = arg0->unknown_60_[arg0->unknown_c4_];
        var0.unknown_8_ = arg0->unknown_68_;
        var0.unknown_c_ = arg0->unknown_6c_;
        var0.unknown_10_ = arg0->unknown_10_;
        var0.unknown_14_ = arg0->unknown_14_;
        var0.unknown_18_ = arg0->unknown_64_[arg0->unknown_c4_];
        var0.unknown_1c_ = func_ov016_0218fe30();
        if (arg3 == 2) var0.unknown_20_ = 0;
        else var0.unknown_20_ = 1;
        func_ov016_0219c514_unk(&var0);
        arg0->unknown_3c_.unknown_0_ = arg0->unknown_68_;
        arg0->unknown_3c_.unknown_4_ = arg0->unknown_6c_;
    } else {
        arg0->unknown_3c_.unknown_0_ = arg0->unknown_5c_[arg0->unknown_c4_];
        arg0->unknown_3c_.unknown_4_ = arg0->unknown_60_[arg0->unknown_c4_];
    }
    arg0->unknown_3c_.unknown_8_ = arg1;
    arg0->unknown_3c_.unknown_c_ = arg2 << 1;
    func_ov016_0218f6b8(&arg0->unknown_3c_);
    arg0->unknown_9c_++;
    arg0->unknown_c4_++;
    if (arg0->unknown_c4_ == arg0->unknown_a8_) arg0->unknown_c4_ = 0;
    return 1;
}
