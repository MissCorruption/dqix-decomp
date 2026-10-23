#include <globaldefs.h>

extern "C" void InvalidateDataCacheRange(const void* addr, unsigned int size);
extern int* data_021142c0;

// USA: func_020d2a20
extern "C" ARM int func_020d2a20(void) {
    InvalidateDataCacheRange((const void*)data_021142c0, 4);
    return data_021142c0[0];
}
