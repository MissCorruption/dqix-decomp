#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02069b84
extern "C" ARM int func_02069b84(void** arg0) {
    void* var0 = *arg0;
    unsigned short var1 = 0xff08;
    memcpy(var0, &var1, 2);
    return 2;
}
