#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_0208e4bc
extern "C" ARM void func_0208e4bc(char* arg0) {
    memset(arg0, 0, 4);
    memset(arg0 + 0x10, 0, 0x20);
    *(int*)(arg0 + 4) = 0;
    *(short*)(arg0 + 8) = 0;
    arg0[0xa] = 0;
    *(int*)(arg0 + 0xc) = 0;
}
