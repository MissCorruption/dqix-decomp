#include <globaldefs.h>

// USA: func_ov031_0220c09c
extern "C" ARM unsigned int func_ov031_0220c09c(volatile unsigned short* arg0) {
    unsigned short var0 = arg0[0];
    unsigned short var1 = arg0[-1];
    (void)var0;
    return (unsigned int)var1 << 16;
}
