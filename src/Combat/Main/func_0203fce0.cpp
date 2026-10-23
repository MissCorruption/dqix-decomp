#include <globaldefs.h>
#if defined(jpn)
#define data_020efe50 data_020efd68
#endif
#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

void* LoadFileIntoMemory(const char*, void*, unsigned int*);

extern "C" void func_0203fd5c(void* arg0, void* arg1, int arg2, void* arg3);

extern char data_020efe50[];
extern char data_0211e33c[];

// USA: func_0203fce0
extern "C" ARM void func_0203fce0(void* arg0, char* arg1, int arg2) {
    char var0[0x80];
    char* var1 = arg1 + strlen(arg1);
    if (var1[-1] == 'r') {
        sprintf(var0, data_020efe50, arg1);
        BackgroundLoader::AddLockGlobal();
        void* var2 = LoadFileIntoMemory(var0, data_0211e33c, (unsigned int*)0);
        if (var2 != NULL) {
            func_0203fd5c(arg0, var0, arg2, var2);
        }
        BackgroundLoader::RemoveLockGlobal();
    }
}
