#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02069be4
extern "C" ARM int func_02069be4(void** arg0, signed char* arg1) {
    void* var0 = *arg0;
    unsigned short var1 = 0xffe0;
    var1 += (unsigned short)(*arg1 - 0x40);
    unsigned short var2 = var1;
    memcpy(var0, &var2, 2);
    return 2;
}
