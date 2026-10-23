#include <globaldefs.h>

// USA: func_02083b60
extern "C" ARM void func_02083b60(unsigned char* arg0, int arg1) {
#if defined(jpn)
    unsigned char* var0 = arg0 + 0x878;
#else
    unsigned char* var0 = arg0 + 0x910;
#endif
    var0[arg1 / 8] |= 1 << (arg1 % 8);
}
