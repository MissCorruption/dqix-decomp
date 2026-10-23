#include <globaldefs.h>

// USA: func_02083ca0
extern "C" ARM void func_02083ca0(unsigned char* arg0, int arg1) {
#if defined(jpn)
    *(unsigned short*)(arg0 + 0x8bc) |= 1 << arg1;
#else
    *(unsigned short*)(arg0 + 0x954) |= 1 << arg1;
#endif
#if defined(jpn)
    *(int*)(arg0 + 0x8b8) = arg1;
#else
    *(int*)(arg0 + 0x950) = arg1;
#endif
}
