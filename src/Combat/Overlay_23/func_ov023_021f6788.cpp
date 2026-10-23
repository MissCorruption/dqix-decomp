#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_ov023_021f6788
extern "C" ARM void func_ov023_021f6788(char* arg0) {
    VectorizedMemset(arg0, 0, 0x16);
    *(short*)(arg0 + 0x12) = -1;
    *(short*)(arg0 + 0x14) = -1;
}
