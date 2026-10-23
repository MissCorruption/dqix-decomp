#include <globaldefs.h>

extern "C" int func_020c7ea0(void*, void*, int);
extern "C" void func_020c7f44(void*, void*, int);
extern "C" void InvalidateDataCacheRange(const void* addr, unsigned int size);

extern int data_021142e8;

// USA: func_020d4064
extern "C" ARM void* func_020d4064(void) {
    void* var0;
    if (func_020c7ea0(&data_021142e8, &var0, 0) == 0) {
        return NULL;
    }
    InvalidateDataCacheRange((const void*)((int)var0), 2);
    if (*(unsigned short*)var0 & 0x8000) {
        return var0;
    }
    func_020c7f44(&data_021142e8, var0, 1);
    return NULL;
}
