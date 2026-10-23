#include <globaldefs.h>

extern signed char data_020e6ddc;

// USA: func_02012f68
extern "C" ARM int func_02012f68(int arg0) {
    arg0 += -20000;
    if (arg0 < 0) return -1;
    if (arg0 >= 0x3c && arg0 <= 0x3f) {
        arg0 = (&data_020e6ddc)[arg0 - 0x3c];
    }
    if (arg0 >= 0x3c) return -1;
    return arg0;
}
