#include <globaldefs.h>

// USA: func_ov000_0215fad4
extern "C" ARM int func_ov000_0215fad4(unsigned char* arg0) {
    if (arg0[0x8e47] == 0) {
        return -1;
    }
    unsigned char var0 = --arg0[0x8e47];
    unsigned char* var1 = arg0 + var0;
    return var1[0x8e44];
}
