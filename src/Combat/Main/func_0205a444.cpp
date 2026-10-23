#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0205a444
extern "C" ARM void func_0205a444(char* arg0) {
    memset(arg0, 0, 0x24);
    memset(arg0 + 0x24, 0, 0x14);
    *(int*)(arg0 + 0x38) = 0;
    *(int*)(arg0 + 0x40) = 0;
    *(int*)(arg0 + 0x44) = 0;
    *(int*)(arg0 + 0x48) = 0;
    *(short*)(arg0 + 0x4c) = 0;
    *(short*)(arg0 + 0x4e) = 0;
    *(int*)(arg0 + 0x3c) = 0;
    *(char*)(arg0 + 0x50) = 1;
}
