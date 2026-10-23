#include <globaldefs.h>

extern "C" int func_020d217c(int, int, int, int, int);

// USA: func_020d2154
extern "C" ARM int func_020d2154(int arg0, int arg1, int arg2, int arg3, int arg4) {
    return func_020d217c(0x7, arg0 | (arg4 << 24), arg1, arg2, arg3);
}
