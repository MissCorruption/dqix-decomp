#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0202949c
extern "C" ARM void func_0202949c(char* arg0) {
    *(char*)(arg0 + 0x4) = 0;
    memset(arg0 + 0x4, 0, 0x30);
    *(int*)(arg0 + 0x0) = 0;
    *(int*)(arg0 + 0x34) = 0;
    *(int*)(arg0 + 0x38) = 0;
}
