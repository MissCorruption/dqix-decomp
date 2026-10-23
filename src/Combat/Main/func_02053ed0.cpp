#include <globaldefs.h>

// USA: func_02053ed0
extern "C" ARM int func_02053ed0(void* arg0) {
#if defined(jpn)
    return *(int*)((char*)arg0 + 0x14c);
#else
    return *(int*)((char*)arg0 + 0x158);
#endif
}
