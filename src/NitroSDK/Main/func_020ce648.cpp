#include <globaldefs.h>

extern "C" int func_020ce4e8(int arg0, int arg1, int arg2, void* arg3, int* arg4);

// USA: func_020ce648
extern "C" ARM int func_020ce648(int arg0, int arg1, void (*arg2)(void), int* arg3) {
    int var0 = 0;
    if (arg0 == 0) {
        if (arg1 == 1) var0 = 6;
        if (arg1 == 0) var0 = 7;
    } else if (arg0 == 1) {
        if (arg1 == 1) var0 = 4;
        if (arg1 == 0) var0 = 5;
    } else if (arg0 == 2) {
        if (arg1 == 1) var0 = 8;
        if (arg1 == 0) var0 = 9;
    }
    if (var0 == 0) return 0xffff;
    return func_020ce4e8(var0, 0, 0, (void*)arg2, arg3);
}
