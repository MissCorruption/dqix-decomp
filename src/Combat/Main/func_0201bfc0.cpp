#include <globaldefs.h>

#if defined(jpn)
enum { Enum_0201bfc0_10052 = 0x2784 };
#else
enum { Enum_0201bfc0_10052 = 0x2744 };
#endif

// USA: func_0201bfc0
extern "C" ARM int func_0201bfc0(unsigned char* arg0, int arg1) {
    return arg0[Enum_0201bfc0_10052] & (1 << arg1);
}
