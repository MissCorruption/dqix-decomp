#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0206ac6c
extern "C" ARM int func_0206ac6c(void* arg0, void* arg1) {
    unsigned short var0;
    memcpy(&var0, arg1, 2);
    return (var0 & 0xff00) == 0xff00;
}
