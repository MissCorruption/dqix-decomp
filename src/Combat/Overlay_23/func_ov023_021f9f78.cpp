#include <globaldefs.h>

struct Struct_ov023_021f9f78_2
{
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_[3];
    int unknown_1c_[3];
};

class Struct_ov023_021f9f78
{
public:
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned char unknown_c_;
    char unknown_d_[3];
    const char* unknown_10_;
    void* unknown_14_;
    void* unknown_18_;
    int unknown_1c_;
    unsigned short unknown_20_;
    Struct_ov023_021f9f78_2* unknown_24_;

    virtual void inline_ov023_021f9f78(void* arg0);
};

typedef void (Struct_ov023_021f9f78::*Type_ov023_021f9f78)(void* script, Struct_ov023_021f9f78_2* move);

struct Struct_ov023_021fd92c
{
    Type_ov023_021f9f78 unknown_0_[3];
};

extern Struct_ov023_021fd92c data_ov023_021fd92c;
extern Type_ov023_021f9f78 data_020e6d5c;

// USA: func_ov023_021f9f78
extern "C" ARM void func_ov023_021f9f78(Struct_ov023_021f9f78* arg0, void* arg1)
{
    Struct_ov023_021fd92c var0 = data_ov023_021fd92c;
    Type_ov023_021f9f78 var1 = data_020e6d5c;
    var0.unknown_0_[0] = var1;
    var0.unknown_0_[2] = var1;
    for (int var2 = 0; var2 < arg0->unknown_20_; var2++)
    {
        if (arg0->unknown_24_[var2].unknown_2_ != 0)
            (arg0->*var0.unknown_0_[arg0->unknown_24_[var2].unknown_2_])(arg1, &arg0->unknown_24_[var2]);
    }
}
