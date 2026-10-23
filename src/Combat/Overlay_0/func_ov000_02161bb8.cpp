#include <globaldefs.h>

// USA: func_ov000_02161bb8
extern "C" ARM int func_ov000_02161bb8(unsigned char* arg0) {
    for (;;) {
        unsigned char var0 = *arg0;
        unsigned int var1 = *(unsigned int*)(arg0 + 4);
        if (!(var1 & (1 << var0))) {
            return var0;
        }
        *arg0 = var0 + 1;
        if (*arg0 >= 0x12) {
            *arg0 = 1;
        }
    }
}
