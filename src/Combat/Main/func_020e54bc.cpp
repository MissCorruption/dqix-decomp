#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


extern "C" int func_020e553c(void* arg0, int* arg1, int arg2, int arg3);
extern "C" int func_020e5334(int arg0, int arg1, int arg2, int arg3);

// USA: func_020e54bc
extern "C" ARM int func_020e54bc(int arg0, void* arg1, int arg2, int arg3, unsigned char arg4, int arg5) {
    int var0;
    int var1;
    int var2;

    if (arg0 == 0 || arg1 == NULL || arg2 < 0) {
        return 0;
    }
    if (arg4 != 0) {
        BackgroundLoader::AddLockGlobal();
    }
    var2 = func_020e553c(arg1, &var0, arg3, arg5);
    var1 = func_020e5334(arg0, var2, var0, arg2);
    if (arg4 != 0) {
        BackgroundLoader::RemoveLockGlobal();
    }
    return var1;
}
