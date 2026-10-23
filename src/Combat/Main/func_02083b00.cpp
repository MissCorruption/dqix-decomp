#include <globaldefs.h>

// USA: func_02083b00
extern "C" ARM int func_02083b00(unsigned char* arg0, int arg1) {
    unsigned char* var0 = arg0 + arg1 / 8;
#if defined(jpn)
    return (1 << (arg1 % 8)) & var0[0x854];
#else
    return (1 << (arg1 % 8)) & var0[0x8ec];
#endif
}
