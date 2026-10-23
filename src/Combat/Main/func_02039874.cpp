#include <globaldefs.h>

// USA: func_02039874
extern "C" ARM int func_02039874(void* arg0) {
#if defined(jpn)
    return *(signed char*)((char*)arg0 + 0x1bd);
#else
    return *(signed char*)((char*)arg0 + 0x1c9);
#endif
}
