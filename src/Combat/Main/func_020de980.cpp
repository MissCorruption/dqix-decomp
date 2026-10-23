#include <globaldefs.h>

extern "C" int func_020de9a4(void* arg0, void* arg1, void* arg2, int arg3, void* arg4, int arg5);

// USA: func_020de980
extern "C" ARM int func_020de980(void* arg0, void* arg1, void* arg2, int arg3, int arg4) {
    return func_020de9a4(arg0, arg1, arg2, arg3, &arg4, 1);
}
