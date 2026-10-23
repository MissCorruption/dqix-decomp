#include <globaldefs.h>

extern "C" void* func_020e52a0(void* arg0, int arg1);

#if defined(jpn)
#include "std_library_functions.h"

struct Struct_0201099c_3;

extern "C" int func_020e0440(Struct_0201099c_3* arg0, int arg1);
// USA: func_020e5294
extern "C" ARM char* func_020e207c(Struct_0201099c_3* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return NULL;
    const char* var0 = reinterpret_cast<const char*>(func_020e0440(arg0, arg2));
    if (var0 == NULL) {
        arg1[0] = 0;
        return NULL;
    }
    strcpy(arg1, var0);
    return arg1;
}
#else
// USA: func_020e5294
extern "C" ARM void* func_020e5294(void* arg0, int arg1) {
    return func_020e52a0(arg0, arg1);
}
#endif
