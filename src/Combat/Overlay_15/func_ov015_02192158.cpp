#if defined(jpn)
#define R(j,u) (j)
#define data_ov014_02189692 data_ov014_0218a4a3
#define data_ov014_021896a7 data_ov014_0218a4b8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov015_0218ffa8;
struct Struct_ov015_0218ffd0;
struct Struct_ov015_0218fff8;
struct Struct_ov015_02190020;
struct Struct_ov015_0218ff7c;
struct Struct_ov015_0219005c;
struct Struct_0201099c_10;
struct Struct_020deda4;
struct Struct_ov015_021900dc;

struct Struct_ov015_0218b828_3
{
    char* unknown_0_;
    char* unknown_4_;
    unsigned short unknown_8_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
};

struct Struct_ov005_021556e4
{
    char unknown_0_[0x18];
    short unknown_18_;
};

struct Struct_ov015_0218c03c_2
{
    char unknown_0_[0x20];
    int* unknown_20_;
    char unknown_24_[0x38 - 0x24];
    short unknown_38_;
    unsigned char unknown_3a_;
    unsigned char unknown_3b_;
};

struct Struct_ov015_02190e88
{
    Struct_ov015_0218c03c_2* unknown_0_;
    Struct_ov015_02190e88* unknown_4_;
};

struct Struct_ov015_02190acc
{
    char unknown_0_[0x2c];
    Struct_ov015_02190e88* unknown_2c_;
    Struct_ov015_0218c03c_2* unknown_30_;
    char unknown_34_[0x4c - 0x34];
    char unknown_4c_[0x194 - 0x4c];
    int unknown_194_;
    char unknown_198_[0x1a4 - 0x198];
    int unknown_1a4_;
};

extern "C" Struct_ov015_0218b828_3* func_ov015_02193160(Struct_ov015_02190acc* arg0, int arg1, int* arg2);
extern "C" void func_ov015_0218ffa8(Struct_ov015_0218ffa8* arg0, int arg1);
extern "C" void func_ov015_0218f308(Struct_ov015_0218c03c_2* arg0, const char* arg1);
extern "C" void func_ov015_02192700(Struct_ov015_02190acc* arg0, int arg1);
extern "C" void func_ov015_021900dc(Struct_ov015_021900dc* arg0);
extern "C" void func_ov015_0218ffd0(Struct_ov015_0218ffd0* arg0, int arg1);
extern "C" void func_ov015_0218fff8(Struct_ov015_0218fff8* arg0, int arg1);
extern "C" void func_ov015_02190020(Struct_ov015_02190020* arg0, unsigned char arg1);
extern "C" void func_ov015_0218ff7c(Struct_ov015_0218ff7c* arg0, int arg1, int arg2);
extern "C" Struct_ov005_021556e4* func_020dedd0(Struct_0201099c_10* arg0, int arg1);
extern "C" Struct_ov005_021556e4* func_020deda4(int arg0, int arg1, Struct_020deda4* arg2);
extern "C" void func_ov015_0219005c(Struct_ov015_0219005c* arg0, short arg1, short arg2);

// USA: func_ov015_02192158
extern "C" ARM void func_ov015_02192158(Struct_ov015_02190acc* arg0, int arg1)
{
    if (arg0->unknown_30_ == NULL)
        return;
    int var0 = arg1;
    int var1;
    int var2;
    Struct_ov015_0218b828_3* var3 = func_ov015_02193160(arg0, arg0->unknown_1a4_, &var0);
    var1 = 0;
    var2 = 0;
    switch (arg0->unknown_1a4_)
    {
    case 15:
        func_ov015_0218ffa8((Struct_ov015_0218ffa8*)arg0->unknown_30_, (unsigned char)var3->unknown_8_);
        break;
    case 17:
        var2 = 2;
        var1 = 1;
        break;
    case 18:
        var1 = 1;
        break;
    case 19:
        var1 = 1;
        break;
    case 21:
        var1 = 1;
        break;
    case 25:
        var2 = 1;
        var1 = 1;
        break;
    case 27:
        var2 = 8;
        var1 = 1;
        break;
    case 28:
        var2 = 9;
        var1 = 1;
        break;
    case 22:
        var2 = 7;
        var1 = 1;
        break;
    case 20:
        var2 = 3;
        var1 = 1;
        break;
    case 24:
        var2 = 5;
        var1 = 1;
        break;
    case 26:
        var2 = 6;
        var1 = 1;
        break;
    case 23:
        var1 = 1;
        break;
    case 16:
        var1 = 1;
        break;
    case 30:
    case 31:
    case 32:
        func_ov015_0218f308(arg0->unknown_30_, var3->unknown_4_);
        arg0->unknown_194_ = 1;
        func_ov015_02192700(arg0, 0);
        arg0->unknown_30_->unknown_38_ = 0;
        func_ov015_021900dc((Struct_ov015_021900dc*)arg0->unknown_30_);
        break;
    }
    if (!var1)
        return;
    for (Struct_ov015_02190e88* var4 = arg0->unknown_2c_; var4 != NULL; var4 = var4->unknown_4_)
    {
        if (arg0->unknown_1a4_ == 18)
        {
            func_ov015_0218ffd0((Struct_ov015_0218ffd0*)var4->unknown_0_, (unsigned char)var3->unknown_8_);
        }
        else if (arg0->unknown_1a4_ == 19)
        {
            func_ov015_0218fff8((Struct_ov015_0218fff8*)var4->unknown_0_, (unsigned char)var3->unknown_8_);
        }
        else if (arg0->unknown_1a4_ == 21)
        {
            func_ov015_02190020((Struct_ov015_02190020*)var4->unknown_0_, var3->unknown_8_);
        }
        else if (arg0->unknown_1a4_ == 20)
        {
            func_ov015_0218ff7c((Struct_ov015_0218ff7c*)var4->unknown_0_, (unsigned char)var2, var3->unknown_8_);
            func_ov015_0218ff7c((Struct_ov015_0218ff7c*)var4->unknown_0_, 4, var3->unknown_8_);
        }
        else if (arg0->unknown_1a4_ == 23)
        {
            func_ov015_0218ff7c((Struct_ov015_0218ff7c*)var4->unknown_0_, (unsigned char)var2, var3->unknown_8_);
            Struct_ov005_021556e4* var5 = func_020deda4((int)&arg0->unknown_4c_, 0x61,
                (Struct_020deda4*)func_020dedd0((Struct_0201099c_10*)&arg0->unknown_4c_, (short)var4->unknown_0_->unknown_20_[0]));
            if (var5 != NULL)
                func_ov015_0218ff7c((Struct_ov015_0218ff7c*)var4->unknown_0_, 5, var5->unknown_18_);
            else
                func_ov015_0218ff7c((Struct_ov015_0218ff7c*)var4->unknown_0_, 5, 0x36b0);
        }
        else if (arg0->unknown_1a4_ == 16)
        {
            if (arg0->unknown_30_->unknown_3b_ == 0)
            {
                switch (var3->unknown_8_)
                {
                case 0:
                    func_ov015_0219005c((Struct_ov015_0219005c*)var4->unknown_0_, 0xeb8, 0x109f);
                    break;
                case 1:
                    func_ov015_0219005c((Struct_ov015_0219005c*)var4->unknown_0_, 0xe35, 0x1028);
                    break;
                case 2:
                    func_ov015_0219005c((Struct_ov015_0219005c*)var4->unknown_0_, 0xf0a, 0xfae);
                    break;
                case 3:
                    func_ov015_0219005c((Struct_ov015_0219005c*)var4->unknown_0_, 0x1024, 0xf33);
                    break;
                case 4:
                    func_ov015_0219005c((Struct_ov015_0219005c*)var4->unknown_0_, 0xf1e, 0xeb4);
                    break;
                }
            }
            else
            {
                switch (var3->unknown_8_)
                {
                case 0:
                    func_ov015_0219005c((Struct_ov015_0219005c*)var4->unknown_0_, 0xeb8, 0x1051);
                    break;
                case 1:
                    func_ov015_0219005c((Struct_ov015_0219005c*)var4->unknown_0_, 0xe39, 0xffb);
                    break;
                case 2:
                    func_ov015_0219005c((Struct_ov015_0219005c*)var4->unknown_0_, 0xee1, 0xf85);
                    break;
                case 3:
                    func_ov015_0219005c((Struct_ov015_0219005c*)var4->unknown_0_, 0x1024, 0xf33);
                    break;
                case 4:
                    func_ov015_0219005c((Struct_ov015_0219005c*)var4->unknown_0_, 0xeb8, 0xeb4);
                    break;
                }
            }
        }
        else
        {
            func_ov015_0218ff7c((Struct_ov015_0218ff7c*)var4->unknown_0_, (unsigned char)var2, var3->unknown_8_);
        }
    }
}
