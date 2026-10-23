#include <globaldefs.h>

// USA: func_02053cc4
extern "C" ARM void func_02053cc4(unsigned char* arg0, int arg1) {
#if defined(jpn)
    *(int*)(arg0 + 0x17c) = arg1;
#else
    *(int*)(arg0 + 0x188) = arg1;
#endif
}
