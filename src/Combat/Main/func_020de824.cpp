#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_020de824
extern "C" ARM void* func_020de824(void* arg0) {
    memset(arg0, 0, 0x14);
    *((unsigned char*)arg0 + 0x14) = 0;
    return arg0;
}
