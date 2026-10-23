#if !defined(jpn)
#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Cache.h"

extern "C" int func_020421a0(void);
extern "C" void func_020c9820(void);
extern "C" void func_020230fc(void* arg0, void* arg1, int arg2);
extern "C" int LoadToSubObjVRAM(void* buf, int a1, int a2);

// USA: func_02023330
extern "C" ARM int func_02023330(void* arg0, int arg1)
{
    void* var0 = (void*)func_020421a0();
    int var1 = 0;
    int var2 = var1;
    void* var3 = *(void**)((char*)var0 + 0x60);
    int var4 = 0x40;
    while (var2 < 0x12)
    {
        memcpy((char*)var3 + var1, (char*)arg0 + 0xbf0, var4);
        var1 += 0x40;
        var2++;
    }

    func_020230fc(arg0, var3, 0);
    if (arg1 != 0)
    {
        func_020c9820();
    }

    CleanInvalidateCacheRange(var3, 0x480);
    LoadToSubObjVRAM(var3, 0x2c20, 0x480);

    return 1;
}

#endif
