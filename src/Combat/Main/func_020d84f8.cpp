#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/Cache.h"

#if defined(jpn)
#define func_020d84f8 func_020d9e5c
#endif

// USA: func_020d84f8
extern "C" ARM unsigned int func_020d84f8(void* arg0, unsigned int arg1) {
    VectorizedMemset(arg0, 0, arg1);
    CleanInvalidateCacheRange(arg0, arg1);
    return arg1;
}
