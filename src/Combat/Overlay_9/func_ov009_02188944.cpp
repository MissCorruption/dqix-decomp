#include <globaldefs.h>
#include "Resource/CharacterCreationUI.h"

struct Struct_ov009_02187b34 {
    short unknown_0_[10];
    unsigned char unknown_14_0_ : 1;
    unsigned char unknown_14_1_ : 3;
    unsigned char unknown_14_4_ : 4;
    unsigned char unknown_15_0_ : 4;
    unsigned char unknown_15_4_ : 4;
    short unknown_16_;
    short unknown_18_;
    short unknown_1a_;
};

struct Struct_ov005_0215840c_2 {
    char unknown_0_[0x488];
    Struct_ov009_02187b34 unknown_488_;
};

extern "C" void func_ov023_021e6158(void* arg0, int arg1);
extern "C" void func_ov009_02188bf8(unsigned char* arg0, int arg1, short* arg2, short* arg3);
extern "C" void func_ov023_021e5e68(void* arg0, int arg1, int arg2);
extern "C" int func_ov009_02188b14(void* arg0, int arg1, int arg2);
extern "C" void func_ov023_021e540c(void* arg0);

// USA: func_ov009_02188944
#if defined(jpn)
extern "C" ARM void func_ov009_02188944(Struct_ov009_021842a0* arg0, int arg1)
{
    Struct_ov009_02187b34* var0 = &((Struct_ov005_0215840c_2*)arg0->unknown_d88_)->unknown_488_;
    int var1 = arg0->unknown_c58_;
    if (var1 == 1)
    {
        var0->unknown_14_0_ = arg1;
        func_ov023_021e6158(arg0->unknown_7fc_, 0);
        func_ov023_021e6158(arg0->unknown_7fc_, 2);
        func_ov023_021e6158(arg0->unknown_7fc_, 3);
        func_ov023_021e6158(arg0->unknown_7fc_, 4);
        arg0->unknown_d9c_ |= 2;
    }
    else if (var1 == 2)
    {
        func_ov009_02188bf8((unsigned char*)arg0, arg1, &var0->unknown_18_, &var0->unknown_1a_);
        func_ov023_021e5e68(arg0->unknown_7f8_, var0->unknown_18_, var0->unknown_1a_);
        func_ov023_021e5e68(arg0->unknown_7fc_, var0->unknown_18_, var0->unknown_1a_);
    }
    else if (var1 == 5)
    {
        var0->unknown_0_[2] = func_ov009_02188b14(arg0, 5, arg1) + 0x233c;
        func_ov023_021e6158(arg0->unknown_7fc_, 2);
        arg0->unknown_d9c_ |= 2;
    }
    else if (var1 == 3)
    {
        var0->unknown_0_[3] = func_ov009_02188b14(arg0, 3, arg1) + 0x2328;
        func_ov023_021e6158(arg0->unknown_7fc_, 3);
        func_ov023_021e6158(arg0->unknown_7fc_, 4);
        arg0->unknown_d9c_ |= 2;
    }
    else if (var1 == 4)
    {
        var0->unknown_15_0_ = arg1;
        func_ov023_021e6158(arg0->unknown_7fc_, 4);
        arg0->unknown_d9c_ |= 2;
    }
    else if (var1 == 6)
    {
        var0->unknown_14_1_ = arg1;
        func_ov023_021e540c(arg0->unknown_7f8_);
    }
    else if (var1 == 7)
    {
        var0->unknown_14_4_ = arg1;
        func_ov023_021e540c(arg0->unknown_7f8_);
    }
}
#else
extern "C" ARM void func_ov009_02188944(Struct_ov009_021842a0* arg0, int arg1)
{
    Struct_ov009_02187b34* var2 = &((Struct_ov005_0215840c_2*)arg0->unknown_d88_)->unknown_488_;
    int var3 = arg0->unknown_c58_;
    void* var4 = arg0->unknown_7fc_;
    void* var5 = arg0->unknown_7f8_;
    if (var3 == 1)
    {
        var2->unknown_14_0_ = arg1;
        func_ov023_021e6158(var4, 0);
        func_ov023_021e6158(var4, 2);
        func_ov023_021e6158(var4, 3);
        func_ov023_021e6158(var4, 4);
        arg0->unknown_d9c_ |= 2;
    }
    else if (var3 == 2)
    {
        func_ov009_02188bf8((unsigned char*)arg0, arg1, &var2->unknown_18_, &var2->unknown_1a_);
        func_ov023_021e5e68(var5, var2->unknown_18_, var2->unknown_1a_);
        func_ov023_021e5e68(var4, var2->unknown_18_, var2->unknown_1a_);
    }
    else if (var3 == 5)
    {
        var2->unknown_0_[2] = func_ov009_02188b14(arg0, 5, arg1) + 0x233c;
        func_ov023_021e6158(var4, 2);
        arg0->unknown_d9c_ |= 2;
    }
    else if (var3 == 3)
    {
        var2->unknown_0_[3] = func_ov009_02188b14(arg0, 3, arg1) + 0x2328;
        func_ov023_021e6158(var4, 3);
        func_ov023_021e6158(var4, 4);
        arg0->unknown_d9c_ |= 2;
    }
    else if (var3 == 4)
    {
        var2->unknown_15_0_ = arg1;
        func_ov023_021e6158(var4, 4);
        arg0->unknown_d9c_ |= 2;
    }
    else if (var3 == 6)
    {
        var2->unknown_14_1_ = arg1;
        func_ov023_021e540c(var5);
    }
    else if (var3 == 7)
    {
        var2->unknown_14_4_ = arg1;
        func_ov023_021e540c(var5);
    }
}
#endif
