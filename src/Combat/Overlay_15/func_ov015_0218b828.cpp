#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

struct Struct_ov015_0218b828_3
{
    char* unknown_0_;
    char* unknown_4_;
    unsigned short unknown_8_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
};

struct Struct_ov015_0218b828
{
    char* unknown_0_;
    unsigned short unknown_4_;
    unsigned char unknown_6_;
    Struct_ov015_0218b828* unknown_8_;
};

struct Struct_ov015_0218b828_2
{
    char* unknown_0_;
    Struct_ov015_0218b828* unknown_4_;
};

struct Struct_ov015_0218b810
{
    Struct_ov015_0218b828_3* unknown_0_;
    Struct_ov015_0218b828_2* unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void func_ov015_0218b810(Struct_ov015_0218b810* arg0);

extern AllocatorUnion data_02114e20;

// USA: func_ov015_0218b828
extern "C" ARM void func_ov015_0218b828(Struct_ov015_0218b810* arg0)
{
    for (int var0 = 0; var0 < arg0->unknown_8_; var0++)
    {
        if (arg0->unknown_0_[var0].unknown_0_ != NULL)
        {
            func_02012da4(&data_02114e20, arg0->unknown_0_[var0].unknown_0_);
            arg0->unknown_0_[var0].unknown_0_ = NULL;
        }
        if (arg0->unknown_0_[var0].unknown_4_ != NULL)
        {
            func_02012da4(&data_02114e20, arg0->unknown_0_[var0].unknown_4_);
            arg0->unknown_0_[var0].unknown_4_ = NULL;
        }
    }
    for (int var1 = 0; var1 < arg0->unknown_c_; var1++)
    {
        if (arg0->unknown_4_[var1].unknown_0_ != NULL)
        {
            func_02012da4(&data_02114e20, arg0->unknown_4_[var1].unknown_0_);
            arg0->unknown_4_[var1].unknown_0_ = NULL;
        }
        Struct_ov015_0218b828* var2 = arg0->unknown_4_[var1].unknown_4_;
        while (var2 != NULL)
        {
            Struct_ov015_0218b828* var3 = var2->unknown_8_;
            if (var2->unknown_0_ != NULL)
            {
                func_02012da4(&data_02114e20, var2->unknown_0_);
                var2->unknown_0_ = NULL;
            }
            func_02012da4(&data_02114e20, var2);
            var2 = var3;
        }
    }
    if (arg0->unknown_0_ != NULL)
    {
        func_02012da4(&data_02114e20, arg0->unknown_0_);
        arg0->unknown_0_ = NULL;
    }
    if (arg0->unknown_4_ != NULL)
    {
        func_02012da4(&data_02114e20, arg0->unknown_4_);
        arg0->unknown_4_ = NULL;
    }
    func_ov015_0218b810(arg0);
}
