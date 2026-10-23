#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_020c013c
extern "C" ARM int func_020c013c(char* arg0, void* arg1, int arg2, int arg3) {
    VectorizedInvertedMemcpy(*(char**)(arg0 + 0xa4) + arg3, arg1, arg2);
    return arg2;
}
