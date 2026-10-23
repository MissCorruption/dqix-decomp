#include <globaldefs.h>

// USA: func_02020028
extern "C" ARM void func_02020028(unsigned char* arg0, int arg1, int arg2) {
    if (arg2 < 0) {
        if (arg1) arg0[0x55d] = 0xf;
        else arg0[0x55d] = 0;
    } else {
        if (arg1) arg0[0x55d] |= (1 << arg2);
        else arg0[0x55d] &= ~(1 << arg2);
    }
}
