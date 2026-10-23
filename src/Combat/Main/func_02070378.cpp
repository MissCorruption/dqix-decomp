#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_02070378
extern "C" ARM void func_02070378(char* arg0) {
    VectorizedMemset(arg0, 0, 0x70);
    arg0[0x4] = 1;
    arg0[0x8] = 1;
    arg0[0x9] = 1;
    arg0[0xb] = -1;
    *(int*)(arg0 + 0x20) = -1;
    *(int*)(arg0 + 0x24) = -1;
    *(int*)(arg0 + 0x28) = -1;
    *(int*)(arg0 + 0x2c) = -1;
    *(short*)(arg0 + 0x1e) = -1;
    arg0[0xc] = 0;
    *(short*)(arg0 + 0x6c) = -1;
}
