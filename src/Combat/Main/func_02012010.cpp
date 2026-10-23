#include <globaldefs.h>

// USA: func_02012010
extern "C" ARM void func_02012010(void* arg0, int arg1) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    *(int*)(var0 + 0x7c98) = arg1;
#else
    *(int*)(var0 + 0x7f6c) = arg1;
#endif
}
