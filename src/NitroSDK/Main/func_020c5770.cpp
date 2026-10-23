#include <globaldefs.h>

extern "C" void Mat4x4_WriteProjectionUnknown(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, void* arg7);
extern "C" void func_020c516c(const void* arg0);

// USA: func_020c5770
extern "C" ARM void func_020c5770(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, void* arg8) {
    int var0[16];
    void* var1 = arg8 ? arg8 : var0;
    Mat4x4_WriteProjectionUnknown(arg0, arg1, arg2, arg3, arg4, arg5, arg6, var1);
    if (arg7 == 0) return;
    *(volatile unsigned int*)0x4000440 = 0;
    func_020c516c(var1);
}
