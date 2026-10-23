#include <globaldefs.h>
#include "NitroSDK/Cache.h"
#include "NitroSDK/Memory.h"

extern "C" void* func_020d41d8(void);
extern "C" int func_020d424c(int arg0, int arg1);
extern "C" void func_020d404c(int arg0, int arg1);
extern "C" int func_020d40bc(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

struct Struct_020d5bfc {
    unsigned char unknown_0_[4];
    void* unknown_4_;
};


// USA: func_020d5bfc
extern "C" ARM int func_020d5bfc(int arg0, void* arg1, void* arg2, unsigned int arg3) {
    struct Struct_020d5bfc* var0 = (struct Struct_020d5bfc*)func_020d41d8();
    int var1 = func_020d424c(1, 0xb);
    if (var1 != 0) return var1;
    InvalidateDataCacheRange((const void*)((int)((char*)var0->unknown_4_ + 0x10)), 4);
    if (*(int*)((char*)var0->unknown_4_ + 0x10) == 0) return 3;
    if (arg3 > 0x5e4) return 6;
    CleanCacheRange(arg2, arg3);
    func_020d404c(0x12, arg0);
    unsigned char var2[8];
    VectorizedInvertedMemcpy(arg1, var2, 6);
    int var3 = func_020d40bc(0x12, 4, *(int*)&var2[0], *(int*)&var2[4], (int)arg2, (int)arg3);
    return (var3 == 0) ? 2 : var3;
}
