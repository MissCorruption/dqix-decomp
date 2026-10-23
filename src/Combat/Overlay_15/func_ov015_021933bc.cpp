#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov015_0218c03c_2;
struct Struct_ov005_02155d6c;

struct Struct_ov015_02190e88
{
    Struct_ov015_0218c03c_2* unknown_0_;
    Struct_ov015_02190e88* unknown_4_;
};

struct Struct_ov015_0218bcb0_2
{
    Struct_ov005_02155d6c* unknown_0_;
    unsigned char unknown_4_;
    char unknown_5_[3];
};

struct Struct_02000c9c_53
{
    void* unknown_0_;
    void* unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

struct Struct_ov015_02190acc
{
    char unknown_0_[0x2c];
    Struct_ov015_02190e88* unknown_2c_;
    char unknown_30_[0x3c - 0x30];
    Struct_02000c9c_53 unknown_3c_;
    char unknown_4c_[0x84 - 0x4c];
    void* unknown_84_;
    SafeAllocator unknown_88_;
    SafeAllocator unknown_9c_;
    SafeAllocator unknown_b0_;
    Struct_ov015_0218bcb0_2 unknown_c4_[4];
    Struct_ov015_0218bcb0_2 unknown_e4_[4];
    Struct_ov015_0218bcb0_2 unknown_104_[4];
    char unknown_124_[0x344 - 0x124];
    void* unknown_344_;
};

extern "C" void func_ov015_0218f0c4(Struct_ov015_0218c03c_2* arg0);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern "C" void func_ov015_0218b828(Struct_02000c9c_53* arg0);

extern AllocatorUnion data_02114e20;

// USA: func_ov015_021933bc
extern "C" ARM void func_ov015_021933bc(Struct_ov015_02190acc* arg0)
{
    Struct_ov015_02190e88* var0 = arg0->unknown_2c_;
    while (var0 != NULL)
    {
        func_ov015_0218f0c4(var0->unknown_0_);
        func_02012da4(&data_02114e20, var0->unknown_0_);
        Struct_ov015_02190e88* var1 = var0;
        var0 = var0->unknown_4_;
        func_02012da4(&data_02114e20, var1);
    }
    for (int var2 = 0; var2 < 4; var2++)
    {
        if (arg0->unknown_c4_[var2].unknown_0_ != NULL)
            func_02012da4(&data_02114e20, arg0->unknown_c4_[var2].unknown_0_);
        if (arg0->unknown_e4_[var2].unknown_0_ != NULL)
            func_02012da4(&data_02114e20, arg0->unknown_e4_[var2].unknown_0_);
        if (arg0->unknown_104_[var2].unknown_0_ != NULL)
            func_02012da4(&data_02114e20, arg0->unknown_104_[var2].unknown_0_);
    }
    func_02012da4(&data_02114e20, arg0->unknown_88_.GetSignedAllocator());
    func_02012da4(&data_02114e20, arg0->unknown_9c_.GetSignedAllocator());
    func_02012da4(&data_02114e20, arg0->unknown_b0_.GetSignedAllocator());
    arg0->unknown_88_.Destroy();
    arg0->unknown_9c_.Destroy();
    arg0->unknown_b0_.Destroy();
    func_ov015_0218b828(&arg0->unknown_3c_);
    if (arg0->unknown_84_ != NULL)
    {
        func_02012da4(&data_02114e20, arg0->unknown_84_);
        arg0->unknown_84_ = NULL;
    }
    if (arg0->unknown_344_ == NULL)
        return;
    func_02012da4(&data_02114e20, arg0->unknown_344_);
    arg0->unknown_344_ = NULL;
}
