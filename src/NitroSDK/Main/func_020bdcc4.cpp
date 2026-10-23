#include <globaldefs.h>

extern "C" int func_020bddec(void* arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_020bdcc4
extern "C" ARM int func_020bdcc4(void* arg0, int arg1, int arg2) {
    return func_020bddec(arg0, arg1, arg2, 1, 0) == 0;
}
