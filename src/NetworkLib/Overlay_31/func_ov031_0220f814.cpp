#include <globaldefs.h>

struct Struct_ov031_0220f814_3 {
    char unknown_0_[4];
    int unknown_4_;
    char unknown_8_[8];
    int unknown_10_;
    int unknown_14_;
};
struct Struct_ov031_0220f814 {
    char unknown_0_[0x24];
    Struct_ov031_0220f814_3* unknown_24_;
};
struct Struct_ov031_0220f814_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;

};
extern Struct_ov031_0220f814* data_ov031_0224e580;
extern "C" int func_ov031_0220fe44(int (*)(int*));
extern "C" int func_ov031_0220f770(int*);
extern "C" int func_ov031_0220ff18(void*);
extern "C" void func_ov031_0220fea0();
extern "C" void func_ov031_0220fed8();

// USA: func_ov031_0220f814
extern "C" ARM void func_ov031_0220f814() {
    char var0[0x414];
    Struct_ov031_0220f814_2* var1 = (Struct_ov031_0220f814_2*)var0;
    var1->unknown_0_ = 0x18;
    var1->unknown_4_ = 0x44535359;
    Struct_ov031_0220f814* var2 = data_ov031_0224e580;
    var1->unknown_8_ = 0xdb;
    var1->unknown_c_ = var2->unknown_24_->unknown_4_;
    var1->unknown_10_ = var2->unknown_24_->unknown_10_;
    var1->unknown_14_ = var2->unknown_24_->unknown_14_;
    if (func_ov031_0220fe44(func_ov031_0220f770)) {
        if (func_ov031_0220ff18(var0)) {
            func_ov031_0220fea0();
        }
    }
    func_ov031_0220fed8();
}
