#include <globaldefs.h>

// USA: func_0209609c
extern "C" ARM void func_0209609c(int arg0, unsigned char* arg1, int arg2) {
    if (arg2 > 0xcc) return;
    if (arg2 < 0) return;
    arg1[arg2 >> 3] |= (unsigned char)(1 << (arg2 & 7));
}
