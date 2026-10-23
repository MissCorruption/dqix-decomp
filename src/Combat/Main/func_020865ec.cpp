#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_020865ec
extern "C" ARM void func_020865ec(char* arg0) {
    memset(arg0, 0, 0x14);
    *(char*)(arg0 + 0x10) = -1;
}
