#include <globaldefs.h>

// USA: func_0201206c
extern "C" ARM void func_0201206c(void* obj, int value) {
#if defined(jpn)
    *(int*)((unsigned char*)obj + 0x6000 + 0xfb8) = value;
#else
    *(int*)((unsigned char*)obj + 0x7000 + 0x1f8) = value;
#endif
}
