#include <globaldefs.h>

// USA: func_02083acc
extern "C" ARM void func_02083acc(unsigned char* arg0, int arg1) {
#if defined(jpn)
    unsigned char* var0 = arg0 + 0x854;
#else
    unsigned char* var0 = arg0 + 0x8ec;
#endif
    var0[arg1 / 8] |= 1 << (arg1 % 8);
}
