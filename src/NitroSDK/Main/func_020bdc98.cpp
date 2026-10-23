#include <globaldefs.h>

extern "C" int func_020bddec(void* arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_020bdc98
extern "C" ARM int func_020bdc98(void* arg0, int arg1) {
    return func_020bddec(arg0, 0xff, arg1, 1, 0) == 0;
}
