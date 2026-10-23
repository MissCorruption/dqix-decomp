#include <globaldefs.h>

// USA: func_020546a0
extern "C" ARM void func_020546a0(void* arg0, int arg1) {
#if defined(jpn)
    *(unsigned char*)((char*)arg0 + 0x2c4) = arg1;
#else
    *(unsigned char*)((char*)arg0 + 0x2d0) = arg1;
#endif
}
