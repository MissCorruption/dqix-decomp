#include <globaldefs.h>

// USA: func_0202006c
extern "C" ARM void func_0202006c(unsigned char* base, int bit) {
    int v;
    if (bit < 0) v = 0xf;
    else v = 1 << bit;
    base[0x55e] = v;
}
