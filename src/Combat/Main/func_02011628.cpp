#include <globaldefs.h>

// USA: func_02011628
extern "C" ARM unsigned short func_02011628(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    return *(unsigned short*)(var0 + 0x617a);
#else
    return *(unsigned short*)(var0 + 0x63da);
#endif
}
