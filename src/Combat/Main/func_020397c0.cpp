#include <globaldefs.h>

// USA: func_020397c0
extern "C" ARM void func_020397c0(void* arg0) {
#if defined(jpn)
    *(unsigned char*)((char*)arg0 + 0x247) = 1;
#else
    *(unsigned char*)((char*)arg0 + 0x253) = 1;
#endif
}
