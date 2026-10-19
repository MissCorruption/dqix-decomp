#include <globaldefs.h>

#include "System/Memory.h"

// USA: func_ov031_0221e52c  (semantic: FillBytes_0221e52c)
extern "C" THUMB void func_ov031_0221e52c(void* dst, int value, unsigned int length) {
    VectorizedMemset(dst, (unsigned char)value, length);
}
