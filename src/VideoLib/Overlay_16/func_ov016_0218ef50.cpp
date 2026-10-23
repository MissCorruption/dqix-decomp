#include <globaldefs.h>

struct Struct_ov016_0218ef50 {
    int unknown_0_;
    char unknown_4_[8];
    int unknown_c_[6];
    int unknown_24_[6];
};

struct Struct_ov016_0218e6c0 {
    virtual void inline_ov016_0218e6c0();
    virtual void inline_ov016_0218e6c0_2();
    virtual void inline_ov016_0218e6c0_3();
    virtual void inline_ov016_0218e6c0_4();
    virtual int inline_ov016_0218ef50(unsigned int arg0, unsigned int arg1);
    virtual void inline_ov016_0218ef50_2();
};

struct Struct_ov016_0218ef50_2 {
    Struct_ov016_0218e6c0* unknown_0_;
    char unknown_4_[8];
    unsigned int unknown_c_;
    char unknown_10_[0xe];
    unsigned short unknown_1e_;
    char unknown_20_[0x14];
    Struct_ov016_0218ef50* unknown_34_;
    char unknown_38_[0x24];
    int* unknown_5c_;
    int* unknown_60_;
    char unknown_64_[0xc];
    unsigned int unknown_70_[2];
    unsigned int unknown_78_[2];
    unsigned int unknown_80_[2];
    unsigned int unknown_88_[2];
    int unknown_90_;
    char unknown_94_[4];
    unsigned int unknown_98_;
    #if defined(jpn)
    char unknown_9c_[0xc];
#else
    char unknown1_9c_[0x10];
#endif
    int unknown_ac_[6];
    char unknown_c4_[4];
    int unknown_c8_;
};

// USA: func_ov016_0218ef50
extern "C" ARM int func_ov016_0218ef50(Struct_ov016_0218ef50_2* arg0) {
    if (arg0->unknown_98_ == arg0->unknown_c_) {
        return 0;
    }
    arg0->unknown_98_ = arg0->unknown_98_ + 1;

    int var0 = arg0->unknown_90_;
    arg0->unknown_90_ = (var0 + 1) % 2;

    arg0->unknown_0_->inline_ov016_0218ef50_2();

    unsigned int var1 = *(unsigned int*)(arg0->unknown_80_[arg0->unknown_90_] + arg0->unknown_78_[arg0->unknown_90_] + arg0->unknown_70_[arg0->unknown_90_]);
    arg0->unknown_78_[var0] = var1 >> 14;
    arg0->unknown_88_[var0] = var1 & 0x3fff;

    arg0->unknown_34_->unknown_0_ = arg0->unknown_70_[arg0->unknown_90_] + arg0->unknown_80_[arg0->unknown_90_];

    if (arg0->unknown_98_ < arg0->unknown_c_) {
        arg0->unknown_80_[var0] = arg0->unknown_0_->inline_ov016_0218ef50(arg0->unknown_70_[var0], arg0->unknown_78_[var0] + 4);
    }

    int var2 = 0;
    do {
        arg0->unknown_34_->unknown_c_[var2] = arg0->unknown_5c_[arg0->unknown_ac_[var2]];
        arg0->unknown_34_->unknown_24_[var2] = arg0->unknown_60_[arg0->unknown_ac_[var2]];
        var2++;
    } while (var2 < 6);

    arg0->unknown_c8_ = arg0->unknown_1e_ * arg0->unknown_88_[arg0->unknown_90_];
    return 1;
}
