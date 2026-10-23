#include <globaldefs.h>
#include <NitroSDK/Mutex.h>

struct Struct_ov031_022054fc {
    unsigned short unknown_0_;
    unsigned char unknown_2_, unknown_3_;
};
struct Struct_ov031_02205620 { int unknown_0_, unknown_4_; };
struct Struct_ov031_02205524_2 {
    char unknown_0_[0xe0];
    Mutex unknown_e0_;
    int unknown_f8_;
    unsigned short unknown_fc_;
    signed char unknown_fe_;
    unsigned char unknown_ff_;
    char unknown_100_[0xa];
    unsigned short unknown_10a_;
    int unknown_10c_, unknown_110_;
    char unknown_114_[1];
};
struct Struct_ov031_02205524_3;
struct Struct_ov031_02205524_4 {
    char unknown_0_[0xe0];
    Mutex unknown_e0_;
    Struct_ov031_02205620 unknown_f8_;
    int unknown_100_;
    int unknown_104_, unknown_108_;
    Struct_ov031_02205524_3* unknown_10c_;
    char unknown_110_[1];
};
struct Struct_ov031_02205524_3 {
    char unknown_0_[0x3c];
    Struct_ov031_02205620 unknown_3c_;
    int unknown_44_;
    Struct_ov031_02205620 unknown_48_, unknown_50_, unknown_58_;
    int unknown_60_;
    Struct_ov031_02205524_2* unknown_64_;
    Struct_ov031_02205524_4* unknown_68_;
    char unknown_6c_[6];
    signed char unknown_72_, unknown_73_;
    char unknown_74_[12];
    char unknown_80_[1];
};
struct Struct_ov031_02205524 {
    signed char unknown_0_, unknown_1_;
    unsigned short unknown_2_, unknown_4_, unknown_6_;
    unsigned short unknown_8_, unknown_a_, unknown_c_, unknown_e_;
    Struct_ov031_022054fc unknown_10_, unknown_14_;
};
extern Struct_ov031_02205524_3* data_ov031_0224e1cc;
extern "C" int func_ov031_02205648(int, void*, Struct_ov031_022054fc*);
extern "C" int func_ov031_02205620(int, Struct_ov031_02205620*, int);

// USA: func_ov031_02205524
extern "C" ARM int func_ov031_02205524(Struct_ov031_02205524_3* arg0, Struct_ov031_02205524* arg1) {
    arg0->unknown_73_ = arg1->unknown_0_;
    arg0->unknown_72_ = arg1->unknown_1_;
    int var0 = (int)arg0->unknown_80_;
    if (arg1->unknown_2_) {
        Struct_ov031_02205524_2* var1 = (Struct_ov031_02205524_2*)var0;
        arg0->unknown_64_ = var1;
        var1->unknown_fc_ = arg1->unknown_4_;
        var0 = func_ov031_02205648((int)var1->unknown_114_, var1, &arg1->unknown_10_);
        var0 = func_ov031_02205620(var0, &arg0->unknown_3c_, arg1->unknown_2_);
        var0 = func_ov031_02205620(var0, &arg0->unknown_50_, arg1->unknown_8_);
        var1->unknown_10a_ = arg1->unknown_e_;
        var1->unknown_110_ = 0;
        var1->unknown_10c_ = 0;
    }
    if (arg1->unknown_6_) {
        Struct_ov031_02205524_4* var2 = (Struct_ov031_02205524_4*)var0;
        arg0->unknown_68_ = var2;
        var2->unknown_10c_ = arg0;
        var0 = func_ov031_02205648((int)var2->unknown_110_, var2, &arg1->unknown_14_);
        var0 = func_ov031_02205620(var0, &arg0->unknown_48_, arg1->unknown_6_);
        var0 = func_ov031_02205620(var0, &arg0->unknown_58_, arg1->unknown_a_);
        var0 = func_ov031_02205620(var0, &var2->unknown_f8_, arg1->unknown_c_);
        var2->unknown_108_ = 0;
        var2->unknown_104_ = 0;
    } else arg0->unknown_68_ = data_ov031_0224e1cc->unknown_68_;
    return var0;
}
