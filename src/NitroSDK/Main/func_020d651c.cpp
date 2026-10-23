#include <globaldefs.h>

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

struct Struct_02114330
{
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    void* unknown_8_;
    void* unknown_c_;
    unsigned short unknown_10_;
    unsigned short unknown_12_;
    unsigned char unknown_14_[6];
    unsigned short unknown_1a_;
    void* unknown_1c_;
    unsigned short unknown_20_;
    unsigned short unknown_22_;
    unsigned char unknown_24_[24];
    unsigned short unknown_3c_;
    unsigned short unknown_3e_;
    unsigned short unknown_40_;
    unsigned short unknown_42_;
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

extern "C" void func_020ca3b8(const void* src, void* dst, unsigned long size);
extern "C" unsigned short func_020d46cc();

// USA: func_020d651c
extern "C" ARM void func_020d651c(void* arg0)
{
    Struct_02114330* const var0 = (Struct_02114330*)arg0;
    Struct_020d5d34* const var1 = (Struct_020d5d34*)var0->unknown_1c_;
    if (var1 == NULL)
        return;
    if (var0->unknown_2_ == 0)
    {
        switch (var0->unknown_4_)
        {
        case 21:
        {
            unsigned short var2;
            unsigned short var3;
            unsigned short var4;
            Struct_020d5d34_2* var5;
            var5 = (Struct_020d5d34_2*)var0->unknown_c_;
            var2 = var0->unknown_10_;
            var3 = var5->unknown_0_;
            var4 = func_020d46cc();
            if (var2 != var1->unknown_814_)
            {
                if (var2 > sizeof(Struct_020d5d34_2))
                    var2 = sizeof(Struct_020d5d34_2);
            }
            if (var2 < 4)
                return;
            if (!(var3 & (1 << var4)))
                return;
            func_020ca3b8(var5, &var1->unknown_0_[var1->unknown_808_], var2);
            var1->unknown_800_[var1->unknown_808_] = var0->unknown_1a_ >> 1;
            var1->unknown_808_ = (var1->unknown_808_ + 1) & 3;
            break;
        }
        case 7:
        case 9:
        case 25:
        case 26:
            break;
        }
    }
    else
    {
        var1->unknown_81c_ = 5;
    }
}
