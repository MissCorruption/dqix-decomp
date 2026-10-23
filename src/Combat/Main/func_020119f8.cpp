#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_020119f8
extern "C" ARM unsigned char func_020119f8(char* arg0, void* arg1) {
    if (arg1 != NULL) {
#if defined(jpn)
        VectorizedInvertedMemcpy(arg0 + 0x6202, arg1, 0x1c);
#else
        VectorizedInvertedMemcpy(arg0 + 0x6482, arg1, 0x1c);
#endif
    }
#if defined(jpn)
    return *(unsigned char*)(arg0 + 0x6200);
#else
    return *(unsigned char*)(arg0 + 0x6480);
#endif
}
