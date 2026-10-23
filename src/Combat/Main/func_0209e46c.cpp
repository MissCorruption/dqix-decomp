#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0209e46c
extern "C" ARM void func_0209e46c(char* arg0) {
    *(int*)(arg0 + 0x6c) = -1;
    memset(arg0 + 0x70, 0, 0x10);
    *(int*)(arg0 + 0x90) = -1;
    *(int*)(arg0 + 0x94) = 0;
}
