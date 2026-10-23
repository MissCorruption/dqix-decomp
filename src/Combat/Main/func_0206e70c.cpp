#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0206e70c
extern "C" ARM void func_0206e70c(char* arg0) {
    memcpy(arg0 + 0x334, arg0, 0xce);
    *(int*)(arg0 + 0x404) = 0;
    memcpy(arg0 + 0x40c, arg0 + 0x323, 0xf);
}
