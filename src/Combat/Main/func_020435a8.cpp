#include <globaldefs.h>

extern char data_02107800;

extern "C" void func_0204e1c8(int arg0, void* arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6, int arg7);

// USA: func_020435a8
extern "C" ARM void func_020435a8(int arg0, void* arg1, void* arg2, int arg3) {
    if (arg0 != 0) {
        char* var0 = *(char**)(&data_02107800 + 4);
        var0 = var0 + (arg3 << 5);
        func_0204e1c8(arg0, var0, arg1, arg2, 8, 8, 0xf0, 0xf);
    }
}
