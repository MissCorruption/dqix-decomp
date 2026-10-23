#include <globaldefs.h>

// USA: func_020457e0
extern "C" ARM int func_020457e0(char* arg0) {
#if defined(jpn)
    return *(int*)(arg0 + 0x824);
#else
    return *(int*)(arg0 + 0x954);
#endif
}
