#include <globaldefs.h>

extern "C" int func_020d2980(int, void(*)(int), int);
extern "C" int func_020d217c(int, int, int, int, int);

// USA: func_020d1f70
extern "C" ARM int func_020d1f70(int arg0, int arg1, int arg2, int arg3, int arg4) {
    return func_020d217c(0x12, arg0, arg1, arg2, func_020d2980(arg0, (void(*)(int))arg3, arg4));
}
