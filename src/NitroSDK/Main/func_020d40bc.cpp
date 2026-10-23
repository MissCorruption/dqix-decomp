#include <globaldefs.h>
#include "NitroSDK/Cache.h"

typedef char* Type_02001bdc;
#define __va_align(size) ((((unsigned long)(size)) + 3U) & ~3U)
#define va_start(ap, parm) ((ap) = (Type_02001bdc)((char*)((unsigned long)&(parm) & ~3U) + __va_align(sizeof(parm))))
#define va_arg(ap, type) (*(type*)(((ap) += __va_align(sizeof(type))) - __va_align(sizeof(type))))
#define va_end(ap) ((void)0)
#include "NitroSDK/IPC.h"

extern "C" void* func_020d4064();
extern "C" int func_020c7e0c(void* arg0, void* arg1, int arg2);

extern int data_021142e8;

// USA: func_020d40bc
extern "C" ARM int func_020d40bc(int arg0, unsigned short arg1, ...)
{
    Type_02001bdc var0;
    int var1;
    int var2;
    unsigned long* var3;
    var3 = (unsigned long*)func_020d4064();
    if (var3 == NULL)
        return 8;
    *(unsigned short*)var3 = arg0;
    va_start(var0, arg1);
    for (var1 = 0; var1 < arg1; var1++)
        var3[var1 + 1] = va_arg(var0, unsigned long);
    va_end(var0);
    CleanCacheRange(var3, 0x100);
    var2 = SendCommandToArm7(10, (int)var3, false);
    func_020c7e0c(&data_021142e8, var3, 1);
    if (var2 < 0)
        return 8;
    return 2;
}
