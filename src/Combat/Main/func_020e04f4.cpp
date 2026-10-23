#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
#include "Filesystem/FileIO.h"

extern "C" void* func_020e21e8(const char* arg0, unsigned int* arg1, int arg2);
extern "C" char* func_020e046c(char* arg0, void* arg1, void* arg2, int arg3);

// JPN: func_020e2168
extern "C" ARM int func_020e2168(char* arg0, const char* arg1,
    int arg2, int arg3, bool arg4) {
    if (arg0 == NULL || arg1 == NULL || arg2 < 0)
        return 0;
    if (arg4)
        BackgroundLoader::AddLockGlobal();
    unsigned int var0;
    func_020e21e8(arg1, &var0, arg3);
    char* var1 = func_020e046c(arg0, data_0211e33c, (void*)var0, arg2);
    if (arg4)
        BackgroundLoader::RemoveLockGlobal();
    return (int)var1;
}
#else
extern "C" int func_020e0574(void* arg0, int* arg1, int arg2, int arg3);
extern "C" int func_020e046c(int arg0, int arg1, int arg2, int arg3);

// USA: func_020e04f4
extern "C" ARM int func_020e04f4(int arg0, void* arg1, int arg2, int arg3, unsigned char arg4, int arg5) {
    int var0;
    int var1;
    int var2;

    if (arg0 == 0 || arg1 == NULL || arg2 < 0) {
        return 0;
    }
    if (arg4 != 0) {
        BackgroundLoader::AddLockGlobal();
    }
    var2 = func_020e0574(arg1, &var0, arg3, arg5);
    var1 = func_020e046c(arg0, var2, var0, arg2);
    if (arg4 != 0) {
        BackgroundLoader::RemoveLockGlobal();
    }
    return var1;
}
#endif
