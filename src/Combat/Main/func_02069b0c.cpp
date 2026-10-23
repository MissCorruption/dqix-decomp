#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02069b0c
extern "C" ARM int func_02069b0c(void** arg0) {
    void* var0 = *arg0;
    unsigned short var1 = 0xff05;
    memcpy(var0, &var1, 2);
    return 2;
}
