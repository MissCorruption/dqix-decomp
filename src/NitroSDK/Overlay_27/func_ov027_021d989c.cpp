#include <globaldefs.h>
#include "NitroSDK/Filesystem/NitroVM.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"
#include "NitroSDK/Filesystem/FileAccessor.h"

struct Struct_ov027_021d989c_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    void* unknown_8_;
    int unknown_c_;
};

struct Struct_ov027_021d989c_3 {
    char unknown_0_[0x10];
    char unknown_10_[4];
    int unknown_14_;
    unsigned int unknown_18_;
};

struct Struct_ov027_021d989c {
    char unknown_0_[0x10];
    Struct_ov027_021d989c_2* unknown_10_;
    Struct_ov027_021d989c_3* unknown_14_;
};

#pragma optimize_for_size off

// USA: func_ov027_021d989c
extern "C" ARM void func_ov027_021d989c(Struct_ov027_021d989c* arg0)
{
    Struct_ov027_021d989c_3* var0 = arg0->unknown_14_;
    Struct_ov027_021d989c_2* var1 = arg0->unknown_10_;

    NitroHandle* var2 = NitroHandle_FindBySignature(var0->unknown_10_, var0->unknown_14_);
    if (var2 == NULL)
        var2 = (NitroHandle*)var0->unknown_18_;

    NitroVM var3;
    NitroVM_Initialize(&var3);

    unsigned int var4 = var1->unknown_0_;
    unsigned int var5 = var4 + var1->unknown_4_;
    if (NitroVM_PrepareRead(&var3, var2, var4, var5, 0xFFFFFFFF))
    {
        int var6 = NitroVM_ReadSync(&var3, var1->unknown_8_, var1->unknown_4_);
        if (var1->unknown_4_ == (unsigned int)var6)
            var1->unknown_c_ = 2;
        NitroVM_FinishRead(&var3);
    }

    if (var1->unknown_c_ != 2)
    {
        var1->unknown_0_ = 0;
        var1->unknown_c_ = 2;
    }
}
