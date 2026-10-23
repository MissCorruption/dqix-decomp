#include <globaldefs.h>

extern "C" unsigned char* func_0208e0a8(unsigned char* arg0);

#if defined(jpn)
enum { Enum_020120d4_3290 = 0xa7a };
#else
enum { Enum_020120d4_3290 = 0xcda };
#endif

// USA: func_020120d4
extern "C" ARM void func_020120d4(unsigned char* arg0, unsigned char arg1) {
    unsigned char* var0 = arg0 + 0x5000;
    var0[Enum_020120d4_3290] = arg1;
    unsigned char* var1 = func_0208e0a8(var0);
    var1[0xa] = 0;
}
