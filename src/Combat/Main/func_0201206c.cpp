#include <globaldefs.h>

// USA: func_0201206c
extern "C" ARM void func_0201206c(void* arg0, int arg1) {
#if defined(jpn)
    *(int*)((unsigned char*)arg0 + 0x6000 + 0xfb8) = arg1;
#else
    *(int*)((unsigned char*)arg0 + 0x7000 + 0x1f8) = arg1;
#endif
}
