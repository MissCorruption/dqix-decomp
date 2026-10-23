#include <globaldefs.h>

// USA: func_020e16dc
extern "C" ARM void func_020e16dc(unsigned char* arg0, int arg1, short arg2) {
    if (arg1 < 0) return;
    if (arg1 < 2) {
        *(short*)(arg0 + 0x22 + arg1 * 2) = arg2;
    }
}
