#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0209fe9c
extern "C" ARM void func_0209fe9c(char* arg0) {
    *(int*)(arg0 + 0) = 0;
    *(int*)(arg0 + 4) = 0;
    *(int*)(arg0 + 8) = 0;
    *(int*)(arg0 + 0x60) = -1;
    *(int*)(arg0 + 0x64) = -1;
    *(short*)(arg0 + 0x68) = 0;
    memset(arg0 + 0xc, 0, 0x54);
    memset(arg0 + 0x6a, 0, 0x64);
}
