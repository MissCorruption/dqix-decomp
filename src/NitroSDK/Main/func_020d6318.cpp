#include <globaldefs.h>

typedef void (*Type_020d42e0)(void* arg);

struct Struct_020d424c_2
{
    void* unknown_0_;
    void* unknown_4_;
    unsigned long* unknown_8_;
    unsigned long* unknown_c_;
    unsigned long* unknown_10_;
    unsigned short unknown_14_;
    unsigned short unknown_16_;
    Type_020d42e0 unknown_18_[0x2c];
    Type_020d42e0 unknown_c8_;
    Type_020d42e0 unknown_cc_[16];
    void* unknown_10c_[16];
    unsigned long unknown_14c_;
    unsigned short unknown_150_;
};

struct Struct_020d42e0_2
{
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned short unknown_e_;
    unsigned short unknown_10_;
    unsigned short unknown_12_;
    const unsigned short* unknown_14_;
    unsigned short unknown_18_;
    unsigned short unknown_1a_;
    Type_020d42e0 unknown_1c_;
    void* unknown_20_;
    unsigned short unknown_24_;
    unsigned short unknown_26_;
};

struct Struct_020d5d34_2
{
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_[254];
};

struct Struct_020d5d34
{
    Struct_020d5d34_2 unknown_0_[4];
    unsigned short unknown_800_[4];
    unsigned short unknown_808_;
    unsigned short unknown_80a_;
    unsigned short unknown_80c_;
    unsigned short unknown_80e_;
    unsigned short unknown_810_;
    unsigned short unknown_812_;
    unsigned short unknown_814_;
    unsigned short unknown_816_;
    unsigned short unknown_818_;
    unsigned short unknown_81a_;
    unsigned short unknown_81c_;
    unsigned short unknown_81e_[1];
};

extern "C" void func_020d63f0(void* arg0);
extern "C" void func_020d651c(void* arg0);
extern "C" Struct_020d424c_2* func_020d41d8();
extern "C" unsigned short func_020d46cc();

// USA: func_020d6318
extern "C" ARM void func_020d6318(void* arg0)
{
    Struct_020d424c_2* const var0 = func_020d41d8();
    Struct_020d42e0_2* const var1 = (Struct_020d42e0_2*)arg0;
    const Type_020d42e0 var2 = var0->unknown_cc_[var1->unknown_a_];
    Struct_020d5d34* const var3 = (Struct_020d5d34*)var0->unknown_10c_[var1->unknown_a_];
    unsigned short var4;
    if (var2 != func_020d63f0 && var2 != func_020d651c)
        return;
    if (var3 == NULL)
        return;
    if (var3 != var1->unknown_20_)
        return;
    var4 = func_020d46cc();
    if (var1->unknown_2_ == 0)
    {
        if (var4 == 0)
        {
            var3->unknown_800_[var3->unknown_80a_] = var1->unknown_1a_ >> 1;
            var3->unknown_80a_ = (var3->unknown_80a_ + 1) & 3;
        }
    }
    else if (var1->unknown_2_ == 10)
    {
        if (var4 != 0)
            var3->unknown_80a_ = (var3->unknown_80a_ + 4 - 1) & 3;
        var3->unknown_81c_ = 4;
    }
    else
    {
        var3->unknown_81c_ = 5;
    }
}
