#include <globaldefs.h>

extern "C" int func_020db2dc(int arg0, int arg1);
void DMAMemsetSynchronous(int, unsigned int, unsigned int, unsigned int);
void CleanInvalidateCacheRange(const void* addr, unsigned int size);
void CleanCacheRange(const void* addr, unsigned int size);

typedef void (*Type_01ff8b48)(int, int, int);
extern Type_01ff8b48 data_020f2904[];

// USA: func_020db304
extern "C" ARM void func_020db304(int arg0, int arg1) {
    int var0 = func_020db2dc(arg0, arg1);
    DMAMemsetSynchronous(3, var0, 0xc0, 0x400);
    CleanInvalidateCacheRange((const void*)(var0), 0x400);
    data_020f2904[arg1](var0, 0, 0x400);
    CleanCacheRange((const void*)(var0), 0x400);
}
