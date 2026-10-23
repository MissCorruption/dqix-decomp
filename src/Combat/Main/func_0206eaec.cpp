#include <globaldefs.h>

// USA: func_0206eaec
extern "C" ARM int func_0206eaec(unsigned char *arg0, int arg1, int arg2) {
    unsigned char *var0 = arg0 + arg1 * 0x20;
    var0 += (arg2 << 13) >> 16;
    unsigned short var1 = (arg2 & 7) ^ 7;
    return ((var0[0x41b] >> var1) & 1) != 0;
}
