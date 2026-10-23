#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_ov023_021f6e90
extern "C" ARM void func_ov023_021f6e90(char* arg0, int arg1, const void* arg2) {
    if (arg1 >= 3) return;
    VectorizedInvertedMemcpy(arg2, arg0 + 0x30 + arg1 * 0x16, 0x16);
}
