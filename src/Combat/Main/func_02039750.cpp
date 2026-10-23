#include <globaldefs.h>

// USA: func_02039750
extern "C" ARM int func_02039750(void* obj) {
#if defined(jpn)
    return *(int*)((char*)obj + 0x254);
#else
    return *(int*)((char*)obj + 0x260);
#endif
}
