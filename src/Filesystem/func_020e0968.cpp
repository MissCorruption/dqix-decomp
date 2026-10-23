#include <globaldefs.h>
#include "Filesystem/FileIO.h"
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
extern "C" int func_020e12ec(char* arg0, const char* arg1);
extern "C" int func_020da930(const char* arg0, void* arg1,
    unsigned int* arg2, unsigned int arg3, bool arg4);

// JPN: func_020e0968
extern "C" ARM void* func_020e0968(const char* arg0, unsigned int* arg1) {
    if (arg0 == 0)
        return 0;
    char var0[0x40];
    *arg1 = 0;
    func_020e12ec(var0, arg0);
    BackgroundLoader::FreeAllocationsGlobal();
    func_020da930(var0, data_0211e33c, arg1, sizeof(data_0211e33c), false);
    if (*arg1 != 0)
        return data_0211e33c;
    return 0;
}
#endif
