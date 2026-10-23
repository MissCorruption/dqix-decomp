#include <globaldefs.h>

// USA: func_02039820
extern "C" ARM unsigned char func_02039820(void* arg0) {
#if defined(jpn)
    return *((unsigned char*)arg0 + 0x246);
#else
    return *((unsigned char*)arg0 + 0x252);
#endif
}
