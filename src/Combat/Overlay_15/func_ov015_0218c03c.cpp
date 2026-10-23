#include <globaldefs.h>
#include <std_library_functions.h>

struct Struct_0201099c_10;
struct Struct_02015ef4_4;

struct Struct_ov005_021556e4
{
    void* unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
    unsigned int unknown_10_0_ : 20;
    unsigned int unknown_12_4_ : 8;
    unsigned int unknown_13_4_ : 4;
    int unknown_14_;
    short unknown_18_;
    unsigned short unknown_1a_;
};

struct Struct_ov015_0218c03c
{
    char unknown_0_[0x4c];
    char unknown_4c_[0x18];
};

struct Struct_ov015_0218c03c_2
{
    Struct_ov015_0218c03c* unknown_0_;
    char unknown_4_[0x1c];
    int* unknown_20_;
    char unknown_24_[0x3b - 0x24];
    unsigned char unknown_3b_;
    unsigned char unknown_3c_;
};

struct Struct_ov015_02193cd4
{
    char unknown_0_[8];
};

struct Struct_ov015_02193ce5
{
    char unknown_0_[10];
};

extern "C" Struct_ov005_021556e4* func_020dedd0(Struct_0201099c_10* arg0, int arg1);
extern "C" unsigned short func_020de234(Struct_02015ef4_4* arg0, int arg1);

extern const Struct_ov015_02193cd4 data_ov015_02193cd4;
extern const Struct_ov015_02193ce5 data_ov015_02193ce5;
extern const char data_ov015_02193fe4[];
extern const char data_ov015_02193fea[];
extern const char data_ov015_02193ffa[];

// USA: func_ov015_0218c03c
extern "C" ARM bool func_ov015_0218c03c(Struct_ov015_0218c03c_2* arg0, char* arg1, unsigned int arg2, int arg3)
{
    Struct_ov005_021556e4* var0 = func_020dedd0((Struct_0201099c_10*)&arg0->unknown_0_->unknown_4c_, (short)arg0->unknown_20_[arg2]);
    Struct_ov005_021556e4* var1 = func_020dedd0((Struct_0201099c_10*)&arg0->unknown_0_->unknown_4c_, (short)arg0->unknown_20_[7]);
    int var2 = func_020de234((Struct_02015ef4_4*)var0, arg0->unknown_3b_);
    Struct_ov015_02193cd4 var3 = data_ov015_02193cd4;
    char var4[2] = {0};
    char var5[2] = {0};
    switch (arg2)
    {
    case 0:
    case 1:
    case 2:
    default:
        break;
    case 4:
        strcpy(var3.unknown_0_, data_ov015_02193fe4);
        var4[0] = 'a';
        var4[1] = 0;
        var2 += arg0->unknown_3c_;
        break;
    case 3:
        var4[0] = 'a';
        var4[1] = 0;
        if (var1 != NULL && var1->unknown_18_ > -1)
        {
            int var6 = (int)func_020de234((Struct_02015ef4_4*)var1, arg0->unknown_3b_) / 100;
            if ((unsigned int)var6 >= 10)
                return false;
            Struct_ov015_02193ce5 var7 = data_ov015_02193ce5;
            char var8 = var7.unknown_0_[var6];
            if (var8 == 0)
                return false;
            var4[0] = var8;
            if (var6 == 3 && arg0->unknown_3b_ == 0 && var0->unknown_18_ == 0x2329)
                var4[0] = 'f';
        }
        break;
    case 5:
    case 6:
        if (arg3)
            strcpy(var3.unknown_0_, data_ov015_02193fe4);
        break;
    }
    if (arg3 == 0)
        sprintf(arg1, data_ov015_02193fea, (char)var0->unknown_12_4_, var2, var4, var5, var3.unknown_0_);
    else
        sprintf(arg1, data_ov015_02193ffa, (char)var0->unknown_12_4_, var2, var4, var5, var3.unknown_0_);
    return true;
}
