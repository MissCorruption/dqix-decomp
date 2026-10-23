#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0207a014
extern "C" ARM char* func_0207a014(char* arg0) {
    memset(arg0, 0, 0xc);
    memset(arg0 + 0xc, 0, 0xc);
    memset(arg0 + 0x18, 0, 0xc);
    memset(arg0 + 0x24, 0, 0xc);
    return arg0;
}
