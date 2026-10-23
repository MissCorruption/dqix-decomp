#include <globaldefs.h>

// USA: func_02011634
extern "C" ARM void func_02011634(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;
#if defined(jpn)
    *(unsigned short*)(var0 + 0x617a) = 0;
#else
    *(unsigned short*)(var0 + 0x63da) = 0;
#endif
}
