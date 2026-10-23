#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
#define func_ov014_02188330 func_ov014_02189234
#endif

struct Struct_ov014_02184f78 {
    Struct_ov014_02184f78* unknown_0_;
    const char* unknown_4_;
    const char* unknown_8_;
    short unknown_c_;
    char unknown_e_[4];
    signed char unknown_12_;
    unsigned char unknown_13_0_ : 1;
    unsigned char unknown_13_1_ : 1;
    unsigned char unknown_13_2_ : 6;
    char unknown_14_[6];
    short unknown_1a_;
    char unknown_1c_[4];
};

struct Struct_ov000_0217ab8c {
    char unknown_0_[0x2c];
    void* unknown_2c_;
    char unknown_30_[6];
    short unknown_36_;
    unsigned char unknown_38_;
    char unknown_39_;
    unsigned char unknown_3a_;
    char unknown_3b_[5];
};

struct Struct_020974b0 {
    char unknown_0_[0x10];
};

struct Struct_ov014_02186bc8 {
    char unknown_0_[0xa4];
    Struct_020974b0 unknown_a4_;
    void* unknown_b4_;
    Struct_ov014_02184f78* unknown_b8_;
    Struct_ov014_02184f78* unknown_bc_;
    Struct_ov000_0217ab8c* unknown_c0_;
    void* unknown_c4_;
    void* unknown_c8_;
    void* unknown_cc_;
    short* unknown_d0_;
    void* unknown_d4_;
    void* unknown_d8_;
    void* unknown_dc_;
    char unknown_e0_[0x18];
    char unknown_f8_[0x54];
    char unknown_14c_[0xc];
    unsigned short unknown_158_;
    unsigned char unknown_15a_;
    char unknown_15b_;
    int unknown_15c_;
    int unknown_160_;
    int unknown_164_;
    int unknown_168_;
    int unknown_16c_;
    short unknown_170_;
    short unknown_172_;
    short unknown_174_;
    short unknown_176_;
    short unknown_178_;
    unsigned char unknown_17a_;
    unsigned char unknown_17b_;
    unsigned char unknown_17c_;
    signed char unknown_17d_;
    unsigned char unknown_17e_;
    bool unknown_17f_;
    short unknown_180_;
    short unknown_182_[8];
};

struct Struct_02080fa8;
struct Struct_02081164;

extern "C" void func_02080bac(void* arg0, int arg1);
extern "C" void func_0208103c(void* arg0, int arg1, int arg2);
extern "C" void func_02080fa8(Struct_02080fa8* arg0, int arg1, int arg2);
extern "C" int func_02080b2c(void* arg0, int arg1);
extern "C" void func_02081164(Struct_02081164* arg0, int arg1, int arg2);

extern "C" {
#if !defined(jpn)
void func_020806d8(Struct_ov000_0217ab8c* arg0, int, int, int, int);
#endif
void func_020813ec(Struct_ov000_0217ab8c* arg0, short arg1);
}

extern const short data_ov014_021894cc[3][11];

// USA: func_ov014_02188330
extern "C" ARM void func_ov014_02188330(Struct_ov014_02186bc8* arg0)
{
    int var0 = 0;
    if (arg0->unknown_17a_ == 4)
        var0 = 1;
    if (arg0->unknown_17a_ == 3)
        var0 = 2;
#if !defined(jpn)
    func_020806d8(arg0->unknown_c0_, 0, 2, 1, 4);
#endif
    func_02080bac(arg0->unknown_c0_, 0);
    if (arg0->unknown_17d_ >= 0)
        func_0208103c(arg0->unknown_c0_, 0x2f, (short)(arg0->unknown_17d_ + 0x1e));

    short var1 = 0;
    Struct_ov014_02184f78* var2 = arg0->unknown_b8_;
    if (var2 != NULL)
    {
        for (; var2 != NULL; var2 = var2->unknown_0_)
            var1 += var2->unknown_13_1_;
    }

    short var3 = arg0->unknown_180_;
    short var4 = 0;
    if (var3 != 0)
    {
        float var5 = (float)var1 / (float)var3;
        var5 *= 10000.0f;
        if (var5 < 100.0f)
            var5 = 100.0f;
        if (var1 == 0)
            var5 = 0.0f;
        short var6 = var5;
        var4 = var6 / 100;
    }
    func_02080fa8((Struct_02080fa8*)arg0->unknown_c0_, 4, var4);
    func_02080fa8((Struct_02080fa8*)arg0->unknown_c0_, 5, var1);
    for (unsigned char var7 = 0;; var7++)
    {
        short var8 = data_ov014_021894cc[var0][var7];
        if (var8 < 0)
            break;
        func_02080b2c(arg0->unknown_c0_, var8);
    }
    func_02081164((Struct_02081164*)arg0->unknown_c0_, 0, 1);
    func_020813ec(arg0->unknown_c0_, 0);
}
