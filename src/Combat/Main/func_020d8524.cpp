#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/Cache.h"

#if defined(jpn)
#define func_020d8524 func_020d9e88
#endif

// USA: func_020d8524
extern "C" ARM unsigned int func_020d8524(void* arg0, const void* arg1, unsigned int arg2) {
    VectorizedInvertedMemcpy(arg1, arg0, arg2);
    CleanInvalidateCacheRange(arg0, arg2);
    return arg2;
}
