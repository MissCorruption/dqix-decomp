#include <globaldefs.h>

#include "NitroSDK/Cache.h"

extern "C" void* func_020d41d8(void);
extern "C" int func_020d424c(int arg0, int arg1, int arg2);

struct Struct_020d4900 {
    unsigned char unknown_0_[4];
    void* unknown_4_;
};

// USA: func_020d4900
extern "C" ARM int func_020d4900(void) {
    struct Struct_020d4900* var0 = (struct Struct_020d4900*)func_020d41d8();
    if (func_020d424c(2, 7, 8) != 0) return 0;
    InvalidateDataCacheRange((const void*)((char*)var0->unknown_4_ + 0xc), 4);
    if (*(int*)((char*)var0->unknown_4_ + 0xc) == 1) return 0;
    InvalidateDataCacheRange((const void*)((char*)var0->unknown_4_ + 0x188), 2);
    int var1 = (*(unsigned short*)((char*)var0->unknown_4_ + 0x188) == 0);
    InvalidateDataCacheRange((const void*)((char*)var0->unknown_4_ + 0x3e), 2);
    unsigned short var2 = *(unsigned short*)((char*)var0->unknown_4_ + 0x3e);
    if (var1 == 1) {
        InvalidateDataCacheRange((const void*)((char*)var0->unknown_4_ + 0xf8), 2);
        unsigned short var3 = *(unsigned short*)((char*)var0->unknown_4_ + 0xf8);
        return (((var2 + 0xc) * var3 + 0x29) & ~0x1f) << 1;
    }
    return ((var2 + 0x51) & ~0x1f) << 1;
}
