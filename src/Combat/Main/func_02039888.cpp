#include <globaldefs.h>

// USA: func_02039888
extern "C" ARM int func_02039888(void* arg0) {
#if defined(jpn)
    return *(signed char*)((char*)arg0 + 0x1be);
#else
    return *(signed char*)((char*)arg0 + 0x1ca);
#endif
}
