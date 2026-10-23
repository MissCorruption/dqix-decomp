#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02069b34
extern "C" ARM int func_02069b34(void** arg0) {
    void* var0 = *arg0;
    unsigned short var1 = 0xff06;
    memcpy(var0, &var1, 2);
    return 2;
}
