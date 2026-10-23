#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02069e0c
extern "C" ARM int func_02069e0c(void** arg0) {
    void* var0 = *arg0;
    unsigned short var1 = 0xff02;
    memcpy(var0, &var1, 2);
    return 2;
}
