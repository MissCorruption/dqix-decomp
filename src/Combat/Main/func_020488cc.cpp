#include <globaldefs.h>

// USA: func_020488cc
extern "C" ARM void func_020488cc(unsigned char* arg0, int arg1) {
    arg0[0x180] = arg1 != 0;
    if (arg1) {
        arg0[0x17f] = 0;
    }
}
