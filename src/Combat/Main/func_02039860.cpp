#include <globaldefs.h>

// USA: func_02039860
extern "C" ARM int func_02039860(void* arg0) {
#if defined(jpn)
    return *(signed char*)((char*)arg0 + 0x1bc);
#else
    return *(signed char*)((char*)arg0 + 0x1c8);
#endif
}
