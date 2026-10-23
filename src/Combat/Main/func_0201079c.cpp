#include <globaldefs.h>

// USA: func_0201079c
extern "C" ARM int func_0201079c(char* arg0) {
#if defined(jpn)
    return *(int*)(arg0 + 0x5a50);
#else
    return *(int*)(arg0 + 0x5cb0);
#endif
}
