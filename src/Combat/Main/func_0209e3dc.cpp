#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0209e3dc
extern "C" ARM void func_0209e3dc(char* arg0, int arg1) {
    *(int*)(arg0 + 0x0) = 0;
    *(int*)(arg0 + 0x4) = arg1;
    *(int*)(arg0 + 0x8) = 0;
    *(int*)(arg0 + 0xc) = 0;
    *(int*)(arg0 + 0x64) = -1;
    *(int*)(arg0 + 0x68) = -1;
    *(int*)(arg0 + 0x6c) = -1;
    memset(arg0 + 0x70, 0, 0x10);
    *(int*)(arg0 + 0x90) = -1;
    *(int*)(arg0 + 0x94) = 0;
    *(int*)(arg0 + 0x98) = 0;
    memset(arg0 + 0x9c, 0, 0x400);
    *(int*)(arg0 + 0x49c) = 0;
    memset(arg0 + 0x4a0, 0, 0x400);
    memset(arg0 + 0x10, 0, 0x54);
    *(int*)(arg0 + 0x84) = 0;
    *(int*)(arg0 + 0x88) = 0;
    *(int*)(arg0 + 0x8c) = 0;
}
