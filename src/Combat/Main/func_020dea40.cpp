#include <globaldefs.h>

extern "C" int func_020dea64(void* arg0, void* arg1, void* arg2, int arg3, void* arg4, int arg5);

// USA: func_020dea40
extern "C" ARM int func_020dea40(void* arg0, void* arg1, void* arg2, int arg3, int arg4) {
    return func_020dea64(arg0, arg1, arg2, arg3, &arg4, 1);
}
