#include <globaldefs.h>

struct Struct_ov031_0220fb28_3 {
    int unknown_0_;
    unsigned int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

struct Struct_ov031_0220fb28 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_ov031_0220fb28_2 {
    unsigned char unknown_0_[0x24];
    Struct_ov031_0220fb28* unknown_24_;
    unsigned char unknown_28_[8];
    int unknown_30_;
};

extern Struct_ov031_0220fb28_2* data_ov031_0224e580;
extern "C" void func_ov031_0220fd78(int, Struct_ov031_0220fb28_3*);
extern "C" int func_ov031_0220ff34(int*);
extern "C" int func_ov031_0220fe44(int);
extern "C" int func_ov031_0220ff18(void*);
extern "C" void func_ov031_0220fea0();
extern "C" void func_ov031_0220fed8();

// USA: func_ov031_0220fb28
extern "C" ARM void func_ov031_0220fb28() {
    unsigned char var0[0x414];
    Struct_ov031_0220fb28_3* var1 = (Struct_ov031_0220fb28_3*)var0;
    func_ov031_0220fd78(data_ov031_0224e580->unknown_24_->unknown_8_, var1);
    var1->unknown_0_ = 0x14;
    var1->unknown_4_ = 0x44535359;
    var1->unknown_8_ = 0xd0;
    var1->unknown_c_ = data_ov031_0224e580->unknown_24_->unknown_4_;
    if ((var1->unknown_10_ = data_ov031_0224e580->unknown_30_) == 0) return;
    if (func_ov031_0220fe44((int)func_ov031_0220ff34)) {
        if (func_ov031_0220ff18(var1)) func_ov031_0220fea0();
    }
    func_ov031_0220fed8();
}
