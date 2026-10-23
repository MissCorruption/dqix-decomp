#include <globaldefs.h>
#include "NitroSDK/Cache.h"

typedef char* Type_02001bdc;
#define __va_align(size) ((((unsigned long)(size)) + 3U) & ~3U)
#define va_start(ap, parm) ((ap) = (Type_02001bdc)((char*)((unsigned long)&(parm) & ~3U) + __va_align(sizeof(parm))))
#define va_arg(ap, type) (*(type*)(((ap) += __va_align(sizeof(type))) - __va_align(sizeof(type))))
#define va_end(ap) ((void)0)

extern "C" int func_020d41e8();

struct Struct_020d424c
{
    unsigned short unknown_0_;
};

struct Struct_020d424c_2
{
    void* unknown_0_;
    Struct_020d424c* unknown_4_;
};

struct Struct_021142e0_3
{
    unsigned short unknown_0_;
    Struct_020d424c_2* unknown_4_;
};

extern Struct_021142e0_3 data_021142e0;

// USA: func_020d424c
extern "C" ARM int func_020d424c(int arg0, ...)
{
    int var0 = func_020d41e8();
    unsigned short var1;
    Type_02001bdc var2;
    if (var0 != 0)
        return var0;
    InvalidateDataCacheRange(&data_021142e0.unknown_4_->unknown_4_->unknown_0_, sizeof(unsigned short));
    var1 = data_021142e0.unknown_4_->unknown_4_->unknown_0_;
    va_start(var2, arg0);
    var0 = 3;
    if (arg0 == 0)
        return var0;
    do
    {
        if (va_arg(var2, unsigned long) == var1)
            var0 = 0;
    } while (--arg0 != 0);
    va_end(var2);
    return var0;
}
