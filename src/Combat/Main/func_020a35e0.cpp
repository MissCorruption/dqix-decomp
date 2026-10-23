#include <globaldefs.h>

// USA: func_020a35e0
extern "C" ARM int func_020a35e0(unsigned char* arg0, unsigned char arg1) {
    if (arg1 >= 4) {
        return 0;
    }
    return arg0[0x34] & (1 << arg1);
}
