#include <globaldefs.h>

// USA: func_ov000_021681f8
extern "C" ARM int func_ov000_021681f8(int arg0, int arg1) {
    if (arg1 > 1) {
        if (arg0 == 0xbd || arg0 == 0xbe || arg0 == 0xbf || arg0 == 0x110 || arg0 == 0x155) {
            return 0xb33;
        }
    }
    return 0x1000;
}
