#include <globaldefs.h>

// USA: func_0201081c
extern "C" ARM int func_0201081c(char* arg0) {
#if defined(jpn)
    return *(int*)(arg0 + 0x5a5c);
#else
    return *(int*)(arg0 + 0x5cbc);
#endif
}
