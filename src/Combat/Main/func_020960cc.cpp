#include <globaldefs.h>

// USA: func_020960cc
extern "C" ARM void func_020960cc(int arg0, unsigned char* arg1, int arg2) {
    if (arg2 > 0xcc) return;
    if (arg2 < 0) return;
    arg1[arg2 >> 3] &= ~(unsigned char)(1 << (arg2 & 7));
}
