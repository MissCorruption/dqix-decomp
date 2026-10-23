#include <globaldefs.h>

struct Struct_ov031_0220fbd4_3
{
    int unknown_0_;
    unsigned int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    char unknown_14_[0x400];
};
struct Struct_ov031_0220fbd4 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Struct_ov031_0220fbd4_2
{
    char unknown_0_[0x24];
    Struct_ov031_0220fbd4* unknown_24_;
    int unknown_28_;
    int unknown_2c_;
    int unknown_30_;
};
extern Struct_ov031_0220fbd4_2* data_ov031_0224e580;
extern "C" void func_ov031_0220fd78(int, Struct_ov031_0220fbd4_3*);
extern "C" int func_ov031_0220fe44(int);
extern "C" int func_ov031_0220ff78(int*);
extern "C" int func_ov031_0220ff18(void*);
extern "C" void func_ov031_0220fea0(void);
extern "C" void func_ov031_0220fed8(void);

// USA: func_ov031_0220fbd4
extern "C" ARM void func_ov031_0220fbd4(void)
{
    unsigned char var0[0x414];
    Struct_ov031_0220fbd4_3* var1 = (Struct_ov031_0220fbd4_3*)var0;
    func_ov031_0220fd78(data_ov031_0224e580->unknown_24_->unknown_8_, var1);
    var1->unknown_0_ = 20;
    var1->unknown_4_ = 0x44535359;
    var1->unknown_8_ = 0xda;
    var1->unknown_c_ = data_ov031_0224e580->unknown_24_->unknown_4_;
    if ((var1->unknown_10_ = data_ov031_0224e580->unknown_30_) == 0)
        return;
    if (func_ov031_0220fe44((int)func_ov031_0220ff78) != 0)
    {
        if (func_ov031_0220ff18(var1) != 0)
            func_ov031_0220fea0();
    }
    func_ov031_0220fed8();
}
