#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020546b4_721 = 0x2c5 };
#else
enum { Enum_020546b4_721 = 0x2d1 };
#endif

// USA: func_020546b4
extern "C" ARM void func_020546b4(void* arg0, int arg1) {
    *(unsigned char*)((char*)arg0 + Enum_020546b4_721) = arg1;
}
