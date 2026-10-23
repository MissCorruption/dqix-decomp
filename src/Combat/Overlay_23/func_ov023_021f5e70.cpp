#include <globaldefs.h>
#include "Resource/Script.h"
#include "GameState/GameState.h"

struct Struct_02000c9c_73
{
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 5;
    unsigned int unknown_3_2_ : 6;
};

struct Struct_ov023_021f5e70_3
{
    short unknown_0_;
    char unknown_2_[2];
    unsigned int unknown_4_0_ : 7;
    unsigned int unknown_4_7_ : 25;
    char unknown_8_[0x28 - 8];
};

struct Struct_ov023_021f5e70_4
{
    short unknown_0_;
    char unknown_2_[2];
    Struct_ov023_021f5e70_3 unknown_4_[6];
    Struct_02000c9c_73 unknown_f4_;
    short unknown_f8_;
    char unknown_fa_[2];
    unsigned short unknown_fc_;
    char unknown_fe_[2];
    Struct_02000c9c_73 unknown_100_;
    char unknown_104_[8];
    unsigned short unknown_10c_0_ : 13;
    unsigned short unknown_10d_5_ : 3;
    char unknown_10e_[0x114 - 0x10e];
};

struct Struct_ov023_021fff08_12
{
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    void* unknown_4_;
    char* unknown_8_;
    Struct_ov023_021f5e70_4* unknown_c_;
    const char* unknown_10_;
};

struct Struct_ov023_021f5e70
{
#if defined(jpn)
    char unknown_0_[0x5c0c];
#else
    char unknown1_0_[0x5e6c];
#endif

    Struct_ov023_021f5e70_4 unknown_5e6c_;
};

struct Struct_ov023_021f5e70_2
{
    char unknown_0_[0x104];
};

extern "C" unsigned long long func_ov023_021f6324(int arg0, unsigned char* arg1);
extern "C" void func_ov031_022118a8(Struct_ov023_021f5e70_2* arg0, const char* arg1, int arg2);
extern "C" void func_ov031_02211938(Struct_ov023_021f5e70_2* context, const void* input, int size, void* output);

extern "C" Struct_ov023_021fff08_12 data_ov023_021fff08;
extern "C" unsigned char data_ov023_021fff1c[];
extern "C" Script::OpcodeLookupEntry data_ov023_021fe34c[];
extern "C" unsigned char data_ov023_021fe3c8[];

// USA: func_ov023_021f5e70
extern "C" ARM int func_ov023_021f5e70(unsigned char* arg0, int arg1, void* arg2)
{
    Script var0;
    Script var1;
    if (func_ov023_021f6324(arg1, arg0) != 0)
        return 0;
    int var2;
    Struct_ov023_021f5e70_2 var3;
    const char* var4 = (const char*)data_ov023_021fe3c8;
    func_ov031_022118a8(&var3, var4, strlen(var4));
    func_ov031_02211938(&var3, arg0, arg1 - 4, arg2);
    arg0 = (unsigned char*)arg2;
    Struct_ov023_021f5e70_4* var5 = &((Struct_ov023_021f5e70*)GameState::GetInstance())->unknown_5e6c_;
    data_ov023_021fff08.unknown_2_ = 0;
    data_ov023_021fff08.unknown_3_ = 0;
    data_ov023_021fff08.unknown_c_ = var5;
    var0.Initialize();
    var0.SetOpcodeLookup(data_ov023_021fe34c);
    int var6 = arg1 - 4;
    var0.Load(arg2, var6);
    var0.Execute();
    if (data_ov023_021fff08.unknown_3_ == 0)
        return 0;
    for (var2 = 0; var2 < 6; var2++)
    {
        var5->unknown_4_[var2].unknown_0_ = -1;
        data_ov023_021fff1c[var2] = 0xff;
    }
    data_ov023_021fff08.unknown_0_ = data_ov023_021fff08.unknown_3_;
    if (data_ov023_021fff08.unknown_0_ > 6)
        data_ov023_021fff08.unknown_0_ = 6;
    for (var2 = 0; var2 < data_ov023_021fff08.unknown_0_; var2++)
    {
        short var7 = rand() % data_ov023_021fff08.unknown_3_;
        int var8;
        for (var8 = var2 - 1; var8 >= 0; var8--)
        {
            if (var7 == data_ov023_021fff1c[var8])
                break;
        }
        if (var8 >= 0)
            var2--;
        else
            data_ov023_021fff1c[var2] = var7;
    }
    data_ov023_021fff08.unknown_2_ = 1;
    data_ov023_021fff08.unknown_3_ = 0;
    data_ov023_021fff08.unknown_c_ = var5;
    var1.Initialize();
    var1.SetOpcodeLookup(data_ov023_021fe34c);
    var1.Load(arg0, var6);
    var1.Execute();
    return 1;
}
