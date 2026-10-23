#include <globaldefs.h>

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

struct Struct_ov031_0221e6e8_2 {
    unsigned int unknown_0_;
    unsigned char unknown_4_[6];
    unsigned short unknown_a_;
    char unknown_c_[32];
    unsigned short unknown_2c_;
    unsigned short unknown_2e_;
    unsigned short unknown_30_;
    unsigned short unknown_32_;
    unsigned short unknown_34_;
    unsigned short unknown_36_;
};
struct Struct_ov031_0221e6e8 {
    unsigned int unknown_0_;
    char unknown_4_[32];
    unsigned int unknown_24_;
    char unknown_28_[8];
    unsigned char unknown_30_[6];
    char unknown_36_[2];
    int unknown_38_;
    unsigned char unknown_3c_[16];
    unsigned int unknown_4c_;
    int unknown_50_;
};
struct Struct_ov031_0224b0e4 { unsigned short unknown_0_; unsigned char unknown_2_; unsigned char unknown_3_; };
extern Struct_ov031_0224b0e4 data_ov031_0224b0e4[12] __attribute__((aligned(4)));
extern "C" void func_020ca3b8(const void*, void*, unsigned int);

// USA: func_ov031_0221e6e8
extern "C" THUMB void func_ov031_0221e6e8(Struct_ov031_0221e6e8_2* arg0, Struct_ov031_0221e6e8* arg1) {
    arg1->unknown_0_ = arg0->unknown_a_;
    func_020ca3b8(arg0->unknown_c_, arg1->unknown_4_, 32);
    arg1->unknown_24_ = arg0->unknown_36_;
    func_020ca3b8(arg0->unknown_4_, arg1->unknown_30_, 6);
    int var0;
    int var1 = 0;
    Struct_ov031_0224b0e4* var2 = data_ov031_0224b0e4;
    var0 = 0;
    do {
        if (arg0->unknown_30_ & var2->unknown_0_) {
            arg1->unknown_3c_[var1] = var2->unknown_2_;
            if (arg0->unknown_2e_ & var2->unknown_0_)
                arg1->unknown_3c_[var1] = arg1->unknown_3c_[var1] | 0x80;
            var1++;
        }
        var0++;
        var2++;
    } while (var0 < 12);
    arg1->unknown_38_ = var1;
    arg1->unknown_4c_ = arg0->unknown_32_;
    int var3 = arg0->unknown_2c_ & 3;
    if (var3 == 1) arg1->unknown_50_ = 1;
    else if (var3 == 2) arg1->unknown_50_ = 2;
    else arg1->unknown_50_ = 0;
}
