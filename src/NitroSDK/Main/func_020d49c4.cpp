#include <globaldefs.h>
#include "NitroSDK/Cache.h"

typedef void (*Type_020d42e0)(void* arg);

struct Struct_020d424c
{
    char unknown_0_[0x182];
    unsigned short unknown_182_;
};

struct Struct_020d424c_2
{
    void* unknown_0_;
    Struct_020d424c* unknown_4_;
};

struct Struct_020d49c4
{
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned char unknown_a_[2];
};

struct Struct_020d49c4_2
{
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    Struct_020d49c4 unknown_a_[1];
};

extern "C" int func_020d41e8();
extern "C" Struct_020d424c_2* func_020d41d8();

// USA: func_020d49c4
extern "C" ARM const Struct_020d49c4* func_020d49c4(const void* arg0, unsigned short arg1)
{
    const Struct_020d49c4_2* const var0 = (const Struct_020d49c4_2*)arg0;
    Struct_020d49c4* var1[15];
    Struct_020d424c_2* const var2 = func_020d41d8();
    if (func_020d41e8() != 0)
        return NULL;
    if (arg1 < 1 || arg1 > 15)
        return NULL;
    InvalidateDataCacheRange(&var2->unknown_4_->unknown_182_, 2);
    if (!(var2->unknown_4_->unknown_182_ & (1 << arg1)))
        return NULL;
    if (var0->unknown_4_ == 0)
        return NULL;
    var1[0] = (Struct_020d49c4*)var0->unknown_a_;
    int var3 = 0;
    do
    {
        if (var1[var3]->unknown_4_ == arg1)
            return var1[var3];
        var3++;
        var1[var3] = (Struct_020d49c4*)((unsigned long)var1[var3 - 1] + var0->unknown_6_);
    } while (var3 < var0->unknown_4_);
    return NULL;
}
