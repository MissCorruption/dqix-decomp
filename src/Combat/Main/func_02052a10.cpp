#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_020426bc(void*, void*, int);

// USA: func_02052a10
extern "C" ARM void* func_02052a10(char* arg0) {
    memset(arg0 + 0x141, 0, 0xc);
    func_020426bc(*(void**)(arg0 + 0x134), arg0 + 0x141, 1);
    return arg0 + 0x141;
}
