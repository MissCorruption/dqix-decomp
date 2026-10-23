#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02011a74
extern "C" ARM void func_02011a74(char* arg0, unsigned int arg1, const char* arg2) {
    if (arg2 == NULL) return;
#if defined(jpn)
    char* var0 = arg0 + 0x621e;
#else
    char* var0 = arg0 + 0x649e;
#endif
    if (var0 == NULL) return;
    if (arg1 > 3) return;
#if defined(jpn)
    var0 += arg1 * 32;
#endif
    strcpy(var0, arg2);
}
