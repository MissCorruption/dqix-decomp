#if defined(jpn)
#define R(j,u) (j)
#define data_ov014_02189692 data_ov014_0218a4a3
#define data_ov014_021896a7 data_ov014_0218a4b8
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Input/Input.h"

struct AllocatorUnion;
struct Struct_ov015_02190d7c;
struct Struct_ov015_02190d7c_2;
struct Struct_ov015_021900dc;

struct Struct_ov015_0218b828_3
{
    char* unknown_0_;
    char* unknown_4_;
    unsigned short unknown_8_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
};

struct Struct_ov015_0218c03c_2
{
    char unknown_0_[0x1c];
    unsigned char unknown_1c_;
    char unknown_1d_[0x38 - 0x1d];
    short unknown_38_;
};

struct Struct_ov015_02190e88
{
    Struct_ov015_0218c03c_2* unknown_0_;
    Struct_ov015_02190e88* unknown_4_;
};

struct Struct_02029988_2
{
    char unknown_0_[0x5c];
    short unknown_5c_;
    short unknown_5e_;
    short unknown_60_;
    char unknown_62_[0x80 - 0x62];
};

struct Struct_ov015_02190acc
{
    char unknown_0_[0x2c];
    Struct_ov015_02190e88* unknown_2c_;
    Struct_ov015_0218c03c_2* unknown_30_;
    char unknown_34_[0x194 - 0x34];
    int unknown_194_;
    char unknown_198_[0x1a1 - 0x198];
    unsigned char unknown_1a1_;
    char unknown_1a2_[2];
    int unknown_1a4_;
    char unknown_1a8_[0x268 - 0x1a8];
    short unknown_268_[0x29];
    char unknown_2ba_[0x2c4 - 0x2ba];
    Struct_02029988_2 unknown_2c4_;
    char unknown_344_[0x350 - 0x344];
    unsigned char unknown_350_;
};

extern "C" int func_ov015_021925a8(Struct_ov015_02190acc* arg0);
extern "C" int func_ov015_02191284(Struct_02029988_2* arg0);
extern "C" void func_ov015_02191af0(Struct_ov015_02190acc* arg0, int arg1);
extern "C" void func_ov015_02191ba0(Struct_ov015_02190acc* arg0, int arg1);
extern "C" void func_ov015_02191c70(Struct_ov015_02190acc* arg0, int arg1);
extern "C" Struct_ov015_0218b828_3* func_ov015_02193160(Struct_ov015_02190acc* arg0, int arg1, int* arg2);
extern "C" void func_ov015_021931b4(Struct_ov015_02190d7c* arg0, int arg1);
extern "C" int func_ov015_021931cc(Struct_ov015_02190d7c_2* arg0);
extern "C" void func_ov015_02192700(Struct_ov015_02190acc* arg0, int arg1);
extern "C" int func_ov015_02190c2c(Struct_ov015_02190acc* arg0);
extern "C" void func_ov015_02192158(Struct_ov015_02190acc* arg0, int arg1);
extern "C" void func_ov015_0218f308(Struct_ov015_0218c03c_2* arg0, const char* arg1);
extern "C" void func_ov015_021900dc(Struct_ov015_021900dc* arg0);
extern "C" void func_ov015_0218f0c4(Struct_ov015_0218c03c_2* arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" Struct_ov015_0218c03c_2* func_ov015_021919e4(Struct_ov015_02190acc* arg0, Struct_ov015_0218b828_3* arg1);
extern "C" void func_ov015_02192544(Struct_ov015_02190acc* arg0);
extern "C" void func_ov015_02190090(Struct_ov015_0218c03c_2* arg0);

extern AllocatorUnion data_02114e20;

// USA: func_ov015_02190e88
extern "C" ARM void func_ov015_02190e88(Struct_ov015_02190acc* arg0)
{
    if (func_ov015_021925a8(arg0))
        return;
    if (g_keyManager.TestKeysPressed(1))
    {
        int var0 = func_ov015_02191284(&arg0->unknown_2c4_);
        arg0->unknown_268_[arg0->unknown_1a4_] = var0;
        switch (arg0->unknown_1a4_)
        {
        case 2:
            func_ov015_02191af0(arg0, var0);
            return;
        case 3:
            func_ov015_02191ba0(arg0, var0);
            return;
        case 40:
            func_ov015_02191c70(arg0, var0);
            return;
        default:
        {
            int var1 = 0;
            func_ov015_02193160(arg0, arg0->unknown_1a4_, &var1);
            var0 += var1;
            Struct_ov015_0218b828_3* var2 = func_ov015_02193160(arg0, arg0->unknown_1a4_, &var0);
            if (var2 == NULL)
                break;
            if (var2->unknown_b_ != 0)
            {
                func_ov015_021931b4((Struct_ov015_02190d7c*)arg0, arg0->unknown_1a4_);
                arg0->unknown_1a4_ = var2->unknown_b_;
                func_ov015_02192700(arg0, 0);
                return;
            }
            if (func_ov015_02190c2c(arg0))
            {
                func_ov015_02192158(arg0, var0);
                return;
            }
            if (arg0->unknown_1a4_ == 0x21)
            {
                func_ov015_0218f308(arg0->unknown_30_, var2->unknown_4_);
                arg0->unknown_194_ = 1;
                func_ov015_02192700(arg0, 0);
                arg0->unknown_30_->unknown_38_ = 0;
                func_ov015_021900dc((Struct_ov015_021900dc*)arg0->unknown_30_);
                return;
            }
            if (g_keyManager.TestKeysHeld(0x100))
            {
                Struct_ov015_02190e88* var3 = arg0->unknown_2c_;
                while (var3 != NULL)
                {
                    func_ov015_0218f0c4(var3->unknown_0_);
                    func_02012da4(&data_02114e20, var3->unknown_0_);
                    Struct_ov015_02190e88* var4 = var3;
                    var3 = var3->unknown_4_;
                    func_02012da4(&data_02114e20, var4);
                }
                arg0->unknown_2c_ = NULL;
            }
            Struct_ov015_0218c03c_2* var5 = func_ov015_021919e4(arg0, var2);
            if (var5 != NULL && !g_keyManager.TestKeysHeld(0x200))
            {
                arg0->unknown_30_ = var5;
                switch (var5->unknown_1c_)
                {
                case 0:
                case 1:
                    func_ov015_021931b4((Struct_ov015_02190d7c*)arg0, arg0->unknown_1a4_);
                    arg0->unknown_1a4_ = 0x22;
                    func_ov015_02192700(arg0, 0);
                    return;
                case 2:
                    func_ov015_021931b4((Struct_ov015_02190d7c*)arg0, arg0->unknown_1a4_);
                    arg0->unknown_1a4_ = 0x21;
                    func_ov015_02192700(arg0, 0);
                    return;
                default:
                    arg0->unknown_194_ = 1;
                    func_ov015_02192700(arg0, 0);
                    arg0->unknown_30_->unknown_38_ = 0;
                    func_ov015_021900dc((Struct_ov015_021900dc*)arg0->unknown_30_);
                    return;
                }
            }
            break;
        }
        }
    }
    else if (g_keyManager.TestKeysPressed(2))
    {
        if (arg0->unknown_1a4_ > 0)
        {
            arg0->unknown_268_[arg0->unknown_1a4_] = func_ov015_02191284(&arg0->unknown_2c4_);
            if (arg0->unknown_1a4_ == 8)
                func_ov015_02192544(arg0);
            int var6 = func_ov015_021931cc((Struct_ov015_02190d7c_2*)arg0);
            if (var6 >= 0)
            {
                arg0->unknown_1a4_ = var6;
                func_ov015_02192700(arg0, 0);
            }
        }
    }
    else
    {
        if (g_keyManager.TestKeyRepeat(0x20))
        {
            short var7 = arg0->unknown_2c4_.unknown_5c_;
            int var8 = arg0->unknown_2c4_.unknown_60_ - 8;
            if (var8 < var7)
                var8 = var7;
            arg0->unknown_2c4_.unknown_60_ = var8;
            arg0->unknown_350_ = 1;
            return;
        }
        if (g_keyManager.TestKeyRepeat(0x10))
        {
            short var9 = arg0->unknown_2c4_.unknown_5e_;
            int var10 = arg0->unknown_2c4_.unknown_60_ + 8;
            if (var10 > var9)
                var10 = var9;
            arg0->unknown_2c4_.unknown_60_ = var10;
            arg0->unknown_350_ = 1;
            return;
        }
        if (g_keyManager.TestKeysPressed(0x200))
        {
            if (arg0->unknown_1a4_ == 6)
            {
                arg0->unknown_1a1_ = arg0->unknown_1a1_ == 0;
                arg0->unknown_350_ = 1;
            }
        }
        else if (g_keyManager.TestKeysPressed(0x100) && (arg0->unknown_1a4_ == 0x22 || func_ov015_02190c2c(arg0)))
        {
            func_ov015_02190090(arg0->unknown_30_);
            arg0->unknown_350_ = 1;
        }
    }
}
