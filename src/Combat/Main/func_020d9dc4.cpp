#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_020d9dc4
extern "C" ARM void func_020d9dc4(char* arg0, char* arg1) {
    memcpy(arg0 + 0x10, arg1, strlen(arg1));
}
