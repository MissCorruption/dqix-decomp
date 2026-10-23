#include <globaldefs.h>
#include <std_library_functions.h>
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"
#include "Combat/Overlay15ViewerContext.h"

struct Struct_ov015_0218bcb0_2
{
    void* unknown_0_;
    unsigned char unknown_4_;
    char unknown_5_[3];
};

struct Struct_0205563c;

struct Struct_ov015_02193d80
{
    unsigned int unknown_0_[7];
};

struct Struct_ov015_02193df0
{
    unsigned int unknown_0_[11][2];
};

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" Struct_ov015_0218bcb0_2* func_ov015_021931f8(char* arg0);
extern "C" Struct_ov015_0218bcb0_2* func_ov015_0219322c(char* arg0);
extern "C" Struct_ov015_0218bcb0_2* func_ov015_02193260(char* arg0);
extern "C" void func_0205563c(Struct_0205563c* arg0);

extern AllocatorUnion data_02114e20;
extern const Struct_ov015_02193d80 data_ov015_02193d80;
extern const Struct_ov015_02193df0 data_ov015_02193df0;

// USA: func_ov015_0218bcb0
extern "C" ARM int func_ov015_0218bcb0(void* arg0)
{
    Struct_ov015_0218bcb0* var0 = static_cast<Struct_ov015_0218bcb0*>(arg0);
    if (var0->unknown_1c_ == 0 || var0->unknown_1c_ == 1)
    {
        Struct_ov015_02193df0 var1 = data_ov015_02193df0;
        var0->unknown_8_ = (SafeAllocator*)func_02012d88(&data_02114e20, 10 * sizeof(SafeAllocator));
        if (var0->unknown_8_ == NULL)
        {
            func_ov015_0218f0c4(var0);
            return 0;
        }
        var0->unknown_24_ = (Object3D*)func_02012d88(&data_02114e20, 10 * sizeof(Object3D));
        if (var0->unknown_24_ == NULL)
        {
            func_ov015_0218f0c4(var0);
            return 0;
        }
        for (int var2 = 0; var2 < 10; var2++)
        {
            var0->unknown_8_[var2].ResetAllocatorPointer();
            void* var3 = func_02012d88(&data_02114e20, var1.unknown_0_[var2][var0->unknown_1c_]);
            if (var3 == NULL)
                return 0;
            var0->unknown_8_[var2].CreateTypeA(var3, var1.unknown_0_[var2][var0->unknown_1c_]);
            var0->unknown_8_[var2].Reset();
            var0->unknown_24_[var2].Initialize();
        }
        var0->unknown_20_ = (int*)func_02012d88(&data_02114e20, 10 * sizeof(int));
        if (var0->unknown_20_ == NULL)
        {
            func_ov015_0218f0c4(var0);
            return 0;
        }
        memset(var0->unknown_20_, -1, 10 * sizeof(int));
        var0->unknown_20_[0] = 0x32cf;
        var0->unknown_20_[1] = 0x3f57;
        var0->unknown_20_[2] = 0x233c;
        var0->unknown_20_[3] = 0x2328;
        var0->unknown_20_[4] = 0x2328;
        var0->unknown_20_[5] = 0x36b7;
        var0->unknown_20_[6] = 0x42e0;
        if (var0->unknown_1c_ == 0)
            var0->unknown_4_ = func_ov015_021931f8(var0->unknown_0_);
        else
            var0->unknown_4_ = func_ov015_0219322c(var0->unknown_0_);
        if (var0->unknown_4_ == NULL)
        {
            func_ov015_0218f0c4(var0);
            return 0;
        }
        var0->unknown_4_->unknown_4_ = 1;
        var0->unknown_18_ = var1.unknown_0_[10][var0->unknown_1c_];
        var0->unknown_14_ = func_02012d88(&data_02114e20, var0->unknown_18_);
        if (var0->unknown_14_ == NULL)
        {
            func_ov015_0218f0c4(var0);
            return 0;
        }
    }
    else
    {
        Struct_ov015_02193d80 var4 = data_ov015_02193d80;
        var0->unknown_8_ = (SafeAllocator*)func_02012d88(&data_02114e20, sizeof(SafeAllocator));
        if (var0->unknown_8_ == NULL)
        {
            func_ov015_0218f0c4(var0);
            return 0;
        }
        var0->unknown_8_->ResetAllocatorPointer();
        void* var5 = func_02012d88(&data_02114e20, var4.unknown_0_[var0->unknown_1c_]);
        if (var5 == NULL)
            return 0;
        var0->unknown_8_->CreateTypeA(var5, var4.unknown_0_[var0->unknown_1c_]);
        var0->unknown_8_->Reset();
        var0->unknown_4_ = func_ov015_02193260(var0->unknown_0_);
        if (var0->unknown_4_ == NULL)
        {
            func_ov015_0218f0c4(var0);
            return 0;
        }
        var0->unknown_4_->unknown_4_ = 1;
        if (var0->unknown_1c_ == 2 || var0->unknown_1c_ == 3)
        {
            var0->unknown_18_ = 0xc000;
            var0->unknown_14_ = func_02012d88(&data_02114e20, var0->unknown_18_);
            if (var0->unknown_14_ == NULL)
            {
                func_ov015_0218f0c4(var0);
                return 0;
            }
        }
        var0->unknown_24_ = (Object3D*)func_02012d88(&data_02114e20, sizeof(Object3D));
        if (var0->unknown_24_ == NULL)
        {
            func_ov015_0218f0c4(var0);
            return 0;
        }
        var0->unknown_24_->Initialize();
        if (var0->unknown_1c_ == 4)
        {
            var0->unknown_28_ = (Struct_0205563c*)func_02012d88(&data_02114e20, 0x1c);
            if (var0->unknown_28_ == NULL)
            {
                func_ov015_0218f0c4(var0);
                return 0;
            }
            func_0205563c(var0->unknown_28_);
        }
    }
    return 1;
}
