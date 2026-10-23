#include <globaldefs.h>

#include "NitroSDK/Memory.h"

// USA: func_ov031_0221e52c
extern "C" THUMB void func_ov031_0221e52c(void* arg0, int arg1, unsigned int arg2) {
    VectorizedMemset(arg0, (unsigned char)arg1, arg2);
}
