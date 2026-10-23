#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0206f510
extern "C" ARM void func_0206f510(char* arg0) {
    memset(arg0, 0, 4);
    *(int*)(arg0 + 4) = 0;
    memset(arg0 + 8, -1, 8);
    memset(arg0 + 0x10, 0, 0x20);
}
