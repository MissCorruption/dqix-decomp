#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_02098efc
extern "C" ARM void func_02098efc(char* arg0, int arg1, const void* arg2, unsigned int arg3) {
    if (arg2 == NULL) return;
    VectorizedInvertedMemcpy(arg2, arg0 + arg1, arg3);
}
