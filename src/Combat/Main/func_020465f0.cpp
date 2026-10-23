#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020465f0_2306 = 0x7d2 };
#else
enum { Enum_020465f0_2306 = 0x902 };
#endif

// USA: func_020465f0
extern "C" ARM void func_020465f0(unsigned char* arg0, int arg1, unsigned char arg2) {
    if (arg1 < 0) {
        return;
    }
    if (arg1 < 0x10) {
        (arg0 + arg1)[Enum_020465f0_2306] = arg2;
    }
}
