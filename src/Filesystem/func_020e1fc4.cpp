#include <globaldefs.h>

#if defined(jpn)
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"

extern "C" void* func_020e21e8(const char* arg0, unsigned int* arg1, int arg2);
extern "C" int func_020e0028(void* arg0, SafeAllocator* arg1, void* arg2,
    unsigned int arg3, short* arg4, unsigned short arg5);

// JPN: func_020e1fc4
extern "C" ARM int func_020e1fc4(void* arg0, SafeAllocator* arg1,
    const char* arg2, short* arg3, unsigned short arg4, short arg5, bool arg6) {
    if (arg6)
        BackgroundLoader::AddLockGlobal();
    unsigned int var0;
    void* var1 = func_020e21e8(arg2, &var0, arg5);
    int var2 = func_020e0028(arg0, arg1, var1, var0, arg3, arg4);
    if (arg6)
        BackgroundLoader::RemoveLockGlobal();
    return var2;
}
#endif
