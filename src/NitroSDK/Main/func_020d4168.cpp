#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void* func_020d4064(void);
void CleanCacheRange(const void* addr, unsigned int size);
int SendCommandToArm7(int a, int p, bool c);
extern "C" int func_020c7e0c(void* arg0, void* arg1, int arg2);

extern int data_021142e8;

// USA: func_020d4168
extern "C" ARM int func_020d4168(void* arg0, unsigned int arg1) {
    void* var0 = func_020d4064();
    if (var0 == NULL) {
        return 8;
    }
    VectorizedInvertedMemcpy(arg0, var0, arg1);
    CleanCacheRange((const void*)((int)var0), arg1);
    int var1 = SendCommandToArm7(0xa, (int)var0, 0);
    func_020c7e0c(&data_021142e8, var0, 1);
    return (var1 < 0) ? 8 : 2;
}
