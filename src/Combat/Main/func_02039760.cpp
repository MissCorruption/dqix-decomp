#include <globaldefs.h>

// USA: func_02039760
extern "C" ARM int func_02039760(void* arg0) {
#if defined(jpn)
    return *(int*)((char*)arg0 + 0x258);
#else
    return *(int*)((char*)arg0 + 0x264);
#endif
}
