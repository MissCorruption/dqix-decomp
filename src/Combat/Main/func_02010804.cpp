#include <globaldefs.h>

// USA: func_02010804
extern "C" ARM int func_02010804(char* arg0) {
#if defined(jpn)
    return *(int*)(arg0 + 0x5a58);
#else
    return *(int*)(arg0 + 0x5cb8);
#endif
}
