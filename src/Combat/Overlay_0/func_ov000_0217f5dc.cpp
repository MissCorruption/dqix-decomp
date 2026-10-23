#include <globaldefs.h>

// USA: func_ov000_0217f5dc
extern "C" ARM unsigned char func_ov000_0217f5dc(void* arg0) {
#if defined(jpn)
    return *(unsigned char*)((char*)arg0 + 0x485);
#else
    return *(unsigned char*)((char*)arg0 + 0x445);
#endif
}
