#include <globaldefs.h>

// USA: func_02039750
extern "C" ARM int func_02039750(void* arg0) {
#if defined(jpn)
    return *(int*)((char*)arg0 + 0x254);
#else
    return *(int*)((char*)arg0 + 0x260);
#endif
}
