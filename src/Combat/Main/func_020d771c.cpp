#include <globaldefs.h>

// USA: func_020d771c
extern "C" ARM void func_020d771c(unsigned char* arg0) {
    unsigned short* var0 = (unsigned short*)(arg0 + 0xa24);
    unsigned short* var1 = (unsigned short*)(arg0 + 0xa26);
    *var1 |= (unsigned short)(*var0 & 0xff0);
}
