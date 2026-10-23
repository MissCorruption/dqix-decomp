#include <globaldefs.h>

// USA: func_020488ac
extern "C" ARM void func_020488ac(unsigned char* arg0, int arg1) {
    arg0[0x17f] = arg1 != 0;
    if (arg1) {
        arg0[0x180] = 0;
    }
}
