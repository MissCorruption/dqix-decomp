#include <globaldefs.h>

// USA: func_02083bc0
extern "C" ARM int func_02083bc0(unsigned char* arg0, int arg1) {
#if defined(jpn)
    enum { Enum_02083bc0_2320 = 0x878 };
#else
    enum { Enum_02083bc0_2320 = 0x910 };
#endif
    unsigned char* var0 = arg0 + Enum_02083bc0_2320;
    return var0[arg1 / 8] & (1 << (arg1 % 8));
}
