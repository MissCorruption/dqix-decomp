#include <globaldefs.h>

// USA: func_02053f6c
extern "C" ARM void func_02053f6c(void* arg0, unsigned char arg1) {
#if defined(jpn)
    *(unsigned char*)((char*)arg0 + 0x1a4) = arg1;
#else
    *(unsigned char*)((char*)arg0 + 0x1b0) = arg1;
#endif
}
