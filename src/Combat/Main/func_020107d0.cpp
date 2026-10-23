#include <globaldefs.h>

// USA: func_020107d0
extern "C" ARM int func_020107d0(char* obj) {
#if defined(jpn)
    return *(int*)(obj + 0x5a54);
#else
    return *(int*)(obj + 0x5cb4);
#endif
}
