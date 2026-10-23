#include <globaldefs.h>

// USA: func_0201201c
extern "C" ARM int func_0201201c(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    return *(int*)(var0 + 0x7c98);
#else
    return *(int*)(var0 + 0x7f6c);
#endif
}
