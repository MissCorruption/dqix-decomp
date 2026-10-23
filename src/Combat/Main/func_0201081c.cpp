#include <globaldefs.h>

// USA: func_0201081c
extern "C" ARM int func_0201081c(char* obj) {
#if defined(jpn)
    return *(int*)(obj + 0x5a5c);
#else
    return *(int*)(obj + 0x5cbc);
#endif
}
