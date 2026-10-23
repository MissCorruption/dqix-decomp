#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02069790
extern "C" ARM int func_02069790(void** arg0) {
    void* var0 = *arg0;
    unsigned short var1 = 0xff0d;
    memcpy(var0, &var1, 2);
    return 2;
}
