#include <globaldefs.h>

// USA: func_020107d0
extern "C" ARM int func_020107d0(char* arg0) {
#if defined(jpn)
    return *(int*)(arg0 + 0x5a54);
#else
    return *(int*)(arg0 + 0x5cb4);
#endif
}
