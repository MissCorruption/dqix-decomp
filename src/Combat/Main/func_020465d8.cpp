#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020465d8_2289 = 0x7c1 };
#else
enum { Enum_020465d8_2289 = 0x8f1 };
#endif

// USA: func_020465d8
extern "C" ARM void func_020465d8(unsigned char* arg0, int arg1, unsigned char arg2) {
    if (arg1 < 0) {
        return;
    }
    if (arg1 < 0x10) {
        (arg0 + arg1)[Enum_020465d8_2289] = arg2;
    }
}
