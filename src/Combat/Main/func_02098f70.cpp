#include <globaldefs.h>
#include "std_library_functions.h"
extern "C" int func_020421a0(void);
extern "C" void func_02046608(int, int, void*, int, int, int, int);
// USA: func_02098f70
extern "C" void func_02098f70(int* arg0, void* arg1, int arg2, int arg3) {
    char** var0 = (char**)arg0;
    int var1 = func_020421a0();
    memcpy(*var0, (void*)arg2, arg3);
    *var0 += arg3;
    func_02046608(var1, 0xc, arg1, *(int*)var0, 0xe3, 0, 1);
    *var0 += strlen(*var0);
}
