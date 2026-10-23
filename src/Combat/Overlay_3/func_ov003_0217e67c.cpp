#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void func_ov009_02184848(int arg0);
extern "C" void func_020a1f4c(int arg0);

// USA: func_ov003_0217e67c
extern "C" ARM void func_ov003_0217e67c(char* arg0) {
    int var0 = *(int*)(arg0 + 0x1c);
    if (var0 != 0) {
        func_ov009_02184848(var0);
        *(int*)(arg0 + 0x1c) = 0;
        func_020a1f4c(1);
    }
    ((SafeAllocator*)(arg0 + 8))->Destroy();
}
