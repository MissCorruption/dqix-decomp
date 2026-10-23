#include <globaldefs.h>

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

struct Struct_ov016_0218f340_2 {
    unsigned char* unknown_0_;
    void* unknown_4_;
    unsigned char unknown_8_[0x14f0];
};
struct Struct_ov016_0218f340 {
    unsigned char unknown_0_[0x1c];
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    unsigned char unknown_20_[0x14];
    unsigned char** unknown_34_;
    unsigned char unknown_38_[0x20];
    Struct_ov016_0218f340_2* unknown_58_;
    unsigned char unknown_5c_[0x48];
#if !defined(jpn)
    int unknown_a4_;
#endif
    unsigned char unknown_a8_[0x20];
    int unknown_c8_;
    int unknown_cc_;
    int unknown_d0_;
};
extern "C" int func_ov016_0219000c(Struct_ov016_0218f340_2*);
extern "C" void func_ov016_021909cc_unk(Struct_ov016_0218f340_2*);
extern "C" void func_ov016_0218fea0(Struct_ov016_0218f340_2*, unsigned char*);
extern "C" void func_ov016_0218feb4(Struct_ov016_0218f340_2*, unsigned char*, int, void*);
extern "C" void func_020ca3b8(void*, void*, int);

// USA: func_ov016_0218f340
extern "C" ARM int func_ov016_0218f340(Struct_ov016_0218f340* arg0, void* arg1) {
    if (arg0->unknown_cc_ == arg0->unknown_c8_) return 0;
    if (arg0->unknown_1c_ == 0) return 0;
    if (arg0->unknown_1c_ == 1) {
        arg0->unknown_58_[arg0->unknown_d0_].unknown_0_ = *arg0->unknown_34_;
        arg0->unknown_58_[arg0->unknown_d0_].unknown_4_ = arg1;
        *arg0->unknown_34_ += func_ov016_0219000c(&arg0->unknown_58_[arg0->unknown_d0_]);
    } else
#if !defined(jpn)
    if (arg0->unknown_1c_ == 2)
#endif
    {
        arg0->unknown_58_[arg0->unknown_d0_].unknown_0_ = *arg0->unknown_34_;
        arg0->unknown_58_[arg0->unknown_d0_].unknown_4_ = arg1;
        func_ov016_021909cc_unk(&arg0->unknown_58_[arg0->unknown_d0_]);
        *arg0->unknown_34_ += 0x28;
    }
#if !defined(jpn)
    else if (arg0->unknown_1c_ == 3) {
        if (arg0->unknown_a4_ == 1) {
            func_ov016_0218fea0(&arg0->unknown_58_[arg0->unknown_d0_], *arg0->unknown_34_);
            *arg0->unknown_34_ += 4;
        }
        func_ov016_0218feb4(&arg0->unknown_58_[arg0->unknown_d0_], *arg0->unknown_34_, 0x80, arg1);
        *arg0->unknown_34_ += 0x80;
    } else {
        func_020ca3b8(*arg0->unknown_34_, arg1, 0x200);
        *arg0->unknown_34_ += 0x200;
    }
#endif
    if (++arg0->unknown_d0_ == arg0->unknown_1e_) {
        arg0->unknown_d0_ = 0;
#if !defined(jpn)
        arg0->unknown_a4_ = 0;
#endif
    }
    ++arg0->unknown_cc_;
    return 1;
}
