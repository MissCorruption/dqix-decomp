#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_02011a24
extern "C" ARM void func_02011a24(char* arg0, void* arg1) {
#if defined(jpn)
    VectorizedInvertedMemcpy(arg1, arg0 + 0x6202, 0x1c);
#else
    VectorizedInvertedMemcpy(arg1, arg0 + 0x6482, 0x1c);
#endif
}
