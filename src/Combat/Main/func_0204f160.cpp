#include <globaldefs.h>

// USA: func_0204f160
extern "C" ARM void func_0204f160(unsigned char* arg0, int arg1, int arg2) {
    if ((arg0[0xc5] & 1) == 0) {
        *(int*)(arg0 + 0xa0) = arg1;
        arg0[0xc4] = arg2;
    }
}
