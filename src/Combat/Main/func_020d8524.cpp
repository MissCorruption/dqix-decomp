#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/Cache.h"

#if defined(jpn)
#define func_020d8524 func_020d9e88
#endif

// USA: func_020d8524
extern "C" ARM unsigned int func_020d8524(void* dst, const void* src, unsigned int length) {
    VectorizedInvertedMemcpy(src, dst, length);
    CleanInvalidateCacheRange(dst, length);
    return length;
}
