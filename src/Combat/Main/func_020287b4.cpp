#include <globaldefs.h>

struct Struct_0201a300_5;
struct Struct_020287b4_2;
struct Struct_020287b4_4;

extern "C" ARM void func_020280b0(struct Struct_0201a300_5* arg0);
extern "C" ARM void func_0209bffc(void* arg0);
extern "C" ARM void func_0209bc84(void* arg0);
extern "C" ARM void func_0209af34(struct Struct_020287b4_2* arg0);
extern "C" void* func_0206efc4(void* arg0);
extern "C" ARM void func_0206ee60(struct Struct_020287b4_4* arg0);
extern "C" ARM void func_020a8e88(void* arg0);

struct Struct_020287b4 {
    unsigned short unknown_0_0_ : 2;
    unsigned short unknown_0_2_ : 1;
    unsigned short unknown_0_3_ : 1;
    unsigned short unknown_0_4_ : 12;
};

struct Struct_020287b4_3 {
    unsigned short unknown_0_;
    struct Struct_020287b4 unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    int unknown_8_;
    unsigned char unknown_c_;
    signed char unknown_d_;
    unsigned short unknown_e_;
    int unknown_10_;
#if !defined(jpn)
    int unknown_14_;
#endif
    unsigned char unknown_18_[0x2c];
    unsigned short unknown_44_;
    unsigned char unknown_46_[0x1a];
    unsigned char unknown_60_[0xc0];
    unsigned char unknown_120_[4];
    unsigned char unknown_124_[0x1d4];
    unsigned char unknown_2f8_[0xc];
    unsigned char unknown_304_[5];
    unsigned char unknown_309_[3];
    unsigned char unknown_30c_[0xc];
};

// USA: func_020287b4
extern "C" ARM void func_020287b4(struct Struct_020287b4_3* arg0) {
    int var0;
    struct Struct_020287b4_3* var1;

    for (var0 = 0; var0 < 4; var0++) {
        var1 = &arg0[var0];
        var1->unknown_2_.unknown_0_2_ = 0;
        var1->unknown_2_.unknown_0_3_ = 0;
        var1->unknown_2_.unknown_0_0_ = 0;
        arg0[var0].unknown_0_ = 0;
        var1->unknown_10_ = 0;
#if !defined(jpn)
        var1->unknown_14_ = 0;
#endif
        var1->unknown_8_ = 0;
        var1->unknown_6_ = 0;
        var1->unknown_c_ = 0;
        var1->unknown_2_.unknown_0_4_ = 0;
        var1->unknown_4_ = 0;
        var1->unknown_d_ = -1;
        func_020280b0((struct Struct_0201a300_5*)var1->unknown_18_);
        func_0209bffc((void*)&var1->unknown_44_);
        func_0209bc84(var1->unknown_60_);
        func_0209af34((struct Struct_020287b4_2*)var1->unknown_124_);
        func_0206efc4(var1->unknown_2f8_);
        func_0206ee60((struct Struct_020287b4_4*)var1->unknown_304_);
        func_020a8e88(var1->unknown_30c_);
        var1->unknown_2_.unknown_0_0_ = var0;
    }
}
