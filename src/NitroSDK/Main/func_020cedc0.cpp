#include <globaldefs.h>

extern "C" int func_020ceba8(int arg0, int arg1, int arg2, int arg3);

// USA: func_020cedc0
extern "C" ARM int func_020cedc0(int arg0) {
    if (arg0 != 1) arg0 = 0;
    return func_020ceba8(arg0, 0, 0, 1);
}
