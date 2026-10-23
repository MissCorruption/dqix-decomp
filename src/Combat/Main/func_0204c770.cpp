#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0204c770
extern "C" ARM void func_0204c770(char* arg0, void* arg1) {
    memset(arg0 + 0xdb, 0, 4);
    if (arg1 == NULL) return;
    memcpy(arg0 + 0xdb, arg1, 4);
}
