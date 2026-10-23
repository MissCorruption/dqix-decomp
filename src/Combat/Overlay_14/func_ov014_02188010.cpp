#if defined(jpn)
#define R(j,u) (j)
#define data_ov001_02164ca4 data_ov001_02166270
#define data_ov028_021d9aa0 data_ov028_021da400
#define func_ov014_02188330 func_ov014_02189234
#define func_ov014_0218854c func_ov014_0218942c
#define func_ov014_021885bc func_ov014_0218948c
#define func_ov015_02191f04 func_ov015_02192a48
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Input/Input.h"

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

struct Struct_020a95a4_5;

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
    char unknown_0_[0x48];
    Struct_ov014_02184f78* unknown_48_;
    Struct_ov014_02184f78* unknown_4c_;
    char unknown_50_[0x31];
    unsigned char unknown_81_;
    unsigned char unknown_82_0_ : 1;
    unsigned char unknown_82_1_ : 1;
    unsigned char unknown_82_2_ : 1;
    unsigned char unknown_82_3_ : 1;
    unsigned char unknown_82_4_ : 4;
    char unknown_83_[0x21];
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

struct Struct_0207fdcc_2;
struct Struct_02081f20_2;
struct Struct_ov014_02187450;
struct Struct_ov014_02187450_2;
struct Struct_ov014_02184f10;

extern "C" short func_02080468(void* arg0, int arg1);
extern "C" void func_0208203c(Struct_02081f20_2*);
extern "C" void func_0207fdcc(Struct_0207fdcc_2*, int);
extern "C" int func_ov014_02186ff0(char*);
extern "C" Struct_020a95a4_5* func_ov014_02187450(Struct_ov014_02187450*, Struct_ov014_02187450_2*);
extern "C" void func_ov014_02184f10(Struct_ov014_02184f10*, int, int);
extern "C" void func_ov014_02184e3c(unsigned char*);

extern "C" {
void func_ov014_02188330(Struct_ov014_02186bc8* arg0);
void func_ov014_021884cc(Struct_ov014_02186bc8* arg0);
void func_ov014_0218854c(Struct_ov014_02186bc8* arg0);
void func_ov014_021885bc(Struct_ov014_02186bc8* arg0);
Struct_ov014_02184f78* func_ov014_021873a0(Struct_ov014_02186bc8* arg0);
void func_ov014_02184f78(Struct_ov014_02186bc8* arg0, Struct_ov014_02184f78* arg1, Struct_020a95a4_5* arg2, bool arg3);
bool func_ov014_02187074(Struct_ov014_02186bc8* arg0);
void func_ov014_021872dc(Struct_ov014_02186bc8* arg0, int arg1);
bool func_ov014_02186f10(Struct_ov014_02186bc8* arg0);
void func_ov014_02184dcc(Struct_ov014_02186bc8* arg0);
void func_ov014_02184d08(Struct_ov014_02186bc8* arg0);
}

static inline Struct_020a95a4_5* inline_ov014_02188010(Struct_ov014_02186bc8* arg0, Struct_ov014_02184f78* arg1)
{
    return func_ov014_02187450((Struct_ov014_02187450*)arg0, (Struct_ov014_02187450_2*)arg1);
}

static inline void inline_ov014_02188010_2(Struct_ov014_02186bc8* arg0, Struct_ov014_02184f78* arg1, Struct_020a95a4_5* arg2)
{
    func_ov014_02184f10((Struct_ov014_02184f10*)arg0, (int)arg1, (int)arg2);
}

// USA: func_ov014_02188010
extern "C" ARM void func_ov014_02188010(Struct_ov014_02186bc8* arg0)
{
    if (arg0->unknown_17b_ == 0)
    {
        if (arg0->unknown_17e_ & 0x10)
            return;
        arg0->unknown_bc_ = arg0->unknown_b8_;
        func_ov014_02188330(arg0);
        func_ov014_021884cc(arg0);
        func_ov014_0218854c(arg0);
        arg0->unknown_170_ = 5;
        arg0->unknown_176_ = func_02080468(arg0->unknown_c0_, arg0->unknown_170_);
        func_ov014_021885bc(arg0);
        func_0208203c((Struct_02081f20_2*)arg0->unknown_14c_);
        arg0->unknown_d0_ = NULL;
        arg0->unknown_17b_++;
        arg0->unknown_48_ = NULL;
        arg0->unknown_4c_ = NULL;
        Struct_ov014_02184f78* var0 = func_ov014_021873a0(arg0);
        func_ov014_02184f78(arg0, var0, inline_ov014_02188010(arg0, var0), true);
        arg0->unknown_82_3_ = true;
    }
    else if (arg0->unknown_17b_ == 1)
    {
        arg0->unknown_d0_ = &arg0->unknown_176_;
        if (func_ov014_02187074(arg0))
        {
            if (arg0->unknown_178_ < 0)
            {
                Struct_ov014_02184f78* var1 = func_ov014_021873a0(arg0);
                if (var1->unknown_13_1_)
                    inline_ov014_02188010_2(arg0, var1, inline_ov014_02188010(arg0, var1));
                arg0->unknown_178_ = *arg0->unknown_d0_;
            }
            return;
        }
        if (arg0->unknown_160_ != 0 || arg0->unknown_178_ != *arg0->unknown_d0_)
        {
            if (arg0->unknown_160_ & 0x10)
                func_ov014_021872dc(arg0, 1);
            else if (arg0->unknown_160_ & 0x20)
                func_ov014_021872dc(arg0, -1);
            func_ov014_021885bc(arg0);
            Struct_ov014_02184f78* var2 = func_ov014_021873a0(arg0);
            inline_ov014_02188010_2(arg0, var2, inline_ov014_02188010(arg0, var2));
        }
        if (func_ov014_02186f10(arg0))
        {
            if (arg0->unknown_17e_ & 0x40)
            {
                Struct_ov014_02184f78* var3 = func_ov014_021873a0(arg0);
                inline_ov014_02188010_2(arg0, var3, inline_ov014_02188010(arg0, var3));
            }
            else
                func_ov014_02184e3c((unsigned char*)arg0);
        }
        else if (g_keyManager.TestKeysPressed(0x800))
            func_ov014_02184dcc(arg0);
        else if (func_ov014_02186ff0((char*)arg0))
        {
            arg0->unknown_81_ &= ~4;
            if (arg0->unknown_17d_ >= 0)
                arg0->unknown_17a_ = 3;
            if (arg0->unknown_17d_ < 0)
                arg0->unknown_17a_ = 2;
            arg0->unknown_48_ = NULL;
            arg0->unknown_4c_ = NULL;
            arg0->unknown_17e_ |= 0x10;
            func_0207fdcc((Struct_0207fdcc_2*)arg0->unknown_c0_, arg0->unknown_170_);
            arg0->unknown_17b_ = 0;
            arg0->unknown_d0_ = NULL;
            func_0207fdcc((Struct_0207fdcc_2*)arg0->unknown_c0_, 4);
            func_0207fdcc((Struct_0207fdcc_2*)arg0->unknown_c0_, 3);
            func_ov014_02184d08(arg0);
        }
    }
}
