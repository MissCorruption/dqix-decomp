#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" char* func_ov031_02218e2c(void*, const char*);
extern "C" int func_ov031_0221ac6c(const char*, unsigned int, char*, int);

// USA: func_ov031_02218e84
extern "C" ARM int func_ov031_02218e84(void* arg0, int arg1, char* arg2, int arg3) {
    char* var0 = func_ov031_02218e2c(arg0, (const char*)arg1);
    if (var0 == NULL) return 0;
    int var1 = func_ov031_0221ac6c(var0, strlen(var0), arg2, arg3);
    if (var1 == -1 || (unsigned int)var1 >= (unsigned int)arg3) return var1;
    arg2[var1] = 0;
    return var1;
}
