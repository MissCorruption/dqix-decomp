#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_02059cc8
extern "C" ARM void func_02059cc8(unsigned char* arg0) {
    memset(arg0, 0, 0xd4);
    *(short*)(arg0 + 0xb2) = -1;
    *(short*)(arg0 + 0xb4) = -1;
    arg0[0xcc] = (arg0[0xcc] | 4) & ~8;
}
