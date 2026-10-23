#include <globaldefs.h>

// USA: func_02011610
extern "C" ARM int func_02011610(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    return *(unsigned short*)(var0 + 0x617a) != 0;
#else
    return *(unsigned short*)(var0 + 0x63da) != 0;
#endif
}
