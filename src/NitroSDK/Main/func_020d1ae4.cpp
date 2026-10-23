#include <globaldefs.h>

// USA: func_020d1ae4
extern "C" ARM int func_020d1ae4(unsigned int arg0) {
    arg0 = arg0 - ((arg0 >> 1) & 0x55555555);
    arg0 = (arg0 & 0x33333333) + ((arg0 >> 2) & 0x33333333);
    arg0 = (arg0 + (arg0 >> 4)) & 0x0f0f0f0f;
    arg0 = arg0 + (arg0 >> 8);
    arg0 = arg0 + (arg0 >> 16);
    return arg0 & 0xff;
}
