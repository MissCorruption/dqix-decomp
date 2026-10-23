#include <globaldefs.h>

extern "C" int func_020ce4e8(int arg0, int arg1, int arg2, void* arg3, int* arg4);

// USA: func_020ce5b0
extern "C" ARM int func_020ce5b0(int arg0, void (*arg1)(void), int* arg2) {
    int var0;
    switch (arg0) {
        case 1: var0 = 1; break;
        case 3: var0 = 2; break;
        case 2: var0 = 3; break;
        default: var0 = 0; break;
    }
    if (var0 == 0) {
        return 0xffff;
    }
    return func_020ce4e8(var0, 0, 0, (void*)arg1, arg2);
}
