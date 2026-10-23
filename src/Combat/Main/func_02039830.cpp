#include <globaldefs.h>

// USA: func_02039830
extern "C" ARM void func_02039830(void* arg0) {
#if defined(jpn)
    *(unsigned char*)((char*)arg0 + 0x246) = *(unsigned char*)((char*)arg0 + 0x247);
#else
    *(unsigned char*)((char*)arg0 + 0x252) = *(unsigned char*)((char*)arg0 + 0x253);
#endif
}
