#include <globaldefs.h>

// USA: func_02010810
extern "C" ARM void func_02010810(char* arg0, int arg1) {
#if defined(jpn)
    *(int*)(arg0 + 0x5a5c) = arg1;
#else
    *(int*)(arg0 + 0x5cbc) = arg1;
#endif
}
