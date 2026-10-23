#include <globaldefs.h>

// USA: func_ov031_0223e3d4
extern "C" ARM int func_ov031_0223e3d4(unsigned int arg0) {
    if (arg0 >= 0x41 && arg0 <= 0x5a) return arg0 - 0x41;
    if (arg0 >= 0x61 && arg0 <= 0x7a) return arg0 - 0x47;
    if (arg0 >= 0x30 && arg0 <= 0x39) return arg0 + 4;
    if (arg0 == 0x2e) return 0x3e;
    if (arg0 == 0x2d) return 0x3f;
    return -1;
}
