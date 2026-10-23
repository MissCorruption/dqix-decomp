#include <globaldefs.h>

// USA: func_02053604
extern "C" ARM int func_02053604(signed char* arg0) {
#if defined(jpn)
    signed char var0 = arg0[0x170];
#else
    signed char var0 = arg0[0x17c];
#endif
    if (var0 == 0) return -1;
#if defined(jpn)
    signed char var1 = arg0[0x171];
#else
    signed char var1 = arg0[0x17d];
#endif
    if (var1 >= 4) return -1;
    signed char* var2 = arg0 + var1;
#if defined(jpn)
    return var2[0x16c];
#else
    return var2[0x178];
#endif
}
