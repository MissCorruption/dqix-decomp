#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02053c4c_336 = 0x144 };
#else
enum { Enum_02053c4c_336 = 0x150 };
#endif

// USA: func_02053c4c
extern "C" ARM void func_02053c4c(char* arg0, char* arg1) {
    *(char**)(arg0 + Enum_02053c4c_336) = arg1;
    *(char**)(arg0 + 0x134) = arg1 + 0x3c;
    *(char**)(arg0 + 0x130) = arg1 + 0x18;
    *(char**)(arg0 + 0x138) = arg1 + 0x94;
}
