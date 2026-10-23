#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0203b634
extern "C" ARM void func_0203b634(char* arg0) {
    memset(arg0, 0, 0x20);
    memset(arg0 + 0x20, 0, 0x20);
    memset(arg0 + 0x40, 0, 0x20);
}
