#include <globaldefs.h>

extern "C" int func_020b01a4(void*, void**);

// USA: func_0205a1f0
extern "C" ARM int func_0205a1f0(void* arg0, void* arg1, int arg2) {
    if (arg0 == NULL) return 1;
    if (arg1 == NULL) return 1;
    if (arg2 == 0) return 1;
    if (func_020b01a4(arg1, (void**)arg0) == 0) return 1;
    return 0;
}
