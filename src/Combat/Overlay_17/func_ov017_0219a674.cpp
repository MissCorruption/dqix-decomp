#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: func_ov017_0219a674
extern "C" ARM void func_ov017_0219a674(unsigned char* arg0) {
    VectorizedMemset(arg0, 0, 0x14);
    arg0[0x0] = 0xf;
    arg0[0x1] = 0x12;
    *(unsigned short*)(arg0 + 0x2) = 0xff;
    arg0[0x4] = 0;
    *(unsigned short*)(arg0 + 0x10) = 0x3244;
}
