#include <globaldefs.h>

// USA: func_0205c6e4
extern "C" ARM unsigned int func_0205c6e4(unsigned char* arg0) {
    unsigned int var0 = 0;
    if (arg0[0x94] && arg0[0x50]) var0 = *(unsigned int*)(arg0 + 0x8);
    if (arg0[0x95]) var0 = *(unsigned int*)(arg0 + 0x58);
    return var0;
}
