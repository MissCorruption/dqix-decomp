#include <globaldefs.h>

// USA: func_ov017_021a85e8
#pragma optimize_for_size off
extern "C" ARM int func_ov017_021a85e8(unsigned char* arg0, int arg1) {
    short* var0 = (short*)(arg0 + 0x38);
    if (*var0 > arg1) {
        *var0 -= arg1;
    } else {
        *var0 = 0;
        return 0;
    }
    return 1;
}
