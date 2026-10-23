#include <globaldefs.h>
#include "NitroSDK/Cache.h"

typedef char* va_list;
#define __va_align(size) ((((unsigned long)(size)) + 3U) & ~3U)
#define va_start(ap, parm) ((ap) = (va_list)((char*)((unsigned long)&(parm) & ~3U) + __va_align(sizeof(parm))))
#define va_arg(ap, type) (*(type*)(((ap) += __va_align(sizeof(type))) - __va_align(sizeof(type))))
#define va_end(ap) ((void)0)

extern "C" int func_020d41e8();

struct WMStatus
{
    unsigned short state;
};

struct WMArm9Buf
{
    void* WM7;
    WMStatus* status;
};

struct WMSystemState
{
    unsigned short wmInitialized;
    WMArm9Buf* wm9buf;
};

extern WMSystemState data_021142e0;

// USA: func_020d424c
extern "C" ARM int func_020d424c(int paramNum, ...)
{
    int result = func_020d41e8();
    unsigned short state;
    va_list args;
    if (result != 0)
        return result;
    InvalidateDataCacheRange(&data_021142e0.wm9buf->status->state, sizeof(unsigned short));
    state = data_021142e0.wm9buf->status->state;
    va_start(args, paramNum);
    result = 3;
    if (paramNum == 0)
        return result;
    do
    {
        if (va_arg(args, unsigned long) == state)
            result = 0;
    } while (--paramNum != 0);
    va_end(args);
    return result;
}
